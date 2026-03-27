0x40FEC0: mov     ecx, [esp+Format]
0x40FEC4: lea     eax, [esp+ArgList]
0x40FEC8: push    eax; ArgList
0x40FEC9: push    ecx; Format
0x40FECA: push    2; int
0x40FECC: call    MessageHandler_HandleMessage
0x40FED1: add     esp, 0Ch
0x40FED4: retn
