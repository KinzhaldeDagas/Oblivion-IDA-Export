0x77B0F0: push    esi
0x77B0F1: push    edi
0x77B0F2: mov     edi, [esp+8+arg_0]
0x77B0F6: mov     esi, ecx
0x77B0F8: cmp     [esi+0FE8h], edi
0x77B0FE: jnz     short loc_77B11D
0x77B100: mov     eax, [esi+0FF8h]
0x77B106: mov     dword ptr [esi+0FE8h], 0
0x77B110: mov     ecx, [eax]
0x77B112: mov     edx, [ecx+1ACh]
0x77B118: push    0
0x77B11A: push    eax
0x77B11B: call    edx
0x77B11D: cmp     [esi+0FECh], edi
0x77B123: jnz     short loc_77B12F
0x77B125: mov     dword ptr [esi+0FECh], 0
0x77B12F: pop     edi
0x77B130: pop     esi
0x77B131: retn    4
