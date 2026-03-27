0x98A045: push    ebx
0x98A046: push    ebp
0x98A047: push    esi
0x98A048: mov     esi, [esp+0Ch+lpAddend]
0x98A04C: push    edi
0x98A04D: mov     edi, ds:InterlockedIncrement
0x98A053: push    esi; lpAddend
0x98A054: call    edi ; InterlockedIncrement
0x98A056: mov     eax, [esi+0B0h]
0x98A05C: test    eax, eax
0x98A05E: jz      short loc_98A063
0x98A060: push    eax; lpAddend
0x98A061: call    edi ; InterlockedIncrement
0x98A063: mov     eax, [esi+0B8h]
0x98A069: test    eax, eax
0x98A06B: jz      short loc_98A070
0x98A06D: push    eax; lpAddend
0x98A06E: call    edi ; InterlockedIncrement
0x98A070: mov     eax, [esi+0B4h]
0x98A076: test    eax, eax
0x98A078: jz      short loc_98A07D
0x98A07A: push    eax; lpAddend
0x98A07B: call    edi ; InterlockedIncrement
0x98A07D: mov     eax, [esi+0C0h]
0x98A083: test    eax, eax
0x98A085: jz      short loc_98A08A
0x98A087: push    eax; lpAddend
0x98A088: call    edi ; InterlockedIncrement
0x98A08A: push    6
0x98A08C: lea     ebx, [esi+50h]
0x98A08F: pop     ebp
0x98A090: cmp     dword ptr [ebx-8], offset aC_1
0x98A097: jz      short loc_98A0A2
0x98A099: mov     eax, [ebx]
0x98A09B: test    eax, eax
0x98A09D: jz      short loc_98A0A2
0x98A09F: push    eax; lpAddend
0x98A0A0: call    edi ; InterlockedIncrement
0x98A0A2: cmp     dword ptr [ebx-4], 0
0x98A0A6: jz      short loc_98A0B2
0x98A0A8: mov     eax, [ebx+4]
0x98A0AB: test    eax, eax
0x98A0AD: jz      short loc_98A0B2
0x98A0AF: push    eax; lpAddend
0x98A0B0: call    edi ; InterlockedIncrement
0x98A0B2: add     ebx, 10h
0x98A0B5: dec     ebp
0x98A0B6: jnz     short loc_98A090
0x98A0B8: mov     eax, [esi+0D4h]
0x98A0BE: add     eax, 0B4h ; '´'
0x98A0C3: push    eax; lpAddend
0x98A0C4: call    edi ; InterlockedIncrement
0x98A0C6: pop     edi
0x98A0C7: pop     esi
0x98A0C8: pop     ebp
0x98A0C9: pop     ebx
0x98A0CA: retn
