0x77B5B0: push    esi
0x77B5B1: push    edi
0x77B5B2: mov     edi, [esp+8+arg_0]
0x77B5B6: test    edi, edi
0x77B5B8: mov     esi, ecx
0x77B5BA: jz      short loc_77B5FC
0x77B5BC: cmp     byte ptr [esi+1000h], 0
0x77B5C3: jz      short loc_77B5FC
0x77B5C5: cmp     [esi+100Ch], edi
0x77B5CB: jnz     short loc_77B5EA
0x77B5CD: mov     eax, [esi+0FF8h]
0x77B5D3: mov     dword ptr [esi+100Ch], 0
0x77B5DD: mov     ecx, [eax]
0x77B5DF: mov     edx, [ecx+15Ch]
0x77B5E5: push    0
0x77B5E7: push    eax
0x77B5E8: call    edx
0x77B5EA: cmp     [esi+1010h], edi
0x77B5F0: jnz     short loc_77B5FC
0x77B5F2: mov     dword ptr [esi+1010h], 0
0x77B5FC: pop     edi
0x77B5FD: pop     esi
0x77B5FE: retn    4
