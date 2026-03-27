0x4F9F60: fld     [esp+arg_8]
0x4F9F64: mov     eax, [esp+a6]
0x4F9F68: mov     edx, [esp+a5]
0x4F9F6C: push    ecx
0x4F9F6D: fstp    [esp+4+a11]; a11
0x4F9F70: push    0; a10
0x4F9F72: push    0; a9
0x4F9F74: push    0; a8
0x4F9F76: push    0; a7
0x4F9F78: push    eax; a6
0x4F9F79: push    edx; a5
0x4F9F7A: push    ecx; a4
0x4F9F7B: call    ScriptRunner_GetSingleton
0x4F9F80: mov     ecx, eax; this
0x4F9F82: call    Script_RunEvent??
0x4F9F87: retn    0Ch
