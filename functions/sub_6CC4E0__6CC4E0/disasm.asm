0x6CC4E0: push    esi
0x6CC4E1: mov     esi, ecx
0x6CC4E3: call    sub_6EBA00
0x6CC4E8: fldz
0x6CC4EA: fstp    dword ptr [esi+1Ch]
0x6CC4ED: xor     eax, eax
0x6CC4EF: fld     dword ptr ds:0A79F00h
0x6CC4F5: mov     [esi+0Ch], al
0x6CC4F8: fstp    dword ptr [esi+20h]
0x6CC4FB: mov     [esi+0Dh], al
0x6CC4FE: mov     [esi+0Eh], al
0x6CC501: mov     [esi+14h], eax
0x6CC504: mov     [esi+18h], eax
0x6CC507: mov     dword ptr [esi], offset ??_7NiBlendInterpolator@@6B@; const NiBlendInterpolator::`vftable'
0x6CC50D: mov     byte ptr [esi+0Fh], 0FFh
0x6CC511: mov     cl, 80h ; '€'
0x6CC513: mov     [esi+10h], cl
0x6CC516: mov     [esi+11h], cl
0x6CC519: fld     dword ptr ds:0A7DEB4h
0x6CC51F: fchs
0x6CC521: mov     eax, esi
0x6CC523: fstp    dword ptr [esi+24h]
0x6CC526: fld     dword ptr ds:0A7DEB4h
0x6CC52C: fchs
0x6CC52E: fstp    dword ptr [esi+28h]
0x6CC531: fld     dword ptr ds:0A7DEB4h
0x6CC537: fchs
0x6CC539: fstp    dword ptr [esi+2Ch]
0x6CC53C: pop     esi
0x6CC53D: retn
