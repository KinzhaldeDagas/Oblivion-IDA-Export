0x7D7490: push    0FFFFFFFFh
0x7D7492: push    offset ??1BSShaderPPLightingProperty@@UAE@XZ_SEH
0x7D7497: mov     eax, large fs:0
0x7D749D: push    eax
0x7D749E: sub     esp, 8
0x7D74A1: push    ebx
0x7D74A2: push    ebp
0x7D74A3: push    esi
0x7D74A4: push    edi
0x7D74A5: mov     eax, ds:0B30AACh
0x7D74AA: xor     eax, esp
0x7D74AC: push    eax
0x7D74AD: lea     eax, [esp+28h+var_C]
0x7D74B1: mov     large fs:0, eax
0x7D74B7: mov     esi, ecx
0x7D74B9: mov     [esp+28h+var_10], esi
0x7D74BD: mov     dword ptr [esi], offset ??_7BSShaderPPLightingProperty@@6B@; const BSShaderPPLightingProperty::`vftable'
0x7D74C3: xor     ebp, ebp
0x7D74C5: cmp     [esi+0BCh], ebp
0x7D74CB: mov     [esp+28h+var_4], 2
0x7D74D3: jz      loc_7D7639
0x7D74D9: xor     eax, eax
0x7D74DB: cmp     [esi+0B8h], bp
0x7D74E2: mov     [esp+28h+var_14], eax
0x7D74E6: jbe     loc_7D75A9
0x7D74EC: lea     esp, [esp+0]
0x7D74F0: mov     edi, [esi+0BCh]
0x7D74F6: lea     ebx, ds:0[eax*4]
0x7D74FD: mov     ebp, [edi+ebx]
0x7D7500: add     edi, ebx
0x7D7502: test    ebp, ebp
0x7D7504: jz      short loc_7D7529
0x7D7506: lea     eax, [ebp+4]
0x7D7509: push    eax; lpAddend
0x7D750A: call    dword ptr ds:0A2807Ch
0x7D7510: test    eax, eax
0x7D7512: jnz     short loc_7D7523
0x7D7514: test    ebp, ebp
0x7D7516: jz      short loc_7D7523
0x7D7518: mov     edx, [ebp+0]
0x7D751B: mov     eax, [edx]
0x7D751D: push    1
0x7D751F: mov     ecx, ebp
0x7D7521: call    eax
0x7D7523: mov     dword ptr [edi], 0
0x7D7529: mov     edi, [esi+0C0h]
0x7D752F: mov     ebp, [edi+ebx]
0x7D7532: add     edi, ebx
0x7D7534: test    ebp, ebp
0x7D7536: jz      short loc_7D755B
0x7D7538: lea     ecx, [ebp+4]
0x7D753B: push    ecx; lpAddend
0x7D753C: call    dword ptr ds:0A2807Ch
0x7D7542: test    eax, eax
0x7D7544: jnz     short loc_7D7555
0x7D7546: test    ebp, ebp
0x7D7548: jz      short loc_7D7555
0x7D754A: mov     edx, [ebp+0]
0x7D754D: mov     eax, [edx]
0x7D754F: push    1
0x7D7551: mov     ecx, ebp
0x7D7553: call    eax
0x7D7555: mov     dword ptr [edi], 0
0x7D755B: mov     edi, [esi+0C4h]
0x7D7561: mov     ebp, [edi+ebx]
0x7D7564: add     edi, ebx
0x7D7566: test    ebp, ebp
0x7D7568: jz      short loc_7D758D
0x7D756A: lea     ecx, [ebp+4]
0x7D756D: push    ecx; lpAddend
0x7D756E: call    dword ptr ds:0A2807Ch
0x7D7574: test    eax, eax
0x7D7576: jnz     short loc_7D7587
0x7D7578: test    ebp, ebp
0x7D757A: jz      short loc_7D7587
0x7D757C: mov     edx, [ebp+0]
0x7D757F: mov     eax, [edx]
0x7D7581: push    1
0x7D7583: mov     ecx, ebp
0x7D7585: call    eax
0x7D7587: mov     dword ptr [edi], 0
0x7D758D: mov     eax, [esp+28h+var_14]
0x7D7591: movzx   ecx, word ptr [esi+0B8h]
0x7D7598: add     eax, 1
0x7D759B: cmp     eax, ecx
0x7D759D: mov     [esp+28h+var_14], eax
0x7D75A1: jl      loc_7D74F0
0x7D75A7: xor     ebp, ebp
0x7D75A9: mov     eax, [esi+0BCh]
0x7D75AF: cmp     eax, ebp
0x7D75B1: jz      short loc_7D75D0
0x7D75B3: mov     edx, [eax-4]
0x7D75B6: lea     edi, [eax-4]
0x7D75B9: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D75BE: push    edx; int
0x7D75BF: push    4; unsigned int
0x7D75C1: push    eax; void *
0x7D75C2: call    $LN21
0x7D75C7: push    edi
0x7D75C8: call    FormHeapFree
0x7D75CD: add     esp, 4
0x7D75D0: mov     eax, [esi+0C0h]
0x7D75D6: cmp     eax, ebp
0x7D75D8: jz      short loc_7D75F7
0x7D75DA: mov     ecx, [eax-4]
0x7D75DD: lea     edi, [eax-4]
0x7D75E0: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D75E5: push    ecx; int
0x7D75E6: push    4; unsigned int
0x7D75E8: push    eax; void *
0x7D75E9: call    $LN21
0x7D75EE: push    edi
0x7D75EF: call    FormHeapFree
0x7D75F4: add     esp, 4
0x7D75F7: mov     eax, [esi+0C4h]
0x7D75FD: cmp     eax, ebp
0x7D75FF: jz      short loc_7D761E
0x7D7601: mov     edx, [eax-4]
0x7D7604: lea     edi, [eax-4]
0x7D7607: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D760C: push    edx; int
0x7D760D: push    4; unsigned int
0x7D760F: push    eax; void *
0x7D7610: call    $LN21
0x7D7615: push    edi
0x7D7616: call    FormHeapFree
0x7D761B: add     esp, 4
0x7D761E: mov     eax, [esi+0D0h]
0x7D7624: push    eax
0x7D7625: call    FormHeapFree
0x7D762A: mov     eax, [esi+0C8h]
0x7D7630: push    eax
0x7D7631: call    FormHeapFree
0x7D7636: add     esp, 8
0x7D7639: mov     edi, [esi+0E0h]
0x7D763F: cmp     edi, ebp
0x7D7641: mov     ebx, ds:0A2807Ch
0x7D7647: jz      short loc_7D7667
0x7D7649: lea     eax, [edi+4]
0x7D764C: push    eax; lpAddend
0x7D764D: call    ebx ; InterlockedDecrement
0x7D764F: test    eax, eax
0x7D7651: jnz     short loc_7D7661
0x7D7653: cmp     edi, ebp
0x7D7655: jz      short loc_7D7661
0x7D7657: mov     edx, [edi]
0x7D7659: mov     eax, [edx]
0x7D765B: push    1
0x7D765D: mov     ecx, edi
0x7D765F: call    eax
0x7D7661: mov     [esi+0E0h], ebp
0x7D7667: fldz
0x7D7669: mov     [esi+0D8h], ebp
0x7D766F: fstp    dword ptr [esi+0E8h]
0x7D7675: mov     edi, [esi+0D4h]
0x7D767B: cmp     edi, ebp
0x7D767D: jz      short loc_7D769D
0x7D767F: lea     ecx, [edi+4]
0x7D7682: push    ecx; lpAddend
0x7D7683: call    ebx ; InterlockedDecrement
0x7D7685: test    eax, eax
0x7D7687: jnz     short loc_7D7697
0x7D7689: cmp     edi, ebp
0x7D768B: jz      short loc_7D7697
0x7D768D: mov     edx, [edi]
0x7D768F: mov     eax, [edx]
0x7D7691: push    1
0x7D7693: mov     ecx, edi
0x7D7695: call    eax
0x7D7697: mov     [esi+0D4h], ebp
0x7D769D: mov     edi, [esi+0E0h]
0x7D76A3: cmp     edi, ebp
0x7D76A5: mov     byte ptr [esp+28h+var_4], 1
0x7D76AA: jz      short loc_7D76C4
0x7D76AC: lea     ecx, [edi+4]
0x7D76AF: push    ecx; lpAddend
0x7D76B0: call    ebx ; InterlockedDecrement
0x7D76B2: test    eax, eax
0x7D76B4: jnz     short loc_7D76C4
0x7D76B6: cmp     edi, ebp
0x7D76B8: jz      short loc_7D76C4
0x7D76BA: mov     edx, [edi]
0x7D76BC: mov     eax, [edx]
0x7D76BE: push    1
0x7D76C0: mov     ecx, edi
0x7D76C2: call    eax
0x7D76C4: mov     edi, [esi+0D4h]
0x7D76CA: cmp     edi, ebp
0x7D76CC: mov     byte ptr [esp+28h+var_4], 0
0x7D76D1: jz      short loc_7D76EB
0x7D76D3: lea     ecx, [edi+4]
0x7D76D6: push    ecx; lpAddend
0x7D76D7: call    ebx ; InterlockedDecrement
0x7D76D9: test    eax, eax
0x7D76DB: jnz     short loc_7D76EB
0x7D76DD: cmp     edi, ebp
0x7D76DF: jz      short loc_7D76EB
0x7D76E1: mov     edx, [edi]
0x7D76E3: mov     eax, [edx]
0x7D76E5: push    1
0x7D76E7: mov     ecx, edi
0x7D76E9: call    eax
0x7D76EB: mov     ecx, esi; this
0x7D76ED: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7D76F5: call    ??1BSShaderLightingProperty@@UAE@XZ; BSShaderLightingProperty::~BSShaderLightingProperty(void)
0x7D76FA: mov     ecx, dword ptr [esp+28h+var_C]
0x7D76FE: mov     large fs:0, ecx
0x7D7705: pop     ecx
0x7D7706: pop     edi
0x7D7707: pop     esi
0x7D7708: pop     ebp
0x7D7709: pop     ebx
0x7D770A: add     esp, 14h
0x7D770D: retn
