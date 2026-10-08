0x505D30: mov     eax, [esp+arg_18]; AchievementsNative decode: stock IsXBox execute wrapper calls eval path and returns PC result 0.
0x505D34: mov     ecx, [esp+arg_8]
0x505D38: push    eax
0x505D39: push    0
0x505D3B: push    0
0x505D3D: push    ecx
0x505D3E: call    Cmd_IsXBox_Eval; AchievementsNative decode: stock IsXBox eval stores 0.0 into result on PC; MGPostQuestScript gates addachievement 40 behind isxbox == 1.
0x505D43: add     esp, 10h
0x505D46: retn
