0x9DA0C0: push    offset aYourSkillLevel; "Your Skill level is too low"
0x9DA0C5: push    offset aSmagiccastin_0; "sMagicCastInsufficientSkill"
0x9DA0CA: mov     ecx, offset sMagicCastInsufficientSkill
0x9DA0CF: call    GameSetting_ConstrAndReg
0x9DA0D4: push    offset sub_A17600; void (__cdecl *)()
0x9DA0D9: call    _atexit
0x9DA0DE: pop     ecx
0x9DA0DF: retn
