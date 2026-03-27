0x9EB190: push    23h ; '#'
0x9EB192: push    offset aIperkheavyarmo; "iPerkHeavyArmorJumpSum"
0x9EB197: mov     ecx, offset iPerkHeavyArmorJumpSum
0x9EB19C: call    GameSetting_ConstrAndReg
0x9EB1A1: push    offset sub_A1F0A0; void (__cdecl *)()
0x9EB1A6: call    _atexit
0x9EB1AB: pop     ecx
0x9EB1AC: retn
