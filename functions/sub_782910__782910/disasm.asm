0x782910: push    esi
0x782911: mov     esi, ecx
0x782913: lea     eax, [esi+4]
0x782916: push    eax; lpAddend
0x782917: call    dword ptr ds:0A28078h
0x78291D: mov     ecx, [esp+4+arg_0]
0x782921: mov     [ecx+4], esi
0x782924: pop     esi
0x782925: retn    4
