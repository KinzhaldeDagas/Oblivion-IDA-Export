0x483350: push    0FFFFFFFFh
0x483352: push    offset ??0GridCellArray@@QAE@XZ_SEH
0x483357: mov     eax, large fs:0
0x48335D: push    eax
0x48335E: sub     esp, 10h
0x483361: push    esi
0x483362: push    edi
0x483363: mov     eax, ds:0B30AACh
0x483368: xor     eax, esp
0x48336A: push    eax
0x48336B: lea     eax, [esp+28h+var_C]
0x48336F: mov     large fs:0, eax
0x483375: mov     esi, ecx
0x483377: mov     [esp+28h+var_1C], esi
0x48337B: call    sub_481DE0
0x483380: xor     eax, eax
0x483382: mov     dword ptr [esi], offset ??_7GridCellArray@@6B@; const GridCellArray::`vftable'
0x483388: mov     [esp+28h+var_4], eax
0x48338C: mov     [esi+24h], eax
0x48338F: mov     eax, ds:0B06A2Ch
0x483394: cmp     eax, 5
0x483397: mov     byte ptr [esp+28h+var_4], 1
0x48339C: jnb     short loc_4833A5
0x48339E: mov     eax, 5
0x4833A3: jmp     short loc_4833AC
0x4833A5: test    al, 1
0x4833A7: jnz     short loc_4833B1
0x4833A9: add     eax, 1
0x4833AC: mov     ds:0B06A2Ch, eax
0x4833B1: mov     [esi+0Ch], eax
0x4833B4: imul    eax, eax
0x4833B7: xor     ecx, ecx
0x4833B9: mov     edx, 8
0x4833BE: mul     edx
0x4833C0: seto    cl
0x4833C3: neg     ecx
0x4833C5: or      ecx, eax
0x4833C7: push    ecx; Size
0x4833C8: call    FormHeapAlloc
0x4833CD: mov     ecx, [esi+0Ch]
0x4833D0: mov     edx, ecx
0x4833D2: imul    edx, ecx
0x4833D5: add     edx, edx
0x4833D7: add     edx, edx
0x4833D9: add     edx, edx
0x4833DB: push    edx
0x4833DC: push    0
0x4833DE: push    eax
0x4833DF: mov     [esi+10h], eax
0x4833E2: call    __memset
0x4833E7: add     esp, 10h
0x4833EA: fldz
0x4833EC: fst     [esp+28h+var_18]
0x4833F0: mov     eax, [esp+28h+var_18]
0x4833F4: fst     [esp+28h+var_14]
0x4833F8: mov     ecx, [esp+28h+var_14]
0x4833FC: fstp    [esp+28h+var_10]
0x483400: mov     edx, [esp+28h+var_10]
0x483404: mov     [esi+14h], eax
0x483407: mov     [esi+18h], ecx
0x48340A: mov     [esi+1Ch], edx
0x48340D: mov     byte ptr ds:0B06A28h, 1
0x483414: mov     edi, [esi+24h]
0x483417: test    edi, edi
0x483419: jz      short loc_48343E
0x48341B: lea     eax, [edi+4]
0x48341E: push    eax; lpAddend
0x48341F: call    dword ptr ds:0A2807Ch
0x483425: test    eax, eax
0x483427: jnz     short loc_483437
0x483429: test    edi, edi
0x48342B: jz      short loc_483437
0x48342D: mov     edx, [edi]
0x48342F: mov     eax, [edx]
0x483431: push    1
0x483433: mov     ecx, edi
0x483435: call    eax
0x483437: mov     dword ptr [esi+24h], 0
0x48343E: mov     eax, esi
0x483440: mov     byte ptr [esi+20h], 0
0x483444: mov     ecx, dword ptr [esp+28h+var_C]
0x483448: mov     large fs:0, ecx
0x48344F: pop     ecx
0x483450: pop     edi
0x483451: pop     esi
0x483452: add     esp, 1Ch
0x483455: retn
