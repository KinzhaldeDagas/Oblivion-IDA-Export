0x9EDDC0: push    2378Fh; 3DTheft: registers iClassThief default FormID 0002378F; plugin uses this exact Oblivion class ID as authoritative thief-class test.
0x9EDDC5: push    offset aIclassthief; "iClassThief"
0x9EDDCA: mov     ecx, 0B37CC8h; self
0x9EDDCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDDD4: push    offset sub_A200B0; void (__cdecl *)()
0x9EDDD9: call    _atexit
0x9EDDDE: pop     ecx
0x9EDDDF: retn
