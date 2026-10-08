0x501C00: mov     eax, [esp+value]
0x501C04: push    eax; value
0x501C05: push    0; param2
0x501C07: push    0; param1
0x501C09: push    0; subject
0x501C0B: call    GetCurrentTime_Eval; GetCurrentTime_Eval reads TimeGlobals::GameHour and returns the numeric hour for the enclosing CTDA comparison; it has no parameters or subject requirement. Vanilla core dialogue uses it 23 times. Fallout's later counterpart x4y6:0x823B4BC8 reads Calendar::GetHour, so the owning time subsystem differs.
0x501C10: add     esp, 10h
0x501C13: retn
