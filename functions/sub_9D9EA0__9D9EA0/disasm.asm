0x9D9EA0: push    offset aCreate; "Create"
0x9D9EA5: push    offset aSmagiceffect_9; "sMagicEffectItemCreateLock"
0x9D9EAA: mov     ecx, offset sMagicEffectItemCreateLock
0x9D9EAF: call    GameSetting_ConstrAndReg
0x9D9EB4: push    offset sub_A174F0; void (__cdecl *)()
0x9D9EB9: call    _atexit
0x9D9EBE: pop     ecx
0x9D9EBF: retn
