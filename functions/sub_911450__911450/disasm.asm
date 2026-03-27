0x911450: test    [esp+arg_0], 1
0x911455: push    esi
0x911456: mov     esi, ecx
0x911458: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x91145E: jz      short loc_911473
0x911460: movzx   edx, word ptr [esi+4]
0x911464: mov     ecx, ds:0BA7D98h
0x91146A: mov     eax, [ecx]
0x91146C: push    29h ; ')'
0x91146E: push    edx
0x91146F: push    esi
0x911470: call    dword ptr [eax+14h]
0x911473: mov     eax, esi
0x911475: pop     esi
0x911476: retn    4
