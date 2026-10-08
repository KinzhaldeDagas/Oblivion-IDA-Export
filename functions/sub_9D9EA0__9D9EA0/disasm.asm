0x9D9EA0: push    offset aCreate; "Create"
0x9D9EA5: push    offset aSmagiceffect_9; "sMagicEffectItemCreateLock"
0x9D9EAA: mov     ecx, 0B334B0h; self
0x9D9EAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9EB4: push    offset sub_A174F0; void (__cdecl *)()
0x9D9EB9: call    _atexit
0x9D9EBE: pop     ecx
0x9D9EBF: retn
