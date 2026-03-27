0x64B300: push    esi
0x64B301: mov     esi, ecx
0x64B303: cmp     word ptr [esi+138h], 0FFFFh
0x64B30B: jnz     short loc_64B326
0x64B30D: mov     ecx, [esp+4+a2]; this
0x64B311: push    0; a2
0x64B313: call    Actor_GetActorBaseForm
0x64B318: mov     ecx, eax; this
0x64B31A: call    TESCreature__GetSoulLevel
0x64B31F: mov     [esi+138h], ax
0x64B326: movsx   eax, word ptr [esi+138h]
0x64B32D: pop     esi
0x64B32E: retn    4
