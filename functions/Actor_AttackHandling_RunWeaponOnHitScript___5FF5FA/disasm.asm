0x5FF5FA: mov     ecx, [esp+arg_28]
0x5FF5FE: push    100h
0x5FF603: lea     ebp, [esi+44h]
0x5FF606: push    ebp
0x5FF607: push    ecx
0x5FF608: call    Script_AddEventToExtraScript; RealArenaTraining decode pass: actor melee weapon OnHitWith script event, target extra is ESI+0x44; flows into actor OnHit at 0x5FF630 and does not prove static prop handling.
0x5FF60D: mov     ecx, [ebx+8]
0x5FF610: add     esp, 0Ch
0x5FF613: push    100h
0x5FF618: push    ebp
0x5FF619: push    ecx
0x5FF61A: call    Script_AddEventToExtraScript; RealArenaTraining decode pass: second actor melee weapon OnHitWith script event for equipped object/source; still actor-target path before 0x5FF630.
0x5FF61F: mov     ebp, [esp+0Ch+arg_20]
