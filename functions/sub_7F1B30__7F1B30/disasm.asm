0x7F1B30: mov     eax, [ecx+0A8h]; SpeedTreeLeafShaderProperty leaf table accessor used as virtual +0xA0; returns STLSPData+0x08 from property +0xA8.
0x7F1B36: test    eax, eax
0x7F1B38: jz      short loc_7F1B3E
0x7F1B3A: mov     eax, [eax+8]
0x7F1B3D: retn
0x7F1B3E: xor     eax, eax
0x7F1B40: retn
