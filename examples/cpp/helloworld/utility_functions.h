#include <filesystem>
#include <fstream>

namespace Utils {
inline std::string loadFileToString(const std::filesystem::path& filepath) {
  std::ifstream file{filepath};
  if (!file.is_open()) {
    throw std::runtime_error("Unable to open file: " + filepath.string());
  }

  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
}  // namespace utils
