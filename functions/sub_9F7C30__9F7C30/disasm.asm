0x9F7C30: push    offset aViewAvailableC; "View Available Content"
0x9F7C35: push    offset aSolddownloadsa; "sOldDownloadsAvailable"
0x9F7C3A: mov     ecx, offset stru_B39480; self
0x9F7C3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7C44: push    offset sub_A23020; void (__cdecl *)()
0x9F7C49: call    _atexit
0x9F7C4E: pop     ecx
0x9F7C4F: retn
