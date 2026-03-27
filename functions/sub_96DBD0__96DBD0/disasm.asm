0x96DBD0: mov     eax, [esp+arg_0]
0x96DBD4: test    eax, eax
0x96DBD6: jz      short loc_96DBEA
0x96DBD8: mov     eax, [eax+1Ch]
0x96DBDB: test    eax, eax
0x96DBDD: jz      short loc_96DBEA
0x96DBDF: cmp     dword ptr [eax+0A8h], 0
0x96DBE6: jnz     short locret_96DBEC
0x96DBE8: jmp     short loc_96DBD8
0x96DBEA: xor     eax, eax
0x96DBEC: retn    4
