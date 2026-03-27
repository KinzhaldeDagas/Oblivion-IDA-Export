0x467F93: mov     eax, [ebp+0]
0x467F96: test    eax, eax
0x467F98: jz      short TESActorBaseData_SetSharedPlayerFactionFlags___Done_
0x467F9A: mov     ecx, ds:0B333C4h; this
0x467FA0: mov     esi, [eax]
0x467FA2: push    0; a2
0x467FA4: call    Actor_GetActorBaseForm
0x467FA9: add     eax, 3Ch ; '<'
0x467FAC: jz      short TESActorBaseData_SetSharedPlayerFactionFlags___FactionLoop_next
0x467FAE: mov     edi, edi
