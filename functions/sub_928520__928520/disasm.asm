0x928520: push    esi
0x928521: mov     esi, ecx
0x928523: mov     ecx, [esi+0Ch]
0x928526: test    ecx, ecx
0x928528: mov     dword ptr [esi], offset off_AA1990
0x92852E: jz      short loc_928548
0x928530: cmp     word ptr [ecx+4], 0
0x928535: jz      short loc_928548
0x928537: dec     word ptr [ecx+6]
0x92853B: cmp     word ptr [ecx+6], 0
0x928540: jnz     short loc_928548
0x928542: mov     eax, [ecx]
0x928544: push    1
0x928546: call    dword ptr [eax]
0x928548: test    [esp+4+arg_0], 1
0x92854D: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x928553: jz      short loc_928568
0x928555: movzx   eax, word ptr [esi+4]
0x928559: mov     ecx, ds:0BA7D98h
0x92855F: mov     edx, [ecx]
0x928561: push    29h ; ')'
0x928563: push    eax
0x928564: push    esi
0x928565: call    dword ptr [edx+14h]
0x928568: mov     eax, esi
0x92856A: pop     esi
0x92856B: retn    4
