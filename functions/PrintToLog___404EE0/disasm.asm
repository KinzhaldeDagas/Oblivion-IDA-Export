0x404EE0: mov     ecx, [esp+Format]
0x404EE4: lea     eax, [esp+ArgList]
0x404EE8: push    eax; ArgList
0x404EE9: push    ecx; Format
0x404EEA: push    3; int
0x404EEC: call    MessageHandler_HandleMessage
0x404EF1: add     esp, 0Ch
0x404EF4: retn
