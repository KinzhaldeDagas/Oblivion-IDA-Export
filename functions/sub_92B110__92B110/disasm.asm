0x92B110: push    esi
0x92B111: mov     esi, ecx
0x92B113: mov     eax, [esi+1Ch]
0x92B116: push    edi
0x92B117: xor     edi, edi
0x92B119: test    eax, eax
0x92B11B: mov     dword ptr [esi], offset off_AA1BDC
0x92B121: mov     dword ptr [esi+8], offset off_AA1BD8
0x92B128: mov     dword ptr [esi+0Ch], offset off_AA1BD0
0x92B12F: mov     dword ptr [esi+10h], offset off_AA1BC8
0x92B136: mov     dword ptr [esi+14h], offset off_AA1BC4
0x92B13D: jle     short loc_92B166
0x92B13F: nop
0x92B140: mov     eax, [esi+18h]
0x92B143: mov     ecx, [eax+edi*4]
0x92B146: cmp     word ptr [ecx+4], 0
0x92B14B: jz      short loc_92B15E
0x92B14D: dec     word ptr [ecx+6]
0x92B151: cmp     word ptr [ecx+6], 0
0x92B156: jnz     short loc_92B15E
0x92B158: mov     edx, [ecx]
0x92B15A: push    1
0x92B15C: call    dword ptr [edx]
0x92B15E: mov     eax, [esi+1Ch]
0x92B161: inc     edi
0x92B162: cmp     edi, eax
0x92B164: jl      short loc_92B140
0x92B166: mov     eax, [esi+20h]
0x92B169: test    eax, eax
0x92B16B: js      short loc_92B1A1
0x92B16D: mov     ecx, ds:0BA9DE4h
0x92B173: mov     edx, large fs:2Ch
0x92B17A: mov     ecx, [edx+ecx*4]
0x92B17D: mov     ecx, [ecx+19Ch]
0x92B183: test    ecx, ecx
0x92B185: jnz     short loc_92B18D
0x92B187: mov     ecx, ds:0BA7D9Ch
0x92B18D: mov     edx, [esi+18h]
0x92B190: and     eax, 3FFFFFFFh
0x92B195: push    14h
0x92B197: shl     eax, 2
0x92B19A: push    eax
0x92B19B: push    edx
0x92B19C: call    sub_8A75D0
0x92B1A1: mov     dword ptr [esi+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x92B1A8: mov     dword ptr [esi+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x92B1AF: pop     edi
0x92B1B0: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x92B1B6: pop     esi
0x92B1B7: retn
