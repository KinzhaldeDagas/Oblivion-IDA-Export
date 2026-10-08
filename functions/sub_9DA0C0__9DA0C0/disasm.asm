0x9DA0C0: push    offset aYourSkillLevel; "Your Skill level is too low"
0x9DA0C5: push    offset aSmagiccastin_0; "sMagicCastInsufficientSkill"
0x9DA0CA: mov     ecx, 0B3352Ch; self
0x9DA0CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA0D4: push    offset sub_A17600; void (__cdecl *)()
0x9DA0D9: call    _atexit
0x9DA0DE: pop     ecx
0x9DA0DF: retn
