0x7EFBF0: mov     eax, [esp+arg_4]
0x7EFBF4: push    ebx
0x7EFBF5: push    esi
0x7EFBF6: push    edi
0x7EFBF7: mov     edi, [esp+0Ch+arg_0]
0x7EFBFB: push    eax
0x7EFBFC: push    edi
0x7EFBFD: mov     esi, ecx
0x7EFBFF: call    sub_7E2490
0x7EFC04: mov     ecx, [esi+6Ch]
0x7EFC07: mov     [edi+6Ch], ecx
0x7EFC0A: mov     edx, [esi+78h]
0x7EFC0D: mov     [edi+78h], edx
0x7EFC10: mov     eax, [esi+7Ch]
0x7EFC13: mov     [edi+7Ch], eax
0x7EFC16: mov     ecx, [esi+80h]
0x7EFC1C: mov     [edi+80h], ecx
0x7EFC22: mov     edx, [esi+84h]
0x7EFC28: mov     [edi+84h], edx
0x7EFC2E: mov     eax, [esi+88h]
0x7EFC34: mov     [edi+88h], eax
0x7EFC3A: mov     ecx, [esi+8Ch]
0x7EFC40: mov     [edi+8Ch], ecx
0x7EFC46: mov     edx, [esi+90h]
0x7EFC4C: mov     [edi+90h], edx
0x7EFC52: mov     eax, [esi+94h]
0x7EFC58: mov     [edi+94h], eax
0x7EFC5E: mov     ecx, [esi+98h]
0x7EFC64: mov     [edi+98h], ecx
0x7EFC6A: mov     ebx, [edi+9Ch]
0x7EFC70: cmp     ebx, [esi+9Ch]
0x7EFC76: jz      short loc_7EFCD6
0x7EFC78: test    ebx, ebx
0x7EFC7A: jz      short loc_7EFC98
0x7EFC7C: lea     edx, [ebx+4]
0x7EFC7F: push    edx; lpAddend
0x7EFC80: call    dword ptr ds:0A2807Ch
0x7EFC86: test    eax, eax
0x7EFC88: jnz     short loc_7EFC98
0x7EFC8A: test    ebx, ebx
0x7EFC8C: jz      short loc_7EFC98
0x7EFC8E: mov     eax, [ebx]
0x7EFC90: mov     edx, [eax]
0x7EFC92: push    1
0x7EFC94: mov     ecx, ebx
0x7EFC96: call    edx
0x7EFC98: mov     eax, [esi+9Ch]
0x7EFC9E: test    eax, eax
0x7EFCA0: mov     [edi+9Ch], eax
0x7EFCA6: jz      short loc_7EFCC4
0x7EFCA8: add     eax, 4
0x7EFCAB: push    eax; lpAddend
0x7EFCAC: call    dword ptr ds:0A28078h
0x7EFCB2: mov     eax, [esi+0A0h]
0x7EFCB8: mov     [edi+0A0h], eax
0x7EFCBE: pop     edi
0x7EFCBF: pop     esi
0x7EFCC0: pop     ebx
0x7EFCC1: retn    8
0x7EFCC4: mov     ecx, [esi+0A0h]
0x7EFCCA: mov     [edi+0A0h], ecx
0x7EFCD0: pop     edi
0x7EFCD1: pop     esi
0x7EFCD2: pop     ebx
0x7EFCD3: retn    8
0x7EFCD6: mov     edx, [esi+0A0h]
0x7EFCDC: mov     [edi+0A0h], edx
0x7EFCE2: pop     edi
0x7EFCE3: pop     esi
0x7EFCE4: pop     ebx
0x7EFCE5: retn    8
