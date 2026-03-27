0x435300: sub     esp, 8
0x435303: push    ebx
0x435304: push    esi
0x435305: push    edi
0x435306: mov     esi, ecx
0x435308: push    offset aQueuedheadRun; lpCriticalSection
0x43530D: mov     ecx, offset stru_B39C80
0x435312: call    NiEnterCriticalSection
0x435317: lea     eax, [esp+14h+var_4]
0x43531B: push    eax
0x43531C: lea     ecx, [esp+18h+var_8]
0x435320: push    ecx
0x435321: mov     ecx, [esi+20h]
0x435324: mov     [esp+1Ch+var_8], 0
0x43532C: mov     [esp+1Ch+var_4], 0
0x435334: call    sub_523220
0x435339: mov     eax, [esp+14h+var_8]
0x43533D: mov     edi, [esi+24h]
0x435340: cmp     edi, eax
0x435342: mov     ebx, eax
0x435344: jz      short loc_435377
0x435346: test    edi, edi
0x435348: jz      short loc_435366
0x43534A: lea     edx, [edi+4]
0x43534D: push    edx; lpAddend
0x43534E: call    ds:InterlockedDecrement
0x435354: test    eax, eax
0x435356: jnz     short loc_435366
0x435358: test    edi, edi
0x43535A: jz      short loc_435366
0x43535C: mov     eax, [edi]
0x43535E: mov     edx, [eax]
0x435360: push    1
0x435362: mov     ecx, edi
0x435364: call    edx
0x435366: test    ebx, ebx
0x435368: mov     [esi+24h], ebx
0x43536B: jz      short loc_435377
0x43536D: add     ebx, 4
0x435370: push    ebx; lpAddend
0x435371: call    ds:InterlockedIncrement
0x435377: mov     eax, [esp+14h+var_4]
0x43537B: mov     edi, [esi+28h]
0x43537E: cmp     edi, eax
0x435380: mov     ebx, eax
0x435382: jz      short loc_4353B5
0x435384: test    edi, edi
0x435386: jz      short loc_4353A4
0x435388: lea     eax, [edi+4]
0x43538B: push    eax; lpAddend
0x43538C: call    ds:InterlockedDecrement
0x435392: test    eax, eax
0x435394: jnz     short loc_4353A4
0x435396: test    edi, edi
0x435398: jz      short loc_4353A4
0x43539A: mov     edx, [edi]
0x43539C: mov     eax, [edx]
0x43539E: push    1
0x4353A0: mov     ecx, edi
0x4353A2: call    eax
0x4353A4: test    ebx, ebx
0x4353A6: mov     [esi+28h], ebx
0x4353A9: jz      short loc_4353B5
0x4353AB: add     ebx, 4
0x4353AE: push    ebx; lpAddend
0x4353AF: call    ds:InterlockedIncrement
0x4353B5: mov     ecx, offset stru_B39C80; lpCriticalSection
0x4353BA: call    NiLeaveCriticalSection_0
0x4353BF: pop     edi
0x4353C0: pop     esi
0x4353C1: pop     ebx
0x4353C2: add     esp, 8
0x4353C5: retn
