0x9F9760: push    offset aHealth; "Health"
0x9F9765: push    offset aSderivedattrib; "sDerivedAttributeNameHealth"
0x9F976A: mov     ecx, 0B3A074h; self
0x9F976F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9774: push    offset sub_A23920; void (__cdecl *)()
0x9F9779: call    _atexit
0x9F977E: pop     ecx
0x9F977F: retn
