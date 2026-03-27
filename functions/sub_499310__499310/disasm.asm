0x499310: push    ebx
0x499311: push    esi
0x499312: mov     ebx, ecx
0x499314: mov     esi, [ebx+114h]
0x49931A: push    edi
0x49931B: mov     edi, [esp+0Ch+arg_0]
0x49931F: cmp     esi, edi
0x499321: jz      short loc_499357
0x499323: test    esi, esi
0x499325: jz      short loc_499343
0x499327: lea     eax, [esi+4]
0x49932A: push    eax; lpAddend
0x49932B: call    dword ptr ds:0A2807Ch
0x499331: test    eax, eax
0x499333: jnz     short loc_499343
0x499335: test    esi, esi
0x499337: jz      short loc_499343
0x499339: mov     edx, [esi]
0x49933B: mov     eax, [edx]
0x49933D: push    1
0x49933F: mov     ecx, esi
0x499341: call    eax
0x499343: test    edi, edi
0x499345: mov     [ebx+114h], edi
0x49934B: jz      short loc_499357
0x49934D: add     edi, 4
0x499350: push    edi; lpAddend
0x499351: call    dword ptr ds:0A28078h
0x499357: pop     edi
0x499358: pop     esi
0x499359: pop     ebx
0x49935A: retn    4
