0x76D480: push    esi
0x76D481: mov     esi, ecx
0x76D483: mov     eax, [esi+0Ch]
0x76D486: test    eax, eax
0x76D488: jnz     short loc_76D490
0x76D48A: xor     al, al
0x76D48C: pop     esi
0x76D48D: retn    4
0x76D490: cmp     eax, ds:0B42610h
0x76D496: jz      short loc_76D4B5
0x76D498: mov     ecx, [esp+4+arg_0]
0x76D49C: mov     edx, [ecx]
0x76D49E: push    eax
0x76D49F: mov     eax, [edx+9Ch]
0x76D4A5: push    ecx
0x76D4A6: call    eax
0x76D4A8: test    eax, eax
0x76D4AA: jl      short loc_76D48A
0x76D4AC: mov     ecx, [esi+0Ch]
0x76D4AF: mov     ds:0B42610h, ecx
0x76D4B5: mov     al, 1
0x76D4B7: pop     esi
0x76D4B8: retn    4
