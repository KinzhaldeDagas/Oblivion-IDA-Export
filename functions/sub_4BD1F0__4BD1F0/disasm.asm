0x4BD1F0: push    esi
0x4BD1F1: mov     esi, ecx
0x4BD1F3: cmp     dword ptr [esi+0Ch], 6
0x4BD1F7: jz      short loc_4BD224
0x4BD1F9: mov     eax, [esi+2Ch]
0x4BD1FC: mov     ecx, [esi+28h]
0x4BD1FF: push    eax
0x4BD200: call    sub_4BCEF0
0x4BD205: mov     eax, [esi+2Ch]
0x4BD208: mov     ecx, [eax+4]
0x4BD20B: mov     eax, [eax]
0x4BD20D: mov     esi, [esi+28h]
0x4BD210: push    ecx
0x4BD211: push    eax
0x4BD212: call    sub_4EF1D0
0x4BD217: mov     edx, [esi]
0x4BD219: add     esp, 8
0x4BD21C: push    eax
0x4BD21D: mov     eax, [edx+10h]
0x4BD220: mov     ecx, esi
0x4BD222: call    eax
0x4BD224: pop     esi
0x4BD225: retn
