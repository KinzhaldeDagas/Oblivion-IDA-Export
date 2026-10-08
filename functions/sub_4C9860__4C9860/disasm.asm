0x4C9860: cmp     [esp+unlocked], 0; Verified body and call path: sets/clears flags0 bit 0x40; TESObjectREFR_PropagateLockStateToLinkedDoorCells invokes it for linked-door owner cells on lock/unlock. Probable semantic identity: TempPublic, directly corroborated by Fallout's named SetTempPublic and Oblivion's access/load behavior; active-file retention controls whether cell load clears this bit.
0x4C9865: jz      short loc_4C986D
0x4C9867: or      byte ptr [ecx+24h], 40h
0x4C986B: jmp     short loc_4C9871
0x4C986D: and     byte ptr [ecx+24h], 0BFh
0x4C9871: mov     eax, [ecx]
0x4C9873: mov     edx, [eax+40h]
0x4C9876: mov     dword ptr [esp+unlocked], 8
0x4C987E: jmp     edx
