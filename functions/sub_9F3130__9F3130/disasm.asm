0x9F3130: push    offset aEffectResisted; "effect resisted"
0x9F3135: push    offset aSmagiceffectre; "sMagicEffectResisted"
0x9F313A: mov     ecx, offset sGameSettings_EffectResisted
0x9F313F: call    GameSetting_ConstrAndReg
0x9F3144: push    offset sub_A22460; void (__cdecl *)()
0x9F3149: call    _atexit
0x9F314E: pop     ecx
0x9F314F: retn
