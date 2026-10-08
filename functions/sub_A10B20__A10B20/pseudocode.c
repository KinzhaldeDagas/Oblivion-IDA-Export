// Verified 2026-09-26 in OblivionNew: pushes base RTTI 0xB4265C and class string NiDX9SwapChainBufferData at 0xA89B8C, initializes RTTI object 0xB4261C through NiRTTI_Constructor. Scoped xrefs to the class string and RTTI object currently identify this initializer only. This does not establish that additional swapchains are unused, nor identify an IDirect3DSwapChain9::Present call site.
NiRTTI *sub_A10B20()
{
  return NiRTTI_Constructor(&NiDX9SwapChainBufferData_RTTI, "NiDX9SwapChainBufferData", &stru_B4265C); /*0xa10b34*/
}
