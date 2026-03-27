0x4F9F00: fldz
0x4F9F02: mov     eax, [esp+a6]
0x4F9F06: mov     edx, [esp+a5]
0x4F9F0A: push    ecx
0x4F9F0B: fstp    [esp+4+a11]; a11
0x4F9F0E: push    0; a10
0x4F9F10: push    1; a9
0x4F9F12: push    0; a8
0x4F9F14: push    0; a7
0x4F9F16: push    eax; a6
0x4F9F17: push    edx; a5
0x4F9F18: push    ecx; a4
0x4F9F19: call    ScriptRunner_GetSingleton
0x4F9F1E: mov     ecx, eax; this
0x4F9F20: call    Script_RunEvent??
0x4F9F25: retn    8
