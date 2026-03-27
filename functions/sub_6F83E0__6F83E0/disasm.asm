0x6F83E0: push    ebx
0x6F83E1: push    esi
0x6F83E2: mov     esi, ecx
0x6F83E4: xor     ebx, ebx
0x6F83E6: cmp     [esi+4Ch], ebx
0x6F83E9: push    edi
0x6F83EA: mov     edi, esi
0x6F83EC: jz      short loc_6F8409
0x6F83EE: call    sub_6F7AB0
0x6F83F3: test    al, al
0x6F83F5: jnz     short loc_6F83F9
0x6F83F7: xor     edi, edi
0x6F83F9: mov     eax, [esi+4Ch]
0x6F83FC: push    eax; File
0x6F83FD: call    _fclose
0x6F8402: add     esp, 4
0x6F8405: test    eax, eax
0x6F8407: jz      short loc_6F840B
0x6F8409: xor     edi, edi
0x6F840B: mov     ecx, esi
0x6F840D: mov     [esi+48h], bl
0x6F8410: mov     [esi+41h], bl
0x6F8413: call    sub_6F6F40
0x6F8418: mov     [esi+4Ch], ebx
0x6F841B: mov     ecx, ds:0B3F16Ch
0x6F8421: mov     eax, edi
0x6F8423: pop     edi
0x6F8424: mov     [esi+3Ch], ebx
0x6F8427: mov     [esi+44h], ecx
0x6F842A: pop     esi
0x6F842B: pop     ebx
0x6F842C: retn
