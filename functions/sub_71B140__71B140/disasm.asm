0x71B140: push    ebx
0x71B141: push    esi
0x71B142: mov     ebx, ecx
0x71B144: mov     esi, [ebx+4Ch]
0x71B147: push    edi
0x71B148: mov     edi, [esp+0Ch+arg_0]
0x71B14C: cmp     esi, edi
0x71B14E: jz      short loc_71B181
0x71B150: test    esi, esi
0x71B152: jz      short loc_71B170
0x71B154: lea     eax, [esi+4]
0x71B157: push    eax; lpAddend
0x71B158: call    dword ptr ds:0A2807Ch
0x71B15E: test    eax, eax
0x71B160: jnz     short loc_71B170
0x71B162: test    esi, esi
0x71B164: jz      short loc_71B170
0x71B166: mov     edx, [esi]
0x71B168: mov     eax, [edx]
0x71B16A: push    1
0x71B16C: mov     ecx, esi
0x71B16E: call    eax
0x71B170: test    edi, edi
0x71B172: mov     [ebx+4Ch], edi
0x71B175: jz      short loc_71B181
0x71B177: add     edi, 4
0x71B17A: push    edi; lpAddend
0x71B17B: call    dword ptr ds:0A28078h
0x71B181: pop     edi
0x71B182: pop     esi
0x71B183: pop     ebx
0x71B184: retn    4
