0x5DAA76: push    ebx; Count all 21 native player skills into five SkillMasteryLevel buckets for the Stats menu. Major/non-major membership is not consulted.
0x5DAA77: push    2
0x5DAA79: call    ActorValue_GetAVFromGroupOffset; mwMediumArmor: Oblivion group 2 maps skill offset to actor value by adding 0x0C. OpenMW/Morrowind skill index 2 is MediumArmor, but Oblivion offset 2 becomes actor value 0x0E (Blade). Do not pass Morrowind skill indexes directly through this helper.
0x5DAA7E: mov     ecx, ds:0B333C4h; this
0x5DAA84: add     esp, 8
0x5DAA87: push    eax; actorValue
0x5DAA88: call    Actor_GetSkillMasteryLevel; Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
0x5DAA8D: add     [esp+eax*4+arg_2C], 1
0x5DAA92: lea     eax, [esp+eax*4+arg_2C]
0x5DAA96: add     ebx, 1
0x5DAA99: cmp     ebx, 15h
0x5DAA9C: jl      short StatsMenu_MiscTab_HandleClick___CalcSkillMasteryCounts; Complete the fixed 21-skill mastery-count loop; the resulting five counts are purely value/rank based, independent of TESClass majors.
0x5DAA9E: xor     ebx, ebx
0x5DAAA0: mov     [esp+arg_10], 5; Finish counting the fixed 21 native skills into the five mastery buckets used by the Stats menu.
0x5DAAA8: jmp     short loc_5DAAB2
