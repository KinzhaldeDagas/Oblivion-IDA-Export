0x9E3DC0: push    offset aCharacters_m_8; "Characters\\_Male\\FemaleHand.NIF"
0x9E3DC5: push    offset aSracefemalehan; "sRaceFemaleHandModel"
0x9E3DCA: mov     ecx, offset stru_B36340; self
0x9E3DCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3DD4: push    offset sub_A1C330; void (__cdecl *)()
0x9E3DD9: call    _atexit
0x9E3DDE: pop     ecx
0x9E3DDF: retn
