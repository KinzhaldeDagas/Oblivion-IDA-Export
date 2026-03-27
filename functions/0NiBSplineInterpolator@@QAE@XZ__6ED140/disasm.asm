0x6ED140: push    esi
0x6ED141: push    edi
0x6ED142: mov     esi, ecx
0x6ED144: call    sub_6EBA00
0x6ED149: mov     eax, [esp+8+arg_0]
0x6ED14D: test    eax, eax
0x6ED14F: mov     edi, ds:0A28078h
0x6ED155: mov     dword ptr [esi], offset ??_7NiBSplineInterpolator@@6B@; const NiBSplineInterpolator::`vftable'
0x6ED15B: fld     dword ptr ds:0A7DEB4h
0x6ED161: fstp    dword ptr [esi+0Ch]
0x6ED164: fld     dword ptr ds:0A7DEB4h
0x6ED16A: fchs
0x6ED16C: fstp    dword ptr [esi+10h]
0x6ED16F: mov     [esi+14h], eax
0x6ED172: jz      short loc_6ED17A
0x6ED174: add     eax, 4
0x6ED177: push    eax; lpAddend
0x6ED178: call    edi ; InterlockedIncrement
0x6ED17A: mov     eax, [esp+8+arg_4]
0x6ED17E: test    eax, eax
0x6ED180: mov     [esi+18h], eax
0x6ED183: jz      short loc_6ED18B
0x6ED185: add     eax, 4
0x6ED188: push    eax; lpAddend
0x6ED189: call    edi ; InterlockedIncrement
0x6ED18B: pop     edi
0x6ED18C: mov     eax, esi
0x6ED18E: pop     esi
0x6ED18F: retn    8
