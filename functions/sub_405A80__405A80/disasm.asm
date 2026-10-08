0x405A80: cmp     dword ptr OB_RendererGlobalState_010201A0.shaderPackageVersion_le, 3; [Verified] Returns true only when BSShaderPackageVersion (RendererGlobalState+0xAF) >= 3 and BSShaderFeatureMask (RendererGlobalState+0xA7) contains native shadow-map bit 0x10. The version comparison independently corroborates the selector field read by GetShaderProgramPackageIndex.
0x405A87: jl      short loc_405A99
0x405A89: test    OB_RendererGlobalState_010201A0.pad_00D+9Ah, 10h
0x405A90: mov     eax, 0
0x405A95: setnle  al
0x405A98: retn
0x405A99: xor     eax, eax
0x405A9B: retn
