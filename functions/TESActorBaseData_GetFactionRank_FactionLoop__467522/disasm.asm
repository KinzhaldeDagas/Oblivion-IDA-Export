0x467522: test    dl, dl
0x467524: mov     eax, [esi]
0x467526: jz      short loc_46753E
0x467528: test    eax, eax
0x46752A: jz      short TESActorBaseData_GetFactionRank___FactionLoop_next
0x46752C: mov     ecx, [eax]
0x46752E: movzx   ebx, byte ptr [ecx+34h]
0x467532: shr     ebx, 3
0x467535: test    bl, 1
0x467538: jnz     short TESActorBaseData_GetFactionRank___FactionLoop_next
0x46753A: cmp     ecx, edi
0x46753C: jmp     short loc_467544
0x46753E: test    eax, eax
0x467540: jz      short TESActorBaseData_GetFactionRank___FactionLoop_next
0x467542: cmp     [eax], edi
0x467544: jz      short TESActorBaseData_GetFactionRank___Return_Rank
