0x4C9A20: test    byte ptr [ecx+24h], 1; Fog interior decode: reads TESObjectCELL::LightingData fogNear at lighting+0x0C when cell lighting is valid.
0x4C9A24: jz      short loc_4C9A31
0x4C9A26: mov     eax, [ecx+3Ch]
0x4C9A29: test    eax, eax
0x4C9A2B: jz      short loc_4C9A31
0x4C9A2D: fld     dword ptr [eax+0Ch]; Fog interior decode: load LightingData fogNear (+0x0C).
0x4C9A30: retn
0x4C9A31: fldz
0x4C9A33: retn
