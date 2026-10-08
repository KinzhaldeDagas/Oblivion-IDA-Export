0x9F7070: push    offset aMouthLipsPucke; "Mouth lips puckered/retracted"
0x9F7075: push    offset aSmouthlipspuck; "sMouthlipspuckered"
0x9F707A: mov     ecx, offset stru_B39190; self
0x9F707F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7084: push    offset sub_A22A40; void (__cdecl *)()
0x9F7089: call    _atexit
0x9F708E: pop     ecx
0x9F708F: retn
