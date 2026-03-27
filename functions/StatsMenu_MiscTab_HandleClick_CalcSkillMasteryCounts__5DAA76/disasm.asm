0x5DAA76: push    ebx
0x5DAA77: push    2
0x5DAA79: call    ActorValue_GetAVFromGroupOffset
0x5DAA7E: mov     ecx, ds:0B333C4h
0x5DAA84: add     esp, 8
0x5DAA87: push    eax
0x5DAA88: call    Actor_GetSkillMasteryLevel
0x5DAA8D: add     [esp+eax*4+arg_2C], 1
0x5DAA92: lea     eax, [esp+eax*4+arg_2C]
0x5DAA96: add     ebx, 1
0x5DAA99: cmp     ebx, 15h
0x5DAA9C: jl      short StatsMenu_MiscTab_HandleClick___CalcSkillMasteryCounts
0x5DAA9E: xor     ebx, ebx
0x5DAAA0: mov     [esp+arg_10], 5
0x5DAAA8: jmp     short loc_5DAAB2
