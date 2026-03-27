0x55E340: mov     eax, ds:0B43108h
0x55E345: push    edi
0x55E346: mov     edi, [esp+4+arg_0]
0x55E34A: cmp     eax, edi
0x55E34C: jz      short loc_55E386
0x55E34E: test    eax, eax
0x55E350: jz      short loc_55E372
0x55E352: push    esi
0x55E353: mov     esi, eax
0x55E355: add     eax, 4
0x55E358: push    eax; lpAddend
0x55E359: call    dword ptr ds:0A2807Ch
0x55E35F: test    eax, eax
0x55E361: jnz     short loc_55E371
0x55E363: test    esi, esi
0x55E365: jz      short loc_55E371
0x55E367: mov     eax, [esi]
0x55E369: mov     edx, [eax]
0x55E36B: push    1
0x55E36D: mov     ecx, esi
0x55E36F: call    edx
0x55E371: pop     esi
0x55E372: test    edi, edi
0x55E374: mov     ds:0B43108h, edi
0x55E37A: jz      short loc_55E386
0x55E37C: add     edi, 4
0x55E37F: push    edi; lpAddend
0x55E380: call    dword ptr ds:0A28078h
0x55E386: pop     edi
0x55E387: retn
