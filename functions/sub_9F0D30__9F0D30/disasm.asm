0x9F0D30: push    offset aYouWillGain10T; "You will gain +10 to each of your favor"...
0x9F0D35: push    offset aSfavoredattrib; "sFavoredAttributes"
0x9F0D3A: mov     ecx, offset stru_B38638; self
0x9F0D3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0D44: push    offset sub_A21390; void (__cdecl *)()
0x9F0D49: call    _atexit
0x9F0D4E: pop     ecx
0x9F0D4F: retn
