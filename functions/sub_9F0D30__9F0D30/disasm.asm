0x9F0D30: push    offset aYouWillGain10T; "You will gain +10 to each of your favor"...
0x9F0D35: push    offset aSfavoredattrib; "sFavoredAttributes"
0x9F0D3A: mov     ecx, offset dword_B38638
0x9F0D3F: call    GameSetting_ConstrAndReg
0x9F0D44: push    offset sub_A21390; void (__cdecl *)()
0x9F0D49: call    _atexit
0x9F0D4E: pop     ecx
0x9F0D4F: retn
