0x5BE780: mov     eax, [esp+arg_0]
0x5BE784: add     eax, 0FFFFFFFFh; switch 4 cases
0x5BE787: cmp     eax, 3
0x5BE78A: ja      short def_5BE78C
0x5BE78C: jmp     ds:jpt_5BE78C[eax*4]; switch jump
0x5BE793: fld     dword ptr ds:0B38E58h; jumptable 005BE78C case 1
0x5BE799: retn    4
0x5BE79C: fld     dword ptr ds:0B38E60h; jumptable 005BE78C case 2
0x5BE7A2: retn    4
0x5BE7A5: fld     dword ptr ds:0B38E68h; jumptable 005BE78C case 3
0x5BE7AB: retn    4
0x5BE7AE: mov     ecx, ds:0B333C4h; jumptable 005BE78C case 4
0x5BE7B4: push    20h ; ' '
0x5BE7B6: call    Actor_GetSkillMasteryLevel
0x5BE7BB: cmp     eax, 3
0x5BE7BE: jz      short loc_5BE7E1
0x5BE7C0: mov     ecx, ds:0B333C4h
0x5BE7C6: push    20h ; ' '
0x5BE7C8: call    Actor_GetSkillMasteryLevel
0x5BE7CD: cmp     eax, 4
0x5BE7D0: jz      short loc_5BE7E1
0x5BE7D2: mov     ecx, offset fPersuasionReactionHate
0x5BE7D7: call    GameSetting_GetSafeFloatPointer
0x5BE7DC: fld     dword ptr [eax]
0x5BE7DE: retn    4
0x5BE7E1: fld     dword ptr ds:0B38E78h
0x5BE7E7: retn    4
