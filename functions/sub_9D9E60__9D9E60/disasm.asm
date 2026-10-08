0x9D9E60: push    offset aFt; "ft"
0x9D9E65: push    offset aSmagiceffect_7; "sMagicEffectItemFeet"
0x9D9E6A: mov     ecx, 0B334A0h; self
0x9D9E6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9E74: push    offset sub_A174D0; void (__cdecl *)()
0x9D9E79: call    _atexit
0x9D9E7E: pop     ecx
0x9D9E7F: retn
