0x9E8310: push    32h ; '2'; defaultValue
0x9E8312: push    offset aIcurrenttarget; "iCurrentTargetBonus"
0x9E8317: mov     ecx, offset stru_B36C70; self
0x9E831C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E8321: push    offset sub_A1E000; void (__cdecl *)()
0x9E8326: call    _atexit
0x9E832B: pop     ecx
0x9E832C: retn
