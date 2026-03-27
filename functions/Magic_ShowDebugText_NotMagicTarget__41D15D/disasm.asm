0x41D15D: fild    [esp+arg_14]
0x41D161: push    0FFFFFFFFh; int
0x41D163: push    1; int
0x41D165: sub     esp, 8
0x41D168: fstp    [esp+10h+var_C]; float
0x41D16C: fild    iDebugTextLeftRightOffset
0x41D172: fstp    [esp+10h+var_10]; float
0x41D175: push    offset aCurrentRefIs_0; "Current ref is not a MagicTarget."
0x41D17A: call    InterfaceMgr_DebugTextLine
0x41D17F: add     esp, 14h
0x41D182: add     ebx, esi
