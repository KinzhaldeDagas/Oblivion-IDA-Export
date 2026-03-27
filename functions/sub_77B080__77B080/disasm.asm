0x77B080: cmp     byte ptr [esp+arg_4], 0
0x77B085: jz      short loc_77B093
0x77B087: mov     eax, [ecx+0FE8h]
0x77B08D: mov     [ecx+0FECh], eax
0x77B093: mov     eax, [esp+arg_0]
0x77B097: cmp     [ecx+0FE8h], eax
0x77B09D: jz      short locret_77B0BD
0x77B09F: mov     [ecx+0FE8h], eax
0x77B0A5: mov     ecx, [ecx+0FF8h]
0x77B0AB: mov     edx, [ecx]
0x77B0AD: mov     [esp+arg_4], eax
0x77B0B1: mov     eax, [edx+1ACh]
0x77B0B7: mov     [esp+arg_0], ecx
0x77B0BB: jmp     eax
0x77B0BD: retn    8
