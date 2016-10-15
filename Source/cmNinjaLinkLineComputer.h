/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */

#ifndef cmNinjaLinkLineComputer_h
#define cmNinjaLinkLineComputer_h

#include "cmLinkLineComputer.h"
#include "cmState.h"

class cmGlobalNinjaGenerator;

class cmNinjaLinkLineComputer : public cmLinkLineComputer
{
public:
  cmNinjaLinkLineComputer(cmOutputConverter* outputConverter,
                          cmState::Directory stateDir,
                          cmGlobalNinjaGenerator const* gg);

  std::string ConvertToLinkReference(std::string const& input) const
    CM_OVERRIDE;

private:
  cmGlobalNinjaGenerator const* GG;
};

#endif
