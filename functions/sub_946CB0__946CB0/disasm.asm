0x946CB0: push    ebx
0x946CB1: mov     ebx, large fs:2Ch
0x946CB8: push    esi
0x946CB9: mov     esi, ecx
0x946CBB: mov     dword ptr [esi], offset off_AA297C
0x946CC1: mov     dword ptr [esi+8], offset off_AA2964
0x946CC8: mov     eax, [esi+40h]
0x946CCB: test    eax, eax
0x946CCD: push    edi
0x946CCE: mov     edi, ds:0BA9DE4h
0x946CD4: js      short loc_946CFA
0x946CD6: mov     ecx, [ebx+edi*4]
0x946CD9: mov     ecx, [ecx+19Ch]
0x946CDF: test    ecx, ecx
0x946CE1: jnz     short loc_946CE9
0x946CE3: mov     ecx, ds:0BA7D9Ch
0x946CE9: mov     edx, [esi+38h]
0x946CEC: push    14h
0x946CEE: and     eax, 3FFFFFFFh
0x946CF3: push    eax
0x946CF4: push    edx
0x946CF5: call    sub_8A75D0
0x946CFA: mov     eax, [esi+34h]
0x946CFD: test    eax, eax
0x946CFF: js      short loc_946D25
0x946D01: mov     ecx, [ebx+edi*4]
0x946D04: mov     ecx, [ecx+19Ch]
0x946D0A: test    ecx, ecx
0x946D0C: jnz     short loc_946D14
0x946D0E: mov     ecx, ds:0BA7D9Ch
0x946D14: mov     edx, [esi+2Ch]
0x946D17: push    14h
0x946D19: and     eax, 3FFFFFFFh
0x946D1E: push    eax
0x946D1F: push    edx
0x946D20: call    sub_8A75D0
0x946D25: mov     eax, [esi+28h]
0x946D28: test    eax, eax
0x946D2A: js      short loc_946D53
0x946D2C: mov     ecx, [ebx+edi*4]
0x946D2F: mov     ecx, [ecx+19Ch]
0x946D35: test    ecx, ecx
0x946D37: jnz     short loc_946D3F
0x946D39: mov     ecx, ds:0BA7D9Ch
0x946D3F: mov     edx, [esi+20h]
0x946D42: and     eax, 3FFFFFFFh
0x946D47: push    14h
0x946D49: shl     eax, 2
0x946D4C: push    eax
0x946D4D: push    edx
0x946D4E: call    sub_8A75D0
0x946D53: mov     dword ptr [esi+8], offset off_A9D1C0
0x946D5A: pop     edi
0x946D5B: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x946D61: pop     esi
0x946D62: pop     ebx
0x946D63: retn
