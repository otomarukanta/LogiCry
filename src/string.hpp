#include <vector>
#include <string>

std::vector<std::string> split(const std::string &str, const std::string &delim) {
  std::vector<std::string> res;
  size_t begin_pos = 0, end_pos;
  while (true) {
    end_pos = str.find(delim, begin_pos);
    if (end_pos == std::string::npos) break;
    res.push_back(str.substr(begin_pos, end_pos - begin_pos));
    begin_pos = end_pos + 1;
  }
  res.push_back(str.substr(begin_pos, str.length() - begin_pos));

  return res;
}
