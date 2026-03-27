0x77B3C0: push    esi
0x77B3C1: push    edi
0x77B3C2: mov     edi, [esp+8+arg_0]
0x77B3C6: mov     esi, ecx
0x77B3C8: cmp     [esi+0FE0h], edi
0x77B3CE: jnz     short loc_77B3ED
0x77B3D0: mov     eax, [esi+0FF8h]
0x77B3D6: mov     dword ptr [esi+0FE0h], 0
0x77B3E0: mov     ecx, [eax]
0x77B3E2: mov     edx, [ecx+170h]
0x77B3E8: push    0
0x77B3EA: push    eax
0x77B3EB: call    edx
0x77B3ED: cmp     [esi+0FE4h], edi
0x77B3F3: jnz     short loc_77B3FF
0x77B3F5: mov     dword ptr [esi+0FE4h], 0
0x77B3FF: pop     edi
0x77B400: pop     esi
0x77B401: retn    4
