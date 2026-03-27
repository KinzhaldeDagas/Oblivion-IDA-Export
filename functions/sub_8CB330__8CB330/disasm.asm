0x8CB330: push    ebx
0x8CB331: push    ebp
0x8CB332: push    esi
0x8CB333: mov     esi, ecx
0x8CB335: push    edi
0x8CB336: mov     edi, [esi+60h]
0x8CB339: dec     edi
0x8CB33A: lea     ebp, [esi+8]
0x8CB33D: mov     dword ptr [esi], offset off_A99BD0
0x8CB343: mov     dword ptr [ebp+0], offset off_A99BC4
0x8CB34A: mov     dword ptr [esi+48h], offset off_A99BBC
0x8CB351: mov     dword ptr [esi+4Ch], offset off_A99BA8
0x8CB358: mov     dword ptr [esi+50h], offset off_A99B94
0x8CB35F: mov     dword ptr [esi+54h], offset off_A99B88
0x8CB366: mov     dword ptr [esi+58h], offset off_A99B7C
0x8CB36D: js      short loc_8CB381
0x8CB36F: nop
0x8CB370: mov     eax, [esi+5Ch]
0x8CB373: mov     ecx, [eax+edi*4]
0x8CB376: push    ecx
0x8CB377: mov     ecx, esi
0x8CB379: call    sub_8CAFF0
0x8CB37E: dec     edi
0x8CB37F: jns     short loc_8CB370
0x8CB381: mov     eax, [esi+70h]
0x8CB384: test    eax, eax
0x8CB386: mov     edi, ds:0BA9DE4h
0x8CB38C: mov     ebx, large fs:2Ch
0x8CB393: js      short loc_8CB3BC
0x8CB395: mov     edx, [ebx+edi*4]
0x8CB398: mov     ecx, [edx+19Ch]
0x8CB39E: test    ecx, ecx
0x8CB3A0: jnz     short loc_8CB3A8
0x8CB3A2: mov     ecx, ds:0BA7D9Ch
0x8CB3A8: and     eax, 3FFFFFFFh
0x8CB3AD: push    14h
0x8CB3AF: shl     eax, 2
0x8CB3B2: push    eax
0x8CB3B3: mov     eax, [esi+68h]
0x8CB3B6: push    eax
0x8CB3B7: call    sub_8A75D0
0x8CB3BC: mov     eax, [esi+64h]
0x8CB3BF: test    eax, eax
0x8CB3C1: js      short loc_8CB3EA
0x8CB3C3: mov     ecx, [ebx+edi*4]
0x8CB3C6: mov     ecx, [ecx+19Ch]
0x8CB3CC: test    ecx, ecx
0x8CB3CE: jnz     short loc_8CB3D6
0x8CB3D0: mov     ecx, ds:0BA7D9Ch
0x8CB3D6: mov     edx, [esi+5Ch]
0x8CB3D9: and     eax, 3FFFFFFFh
0x8CB3DE: push    14h
0x8CB3E0: shl     eax, 2
0x8CB3E3: push    eax
0x8CB3E4: push    edx
0x8CB3E5: call    sub_8A75D0
0x8CB3EA: mov     dword ptr [esi+58h], offset off_A99B58
0x8CB3F1: mov     dword ptr [esi+54h], offset off_A99B58
0x8CB3F8: mov     dword ptr [esi+50h], offset ??_7hkPhantomListener@@6B@; const hkPhantomListener::`vftable'
0x8CB3FF: mov     dword ptr [esi+4Ch], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x8CB406: mov     ecx, ebp
0x8CB408: mov     dword ptr [esi+48h], offset off_A99B50
0x8CB40F: call    sub_8CB180
0x8CB414: pop     edi
0x8CB415: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8CB41B: pop     esi
0x8CB41C: pop     ebp
0x8CB41D: pop     ebx
0x8CB41E: retn
