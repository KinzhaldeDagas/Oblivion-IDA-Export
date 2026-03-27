0x7C35D0: push    0FFFFFFFFh
0x7C35D2: push    offset ??1CachedGeometry@TallGrassShaderProperty@@UAE@XZ_SEH
0x7C35D7: mov     eax, large fs:0
0x7C35DD: push    eax
0x7C35DE: push    ecx
0x7C35DF: push    ebx
0x7C35E0: push    esi
0x7C35E1: push    edi
0x7C35E2: mov     eax, ds:0B30AACh
0x7C35E7: xor     eax, esp
0x7C35E9: push    eax
0x7C35EA: lea     eax, [esp+20h+var_C]
0x7C35EE: mov     large fs:0, eax
0x7C35F4: mov     edi, ecx
0x7C35F6: mov     [esp+20h+var_10], edi
0x7C35FA: mov     esi, [edi+24h]
0x7C35FD: test    esi, esi
0x7C35FF: mov     ebx, ds:0A2807Ch
0x7C3605: mov     [esp+20h+var_4], 5
0x7C360D: jz      short loc_7C3627
0x7C360F: lea     eax, [esi+8]
0x7C3612: push    eax; lpAddend
0x7C3613: call    ebx ; InterlockedDecrement
0x7C3615: test    eax, eax
0x7C3617: jnz     short loc_7C3627
0x7C3619: test    esi, esi
0x7C361B: jz      short loc_7C3627
0x7C361D: mov     edx, [esi]
0x7C361F: mov     eax, [edx]
0x7C3621: push    1
0x7C3623: mov     ecx, esi
0x7C3625: call    eax
0x7C3627: mov     esi, [edi+20h]
0x7C362A: test    esi, esi
0x7C362C: mov     byte ptr [esp+20h+var_4], 4
0x7C3631: jz      short loc_7C364B
0x7C3633: lea     ecx, [esi+4]
0x7C3636: push    ecx; lpAddend
0x7C3637: call    ebx ; InterlockedDecrement
0x7C3639: test    eax, eax
0x7C363B: jnz     short loc_7C364B
0x7C363D: test    esi, esi
0x7C363F: jz      short loc_7C364B
0x7C3641: mov     edx, [esi]
0x7C3643: mov     eax, [edx]
0x7C3645: push    1
0x7C3647: mov     ecx, esi
0x7C3649: call    eax
0x7C364B: mov     esi, [edi+1Ch]
0x7C364E: test    esi, esi
0x7C3650: mov     byte ptr [esp+20h+var_4], 3
0x7C3655: jz      short loc_7C366F
0x7C3657: lea     ecx, [esi+4]
0x7C365A: push    ecx; lpAddend
0x7C365B: call    ebx ; InterlockedDecrement
0x7C365D: test    eax, eax
0x7C365F: jnz     short loc_7C366F
0x7C3661: test    esi, esi
0x7C3663: jz      short loc_7C366F
0x7C3665: mov     edx, [esi]
0x7C3667: mov     eax, [edx]
0x7C3669: push    1
0x7C366B: mov     ecx, esi
0x7C366D: call    eax
0x7C366F: mov     esi, [edi+18h]
0x7C3672: test    esi, esi
0x7C3674: mov     byte ptr [esp+20h+var_4], 2
0x7C3679: jz      short loc_7C3693
0x7C367B: lea     ecx, [esi+4]
0x7C367E: push    ecx; lpAddend
0x7C367F: call    ebx ; InterlockedDecrement
0x7C3681: test    eax, eax
0x7C3683: jnz     short loc_7C3693
0x7C3685: test    esi, esi
0x7C3687: jz      short loc_7C3693
0x7C3689: mov     edx, [esi]
0x7C368B: mov     eax, [edx]
0x7C368D: push    1
0x7C368F: mov     ecx, esi
0x7C3691: call    eax
0x7C3693: mov     esi, [edi+14h]
0x7C3696: test    esi, esi
0x7C3698: mov     byte ptr [esp+20h+var_4], 1
0x7C369D: jz      short loc_7C36B7
0x7C369F: lea     ecx, [esi+4]
0x7C36A2: push    ecx; lpAddend
0x7C36A3: call    ebx ; InterlockedDecrement
0x7C36A5: test    eax, eax
0x7C36A7: jnz     short loc_7C36B7
0x7C36A9: test    esi, esi
0x7C36AB: jz      short loc_7C36B7
0x7C36AD: mov     edx, [esi]
0x7C36AF: mov     eax, [edx]
0x7C36B1: push    1
0x7C36B3: mov     ecx, esi
0x7C36B5: call    eax
0x7C36B7: mov     esi, [edi+8]
0x7C36BA: test    esi, esi
0x7C36BC: mov     byte ptr [esp+20h+var_4], 0
0x7C36C1: jz      short loc_7C36DB
0x7C36C3: lea     ecx, [esi+4]
0x7C36C6: push    ecx; lpAddend
0x7C36C7: call    ebx ; InterlockedDecrement
0x7C36C9: test    eax, eax
0x7C36CB: jnz     short loc_7C36DB
0x7C36CD: test    esi, esi
0x7C36CF: jz      short loc_7C36DB
0x7C36D1: mov     edx, [esi]
0x7C36D3: mov     eax, [edx]
0x7C36D5: push    1
0x7C36D7: mov     ecx, esi
0x7C36D9: call    eax
0x7C36DB: push    offset NiRefObject_objcount; lpAddend
0x7C36E0: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7C36E6: call    ebx ; InterlockedDecrement
0x7C36E8: mov     ecx, dword ptr [esp+20h+var_C]
0x7C36EC: mov     large fs:0, ecx
0x7C36F3: pop     ecx
0x7C36F4: pop     edi
0x7C36F5: pop     esi
0x7C36F6: pop     ebx
0x7C36F7: add     esp, 10h
0x7C36FA: retn
