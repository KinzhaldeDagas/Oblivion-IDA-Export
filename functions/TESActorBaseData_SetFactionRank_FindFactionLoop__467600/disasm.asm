0x467600: mov     ecx, [eax]
0x467602: test    ecx, ecx
0x467604: jz      short loc_46760A
0x467606: cmp     [ecx], edi
0x467608: jz      short TESActorBaseData_SetFactionRank___SetExistingEntryRank
0x46760A: mov     eax, [eax+4]
0x46760D: test    eax, eax
0x46760F: jnz     short TESActorBaseData_SetFactionRank___FindFactionLoop
