0x4F9F30: fldz
0x4F9F32: mov     eax, [esp+a6]
0x4F9F36: mov     edx, [esp+a5]
0x4F9F3A: push    ecx
0x4F9F3B: fstp    [esp+4+a11]; a11
0x4F9F3E: push    1; a10
0x4F9F40: push    0; a9
0x4F9F42: push    0; a8
0x4F9F44: push    0; a7
0x4F9F46: push    eax; a6
0x4F9F47: push    edx; a5
0x4F9F48: push    ecx; a4
0x4F9F49: call    ScriptRunner_GetSingleton
0x4F9F4E: mov     ecx, eax; this
0x4F9F50: call    Script_RunEvent??
0x4F9F55: retn    8
