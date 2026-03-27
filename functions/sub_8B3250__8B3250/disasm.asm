0x8B3250: sub     esp, 0Ch
0x8B3253: push    esi
0x8B3254: mov     esi, [esp+10h+arg_0]
0x8B3258: push    edi
0x8B3259: push    esi
0x8B325A: mov     edi, ecx
0x8B325C: call    sub_8A0D20
0x8B3261: mov     edi, [edi+4]
0x8B3264: test    edi, edi
0x8B3266: jz      loc_8B349D
0x8B326C: push    ebx
0x8B326D: lea     eax, [edi+20h]
0x8B3270: push    eax
0x8B3271: lea     ecx, [esp+1Ch+var_C]
0x8B3275: push    ecx
0x8B3276: call    sub_4D68A0
0x8B327B: add     esp, 8
0x8B327E: push    offset aPivotina; "PivotInA"
0x8B3283: lea     ecx, [esp+1Ch+var_C]
0x8B3287: call    sub_707280
0x8B328C: movzx   ebx, word ptr [esi+0Ah]
0x8B3290: movzx   edx, word ptr [esi+8]
0x8B3294: cmp     ebx, edx
0x8B3296: mov     [esp+18h+arg_0], eax
0x8B329A: jb      short loc_8B32AA
0x8B329C: movzx   eax, word ptr [esi+0Eh]
0x8B32A0: add     eax, ebx
0x8B32A2: push    eax
0x8B32A3: mov     ecx, esi
0x8B32A5: call    NiTArray_SetSize
0x8B32AA: lea     ecx, [esp+18h+arg_0]
0x8B32AE: push    ecx
0x8B32AF: push    ebx
0x8B32B0: mov     ecx, esi
0x8B32B2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B32B7: lea     edx, [edi+60h]
0x8B32BA: push    edx
0x8B32BB: lea     eax, [esp+1Ch+var_C]
0x8B32BF: push    eax
0x8B32C0: call    sub_4D68A0
0x8B32C5: add     esp, 8
0x8B32C8: push    offset aPivotinb; "PivotInB"
0x8B32CD: lea     ecx, [esp+1Ch+var_C]
0x8B32D1: call    sub_707280
0x8B32D6: movzx   ebx, word ptr [esi+0Ah]
0x8B32DA: movzx   ecx, word ptr [esi+8]
0x8B32DE: cmp     ebx, ecx
0x8B32E0: mov     [esp+18h+arg_0], eax
0x8B32E4: jb      short loc_8B32F4
0x8B32E6: movzx   edx, word ptr [esi+0Eh]
0x8B32EA: add     edx, ebx
0x8B32EC: push    edx
0x8B32ED: mov     ecx, esi
0x8B32EF: call    NiTArray_SetSize
0x8B32F4: lea     eax, [esp+18h+arg_0]
0x8B32F8: push    eax
0x8B32F9: push    ebx
0x8B32FA: mov     ecx, esi
0x8B32FC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B3301: lea     ecx, [edi+70h]
0x8B3304: push    ecx
0x8B3305: lea     edx, [esp+1Ch+var_C]
0x8B3309: push    edx
0x8B330A: call    sub_4D68A0
0x8B330F: add     esp, 8
0x8B3312: push    offset aAxleinb; "AxleInB"
0x8B3317: lea     ecx, [esp+1Ch+var_C]
0x8B331B: call    sub_707280
0x8B3320: movzx   ebx, word ptr [esi+0Ah]
0x8B3324: mov     [esp+18h+arg_0], eax
0x8B3328: movzx   eax, word ptr [esi+8]
0x8B332C: cmp     ebx, eax
0x8B332E: jb      short loc_8B333E
0x8B3330: movzx   ecx, word ptr [esi+0Eh]
0x8B3334: add     ecx, ebx
0x8B3336: push    ecx
0x8B3337: mov     ecx, esi
0x8B3339: call    NiTArray_SetSize
0x8B333E: lea     edx, [esp+18h+arg_0]
0x8B3342: push    edx
0x8B3343: push    ebx
0x8B3344: mov     ecx, esi
0x8B3346: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B334B: lea     eax, [edi+40h]
0x8B334E: push    eax
0x8B334F: lea     ecx, [esp+1Ch+var_C]
0x8B3353: push    ecx
0x8B3354: call    sub_4D68A0
0x8B3359: add     esp, 8
0x8B335C: push    offset aPerp2axleina1; "Perp2AxleInA1"
0x8B3361: lea     ecx, [esp+1Ch+var_C]
0x8B3365: call    sub_707280
0x8B336A: movzx   ebx, word ptr [esi+0Ah]
0x8B336E: movzx   edx, word ptr [esi+8]
0x8B3372: cmp     ebx, edx
0x8B3374: mov     [esp+18h+arg_0], eax
0x8B3378: jb      short loc_8B3388
0x8B337A: movzx   eax, word ptr [esi+0Eh]
0x8B337E: add     eax, ebx
0x8B3380: push    eax
0x8B3381: mov     ecx, esi
0x8B3383: call    NiTArray_SetSize
0x8B3388: lea     ecx, [esp+18h+arg_0]
0x8B338C: push    ecx
0x8B338D: push    ebx
0x8B338E: mov     ecx, esi
0x8B3390: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B3395: lea     edx, [edi+50h]
0x8B3398: push    edx
0x8B3399: lea     eax, [esp+1Ch+var_C]
0x8B339D: push    eax
0x8B339E: call    sub_4D68A0
0x8B33A3: add     esp, 8
0x8B33A6: push    offset aPerp2axleina2; "Perp2AxleInA2"
0x8B33AB: lea     ecx, [esp+1Ch+var_C]
0x8B33AF: call    sub_707280
0x8B33B4: movzx   ebx, word ptr [esi+0Ah]
0x8B33B8: movzx   ecx, word ptr [esi+8]
0x8B33BC: cmp     ebx, ecx
0x8B33BE: mov     [esp+18h+arg_0], eax
0x8B33C2: jb      short loc_8B33D2
0x8B33C4: movzx   edx, word ptr [esi+0Eh]
0x8B33C8: add     edx, ebx
0x8B33CA: push    edx
0x8B33CB: mov     ecx, esi
0x8B33CD: call    NiTArray_SetSize
0x8B33D2: lea     eax, [esp+18h+arg_0]
0x8B33D6: push    eax
0x8B33D7: push    ebx
0x8B33D8: mov     ecx, esi
0x8B33DA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B33DF: fld     dword ptr [edi+0Ch]
0x8B33E2: push    ecx
0x8B33E3: fstp    [esp+1Ch+var_1C]; float
0x8B33E6: push    offset aMinangle; "MinAngle"
0x8B33EB: call    TESOutput_PrintLabeledFloat
0x8B33F0: movzx   ebx, word ptr [esi+0Ah]
0x8B33F4: movzx   ecx, word ptr [esi+8]
0x8B33F8: add     esp, 8
0x8B33FB: cmp     ebx, ecx
0x8B33FD: mov     [esp+18h+arg_0], eax
0x8B3401: jb      short loc_8B3411
0x8B3403: movzx   edx, word ptr [esi+0Eh]
0x8B3407: add     edx, ebx
0x8B3409: push    edx
0x8B340A: mov     ecx, esi
0x8B340C: call    NiTArray_SetSize
0x8B3411: lea     eax, [esp+18h+arg_0]
0x8B3415: push    eax
0x8B3416: push    ebx
0x8B3417: mov     ecx, esi
0x8B3419: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B341E: fld     dword ptr [edi+10h]
0x8B3421: push    ecx
0x8B3422: fstp    [esp+1Ch+var_1C]; float
0x8B3425: push    offset aMaxangle; "MaxAngle"
0x8B342A: call    TESOutput_PrintLabeledFloat
0x8B342F: movzx   ebx, word ptr [esi+0Ah]
0x8B3433: movzx   ecx, word ptr [esi+8]
0x8B3437: add     esp, 8
0x8B343A: cmp     ebx, ecx
0x8B343C: mov     [esp+18h+arg_0], eax
0x8B3440: jb      short loc_8B3450
0x8B3442: movzx   edx, word ptr [esi+0Eh]
0x8B3446: add     edx, ebx
0x8B3448: push    edx
0x8B3449: mov     ecx, esi
0x8B344B: call    NiTArray_SetSize
0x8B3450: lea     eax, [esp+18h+arg_0]
0x8B3454: push    eax
0x8B3455: push    ebx
0x8B3456: mov     ecx, esi
0x8B3458: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B345D: fld     dword ptr [edi+14h]
0x8B3460: push    ecx
0x8B3461: fstp    [esp+1Ch+var_1C]; float
0x8B3464: push    offset aMaxfrictiontrq; "MaxFrictionTrq"
0x8B3469: call    TESOutput_PrintLabeledFloat
0x8B346E: movzx   edi, word ptr [esi+0Ah]
0x8B3472: movzx   ecx, word ptr [esi+8]
0x8B3476: add     esp, 8
0x8B3479: cmp     edi, ecx
0x8B347B: mov     [esp+18h+arg_0], eax
0x8B347F: pop     ebx
0x8B3480: jb      short loc_8B3490
0x8B3482: movzx   edx, word ptr [esi+0Eh]
0x8B3486: add     edx, edi
0x8B3488: push    edx
0x8B3489: mov     ecx, esi
0x8B348B: call    NiTArray_SetSize
0x8B3490: lea     eax, [esp+14h+arg_0]
0x8B3494: push    eax
0x8B3495: push    edi
0x8B3496: mov     ecx, esi
0x8B3498: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B349D: pop     edi
0x8B349E: pop     esi
0x8B349F: add     esp, 0Ch
0x8B34A2: retn    4
