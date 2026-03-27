0x5E14C0: mov     ecx, [esp+Format]
0x5E14C4: lea     eax, [esp+ArgList]
0x5E14C8: push    eax; ArgList
0x5E14C9: push    ecx; Format
0x5E14CA: push    4; int
0x5E14CC: call    MessageHandler_HandleMessage
0x5E14D1: add     esp, 0Ch
0x5E14D4: retn
