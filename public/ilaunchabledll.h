// Copyright Valve Corporation, All rights reserved.

#ifndef VPC_ILAUNCHABLEDLL_H_
#define VPC_ILAUNCHABLEDLL_H_

#define LAUNCHABLE_DLL_INTERFACE_VERSION "launchable_dll_1"

// vmpi_service can use this to debug worker apps in-process,
// and some of the launchers (like texturecompile) use this.
class ILaunchableDLL {
 public:
  // All vrad.exe does is load the VRAD DLL and run this.
  virtual int main(int argc, char **argv) = 0;
};

#endif  // VPC_ILAUNCHABLEDLL_H_
