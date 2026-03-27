0x52AC30: add     ecx, 4
0x52AC33: jz      short loc_52AC52
0x52AC35: mov     dl, [esp+arg_0]
0x52AC39: lea     esp, [esp+0]
0x52AC40: mov     eax, [ecx]
0x52AC42: test    eax, eax
0x52AC44: jz      short loc_52AC4B
0x52AC46: cmp     [eax+60h], dl
0x52AC49: jz      short locret_52AC54
0x52AC4B: mov     ecx, [ecx+4]
0x52AC4E: test    ecx, ecx
0x52AC50: jnz     short loc_52AC40
0x52AC52: xor     eax, eax
0x52AC54: retn    4
