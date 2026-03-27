0x787400: push    0FFFFFFFFh
0x787402: push    offset SEH_8C62B0
0x787407: mov     eax, large fs:0
0x78740D: push    eax
0x78740E: push    ecx
0x78740F: push    esi
0x787410: mov     eax, ds:0B30AACh
0x787415: xor     eax, esp
0x787417: push    eax
0x787418: lea     eax, [esp+18h+var_C]
0x78741C: mov     large fs:0, eax
0x787422: mov     esi, ecx
0x787424: push    40h ; '@'; Size
0x787426: call    FormHeapAlloc
0x78742B: add     esp, 4
0x78742E: mov     [esp+18h+var_10], eax
0x787432: test    eax, eax
0x787434: mov     [esp+18h+var_4], 0
0x78743C: jz      short loc_787447
0x78743E: mov     ecx, eax
0x787440: call    sub_7A5470
0x787445: jmp     short loc_787449
0x787447: xor     eax, eax
0x787449: mov     ecx, [esp+18h+arg_0]
0x78744D: push    ecx
0x78744E: mov     ecx, eax
0x787450: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x787458: mov     [esi+50h], eax
0x78745B: call    sub_7A5530
0x787460: mov     ecx, [esp+18h+var_C]
0x787464: mov     large fs:0, ecx
0x78746B: pop     ecx
0x78746C: pop     esi
0x78746D: add     esp, 10h
0x787470: retn    4
