0x560200: mov     ecx, [ecx+0Ch]; this
0x560203: test    ecx, ecx
0x560205: jz      short loc_560210
0x560207: call    CSpeedTreeRT__GetNumLeafLodLevels; CSpeedTreeRT::GetNumLeafLodLevels. Returns the 16-bit leaf LOD count at CTreeEngine+0xC0.
0x56020C: movzx   eax, ax
0x56020F: retn
0x560210: xor     eax, eax
0x560212: retn
