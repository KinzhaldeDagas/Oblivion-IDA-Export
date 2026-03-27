0x9F1FB0: push    offset aYouCannotRepai; "You cannot repair items during combat!"
0x9F1FB5: push    offset aScannotequipre; "sCanNotEquipRepairHammer"
0x9F1FBA: mov     ecx, offset dword_B38A78
0x9F1FBF: call    GameSetting_ConstrAndReg
0x9F1FC4: push    offset sub_A21C10; void (__cdecl *)()
0x9F1FC9: call    _atexit
0x9F1FCE: pop     ecx
0x9F1FCF: retn
