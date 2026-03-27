0x709830: push    esi
0x709831: push    edi
0x709832: mov     edi, [esp+8+arg_0]
0x709836: push    edi
0x709837: mov     esi, ecx
0x709839: call    sub_6D7E00
0x70983E: test    al, al
0x709840: jz      short loc_7098A7
0x709842: lea     eax, [edi+1Ch]
0x709845: push    eax
0x709846: lea     ecx, [esi+1Ch]
0x709849: call    sub_8AA390
0x70984E: test    al, al
0x709850: jnz     short loc_7098A7
0x709852: lea     ecx, [edi+28h]
0x709855: push    ecx
0x709856: lea     ecx, [esi+28h]
0x709859: call    sub_8AA390
0x70985E: test    al, al
0x709860: jnz     short loc_7098A7
0x709862: lea     edx, [edi+34h]
0x709865: push    edx
0x709866: lea     ecx, [esi+34h]
0x709869: call    sub_8AA390
0x70986E: test    al, al
0x709870: jnz     short loc_7098A7
0x709872: lea     eax, [edi+40h]
0x709875: push    eax
0x709876: lea     ecx, [esi+40h]
0x709879: call    sub_8AA390
0x70987E: test    al, al
0x709880: jnz     short loc_7098A7
0x709882: fld     dword ptr [esi+4Ch]
0x709885: fld     dword ptr [edi+4Ch]
0x709888: fucompp
0x70988A: fnstsw  ax
0x70988C: test    ah, 44h
0x70988F: jp      short loc_7098A7
0x709891: fld     dword ptr [esi+50h]
0x709894: fld     dword ptr [edi+50h]
0x709897: fucompp
0x709899: fnstsw  ax
0x70989B: test    ah, 44h
0x70989E: jp      short loc_7098A7
0x7098A0: pop     edi
0x7098A1: mov     al, 1
0x7098A3: pop     esi
0x7098A4: retn    4
0x7098A7: pop     edi
0x7098A8: xor     al, al
0x7098AA: pop     esi
0x7098AB: retn    4
