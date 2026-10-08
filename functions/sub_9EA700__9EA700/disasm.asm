0x9EA700: push    0FFFFFFCEh; defaultValue
0x9EA702: push    offset aIaicombatminde; "iAICombatMinDetection"
0x9EA707: mov     ecx, 0B372F0h; self
0x9EA70C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA711: push    offset sub_A1ED00; void (__cdecl *)()
0x9EA716: call    _atexit
0x9EA71B: pop     ecx
0x9EA71C: retn
