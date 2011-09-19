#ifndef _RENDERER_HPP
#define _RENDERER_HPP 1

#include <string>
#include <vector>
#include "allowedtypes.hpp"
#include "bin_file.hpp"

namespace render {

const std::string getKnownDataDescr();

class Renderer
{
public:
  Renderer();
  virtual ~Renderer();
  void setDataDescr(const std::string &);
  void showData(BinFile &, std::size_t offset=0, std::size_t length=0);
  void showLines(const bool showLines);
private:
  template <typename NumT>
  void innerShowData(BinFile &file, size_t offset, size_t length);
  std::vector<std::string> * m_dataDescr;
  allowed::AllowedTypes types;
  bool m_showLines;
};

} // namespace render

#endif
