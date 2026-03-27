0x9F1F10: push    offset aYourHeavyArmor; "Your heavy armor prevents you from jump"...
0x9F1F15: push    offset aSheavyarmornoj; "sHeavyArmorNoJump"
0x9F1F1A: mov     ecx, offset unk_B38A50
0x9F1F1F: call    GameSetting_ConstrAndReg
0x9F1F24: push    offset sub_A21BC0; void (__cdecl *)()
0x9F1F29: call    _atexit
0x9F1F2E: pop     ecx
0x9F1F2F: retn
