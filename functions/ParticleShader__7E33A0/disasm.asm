0x7E33A0: push    0FFFFFFFFh
0x7E33A2: push    offset SEH_8122A0
0x7E33A7: mov     eax, large fs:0
0x7E33AD: push    eax
0x7E33AE: push    ecx
0x7E33AF: push    ebx
0x7E33B0: push    esi
0x7E33B1: push    edi
0x7E33B2: mov     eax, ds:0B30AACh
0x7E33B7: xor     eax, esp
0x7E33B9: push    eax
0x7E33BA: lea     eax, [esp+20h+var_C]
0x7E33BE: mov     large fs:0, eax
0x7E33C4: push    8; Size
0x7E33C6: call    FormHeapAlloc
0x7E33CB: add     esp, 4
0x7E33CE: mov     [esp+20h+var_10], eax
0x7E33D2: xor     esi, esi
0x7E33D4: cmp     eax, esi
0x7E33D6: mov     [esp+20h+var_4], esi
0x7E33DA: jz      short loc_7E33E5
0x7E33DC: mov     ecx, eax
0x7E33DE: call    ShaderDefinition__Init
0x7E33E3: mov     esi, eax
0x7E33E5: mov     eax, ds:0B43104h
0x7E33EA: push    1; StreamCount
0x7E33EC: push    5; a2
0x7E33EE: push    eax; a1
0x7E33EF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7E33F7: call    CreateDX9ShaderDeclaration
0x7E33FC: mov     edi, [esi]
0x7E33FE: mov     ebx, eax
0x7E3400: add     esp, 0Ch
0x7E3403: cmp     edi, ebx
0x7E3405: jz      short loc_7E3437
0x7E3407: test    edi, edi
0x7E3409: jz      short loc_7E3427
0x7E340B: lea     ecx, [edi+4]
0x7E340E: push    ecx; lpAddend
0x7E340F: call    dword ptr ds:0A2807Ch
0x7E3415: test    eax, eax
0x7E3417: jnz     short loc_7E3427
0x7E3419: test    edi, edi
0x7E341B: jz      short loc_7E3427
0x7E341D: mov     edx, [edi]
0x7E341F: mov     eax, [edx]
0x7E3421: push    1
0x7E3423: mov     ecx, edi
0x7E3425: call    eax
0x7E3427: test    ebx, ebx
0x7E3429: mov     [esi], ebx
0x7E342B: jz      short loc_7E3437
0x7E342D: add     ebx, 4
0x7E3430: push    ebx; lpAddend
0x7E3431: call    dword ptr ds:0A28078h
0x7E3437: mov     ecx, [esi]
0x7E3439: mov     edx, [ecx]
0x7E343B: mov     eax, [edx+50h]
0x7E343E: push    0
0x7E3440: push    2
0x7E3442: push    0
0x7E3444: push    0
0x7E3446: push    0
0x7E3448: call    eax
0x7E344A: mov     ecx, [esi]
0x7E344C: mov     edx, [ecx]
0x7E344E: mov     eax, [edx+50h]
0x7E3451: push    0
0x7E3453: push    2
0x7E3455: push    3
0x7E3457: push    3
0x7E3459: push    1
0x7E345B: call    eax
0x7E345D: mov     ecx, [esi]
0x7E345F: mov     edx, [ecx]
0x7E3461: mov     eax, [edx+50h]
0x7E3464: push    0
0x7E3466: push    3
0x7E3468: push    4
0x7E346A: push    5
0x7E346C: push    2
0x7E346E: call    eax
0x7E3470: mov     ecx, [esi]
0x7E3472: mov     edx, [ecx]
0x7E3474: mov     eax, [edx+50h]
0x7E3477: push    0
0x7E3479: push    1
0x7E347B: push    5
0x7E347D: push    7
0x7E347F: push    3
0x7E3481: call    eax
0x7E3483: mov     ecx, [esi]
0x7E3485: mov     edx, [ecx]
0x7E3487: mov     eax, [edx+4Ch]
0x7E348A: push    0
0x7E348C: push    1
0x7E348E: push    0Ah
0x7E3490: push    0
0x7E3492: push    80000000h
0x7E3497: push    6
0x7E3499: push    4
0x7E349B: push    0
0x7E349D: call    eax
0x7E349F: mov     edi, [esi]
0x7E34A1: test    edi, edi
0x7E34A3: jz      short loc_7E34CA
0x7E34A5: mov     edx, [edi]
0x7E34A7: mov     eax, [edx+4]
0x7E34AA: mov     ecx, edi
0x7E34AC: call    eax
0x7E34AE: test    eax, eax
0x7E34B0: jz      short loc_7E34C0
0x7E34B2: cmp     eax, offset dword_B3F684
0x7E34B7: jz      short loc_7E34F3
0x7E34B9: mov     eax, [eax+4]
0x7E34BC: test    eax, eax
0x7E34BE: jnz     short loc_7E34B2
0x7E34C0: xor     al, al
0x7E34C2: neg     al
0x7E34C4: sbb     eax, eax
0x7E34C6: and     eax, edi
0x7E34C8: mov     edi, eax
0x7E34CA: push    148h; Size
0x7E34CF: call    FormHeapAlloc
0x7E34D4: add     esp, 4
0x7E34D7: mov     [esp+20h+var_10], eax
0x7E34DB: test    eax, eax
0x7E34DD: mov     [esp+20h+var_4], 1
0x7E34E5: jz      short loc_7E34F7
0x7E34E7: push    edi; a2
0x7E34E8: mov     ecx, eax; this
0x7E34EA: call    ??0ParticleShader@@QAE@XZ; ParticleShader::ParticleShader(void)
0x7E34EF: mov     edi, eax
0x7E34F1: jmp     short loc_7E34F9
0x7E34F3: mov     al, 1
0x7E34F5: jmp     short loc_7E34C2
0x7E34F7: xor     edi, edi
0x7E34F9: mov     edx, [edi]
0x7E34FB: mov     eax, [edx+84h]
0x7E3501: mov     ecx, edi
0x7E3503: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E350B: call    eax
0x7E350D: mov     edx, [edi]
0x7E350F: mov     eax, [edx+0A8h]
0x7E3515: mov     ecx, edi
0x7E3517: call    eax
0x7E3519: mov     edx, [edi]
0x7E351B: mov     eax, [edx+0ACh]
0x7E3521: mov     ecx, edi
0x7E3523: call    eax
0x7E3525: mov     edx, [edi]
0x7E3527: mov     eax, [edx+88h]
0x7E352D: mov     ecx, edi
0x7E352F: call    eax
0x7E3531: mov     ebx, [esi+4]
0x7E3534: cmp     ebx, edi
0x7E3536: jz      short loc_7E3565
0x7E3538: test    ebx, ebx
0x7E353A: jz      short loc_7E3558
0x7E353C: lea     ecx, [ebx+4]
0x7E353F: push    ecx; lpAddend
0x7E3540: call    dword ptr ds:0A2807Ch
0x7E3546: test    eax, eax
0x7E3548: jnz     short loc_7E3558
0x7E354A: test    ebx, ebx
0x7E354C: jz      short loc_7E3558
0x7E354E: mov     edx, [ebx]
0x7E3550: mov     eax, [edx]
0x7E3552: push    1
0x7E3554: mov     ecx, ebx
0x7E3556: call    eax
0x7E3558: mov     [esi+4], edi
0x7E355B: add     edi, 4
0x7E355E: push    edi; lpAddend
0x7E355F: call    dword ptr ds:0A28078h
0x7E3565: mov     ecx, [esi+4]
0x7E3568: mov     edx, [ecx]
0x7E356A: mov     eax, [esi]
0x7E356C: mov     edx, [edx+54h]
0x7E356F: push    eax
0x7E3570: call    edx
0x7E3572: mov     eax, esi
0x7E3574: mov     ecx, dword ptr [esp+20h+var_C]
0x7E3578: mov     large fs:0, ecx
0x7E357F: pop     ecx
0x7E3580: pop     edi
0x7E3581: pop     esi
0x7E3582: pop     ebx
0x7E3583: add     esp, 10h
0x7E3586: retn
