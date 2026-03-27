0x9907FD: push    ebp
0x9907FE: mov     ebp, esp
0x990800: sub     esp, 18h
0x990803: push    ebx
0x990804: push    [ebp+Locale]; struct localeinfo_struct *
0x990807: lea     ecx, [ebp+var_18]; this
0x99080A: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99080F: mov     ebx, [ebp+C]
0x990812: lea     eax, [ebx+1]
0x990815: cmp     eax, 100h
0x99081A: ja      short loc_99082B
0x99081C: mov     eax, [ebp+var_18.locinfo]
0x99081F: mov     eax, [eax+0C8h]
0x990825: movzx   eax, word ptr [eax+ebx*2]
0x990829: jmp     short loc_9908A0
0x99082B: mov     [ebp+C], ebx
0x99082E: sar     [ebp+C], 8
0x990832: lea     eax, [ebp+var_18]
0x990835: push    eax; Locale
0x990836: mov     eax, [ebp+C]
0x990839: and     eax, 0FFh
0x99083E: push    eax; C
0x99083F: call    __isleadbyte_l
0x990844: test    eax, eax
0x990846: pop     ecx
0x990847: pop     ecx
0x990848: jz      short loc_99085C
0x99084A: mov     al, byte ptr [ebp+C]
0x99084D: push    2
0x99084F: mov     [ebp+MultiByteStr], al
0x990852: mov     [ebp+var_7], bl
0x990855: mov     [ebp+var_6], 0
0x990859: pop     ecx
0x99085A: jmp     short loc_990866
0x99085C: xor     ecx, ecx
0x99085E: mov     [ebp+MultiByteStr], bl
0x990861: mov     [ebp+var_7], 0
0x990865: inc     ecx
0x990866: mov     eax, [ebp+var_18.locinfo]
0x990869: push    1; int
0x99086B: push    dword ptr [eax+14h]; Locale
0x99086E: push    dword ptr [eax+4]; CodePage
0x990871: lea     eax, [ebp+CharType]
0x990874: push    eax; lpCharType
0x990875: push    ecx; cbMultiByte
0x990876: lea     eax, [ebp+MultiByteStr]
0x990879: push    eax; lpMultiByteStr
0x99087A: lea     eax, [ebp+var_18]
0x99087D: push    1; dwInfoType
0x99087F: push    eax; struct localeinfo_struct *
0x990880: call    ___crtGetStringTypeA
0x990885: add     esp, 20h
0x990888: test    eax, eax
0x99088A: jnz     short loc_99089C
0x99088C: cmp     [ebp+var_C], al
0x99088F: jz      short loc_990898
0x990891: mov     eax, [ebp+var_10]
0x990894: and     dword ptr [eax+70h], 0FFFFFFFDh
0x990898: xor     eax, eax
0x99089A: jmp     short loc_9908B0
0x99089C: movzx   eax, [ebp+CharType]
0x9908A0: and     eax, [ebp+Type]
0x9908A3: cmp     [ebp+var_C], 0
0x9908A7: jz      short loc_9908B0
0x9908A9: mov     ecx, [ebp+var_10]
0x9908AC: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9908B0: pop     ebx
0x9908B1: leave
0x9908B2: retn
