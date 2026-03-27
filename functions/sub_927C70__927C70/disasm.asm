0x927C70: push    ebx
0x927C71: push    ebp
0x927C72: push    esi
0x927C73: mov     esi, ecx
0x927C75: mov     eax, [esi+20h]
0x927C78: lea     ebp, [esi+18h]
0x927C7B: xor     ebx, ebx
0x927C7D: test    eax, eax
0x927C7F: mov     dword ptr [esi], offset off_AA1908
0x927C85: mov     dword ptr [esi+8], offset off_AA1904
0x927C8C: mov     dword ptr [esi+0Ch], offset off_AA18FC
0x927C93: mov     dword ptr [esi+10h], offset off_AA18F4
0x927C9A: mov     dword ptr [esi+14h], offset off_A96B64
0x927CA1: mov     dword ptr [ebp+0], offset off_AA18E0
0x927CA8: jle     short loc_927CE9
0x927CAA: push    edi
0x927CAB: jmp     short loc_927CB0
0x927CAD: align 10h
0x927CB0: mov     eax, [esi+1Ch]
0x927CB3: mov     ecx, [eax+ebx*4]
0x927CB6: mov     edx, [ecx+0B0h]
0x927CBC: xor     eax, eax
0x927CBE: test    edx, edx
0x927CC0: jle     short loc_927CE0
0x927CC2: mov     edi, [ecx+0ACh]
0x927CC8: cmp     [edi], ebp
0x927CCA: jz      short loc_927CD6
0x927CCC: inc     eax
0x927CCD: add     edi, 4
0x927CD0: cmp     eax, edx
0x927CD2: jl      short loc_927CC8
0x927CD4: jmp     short loc_927CE0
0x927CD6: test    eax, eax
0x927CD8: jl      short loc_927CE0
0x927CDA: push    ebp
0x927CDB: call    sub_8A6300
0x927CE0: mov     eax, [esi+20h]
0x927CE3: inc     ebx
0x927CE4: cmp     ebx, eax
0x927CE6: jl      short loc_927CB0
0x927CE8: pop     edi
0x927CE9: mov     eax, [esi+24h]
0x927CEC: test    eax, eax
0x927CEE: js      short loc_927D24
0x927CF0: mov     ecx, ds:0BA9DE4h
0x927CF6: mov     edx, large fs:2Ch
0x927CFD: mov     ecx, [edx+ecx*4]
0x927D00: mov     ecx, [ecx+19Ch]
0x927D06: test    ecx, ecx
0x927D08: jnz     short loc_927D10
0x927D0A: mov     ecx, ds:0BA7D9Ch
0x927D10: mov     edx, [esi+1Ch]
0x927D13: and     eax, 3FFFFFFFh
0x927D18: push    14h
0x927D1A: shl     eax, 2
0x927D1D: push    eax
0x927D1E: push    edx
0x927D1F: call    sub_8A75D0
0x927D24: mov     dword ptr [ebp+0], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x927D2B: mov     dword ptr [esi+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x927D32: mov     dword ptr [esi+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x927D39: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x927D3F: pop     esi
0x927D40: pop     ebp
0x927D41: pop     ebx
0x927D42: retn
