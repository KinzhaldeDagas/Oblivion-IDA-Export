0x8E1280: push    ebx
0x8E1281: mov     ebx, [esp+4+arg_4]
0x8E1285: mov     eax, [ebx+0Ch]
0x8E1288: test    al, 1
0x8E128A: push    esi
0x8E128B: push    edi
0x8E128C: mov     edi, edx
0x8E128E: jnz     short loc_8E12CB
0x8E1290: mov     esi, [esp+0Ch+arg_8]
0x8E1294: mov     eax, [esi+8]
0x8E1297: mov     ecx, [esi+4]
0x8E129A: and     eax, 3FFFFFFFh
0x8E129F: cmp     ecx, eax
0x8E12A1: jnz     short loc_8E12AE
0x8E12A3: push    8
0x8E12A5: push    esi
0x8E12A6: call    sub_8A6EE0
0x8E12AB: add     esp, 8
0x8E12AE: mov     eax, [esi+4]
0x8E12B1: mov     ecx, [esi]
0x8E12B3: lea     ecx, [ecx+eax*8]
0x8E12B6: inc     eax
0x8E12B7: mov     [esi+4], eax
0x8E12BA: mov     edx, [edi+0Ch]
0x8E12BD: pop     edi
0x8E12BE: mov     [ecx], edx
0x8E12C0: mov     eax, [ebx+0Ch]
0x8E12C3: pop     esi
0x8E12C4: mov     [ecx+4], eax
0x8E12C7: pop     ebx
0x8E12C8: retn    0Ch
0x8E12CB: and     eax, 0FFFFFFFEh
0x8E12CE: lea     esi, [eax+ecx+4]
0x8E12D2: mov     ecx, [esi+8]
0x8E12D5: mov     eax, [esi+4]
0x8E12D8: and     ecx, 3FFFFFFFh
0x8E12DE: cmp     eax, ecx
0x8E12E0: jnz     short loc_8E12ED
0x8E12E2: push    2
0x8E12E4: push    esi
0x8E12E5: call    sub_8A6EE0
0x8E12EA: add     esp, 8
0x8E12ED: mov     edx, [esi+4]
0x8E12F0: mov     eax, [esi]
0x8E12F2: mov     cx, [esp+0Ch+arg_0]
0x8E12F7: mov     [eax+edx*2], cx
0x8E12FB: mov     eax, [esi+4]
0x8E12FE: inc     eax
0x8E12FF: pop     edi
0x8E1300: mov     [esi+4], eax
0x8E1303: pop     esi
0x8E1304: pop     ebx
0x8E1305: retn    0Ch
