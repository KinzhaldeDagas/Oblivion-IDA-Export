0x9F3130: push    offset aEffectResisted; "effect resisted"
0x9F3135: push    offset aSmagiceffectre; "sMagicEffectResisted"
0x9F313A: mov     ecx, 0B38EA0h; self
0x9F313F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3144: push    offset sub_A22460; void (__cdecl *)()
0x9F3149: call    _atexit
0x9F314E: pop     ecx
0x9F314F: retn
