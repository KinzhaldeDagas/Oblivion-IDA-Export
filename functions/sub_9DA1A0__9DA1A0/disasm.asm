0x9DA1A0: push    offset aConjuration; "Conjuration"
0x9DA1A5: push    offset aSmagicschoolco; "sMagicSchoolConjuration"
0x9DA1AA: mov     ecx, 0B335C4h; self
0x9DA1AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA1B4: push    offset sub_A17670; void (__cdecl *)()
0x9DA1B9: call    _atexit
0x9DA1BE: pop     ecx
0x9DA1BF: retn
