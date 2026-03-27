0x999594: push    ebp
0x999595: mov     ebp, esp
0x999597: sub     esp, 10h
0x99959A: push    ebx
0x99959B: push    esi
0x99959C: push    edi
0x99959D: mov     edi, [ebp+File]
0x9995A0: push    edi; File
0x9995A1: call    __fileno
0x9995A6: xor     ebx, ebx
0x9995A8: cmp     [edi+4], ebx
0x9995AB: pop     ecx
0x9995AC: mov     [ebp+var_4], eax
0x9995AF: jge     short loc_9995B4
0x9995B1: mov     [edi+4], ebx
0x9995B4: push    1; int
0x9995B6: push    ebx
0x9995B7: push    ebx; __int64
0x9995B8: push    eax; int
0x9995B9: call    __lseeki64
0x9995BE: mov     esi, edx
0x9995C0: add     esp, 10h
0x9995C3: cmp     esi, ebx
0x9995C5: mov     ecx, eax
0x9995C7: mov     dword ptr [ebp+var_10], ecx
0x9995CA: mov     dword ptr [ebp+var_10+4], esi
0x9995CD: jg      short loc_9995E0
0x9995CF: jl      short loc_9995D5
0x9995D1: cmp     ecx, ebx
0x9995D3: jnb     short loc_9995E0
0x9995D5: or      eax, 0FFFFFFFFh
0x9995D8: or      edx, 0FFFFFFFFh
0x9995DB: jmp     loc_999743
0x9995E0: mov     edx, [edi+0Ch]
0x9995E3: test    dx, 108h
0x9995E8: jnz     short loc_9995FB
0x9995EA: mov     eax, [edi+4]
0x9995ED: cdq
0x9995EE: sub     ecx, eax
0x9995F0: sbb     esi, edx
0x9995F2: mov     eax, ecx
0x9995F4: mov     edx, esi
0x9995F6: jmp     loc_999743
0x9995FB: mov     eax, [edi]
0x9995FD: mov     ecx, [edi+8]
0x999600: mov     ebx, eax
0x999602: sub     ebx, ecx
0x999604: test    dl, 3
0x999607: mov     [ebp+var_8], ebx
0x99960A: jz      short loc_99964B
0x99960C: mov     ebx, [ebp+var_4]
0x99960F: mov     edx, [ebp+var_4]
0x999612: and     ebx, 1Fh
0x999615: imul    ebx, 28h ; '('
0x999618: sar     edx, 5
0x99961B: mov     edx, dword_BAAAC0[edx*4]
0x999622: test    byte ptr [edx+ebx+4], 80h
0x999627: jz      short loc_99963A
0x999629: mov     edx, ecx
0x99962B: jmp     short loc_999636
0x99962D: cmp     byte ptr [edx], 0Ah
0x999630: jnz     short loc_999635
0x999632: inc     [ebp+var_8]
0x999635: inc     edx
0x999636: cmp     edx, eax
0x999638: jb      short loc_99962D
0x99963A: mov     edx, dword ptr [ebp+var_10]
0x99963D: or      edx, esi
0x99963F: jnz     short loc_99965F
0x999641: mov     eax, [ebp+var_8]
0x999644: xor     edx, edx
0x999646: jmp     loc_999743
0x99964B: test    dl, dl
0x99964D: js      short loc_99963A
0x99964F: call    __errno
0x999654: mov     dword ptr [eax], 16h
0x99965A: jmp     loc_9995D5
0x99965F: test    byte ptr [edi+0Ch], 1
0x999663: jz      loc_999739
0x999669: mov     edx, [edi+4]
0x99966C: test    edx, edx
0x99966E: jnz     short loc_999678
0x999670: and     [ebp+var_8], edx
0x999673: jmp     loc_999739
0x999678: mov     esi, [ebp+var_4]
0x99967B: mov     ebx, [ebp+var_4]
0x99967E: and     esi, 1Fh
0x999681: imul    esi, 28h ; '('
0x999684: sub     eax, ecx
0x999686: add     eax, edx
0x999688: sar     ebx, 5
0x99968B: lea     ebx, ds:0BAAAC0h[ebx*4]
0x999692: mov     [ebp+File], eax
0x999695: mov     eax, [ebx]
0x999697: test    byte ptr [eax+esi+4], 80h
0x99969C: jz      loc_99972C
0x9996A2: push    2; int
0x9996A4: push    0
0x9996A6: push    0; __int64
0x9996A8: push    [ebp+var_4]; int
0x9996AB: call    __lseeki64
0x9996B0: add     esp, 10h
0x9996B3: cmp     eax, dword ptr [ebp+var_10]
0x9996B6: jnz     short loc_9996DC
0x9996B8: cmp     edx, dword ptr [ebp+var_10+4]
0x9996BB: jnz     short loc_9996DC
0x9996BD: mov     eax, [edi+8]
0x9996C0: mov     ecx, [ebp+File]
0x9996C3: add     ecx, eax
0x9996C5: jmp     short loc_9996D0
0x9996C7: cmp     byte ptr [eax], 0Ah
0x9996CA: jnz     short loc_9996CF
0x9996CC: inc     [ebp+File]
0x9996CF: inc     eax
0x9996D0: cmp     eax, ecx
0x9996D2: jb      short loc_9996C7
0x9996D4: test    word ptr [edi+0Ch], 2000h
0x9996DA: jmp     short loc_999727
0x9996DC: push    0; int
0x9996DE: push    dword ptr [ebp+var_10+4]
0x9996E1: push    dword ptr [ebp+var_10]; __int64
0x9996E4: push    [ebp+var_4]; int
0x9996E7: call    __lseeki64
0x9996EC: add     esp, 10h
0x9996EF: test    edx, edx
0x9996F1: jg      short loc_999701
0x9996F3: jl      loc_9995D5
0x9996F9: test    eax, eax
0x9996FB: jb      loc_9995D5
0x999701: mov     eax, 200h
0x999706: cmp     [ebp+File], eax
0x999709: ja      short loc_99971A
0x99970B: mov     ecx, [edi+0Ch]
0x99970E: test    cl, 8
0x999711: jz      short loc_99971A
0x999713: test    cx, 400h
0x999718: jz      short loc_99971D
0x99971A: mov     eax, [edi+18h]
0x99971D: mov     [ebp+File], eax
0x999720: mov     eax, [ebx]
0x999722: test    byte ptr [eax+esi+4], 4
0x999727: jz      short loc_99972C
0x999729: inc     [ebp+File]
0x99972C: mov     eax, [ebp+File]
0x99972F: sub     dword ptr [ebp+var_10], eax
0x999732: sbb     dword ptr [ebp+var_10+4], 0
0x999736: mov     esi, dword ptr [ebp+var_10+4]
0x999739: mov     eax, [ebp+var_8]
0x99973C: xor     edx, edx
0x99973E: add     eax, dword ptr [ebp+var_10]
0x999741: adc     edx, esi
0x999743: pop     edi
0x999744: pop     esi
0x999745: pop     ebx
0x999746: leave
0x999747: retn
