0x9F2DC0: push    offset aYouHaveContrac; "You have contracted"
0x9F2DC5: push    offset aScontracteddis; "sContractedDisease"
0x9F2DCA: mov     ecx, 0B38DF8h; self
0x9F2DCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2DD4: push    offset sub_A22310; void (__cdecl *)()
0x9F2DD9: call    _atexit
0x9F2DDE: pop     ecx
0x9F2DDF: retn
