// program_options.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../conv_macro/conv_macro.h"

#include <iostream>
#include <boost/optional.hpp>
#include <boost/filesystem.hpp>
#include <boost/program_options.hpp>
#include <boost/algorithm/string.hpp>


boost::optional<std::string> path;
boost::optional<std::string> appdata;
boost::optional<std::string> localappdata;

std::string mapper_section_name(std::string name)
{
    boost::algorithm::replace_all(name, "_", ".");

    return name;
}

std::string mapper_env_var_name(std::string name)
{
    if (boost::algorithm::iequals(name, estr(path))
        || boost::algorithm::iequals(name, estr(appdata))
        || boost::algorithm::iequals(name, estr(localappdata))
        )
    {
        boost::algorithm::to_lower(name);

        return name;
    }

    return "";
}

#define if_has_value_out(env) if (env) std::cout << mapper_section_name(#env##"=") << *env << std::endl;

int main(int argc, char* argv[])
{
    /*parse command line options*/

    //boost::optional<bool> show_window;

    //boost::program_options::options_description odesc("Usage");

    //odesc.add_options()
    //    ("help,h", "Display this help messages")
    //    ("show-window,s", boost::program_options::value(&show_window), "Set if show window")
    //    ;

    //boost::program_options::variables_map options;

    //boost::program_options::store(boost::program_options::parse_command_line(argc, argv, odesc), options);

    //boost::program_options::notify(options);

    //if (options.count("help"))
    //{
    //    std::cout << odesc << std::endl;
    //}

    //if_has_value_out(show_window);

    //////////////////////////////////////////////////////////////////////////

    /*parse configuration file options*/

    //boost::optional<std::string> name;
    //boost::optional<std::string> ShengMu_zh;
    //boost::optional<std::string> YunMu_ai;

    //boost::program_options::options_description odesc("Configuration");

    //odesc.add_options()
    //    (mapper_section_name(estr(name)).c_str(), boost::program_options::value(&name))
    //    (mapper_section_name(estr(ShengMu_zh)).c_str(), boost::program_options::value(&ShengMu_zh))
    //    (mapper_section_name(estr(YunMu_ai)).c_str(), boost::program_options::value(&YunMu_ai))
    //    ;

    //boost::program_options::variables_map options;

    //std::string cur_file = boost::filesystem::path(__FILE__).remove_filename().string() + "\\ZiRanMa.ini";

    //boost::program_options::store(boost::program_options::parse_config_file<char>(cur_file.c_str(), odesc), options);

    //boost::program_options::notify(options);

    //if_has_value_out(name);
    //if_has_value_out(ShengMu_zh);
    //if_has_value_out(YunMu_ai);

    //////////////////////////////////////////////////////////////////////////

    /*parse environment variable*/

    //boost::program_options::options_description odesc("Configuration");

    //odesc.add_options()
    //    (estr(path), boost::program_options::value(&path))
    //    (estr(appdata), boost::program_options::value(&appdata))
    //    (estr(localappdata), boost::program_options::value(&localappdata))
    //    ;

    //boost::program_options::variables_map options;

    //boost::program_options::store(boost::program_options::parse_environment(odesc, boost::function1<std::string, std::string>(mapper_env_var_name)), options);

    //boost::program_options::notify(options);

    //if_has_value_out(path);
    //if_has_value_out(appdata);
    //if_has_value_out(localappdata);

    return std::system("pause");
}

