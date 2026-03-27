0x69C6C0: mov     eax, [esp+arg_0]
0x69C6C4: push    esi
0x69C6C5: push    eax
0x69C6C6: mov     esi, ecx
0x69C6C8: call    sub_69F740
0x69C6CD: add     ax, 14h
0x69C6D1: cmp     dword ptr [esi+88h], 1
0x69C6D8: movzx   eax, ax
0x69C6DB: jnz     short loc_69C6E0
0x69C6DD: add     eax, 4
0x69C6E0: mov     ecx, ds:0B33B00h
0x69C6E6: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x69C6EA: jb      short loc_69C70A
0x69C6EC: mov     ecx, [esi+94h]
0x69C6F2: add     eax, 6
0x69C6F5: test    ecx, ecx
0x69C6F7: jz      short loc_69C70A
0x69C6F9: lea     esp, [esp+0]
0x69C700: mov     ecx, [ecx+8]
0x69C703: add     eax, 5
0x69C706: test    ecx, ecx
0x69C708: jnz     short loc_69C700
0x69C70A: pop     esi
0x69C70B: retn    4
