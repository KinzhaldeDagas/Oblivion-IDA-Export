0x9F06B0: push    offset aApprenticeSkil; "Apprentice Skills: "
0x9F06B5: push    offset aSmiscapprentic; "sMiscApprenticeSkills"
0x9F06BA: mov     ecx, 0B38498h; self
0x9F06BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F06C4: push    offset sub_A21050; void (__cdecl *)()
0x9F06C9: call    _atexit
0x9F06CE: pop     ecx
0x9F06CF: retn
