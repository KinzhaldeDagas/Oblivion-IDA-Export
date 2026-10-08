0x9E1250: push    offset aYouSuccessfull; "You successfully harvest %s."
0x9E1255: push    offset aSflorasuccessm; "sFloraSuccessMessage"
0x9E125A: mov     ecx, 0B35820h; self
0x9E125F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E1264: push    offset sub_A1AE50; void (__cdecl *)()
0x9E1269: call    _atexit
0x9E126E: pop     ecx
0x9E126F: retn
