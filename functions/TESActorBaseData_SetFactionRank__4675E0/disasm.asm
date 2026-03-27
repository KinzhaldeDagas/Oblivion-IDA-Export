0x4675E0: push    esi
0x4675E1: push    edi
0x4675E2: mov     edi, [esp+8+arg_0]
0x4675E6: test    edi, edi
0x4675E8: mov     esi, ecx
0x4675EA: jz      short TESActorBaseData_SetFactionRank___Done
0x4675EC: mov     eax, [esi]
0x4675EE: mov     edx, [eax+50h]
0x4675F1: push    40h ; '@'
0x4675F3: call    edx
0x4675F5: add     esi, 18h
0x4675F8: mov     eax, esi
0x4675FA: jz      short TESActorBaseData_SetFactionRank___NewFactionEntry
0x4675FC: lea     esp, [esp+0]
