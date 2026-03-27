0x6334D0: push    esi
0x6334D1: push    edi
0x6334D2: mov     edi, [esp+8+arg_0]
0x6334D6: mov     esi, ecx
0x6334D8: mov     ecx, [esi+edi*4+220h]
0x6334DF: test    ecx, ecx
0x6334E1: jz      short loc_63352C
0x6334E3: call    sub_6B7260
0x6334E8: test    al, al
0x6334EA: jz      short loc_6334F8
0x6334EC: mov     ecx, [esi+edi*4+220h]
0x6334F3: call    sub_6B7240
0x6334F8: mov     ecx, [esi+edi*4+220h]
0x6334FF: push    ebx
0x633500: call    sub_6B73C0
0x633505: mov     ebx, [esi+edi*4+220h]
0x63350C: test    ebx, ebx
0x63350E: jz      short loc_633520
0x633510: mov     ecx, ebx; this
0x633512: call    sub_6B73E0
0x633517: push    ebx
0x633518: call    FormHeapFree
0x63351D: add     esp, 4
0x633520: mov     dword ptr [esi+edi*4+220h], 0
0x63352B: pop     ebx
0x63352C: pop     edi
0x63352D: pop     esi
0x63352E: retn    4
