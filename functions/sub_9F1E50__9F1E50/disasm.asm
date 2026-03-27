0x9F1E50: push    offset aYouCannotChang; "You cannot change weapons while attacki"...
0x9F1E55: push    offset aSanimationcann; "sAnimationCanNotEquipWeapon"
0x9F1E5A: mov     ecx, offset dword_B38A20
0x9F1E5F: call    GameSetting_ConstrAndReg
0x9F1E64: push    offset sub_A21B60; void (__cdecl *)()
0x9F1E69: call    _atexit
0x9F1E6E: pop     ecx
0x9F1E6F: retn
