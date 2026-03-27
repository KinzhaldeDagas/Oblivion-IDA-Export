0x9F1AE0: push    offset aYouMustFirstEn; "You must first enter a valid name for t"...
0x9F1AE5: push    offset aSmissingspelln; "sMissingSpellName"
0x9F1AEA: mov     ecx, offset dword_B389A0
0x9F1AEF: call    GameSetting_ConstrAndReg
0x9F1AF4: push    offset sub_A21A60; void (__cdecl *)()
0x9F1AF9: call    _atexit
0x9F1AFE: pop     ecx
0x9F1AFF: retn
