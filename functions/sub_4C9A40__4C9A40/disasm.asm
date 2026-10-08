0x4C9A40: test    byte ptr [ecx+24h], 1; Fog interior decode: reads TESObjectCELL::LightingData fogFar at lighting+0x10 when cell lighting is valid.
0x4C9A44: jz      short loc_4C9A51
0x4C9A46: mov     eax, [ecx+3Ch]
0x4C9A49: test    eax, eax
0x4C9A4B: jz      short loc_4C9A51
0x4C9A4D: fld     dword ptr [eax+10h]; Fog interior decode: load LightingData fogFar (+0x10).
0x4C9A50: retn
0x4C9A51: fldz
0x4C9A53: retn
