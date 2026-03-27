0x41CE6C: fild    [esp+arg_14]
0x41CE70: push    0FFFFFFFFh; int
0x41CE72: push    1; int
0x41CE74: sub     esp, 8
0x41CE77: fstp    [esp+10h+var_C]; float
0x41CE7B: fild    iDebugTextLeftRightOffset
0x41CE81: fstp    [esp+10h+var_10]; float
0x41CE84: push    offset aCurrentRefIsNo; "Current ref is not a MagicCaster."
0x41CE89: call    InterfaceMgr_DebugTextLine
0x41CE8E: add     esp, 14h
0x41CE91: add     ebx, esi
