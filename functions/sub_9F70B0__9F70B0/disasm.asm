0x9F70B0: push    offset aMouthTiltUpDow; "Mouth tilt up/down"
0x9F70B5: push    offset aSmouthtilt; "sMouthtilt"
0x9F70BA: mov     ecx, offset stru_B391A0; self
0x9F70BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F70C4: push    offset sub_A22A60; void (__cdecl *)()
0x9F70C9: call    _atexit
0x9F70CE: pop     ecx
0x9F70CF: retn
