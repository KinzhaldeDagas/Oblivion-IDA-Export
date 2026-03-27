0x8DE800: push    ebx
0x8DE801: mov     ebx, large fs:2Ch
0x8DE808: push    ebp
0x8DE809: push    esi
0x8DE80A: mov     esi, ecx
0x8DE80C: mov     eax, [esi+54h]
0x8DE80F: xor     ebp, ebp
0x8DE811: cmp     eax, ebp
0x8DE813: push    edi
0x8DE814: mov     edi, ds:0BA9DE4h
0x8DE81A: jnz     short loc_8DE860
0x8DE81C: mov     eax, [esi+58h]
0x8DE81F: test    eax, eax
0x8DE821: js      short loc_8DE84A
0x8DE823: mov     ecx, [ebx+edi*4]
0x8DE826: mov     ecx, [ecx+19Ch]
0x8DE82C: cmp     ecx, ebp
0x8DE82E: jnz     short loc_8DE836
0x8DE830: mov     ecx, ds:0BA7D9Ch
0x8DE836: mov     edx, [esi+50h]
0x8DE839: and     eax, 3FFFFFFFh
0x8DE83E: push    14h
0x8DE840: shl     eax, 2
0x8DE843: push    eax
0x8DE844: push    edx
0x8DE845: call    sub_8A75D0
0x8DE84A: mov     eax, [esi+58h]
0x8DE84D: and     eax, 0C0000000h
0x8DE852: or      eax, 80000000h
0x8DE857: mov     [esi+50h], ebp
0x8DE85A: mov     [esi+54h], ebp
0x8DE85D: mov     [esi+58h], eax
0x8DE860: cmp     [esi+60h], ebp
0x8DE863: jnz     short loc_8DE8A9
0x8DE865: mov     eax, [esi+64h]
0x8DE868: test    eax, eax
0x8DE86A: js      short loc_8DE893
0x8DE86C: mov     ecx, [ebx+edi*4]
0x8DE86F: mov     ecx, [ecx+19Ch]
0x8DE875: cmp     ecx, ebp
0x8DE877: jnz     short loc_8DE87F
0x8DE879: mov     ecx, ds:0BA7D9Ch
0x8DE87F: mov     edx, [esi+5Ch]
0x8DE882: and     eax, 3FFFFFFFh
0x8DE887: push    14h
0x8DE889: shl     eax, 2
0x8DE88C: push    eax
0x8DE88D: push    edx
0x8DE88E: call    sub_8A75D0
0x8DE893: mov     eax, [esi+64h]
0x8DE896: and     eax, 0C0000000h
0x8DE89B: or      eax, 80000000h
0x8DE8A0: mov     [esi+5Ch], ebp
0x8DE8A3: mov     [esi+60h], ebp
0x8DE8A6: mov     [esi+64h], eax
0x8DE8A9: pop     edi
0x8DE8AA: pop     esi
0x8DE8AB: pop     ebp
0x8DE8AC: pop     ebx
0x8DE8AD: retn
