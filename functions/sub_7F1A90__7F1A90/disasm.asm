0x7F1A90: mov     eax, [ecx+0A4h]; SpeedTreeShaderLightingProperty STSPData count accessor: returns 16-bit STSPData+0x0C from property +0xA4, or 0.
0x7F1A96: test    eax, eax
0x7F1A98: jz      short loc_7F1A9F
0x7F1A9A: movzx   eax, word ptr [eax+0Ch]
0x7F1A9E: retn
0x7F1A9F: xor     eax, eax
0x7F1AA1: retn
