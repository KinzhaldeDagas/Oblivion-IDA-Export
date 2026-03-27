0x634780: mov     edx, [esp+arg_0]
0x634784: push    esi
0x634785: mov     esi, ecx
0x634787: xor     eax, eax
0x634789: lea     ecx, [esi+2C8h]
0x63478F: nop
0x634790: cmp     [ecx], edx
0x634792: jnz     short loc_6347A2
0x634794: mov     dword ptr [ecx], 0
0x63479A: mov     byte ptr [eax+esi+2DCh], 0
0x6347A2: add     eax, 1
0x6347A5: add     ecx, 4
0x6347A8: cmp     eax, 5
0x6347AB: jl      short loc_634790
0x6347AD: mov     eax, [esi]
0x6347AF: mov     edx, [eax+4CCh]
0x6347B5: mov     ecx, esi
0x6347B7: call    edx
0x6347B9: cmp     [esi+2E4h], eax
0x6347BF: jz      short loc_6347DA
0x6347C1: mov     eax, [esi]
0x6347C3: mov     edx, [eax+4CCh]
0x6347C9: mov     ecx, esi
0x6347CB: mov     byte ptr [esi+2E8h], 0
0x6347D2: call    edx
0x6347D4: mov     [esi+2E4h], eax
0x6347DA: pop     esi
0x6347DB: retn    4
