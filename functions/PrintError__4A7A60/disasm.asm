0x4A7A60: mov     ecx, [esp+Format]
0x4A7A64: lea     eax, [esp+ArgList]
0x4A7A68: push    eax; ArgList
0x4A7A69: push    ecx; Format
0x4A7A6A: push    1; int
0x4A7A6C: call    MessageHandler_HandleMessage
0x4A7A71: add     esp, 0Ch
0x4A7A74: retn
