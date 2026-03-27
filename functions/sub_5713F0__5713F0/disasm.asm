0x5713F0: push    0FFFFFFFFh
0x5713F2: push    offset SEH_5713F0
0x5713F7: mov     eax, large fs:0
0x5713FD: push    eax
0x5713FE: sub     esp, 30h
0x571401: push    ebx
0x571402: push    ebp
0x571403: push    esi
0x571404: push    edi; float
0x571405: mov     eax, ds:0B30AACh
0x57140A: xor     eax, esp
0x57140C: push    eax; float
0x57140D: lea     eax, [esp+50h+var_C]
0x571411: mov     large fs:0, eax
0x571417: mov     ebx, ecx
0x571419: mov     dword ptr [esp+50h+var_3C], ebx
0x57141D: fld     [esp+50h+arg_4]
0x571421: mov     eax, [esp+50h+arg_0]
0x571425: push    ecx
0x571426: fstp    [esp+54h+var_54]; float
0x571429: push    eax; int
0x57142A: call    BSTempEff_constr
0x57142F: xor     edi, edi
0x571431: lea     ebp, [ebx+18h]
0x571434: mov     dword ptr [ebx], offset ??_7BSTempEffectParticle@@6B@; const BSTempEffectParticle::`vftable'
0x57143A: mov     [esp+50h+var_4], edi
0x57143E: mov     [ebp+0], edi
0x571441: fldz
0x571443: fstp    dword ptr [ebx+8]
0x571446: mov     [ebx+1Ch], edi
0x571449: mov     esi, [ebp+0]
0x57144C: cmp     esi, edi
0x57144E: mov     byte ptr [esp+50h+var_4], 1
0x571453: jz      short loc_571474
0x571455: lea     ecx, [esi+4]
0x571458: push    ecx; lpAddend
0x571459: call    dword ptr ds:0A2807Ch
0x57145F: test    eax, eax
0x571461: jnz     short loc_571471
0x571463: cmp     esi, edi
0x571465: jz      short loc_571471
0x571467: mov     edx, [esi]
0x571469: mov     eax, [edx]
0x57146B: push    1
0x57146D: mov     ecx, esi
0x57146F: call    eax
0x571471: mov     [ebp+0], edi
0x571474: mov     esi, [esp+50h+arg_C]
0x571478: mov     ecx, ds:0B33A1Ch
0x57147E: push    1
0x571480: push    edi
0x571481: push    edi
0x571482: push    esi
0x571483: call    sub_439EB0
0x571488: cmp     byte ptr [esp+50h+arg_2C], 0
0x571490: mov     [ebx+1Ch], esi
0x571493: jz      short loc_5714CF
0x571495: mov     ecx, ds:0B333A0h
0x57149B: cmp     ecx, edi
0x57149D: jz      short loc_5714A7
0x57149F: push    eax
0x5714A0: call    sub_441760
0x5714A5: jmp     short loc_5714D6
0x5714A7: mov     esi, [ebp+0]
0x5714AA: cmp     esi, edi
0x5714AC: jz      short loc_5714DE
0x5714AE: lea     ecx, [esi+4]
0x5714B1: push    ecx; lpAddend
0x5714B2: call    dword ptr ds:0A2807Ch
0x5714B8: test    eax, eax
0x5714BA: jnz     short loc_5714CA
0x5714BC: cmp     esi, edi
0x5714BE: jz      short loc_5714CA
0x5714C0: mov     edx, [esi]
0x5714C2: mov     eax, [edx]
0x5714C4: push    1
0x5714C6: mov     ecx, esi
0x5714C8: call    eax
0x5714CA: mov     [ebp+0], edi
0x5714CD: jmp     short loc_5714DE
0x5714CF: mov     ecx, eax
0x5714D1: call    sub_700900
0x5714D6: push    eax; a2
0x5714D7: mov     ecx, ebp; this
0x5714D9: call    NiSmartPointer_Set??
0x5714DE: mov     eax, [ebp+0]
0x5714E1: cmp     eax, edi
0x5714E3: jz      loc_57160D
0x5714E9: push    eax
0x5714EA: mov     ecx, ebx
0x5714EC: call    sub_570B40
0x5714F1: fstp    dword ptr [ebx+8]
0x5714F4: fld     [esp+50h+arg_10]
0x5714F8: fld     [esp+50h+arg_14]
0x5714FC: fld     [esp+50h+arg_18]
0x571500: fstp    [esp+50h+var_3C+4]
0x571504: fmul    st, st
0x571506: fld     st(1)
0x571508: fmulp   st(2), st
0x57150A: faddp   st(1), st
0x57150C: fldz
0x57150E: fmul    st, st
0x571510: faddp   st(1), st
0x571512: fstp    [esp+50h+arg_2C]
0x571519: fld     [esp+50h+arg_2C]
0x571520: call    __CIsqrt
0x571525: fstp    [esp+50h+arg_2C]
0x57152C: fld     [esp+50h+var_3C+4]
0x571530: fld     [esp+50h+arg_2C]
0x571537: call    sub_98598A
0x57153C: fstp    [esp+50h+arg_2C]
0x571543: fld     [esp+50h+arg_2C]
0x57154A: sub     esp, 8
0x57154D: fchs
0x57154F: fstp    [esp+58h+var_54]; float
0x571553: fldz
0x571555: fstp    [esp+58h+a2]; float
0x571558: fld     [esp+58h+arg_10]
0x57155C: fld     [esp+58h+arg_14]
0x571560: call    sub_98598A
0x571565: fstp    [esp+58h+arg_2C]
0x57156C: fld     [esp+58h+arg_2C]
0x571573: push    ecx
0x571574: lea     ecx, [esp+5Ch+var_30]
0x571578: fstp    [esp+5Ch+var_5C]; float
0x57157B: call    sub_7118E0
0x571580: fld     [esp+50h+arg_28]
0x571584: mov     eax, [ebp+0]
0x571587: fabs
0x571589: mov     ecx, [esp+50h+arg_1C]
0x57158D: fstp    [esp+50h+arg_2C]
0x571594: mov     edx, [esp+50h+arg_20]
0x571598: fld     [esp+50h+arg_2C]
0x57159F: mov     [eax+54h], ecx
0x5715A2: mov     ecx, [esp+50h+arg_24]
0x5715A6: add     eax, 54h ; 'T'
0x5715A9: mov     [eax+4], edx
0x5715AC: mov     [eax+8], ecx
0x5715AF: mov     edi, [ebp+0]
0x5715B2: add     edi, 30h ; '0'
0x5715B5: mov     ecx, 9
0x5715BA: lea     esi, [esp+50h+var_30]
0x5715BE: rep movsd
0x5715C0: mov     edx, [ebp+0]
0x5715C3: mov     ecx, [esp+50h+arg_8]
0x5715C7: mov     eax, [ecx]
0x5715C9: mov     eax, [eax+84h]
0x5715CF: fstp    dword ptr [edx+60h]
0x5715D2: mov     edx, [ebp+0]
0x5715D5: push    1
0x5715D7: push    edx
0x5715D8: call    eax
0x5715DA: mov     ecx, [ebp+0]; this
0x5715DD: call    NiAVObject_InitializePropertyState
0x5715E2: fld     dword ptr ds:0B33A30h
0x5715E8: push    1; a3
0x5715EA: push    ecx
0x5715EB: mov     ecx, [ebp+0]; this
0x5715EE: fstp    [esp+58h+a2]; a2
0x5715F1: call    NiAVObject_UpdateNiAVObject
0x5715F6: mov     ecx, [ebp+0]
0x5715F9: push    ecx
0x5715FA: mov     ecx, ebx
0x5715FC: call    sub_570A30
0x571601: mov     edx, [ebp+0]
0x571604: push    edx
0x571605: call    sub_715B40
0x57160A: add     esp, 4
0x57160D: mov     eax, ebx
0x57160F: mov     ecx, dword ptr [esp+50h+var_C]
0x571613: mov     large fs:0, ecx
0x57161A: pop     ecx
0x57161B: pop     edi
0x57161C: pop     esi
0x57161D: pop     ebp
0x57161E: pop     ebx
0x57161F: add     esp, 3Ch
0x571622: retn    30h ; '0'
