0x9F1600: push    offset aYouNeedASoulGe; "You need a soul gem to recharge."
0x9F1605: push    offset aSnosoulgem; "sNoSoulGem"
0x9F160A: mov     ecx, offset unk_B38868
0x9F160F: call    GameSetting_ConstrAndReg
0x9F1614: push    offset sub_A217F0; void (__cdecl *)()
0x9F1619: call    _atexit
0x9F161E: pop     ecx
0x9F161F: retn
