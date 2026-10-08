0x9F7010: push    offset aMouthHighLow; "Mouth high/low"
0x9F7015: push    offset aSmouthhigh; "sMouthhigh"
0x9F701A: mov     ecx, offset stru_B39178; self
0x9F701F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7024: push    offset sub_A22A10; void (__cdecl *)()
0x9F7029: call    _atexit
0x9F702E: pop     ecx
0x9F702F: retn
