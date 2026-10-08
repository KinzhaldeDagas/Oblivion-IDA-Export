0x6D0A40: mov     eax, [ecx+50h]; Returns morphData->targetCount (+0x08) as UInt16, or zero when morphData is absent.
0x6D0A43: test    eax, eax
0x6D0A45: jz      short loc_6D0A4C
0x6D0A47: mov     ax, [eax+8]
0x6D0A4B: retn
0x6D0A4C: xor     eax, eax
0x6D0A4E: retn
