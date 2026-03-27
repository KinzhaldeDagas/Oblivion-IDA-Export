0x533D30: mov     ecx, [esp+Format]
0x533D34: mov     edx, [esp+arg_0]
0x533D38: lea     eax, [esp+ArgList]
0x533D3C: push    eax; ArgList
0x533D3D: push    ecx; Format
0x533D3E: push    edx; int
0x533D3F: call    MessageHandler_HandleMessage
0x533D44: add     esp, 0Ch
0x533D47: retn
