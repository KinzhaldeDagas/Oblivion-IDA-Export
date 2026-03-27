0x46E8D0: mov     edx, [esp+arg_0]
0x46E8D4: test    edx, edx
0x46E8D6: jz      short TESReactionForm_GetReactionToTarget___Return_0
0x46E8D8: lea     eax, [ecx+4]
0x46E8DB: test    eax, eax
0x46E8DD: jz      short TESReactionForm_GetReactionToTarget___Return_0
0x46E8DF: nop
0x46E8E0: mov     ecx, [eax]
0x46E8E2: test    ecx, ecx
0x46E8E4: jz      short TESReactionForm_GetReactionToTarget___Return_0
0x46E8E6: cmp     [ecx], edx
0x46E8E8: jz      short TESReactionForm_GetReactionToTarget___Return
0x46E8EA: mov     eax, [eax+4]
0x46E8ED: test    eax, eax
0x46E8EF: jnz     short loc_46E8E0
