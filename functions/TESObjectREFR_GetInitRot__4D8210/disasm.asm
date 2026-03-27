0x4D8210: push    esi
0x4D8211: mov     esi, [esp+4+a2]
0x4D8215: push    ecx; a2
0x4D8216: push    esi; a1
0x4D8217: add     ecx, 44h ; 'D'; this
0x4D821A: call    GetInitialRotation
0x4D821F: mov     eax, esi
0x4D8221: pop     esi
0x4D8222: retn    4
