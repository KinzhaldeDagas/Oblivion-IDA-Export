0x73D7A0: cmp     dword ptr [ecx+0DCh], 1
0x73D7A7: push    ebx
0x73D7A8: push    ebp
0x73D7A9: push    esi
0x73D7AA: mov     esi, [esp+0Ch+a2]
0x73D7AE: mov     eax, [esi+8]
0x73D7B1: push    edi
0x73D7B2: mov     edi, [eax+4]
0x73D7B5: push    esi; a2
0x73D7B6: setnz   bl
0x73D7B9: call    NiNode__OnVisible
0x73D7BE: mov     esi, [esi+8]
0x73D7C1: mov     ebp, [esi+4]
0x73D7C4: cmp     edi, ebp
0x73D7C6: mov     ecx, edi
0x73D7C8: jnb     short loc_73D7EE
0x73D7CA: mov     edi, 40h ; '@'
0x73D7CF: mov     edx, 0FFBFh
0x73D7D4: test    bl, bl
0x73D7D6: mov     eax, [esi]
0x73D7D8: mov     eax, [eax+ecx*4]
0x73D7DB: jnz     short loc_73D7E3
0x73D7DD: or      [eax+18h], di
0x73D7E1: jmp     short loc_73D7E7
0x73D7E3: and     [eax+18h], dx
0x73D7E7: add     ecx, 1
0x73D7EA: cmp     ecx, ebp
0x73D7EC: jb      short loc_73D7D4
0x73D7EE: pop     edi
0x73D7EF: pop     esi
0x73D7F0: pop     ebp
0x73D7F1: pop     ebx
0x73D7F2: retn    4
