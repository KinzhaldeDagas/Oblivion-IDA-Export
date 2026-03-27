0x6DC720: push    ebx
0x6DC721: push    esi
0x6DC722: mov     ebx, ecx
0x6DC724: mov     esi, [ebx+48h]
0x6DC727: push    edi
0x6DC728: mov     edi, [esp+0Ch+arg_0]
0x6DC72C: cmp     esi, edi
0x6DC72E: jz      short loc_6DC761
0x6DC730: test    esi, esi
0x6DC732: jz      short loc_6DC750
0x6DC734: lea     eax, [esi+4]
0x6DC737: push    eax; lpAddend
0x6DC738: call    dword ptr ds:0A2807Ch
0x6DC73E: test    eax, eax
0x6DC740: jnz     short loc_6DC750
0x6DC742: test    esi, esi
0x6DC744: jz      short loc_6DC750
0x6DC746: mov     edx, [esi]
0x6DC748: mov     eax, [edx]
0x6DC74A: push    1
0x6DC74C: mov     ecx, esi
0x6DC74E: call    eax
0x6DC750: test    edi, edi
0x6DC752: mov     [ebx+48h], edi
0x6DC755: jz      short loc_6DC761
0x6DC757: add     edi, 4
0x6DC75A: push    edi; lpAddend
0x6DC75B: call    dword ptr ds:0A28078h
0x6DC761: pop     edi
0x6DC762: pop     esi
0x6DC763: pop     ebx
0x6DC764: retn    4
