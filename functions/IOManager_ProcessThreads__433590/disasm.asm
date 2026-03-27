0x433590: push    0FFFFFFFFh
0x433592: push    offset SEH_433590
0x433597: mov     eax, large fs:0
0x43359D: push    eax
0x43359E: sub     esp, 18h
0x4335A1: push    ebx
0x4335A2: push    ebp
0x4335A3: push    esi
0x4335A4: push    edi
0x4335A5: mov     eax, ___security_cookie
0x4335AA: xor     eax, esp
0x4335AC: push    eax
0x4335AD: lea     eax, [esp+38h+var_C]
0x4335B1: mov     large fs:0, eax
0x4335B7: mov     ebx, ecx
0x4335B9: lea     eax, [esp+38h+PerformanceCount]
0x4335BD: push    eax; lpPerformanceCount
0x4335BE: call    ds:QueryPerformanceCounter
0x4335C4: cmp     dword ptr [ebx+38h], 6
0x4335C8: mov     ecx, dword ptr Frequency+4
0x4335CE: mov     edx, dword ptr Frequency
0x4335D4: mov     eax, dword_B048E4
0x4335D9: push    ecx
0x4335DA: push    edx
0x4335DB: push    0
0x4335DD: jz      short loc_4335E4
0x4335DF: mov     eax, dword_B048EC
0x4335E4: push    eax
0x4335E5: call    __allmul
0x4335EA: push    0
0x4335EC: push    3E8h
0x4335F1: push    edx
0x4335F2: push    eax
0x4335F3: call    __alldiv
0x4335F8: add     dword ptr [esp+38h+PerformanceCount], eax
0x4335FC: mov     ecx, ModelLoaderPtr
0x433602: adc     dword ptr [esp+38h+PerformanceCount+4], edx
0x433606: call    sub_43D3F0
0x43360B: lea     ecx, [esp+38h+a2]
0x43360F: push    ecx; a2
0x433610: mov     ecx, [ebx+34h]; this
0x433613: call    IOManager_43C030
0x433618: mov     ecx, [esp+38h+a2]
0x43361C: test    ecx, ecx
0x43361E: mov     ebp, ds:InterlockedDecrement
0x433624: mov     [esp+38h+var_4], 0
0x43362C: jz      loc_43371A
0x433632: mov     edx, [ecx]
0x433634: mov     eax, [edx+14h]
0x433637: call    eax
0x433639: mov     ecx, ModelLoaderPtr; void *
0x43363F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x433644: lea     ecx, [esp+38h+var_14]
0x433648: push    ecx; lpPerformanceCount
0x433649: call    ds:QueryPerformanceCounter
0x43364F: mov     edx, dword ptr [esp+38h+var_14+4]
0x433653: cmp     edx, dword ptr [esp+38h+PerformanceCount+4]
0x433657: jg      loc_4336F2
0x43365D: jl      short loc_43366D
0x43365F: mov     eax, dword ptr [esp+38h+var_14]
0x433663: cmp     eax, dword ptr [esp+38h+PerformanceCount]
0x433667: jnb     loc_4336F2
0x43366D: lea     ecx, [esp+38h+var_20]
0x433671: push    ecx; a2
0x433672: mov     ecx, [ebx+34h]; this
0x433675: call    IOManager_43C030
0x43367A: mov     edi, eax
0x43367C: mov     ecx, [esp+38h+a2]
0x433680: cmp     ecx, [edi]
0x433682: mov     byte ptr [esp+38h+var_4], 1
0x433687: jz      short loc_4336BF
0x433689: test    ecx, ecx
0x43368B: jz      short loc_4336A7
0x43368D: mov     esi, ecx
0x43368F: add     ecx, 8
0x433692: push    ecx; lpAddend
0x433693: call    ebp ; InterlockedDecrement
0x433695: test    eax, eax
0x433697: jnz     short loc_4336A7
0x433699: test    esi, esi
0x43369B: jz      short loc_4336A7
0x43369D: mov     edx, [esi]
0x43369F: mov     eax, [edx]
0x4336A1: push    1
0x4336A3: mov     ecx, esi
0x4336A5: call    eax
0x4336A7: mov     ecx, [edi]
0x4336A9: test    ecx, ecx
0x4336AB: mov     [esp+38h+a2], ecx
0x4336AF: jz      short loc_4336BF
0x4336B1: add     ecx, 8
0x4336B4: push    ecx; lpAddend
0x4336B5: call    ds:InterlockedIncrement
0x4336BB: mov     ecx, [esp+38h+a2]
0x4336BF: mov     esi, [esp+38h+var_20]
0x4336C3: test    esi, esi
0x4336C5: mov     byte ptr [esp+38h+var_4], 0
0x4336CA: jz      short loc_4336E8
0x4336CC: lea     ecx, [esi+8]
0x4336CF: push    ecx; lpAddend
0x4336D0: call    ebp ; InterlockedDecrement
0x4336D2: test    eax, eax
0x4336D4: jnz     short loc_4336E4
0x4336D6: test    esi, esi
0x4336D8: jz      short loc_4336E4
0x4336DA: mov     edx, [esi]
0x4336DC: mov     eax, [edx]
0x4336DE: push    1
0x4336E0: mov     ecx, esi
0x4336E2: call    eax
0x4336E4: mov     ecx, [esp+38h+a2]
0x4336E8: test    ecx, ecx
0x4336EA: jnz     loc_433632
0x4336F0: jmp     short loc_43371A
0x4336F2: mov     ecx, [esp+38h+a2]
0x4336F6: test    ecx, ecx
0x4336F8: jz      short loc_43371A
0x4336FA: mov     esi, ecx
0x4336FC: add     ecx, 8
0x4336FF: push    ecx; lpAddend
0x433700: call    ebp ; InterlockedDecrement
0x433702: test    eax, eax
0x433704: jnz     short loc_433714
0x433706: test    esi, esi
0x433708: jz      short loc_433714
0x43370A: mov     edx, [esi]
0x43370C: mov     eax, [edx]
0x43370E: push    1
0x433710: mov     ecx, esi
0x433712: call    eax
0x433714: xor     ecx, ecx
0x433716: mov     [esp+38h+a2], ecx
0x43371A: test    ecx, ecx
0x43371C: mov     [esp+38h+var_4], 0FFFFFFFFh
0x433724: jz      short loc_433740
0x433726: mov     esi, ecx
0x433728: add     ecx, 8
0x43372B: push    ecx; lpAddend
0x43372C: call    ebp ; InterlockedDecrement
0x43372E: test    eax, eax
0x433730: jnz     short loc_433740
0x433732: test    esi, esi
0x433734: jz      short loc_433740
0x433736: mov     edx, [esi]
0x433738: mov     eax, [edx]
0x43373A: push    1
0x43373C: mov     ecx, esi
0x43373E: call    eax
0x433740: mov     ecx, dword ptr [esp+38h+var_C]
0x433744: mov     large fs:0, ecx
0x43374B: pop     ecx
0x43374C: pop     edi
0x43374D: pop     esi
0x43374E: pop     ebp
0x43374F: pop     ebx
0x433750: add     esp, 24h
0x433753: retn
