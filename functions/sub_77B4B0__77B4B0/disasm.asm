0x77B4B0: push    esi
0x77B4B1: push    edi
0x77B4B2: mov     edi, [esp+8+arg_0]
0x77B4B6: test    edi, edi
0x77B4B8: mov     esi, ecx
0x77B4BA: jz      short loc_77B4FC
0x77B4BC: cmp     byte ptr [esi+1000h], 0
0x77B4C3: jnz     short loc_77B4FC
0x77B4C5: cmp     [esi+1004h], edi
0x77B4CB: jnz     short loc_77B4EA
0x77B4CD: mov     eax, [esi+0FF8h]
0x77B4D3: mov     dword ptr [esi+1004h], 2
0x77B4DD: mov     ecx, [eax]
0x77B4DF: mov     edx, [ecx+164h]
0x77B4E5: push    2
0x77B4E7: push    eax
0x77B4E8: call    edx
0x77B4EA: cmp     [esi+1008h], edi
0x77B4F0: jnz     short loc_77B4FC
0x77B4F2: mov     dword ptr [esi+1008h], 2
0x77B4FC: pop     edi
0x77B4FD: pop     esi
0x77B4FE: retn    4
