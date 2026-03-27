0x478300: push    ebx
0x478301: push    esi
0x478302: mov     ebx, ecx
0x478304: mov     esi, [ebx+0Ch]
0x478307: push    edi
0x478308: mov     edi, [esp+0Ch+arg_0]
0x47830C: cmp     esi, edi
0x47830E: jz      short loc_478341
0x478310: test    esi, esi
0x478312: jz      short loc_478330
0x478314: lea     eax, [esi+4]
0x478317: push    eax; lpAddend
0x478318: call    dword ptr ds:0A2807Ch
0x47831E: test    eax, eax
0x478320: jnz     short loc_478330
0x478322: test    esi, esi
0x478324: jz      short loc_478330
0x478326: mov     edx, [esi]
0x478328: mov     eax, [edx]
0x47832A: push    1
0x47832C: mov     ecx, esi
0x47832E: call    eax
0x478330: test    edi, edi
0x478332: mov     [ebx+0Ch], edi
0x478335: jz      short loc_478341
0x478337: add     edi, 4
0x47833A: push    edi; lpAddend
0x47833B: call    dword ptr ds:0A28078h
0x478341: pop     edi
0x478342: pop     esi
0x478343: pop     ebx
0x478344: retn    4
