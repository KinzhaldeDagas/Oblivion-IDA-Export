0x7F2110: mov     eax, [ecx+0F0h]; SpeedTreeShaderPPLightingProperty STSPData count accessor: returns 16-bit STSPData+0x0C from property +0xF0, or 0.
0x7F2116: test    eax, eax
0x7F2118: jz      short loc_7F211F
0x7F211A: movzx   eax, word ptr [eax+0Ch]
0x7F211E: retn
0x7F211F: xor     eax, eax
0x7F2121: retn
