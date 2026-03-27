0x4BF040: mov     eax, [ecx+24h]
0x4BF043: test    eax, eax
0x4BF045: jz      short loc_4BF04E
0x4BF047: mov     eax, [eax+9Ch]
0x4BF04D: retn
0x4BF04E: mov     ecx, [ecx+20h]; this
0x4BF051: test    ecx, ecx
0x4BF053: jz      short loc_4BF05A
0x4BF055: jmp     TESObjectCELL_GetYCoordinate
0x4BF05A: xor     eax, eax
0x4BF05C: retn
