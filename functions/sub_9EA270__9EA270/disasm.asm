0x9EA270: push    offset aYourAttackHasN; "Your attack has no effect."
0x9EA275: push    offset aSnormalweapons; "sNormalWeaponsResisted"
0x9EA27A: mov     ecx, offset sNormalWeaponsResisted
0x9EA27F: call    GameSetting_ConstrAndReg
0x9EA284: push    offset sub_A1EB30; void (__cdecl *)()
0x9EA289: call    _atexit
0x9EA28E: pop     ecx
0x9EA28F: retn
