0x9F0DB0: push    offset aEnterANameForY; "Enter a name for your custom class:"
0x9F0DB5: push    offset aSclassmenuprom; "sClassMenuPrompt"
0x9F0DBA: mov     ecx, offset stru_B38658; self
0x9F0DBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0DC4: push    offset sub_A213D0; void (__cdecl *)()
0x9F0DC9: call    _atexit
0x9F0DCE: pop     ecx
0x9F0DCF: retn
