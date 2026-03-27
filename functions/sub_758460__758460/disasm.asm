0x758460: push    ebx
0x758461: push    esi
0x758462: mov     esi, ecx
0x758464: mov     eax, [esi+0Ch]
0x758467: xor     ebx, ebx
0x758469: cmp     eax, ebx
0x75846B: push    edi
0x75846C: jz      short loc_75847E
0x75846E: mov     ecx, [esi+10h]
0x758471: mov     edx, ds:0B3D2C8h[ecx*4]
0x758478: push    eax
0x758479: call    edx ; dword_B3D2C8
0x75847B: add     esp, 4
0x75847E: mov     edi, [esp+0Ch+arg_0]
0x758482: cmp     edi, ebx
0x758484: jz      short loc_7584AA
0x758486: mov     ecx, [esp+0Ch+arg_4]
0x75848A: cmp     ecx, ebx
0x75848C: jz      short loc_7584AA
0x75848E: mov     eax, [esp+0Ch+arg_8]
0x758492: mov     dl, ds:byte_B3D3E8[eax]
0x758498: mov     [esi+0Ch], edi
0x75849B: pop     edi
0x75849C: mov     [esi+14h], dl
0x75849F: mov     [esi+8], ecx
0x7584A2: mov     [esi+10h], eax
0x7584A5: pop     esi
0x7584A6: pop     ebx
0x7584A7: retn    0Ch
0x7584AA: pop     edi
0x7584AB: mov     [esi+8], ebx
0x7584AE: mov     [esi+0Ch], ebx
0x7584B1: mov     [esi+10h], ebx
0x7584B4: mov     [esi+14h], bl
0x7584B7: pop     esi
0x7584B8: pop     ebx
0x7584B9: retn    0Ch
