0x704290: push    esi
0x704291: mov     esi, ecx
0x704293: mov     ecx, [esi+8]
0x704296: test    ecx, ecx
0x704298: push    edi
0x704299: mov     edi, [esp+8+arg_0]
0x70429D: jnz     short loc_7042A9
0x70429F: cmp     dword ptr [edi+8], 0
0x7042A3: jnz     short loc_7042DA
0x7042A5: test    ecx, ecx
0x7042A7: jz      short loc_7042B8
0x7042A9: mov     eax, [edi+8]
0x7042AC: mov     edx, [ecx]
0x7042AE: push    eax
0x7042AF: mov     eax, [edx+2Ch]
0x7042B2: call    eax
0x7042B4: test    al, al
0x7042B6: jz      short loc_7042DA
0x7042B8: mov     cx, [esi+4]
0x7042BC: cmp     cx, [edi+4]
0x7042C0: jnz     short loc_7042DA
0x7042C2: mov     ecx, [esi+0Ch]
0x7042C5: test    ecx, ecx
0x7042C7: jz      short loc_7042E5
0x7042C9: mov     eax, [edi+0Ch]
0x7042CC: test    eax, eax
0x7042CE: jz      short loc_7042E1
0x7042D0: push    eax
0x7042D1: call    sub_72FD80
0x7042D6: test    al, al
0x7042D8: jz      short loc_7042F5
0x7042DA: pop     edi
0x7042DB: xor     al, al
0x7042DD: pop     esi
0x7042DE: retn    4
0x7042E1: test    ecx, ecx
0x7042E3: jnz     short loc_7042EF
0x7042E5: cmp     dword ptr [edi+0Ch], 0
0x7042E9: jnz     short loc_7042DA
0x7042EB: test    ecx, ecx
0x7042ED: jz      short loc_7042F5
0x7042EF: cmp     dword ptr [edi+0Ch], 0
0x7042F3: jz      short loc_7042DA
0x7042F5: pop     edi
0x7042F6: mov     al, 1
0x7042F8: pop     esi
0x7042F9: retn    4
