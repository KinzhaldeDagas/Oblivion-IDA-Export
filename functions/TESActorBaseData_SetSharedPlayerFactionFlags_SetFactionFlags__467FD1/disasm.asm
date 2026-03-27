0x467FD1: movsx   eax, byte ptr [ecx+4]
0x467FD5: cmp     eax, 0FFFFFFFFh
0x467FD8: jz      short TESActorBaseData_SetSharedPlayerFactionFlags___FactionLoop_next
0x467FDA: mov     eax, ebx
0x467FDC: sub     eax, 0
0x467FDF: jz      short loc_467FF7
0x467FE1: sub     eax, 1
0x467FE4: jz      short loc_467FF1
0x467FE6: sub     eax, 1
0x467FE9: jnz     short TESActorBaseData_SetSharedPlayerFactionFlags___FactionLoop_next
0x467FEB: or      byte ptr [esi+34h], 10h
0x467FEF: jmp     short loc_467FFB
0x467FF1: or      byte ptr [esi+34h], 20h
0x467FF5: jmp     short loc_467FFB
0x467FF7: or      byte ptr [esi+34h], 40h
0x467FFB: mov     eax, [esi]
0x467FFD: mov     edx, [eax+40h]
0x468000: push    4
0x468002: mov     ecx, esi
0x468004: call    edx
