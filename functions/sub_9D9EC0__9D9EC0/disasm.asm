0x9D9EC0: push    offset aUpToLevel; "up to level"
0x9D9EC5: push    offset aSmagiceffec_10; "sMagicEffectItemUpToLevel"
0x9D9ECA: mov     ecx, 0B334B8h; self
0x9D9ECF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9ED4: push    offset sub_A17500; void (__cdecl *)()
0x9D9ED9: call    _atexit
0x9D9EDE: pop     ecx
0x9D9EDF: retn
