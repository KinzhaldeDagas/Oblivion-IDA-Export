0x91F720: push    esi
0x91F721: mov     esi, ecx
0x91F723: mov     eax, [esi+18h]
0x91F726: test    eax, eax
0x91F728: js      short loc_91F75E
0x91F72A: mov     ecx, ds:0BA9DE4h
0x91F730: mov     edx, large fs:2Ch
0x91F737: mov     ecx, [edx+ecx*4]
0x91F73A: mov     ecx, [ecx+19Ch]
0x91F740: test    ecx, ecx
0x91F742: jnz     short loc_91F74A
0x91F744: mov     ecx, ds:0BA7D9Ch
0x91F74A: mov     edx, [esi+10h]
0x91F74D: and     eax, 3FFFFFFFh
0x91F752: push    14h
0x91F754: shl     eax, 5
0x91F757: push    eax
0x91F758: push    edx
0x91F759: call    sub_8A75D0
0x91F75E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x91F764: pop     esi
0x91F765: retn
