0x9D9E80: push    offset aLock; "Lock"
0x9D9E85: push    offset aSmagiceffect_8; "sMagicEffectItemLock"
0x9D9E8A: mov     ecx, 0B334A8h; self
0x9D9E8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9E94: push    offset sub_A174E0; void (__cdecl *)()
0x9D9E99: call    _atexit
0x9D9E9E: pop     ecx
0x9D9E9F: retn
