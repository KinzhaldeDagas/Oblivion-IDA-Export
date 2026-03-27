0x9F07F0: push    offset aNecksBitten; "Necks Bitten: "
0x9F07F5: push    offset aSmiscpeoplefed; "sMiscPeopleFedOn"
0x9F07FA: mov     ecx, offset dword_B384E8
0x9F07FF: call    GameSetting_ConstrAndReg
0x9F0804: push    offset sub_A210F0; void (__cdecl *)()
0x9F0809: call    _atexit
0x9F080E: pop     ecx
0x9F080F: retn
