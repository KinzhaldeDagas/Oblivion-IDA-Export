0x927540: push    ebx
0x927541: push    ebp
0x927542: push    esi
0x927543: mov     esi, ecx
0x927545: mov     eax, [esi+20h]
0x927548: lea     ebp, [esi+18h]
0x92754B: xor     ebx, ebx
0x92754D: test    eax, eax
0x92754F: mov     dword ptr [esi], offset off_AA18A4
0x927555: mov     dword ptr [esi+8], offset off_AA18A0
0x92755C: mov     dword ptr [esi+0Ch], offset off_AA1898
0x927563: mov     dword ptr [esi+10h], offset off_AA1890
0x92756A: mov     dword ptr [esi+14h], offset off_A96B64
0x927571: mov     dword ptr [ebp+0], offset off_AA187C
0x927578: jle     short loc_9275F1
0x92757A: push    edi
0x92757B: jmp     short loc_927580
0x92757D: align 10h
0x927580: mov     eax, [esi+1Ch]
0x927583: mov     ecx, [eax+ebx*8]
0x927586: mov     edx, [ecx+0B0h]
0x92758C: xor     eax, eax
0x92758E: test    edx, edx
0x927590: jle     short loc_9275B0
0x927592: mov     edi, [ecx+0ACh]
0x927598: cmp     [edi], ebp
0x92759A: jz      short loc_9275A6
0x92759C: inc     eax
0x92759D: add     edi, 4
0x9275A0: cmp     eax, edx
0x9275A2: jl      short loc_927598
0x9275A4: jmp     short loc_9275B0
0x9275A6: test    eax, eax
0x9275A8: jl      short loc_9275B0
0x9275AA: push    ebp
0x9275AB: call    sub_8A6300
0x9275B0: mov     ecx, [esi+1Ch]
0x9275B3: mov     ecx, [ecx+ebx*8+4]
0x9275B7: mov     edx, [ecx+0B0h]
0x9275BD: xor     eax, eax
0x9275BF: test    edx, edx
0x9275C1: jle     short loc_9275E8
0x9275C3: mov     edi, [ecx+0ACh]
0x9275C9: lea     esp, [esp+0]
0x9275D0: cmp     [edi], ebp
0x9275D2: jz      short loc_9275DE
0x9275D4: inc     eax
0x9275D5: add     edi, 4
0x9275D8: cmp     eax, edx
0x9275DA: jl      short loc_9275D0
0x9275DC: jmp     short loc_9275E8
0x9275DE: test    eax, eax
0x9275E0: jl      short loc_9275E8
0x9275E2: push    ebp
0x9275E3: call    sub_8A6300
0x9275E8: mov     eax, [esi+20h]
0x9275EB: inc     ebx
0x9275EC: cmp     ebx, eax
0x9275EE: jl      short loc_927580
0x9275F0: pop     edi
0x9275F1: mov     eax, [esi+24h]
0x9275F4: test    eax, eax
0x9275F6: js      short loc_92762C
0x9275F8: mov     ecx, large fs:2Ch
0x9275FF: mov     edx, ds:0BA9DE4h
0x927605: mov     edx, [ecx+edx*4]
0x927608: mov     ecx, [edx+19Ch]
0x92760E: test    ecx, ecx
0x927610: jnz     short loc_927618
0x927612: mov     ecx, ds:0BA7D9Ch
0x927618: and     eax, 3FFFFFFFh
0x92761D: push    14h
0x92761F: shl     eax, 3
0x927622: push    eax
0x927623: mov     eax, [esi+1Ch]
0x927626: push    eax
0x927627: call    sub_8A75D0
0x92762C: mov     dword ptr [ebp+0], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x927633: mov     dword ptr [esi+10h], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x92763A: mov     dword ptr [esi+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x927641: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x927647: pop     esi
0x927648: pop     ebp
0x927649: pop     ebx
0x92764A: retn
