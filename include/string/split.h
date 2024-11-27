#pragma once

#include <vector>
#include <string>

/**
 * Split a string, str, by another string, delim.
 * e.g. str = "1,2,3" delim = "," result = {"1", "2", "3"}
 * @param str string to be split
 * @param delim delimiter to split by
 */
std::vector<std::string> split(std::string str, std::string delim) {
    // https://stackoverflow.com/a/5167641
    std::vector<std::string> result = {};
    std::string::size_type prev_pos = 0, pos = 0;
    while((pos = str.find(delim, pos)) != std::string::npos) {
        std::string substr(str.substr(prev_pos, pos-prev_pos));
        result.push_back(substr);
        prev_pos = ++pos;
    }
    result.push_back(str.substr(prev_pos, pos-prev_pos));
    return result;
}