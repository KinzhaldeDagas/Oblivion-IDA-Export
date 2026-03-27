0x7FB250: push    ebx
0x7FB251: push    ebp
0x7FB252: push    esi
0x7FB253: push    edi
0x7FB254: call    sub_8025F0
0x7FB259: mov     ebp, ds:0A2807Ch
0x7FB25F: mov     edi, offset dword_B47288
0x7FB264: xor     ebx, ebx
0x7FB266: mov     esi, [edi]
0x7FB268: cmp     esi, ebx
0x7FB26A: jz      short loc_7FB286
0x7FB26C: lea     eax, [esi+4]
0x7FB26F: push    eax; lpAddend
0x7FB270: call    ebp ; InterlockedDecrement
0x7FB272: test    eax, eax
0x7FB274: jnz     short loc_7FB284
0x7FB276: cmp     esi, ebx
0x7FB278: jz      short loc_7FB284
0x7FB27A: mov     edx, [esi]
0x7FB27C: mov     eax, [edx]
0x7FB27E: push    1
0x7FB280: mov     ecx, esi
0x7FB282: call    eax
0x7FB284: mov     [edi], ebx
0x7FB286: add     edi, 4
0x7FB289: cmp     edi, offset dword_B47308
0x7FB28F: jl      short loc_7FB266
0x7FB291: xor     edi, edi
0x7FB293: mov     esi, ds:dword_B46ED8[edi]
0x7FB299: cmp     esi, ebx
0x7FB29B: jz      short loc_7FB2BB
0x7FB29D: lea     ecx, [esi+4]
0x7FB2A0: push    ecx; lpAddend
0x7FB2A1: call    ebp ; InterlockedDecrement
0x7FB2A3: test    eax, eax
0x7FB2A5: jnz     short loc_7FB2B5
0x7FB2A7: cmp     esi, ebx
0x7FB2A9: jz      short loc_7FB2B5
0x7FB2AB: mov     edx, [esi]
0x7FB2AD: mov     eax, [edx]
0x7FB2AF: push    1
0x7FB2B1: mov     ecx, esi
0x7FB2B3: call    eax
0x7FB2B5: mov     ds:dword_B46ED8[edi], ebx
0x7FB2BB: mov     esi, ds:dword_B46C20[edi]
0x7FB2C1: cmp     esi, ebx
0x7FB2C3: jz      short loc_7FB2E3
0x7FB2C5: lea     ecx, [esi+4]
0x7FB2C8: push    ecx; lpAddend
0x7FB2C9: call    ebp ; InterlockedDecrement
0x7FB2CB: test    eax, eax
0x7FB2CD: jnz     short loc_7FB2DD
0x7FB2CF: cmp     esi, ebx
0x7FB2D1: jz      short loc_7FB2DD
0x7FB2D3: mov     edx, [esi]
0x7FB2D5: mov     eax, [edx]
0x7FB2D7: push    1
0x7FB2D9: mov     ecx, esi
0x7FB2DB: call    eax
0x7FB2DD: mov     ds:dword_B46C20[edi], ebx
0x7FB2E3: add     edi, 4
0x7FB2E6: cmp     edi, 9Ch ; 'œ'
0x7FB2EC: jl      short loc_7FB293
0x7FB2EE: mov     esi, offset dword_B473D0
0x7FB2F3: or      edi, 0FFFFFFFFh
0x7FB2F6: mov     ecx, [esi]
0x7FB2F8: cmp     ecx, ebx
0x7FB2FA: jz      short loc_7FB308
0x7FB2FC: add     [ecx+60h], edi
0x7FB2FF: jnz     short loc_7FB306
0x7FB301: call    sub_7604D0
0x7FB306: mov     [esi], ebx
0x7FB308: add     esi, 4
0x7FB30B: cmp     esi, offset dword_B474A8
0x7FB311: jl      short loc_7FB2F6
0x7FB313: mov     eax, ds:0B25AD0h
0x7FB318: mov     ebx, ds:0B25AD8h
0x7FB31E: mov     ebp, ds:0B25ADCh
0x7FB324: mov     edx, ds:0B25AD4h
0x7FB32A: mov     ds:0B46CC8h, eax
0x7FB32F: mov     ds:0B46CD0h, ebx
0x7FB335: mov     ds:0B46CD4h, ebp
0x7FB33B: mov     ecx, 80h ; '€'
0x7FB340: mov     esi, offset dword_B46CC8
0x7FB345: mov     edi, offset unk_B46CD8
0x7FB34A: mov     ds:0B46CCCh, edx
0x7FB350: rep movsd
0x7FB352: mov     ds:0B46F78h, eax
0x7FB357: mov     ds:0B46F80h, ebx
0x7FB35D: mov     ds:0B46F84h, ebp
0x7FB363: mov     ecx, 0C0h ; 'À'
0x7FB368: mov     esi, offset dword_B46F78
0x7FB36D: mov     edi, offset dword_B46F88
0x7FB372: mov     ds:0B46F7Ch, edx
0x7FB378: rep movsd
0x7FB37A: pop     edi
0x7FB37B: pop     esi
0x7FB37C: pop     ebp
0x7FB37D: mov     al, 1
0x7FB37F: pop     ebx
0x7FB380: retn
