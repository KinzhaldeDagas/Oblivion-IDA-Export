0x4A7A60: mov     ecx, [esp+Format]; MEF v56 master diagnostics call this exact original cdecl variadic PrintError, as proven by44FD2C. It is distinct from404EC0 used by other MEF helpers. Full21-byte wrapper is signature-checked.
0x4A7A64: lea     eax, [esp+ArgList]
0x4A7A68: push    eax; ArgList
0x4A7A69: push    ecx; Format
0x4A7A6A: push    1; int
0x4A7A6C: call    MessageHandler_HandleMessage
0x4A7A71: add     esp, 0Ch
0x4A7A74: retn
