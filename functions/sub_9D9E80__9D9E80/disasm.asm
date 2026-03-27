0x9D9E80: push    offset aLock; "Lock"
0x9D9E85: push    offset aSmagiceffect_8; "sMagicEffectItemLock"
0x9D9E8A: mov     ecx, offset sMagicEffectItemLock
0x9D9E8F: call    GameSetting_ConstrAndReg
0x9D9E94: push    offset sub_A174E0; void (__cdecl *)()
0x9D9E99: call    _atexit
0x9D9E9E: pop     ecx
0x9D9E9F: retn
