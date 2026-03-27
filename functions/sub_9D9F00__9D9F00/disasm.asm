0x9D9F00: push    offset aRestore_0; "Restore"
0x9D9F05: push    offset aSmagiceffec_12; "sMagicEffectItemRestore"
0x9D9F0A: mov     ecx, offset sMagicEffectItemRestore
0x9D9F0F: call    GameSetting_ConstrAndReg
0x9D9F14: push    offset sub_A17520; void (__cdecl *)()
0x9D9F19: call    _atexit
0x9D9F1E: pop     ecx
0x9D9F1F: retn
