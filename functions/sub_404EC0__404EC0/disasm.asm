0x404EC0: mov     ecx, [esp+Format]
0x404EC4: lea     eax, [esp+ArgList]
0x404EC8: push    eax; ArgList
0x404EC9: push    ecx; Format
0x404ECA: push    0; int
0x404ECC: call    MessageHandler_HandleMessage
0x404ED1: add     esp, 0Ch
0x404ED4: retn
