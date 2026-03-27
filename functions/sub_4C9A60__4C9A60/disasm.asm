0x4C9A60: test    byte ptr [ecx+24h], 1
0x4C9A64: jz      short loc_4C9A71
0x4C9A66: mov     eax, [ecx+3Ch]
0x4C9A69: test    eax, eax
0x4C9A6B: jz      short loc_4C9A71
0x4C9A6D: fld     dword ptr [eax+20h]
0x4C9A70: retn
0x4C9A71: fldz
0x4C9A73: retn
