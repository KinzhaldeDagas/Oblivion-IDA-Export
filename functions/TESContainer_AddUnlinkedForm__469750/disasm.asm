0x469750: push    esi
0x469751: mov     esi, [esp+4+arg_0]
0x469755: test    esi, esi
0x469757: jz      short loc_4697C0
0x469759: test    byte ptr [ecx+4], 1
0x46975D: jnz     short loc_4697C0
0x46975F: push    edi
0x469760: lea     edi, [ecx+8]
0x469763: mov     eax, edi
0x469765: test    eax, eax
0x469767: jz      short loc_469784
0x469769: lea     esp, [esp+0]
