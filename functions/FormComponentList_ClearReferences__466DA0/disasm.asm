0x466DA0: push    esi
0x466DA1: push    edi
0x466DA2: mov     edi, ecx
0x466DA4: xor     esi, esi
0x466DA6: cmp     dword ptr [edi+esi*4], 0
0x466DAA: jz      short loc_466DB6
0x466DAC: mov     ecx, [edi+esi*4]
0x466DAF: mov     eax, [ecx]
0x466DB1: mov     edx, [eax+4]
0x466DB4: call    edx
0x466DB6: add     esi, 1
0x466DB9: cmp     esi, 1Ah
0x466DBC: jl      short loc_466DA6
0x466DBE: pop     edi
0x466DBF: pop     esi
0x466DC0: retn
