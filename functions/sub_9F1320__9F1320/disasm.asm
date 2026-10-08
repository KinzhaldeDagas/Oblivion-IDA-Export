0x9F1320: push    offset aFileDoesNotExi; "File does not exist"
0x9F1325: push    offset aSfilenotfound; "sFileNotFound"
0x9F132A: mov     ecx, offset stru_B387B0; self
0x9F132F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1334: push    offset sub_A21680; void (__cdecl *)()
0x9F1339: call    _atexit
0x9F133E: pop     ecx
0x9F133F: retn
