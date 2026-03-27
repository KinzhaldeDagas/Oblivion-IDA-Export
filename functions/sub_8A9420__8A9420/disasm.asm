0x8A9420: push    esi
0x8A9421: mov     esi, ecx
0x8A9423: mov     ecx, [esp+4+arg_0]
0x8A9427: mov     eax, [esi]
0x8A9429: mov     edx, [eax+18h]
0x8A942C: push    ecx
0x8A942D: mov     ecx, esi
0x8A942F: call    edx
0x8A9431: test    eax, eax
0x8A9433: jz      short loc_8A9450
0x8A9435: push    ecx
0x8A9436: mov     ecx, esp
0x8A9438: mov     [ecx], eax
0x8A943A: add     eax, 4
0x8A943D: mov     [esp+8+arg_0], esp
0x8A9441: push    eax; lpAddend
0x8A9442: call    dword ptr ds:0A28078h
0x8A9448: lea     ecx, [esi+0Ch]
0x8A944B: call    sub_67A760
0x8A9450: pop     esi
0x8A9451: retn    4
