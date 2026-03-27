0x64B0B0: push    ebx
0x64B0B1: push    esi
0x64B0B2: mov     esi, [esp+8+arg_0]
0x64B0B6: mov     eax, [esi]
0x64B0B8: mov     edx, [eax+164h]
0x64B0BE: push    edi
0x64B0BF: mov     edi, ecx
0x64B0C1: mov     ecx, esi
0x64B0C3: call    edx
0x64B0C5: mov     ecx, ds:0B362C0h
0x64B0CB: mov     ebx, eax
0x64B0CD: mov     eax, [edi+120h]
0x64B0D3: push    eax
0x64B0D4: push    esi
0x64B0D5: call    sub_521450
0x64B0DA: mov     edi, eax
0x64B0DC: test    edi, edi
0x64B0DE: jz      short loc_64B0FD
0x64B0E0: test    ebx, ebx
0x64B0E2: jz      short loc_64B0FD
0x64B0E4: mov     ecx, edi
0x64B0E6: call    sub_520200
0x64B0EB: push    eax
0x64B0EC: push    esi
0x64B0ED: push    edi
0x64B0EE: mov     ecx, ebx
0x64B0F0: call    sub_4762B0
0x64B0F5: pop     edi
0x64B0F6: pop     esi
0x64B0F7: mov     al, 1
0x64B0F9: pop     ebx
0x64B0FA: retn    4
0x64B0FD: pop     edi
0x64B0FE: pop     esi
0x64B0FF: xor     al, al
0x64B101: pop     ebx
0x64B102: retn    4
