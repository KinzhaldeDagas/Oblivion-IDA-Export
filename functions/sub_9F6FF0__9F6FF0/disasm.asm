0x9F6FF0: push    offset aMouthHappySad; "Mouth happy/sad"
0x9F6FF5: push    offset aSmouthhappy; "sMouthhappy"
0x9F6FFA: mov     ecx, offset stru_B39170; self
0x9F6FFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7004: push    offset sub_A22A00; void (__cdecl *)()
0x9F7009: call    _atexit
0x9F700E: pop     ecx
0x9F700F: retn
