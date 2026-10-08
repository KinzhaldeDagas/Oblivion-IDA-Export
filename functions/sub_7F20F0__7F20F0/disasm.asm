0x7F20F0: mov     eax, [ecx+0F0h]; SpeedTreeShaderPPLightingProperty STSPData data-pointer accessor: returns STSPData+0x08 from property +0xF0, or 0.
0x7F20F6: test    eax, eax
0x7F20F8: jz      short loc_7F20FE
0x7F20FA: mov     eax, [eax+8]
0x7F20FD: retn
0x7F20FE: xor     eax, eax
0x7F2100: retn
