0x9D9DC0: push    offset aSec; defaultValue
0x9D9DC5: push    offset aSmagiceffect_2; "sMagicEffectItemSecondsSingular"
0x9D9DCA: mov     ecx, 0B33478h; self
0x9D9DCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9DD4: push    offset sub_A17480; void (__cdecl *)()
0x9D9DD9: call    _atexit
0x9D9DDE: pop     ecx
0x9D9DDF: retn
