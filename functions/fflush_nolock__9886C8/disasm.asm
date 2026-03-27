0x9886C8: push    esi
0x9886C9: mov     esi, [esp+4+File]
0x9886CD: test    esi, esi
0x9886CF: jnz     short loc_9886DA
0x9886D1: push    esi
0x9886D2: call    _flsall
0x9886D7: pop     ecx
0x9886D8: pop     esi
0x9886D9: retn
0x9886DA: push    esi; File
0x9886DB: call    __flush
0x9886E0: test    eax, eax
0x9886E2: pop     ecx
0x9886E3: jz      short loc_9886EA
0x9886E5: or      eax, 0FFFFFFFFh
0x9886E8: pop     esi
0x9886E9: retn
0x9886EA: test    word ptr [esi+0Ch], 4000h
0x9886F0: jz      short loc_988706
0x9886F2: push    esi; File
0x9886F3: call    __fileno
0x9886F8: push    eax; int
0x9886F9: call    __commit
0x9886FE: pop     ecx
0x9886FF: pop     ecx
0x988700: neg     eax
0x988702: sbb     eax, eax
0x988704: pop     esi
0x988705: retn
0x988706: xor     eax, eax
0x988708: pop     esi
0x988709: retn
