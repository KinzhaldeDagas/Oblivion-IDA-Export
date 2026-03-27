0x73C350: push    ebx
0x73C351: push    esi
0x73C352: mov     esi, [esp+8+arg_0]
0x73C356: push    edi
0x73C357: push    esi
0x73C358: mov     edi, ecx
0x73C35A: call    sub_709160
0x73C35F: mov     eax, ds:0B40178h
0x73C364: push    eax; ArgList
0x73C365: call    TESOutput_PrintString
0x73C36A: movzx   ebx, word ptr [esi+0Ah]
0x73C36E: movzx   ecx, word ptr [esi+8]
0x73C372: add     esp, 4
0x73C375: cmp     ebx, ecx
0x73C377: mov     [esp+0Ch+arg_0], eax
0x73C37B: jb      short loc_73C38B
0x73C37D: movzx   edx, word ptr [esi+0Eh]
0x73C381: add     edx, ebx
0x73C383: push    edx
0x73C384: mov     ecx, esi
0x73C386: call    NiTArray_SetSize
0x73C38B: lea     eax, [esp+0Ch+arg_0]
0x73C38F: push    eax
0x73C390: push    ebx
0x73C391: mov     ecx, esi
0x73C393: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C398: push    offset aM_kmodelprojma; "m_kModelProjMat"
0x73C39D: lea     ecx, [edi+0DCh]
0x73C3A3: call    sub_711A50
0x73C3A8: movzx   ebx, word ptr [esi+0Ah]
0x73C3AC: movzx   ecx, word ptr [esi+8]
0x73C3B0: cmp     ebx, ecx
0x73C3B2: mov     [esp+0Ch+arg_0], eax
0x73C3B6: jb      short loc_73C3C6
0x73C3B8: movzx   edx, word ptr [esi+0Eh]
0x73C3BC: add     edx, ebx
0x73C3BE: push    edx
0x73C3BF: mov     ecx, esi
0x73C3C1: call    NiTArray_SetSize
0x73C3C6: lea     eax, [esp+0Ch+arg_0]
0x73C3CA: push    eax
0x73C3CB: push    ebx
0x73C3CC: mov     ecx, esi
0x73C3CE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C3D3: push    offset aM_kmodelprojtr; "m_kModelProjTrans"
0x73C3D8: lea     ecx, [edi+100h]
0x73C3DE: call    sub_707280
0x73C3E3: movzx   ebx, word ptr [esi+0Ah]
0x73C3E7: movzx   ecx, word ptr [esi+8]
0x73C3EB: cmp     ebx, ecx
0x73C3ED: mov     [esp+0Ch+arg_0], eax
0x73C3F1: jb      short loc_73C401
0x73C3F3: movzx   edx, word ptr [esi+0Eh]
0x73C3F7: add     edx, ebx
0x73C3F9: push    edx
0x73C3FA: mov     ecx, esi
0x73C3FC: call    NiTArray_SetSize
0x73C401: lea     eax, [esp+0Ch+arg_0]
0x73C405: push    eax
0x73C406: push    ebx
0x73C407: mov     ecx, esi
0x73C409: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C40E: mov     ecx, [edi+148h]
0x73C414: push    ecx; int
0x73C415: push    offset aM_etexturemode; "m_eTextureMode"
0x73C41A: call    sub_73BA20
0x73C41F: movzx   ebx, word ptr [esi+0Ah]
0x73C423: movzx   edx, word ptr [esi+8]
0x73C427: add     esp, 8
0x73C42A: cmp     ebx, edx
0x73C42C: mov     [esp+0Ch+arg_0], eax
0x73C430: jb      short loc_73C440
0x73C432: movzx   eax, word ptr [esi+0Eh]
0x73C436: add     eax, ebx
0x73C438: push    eax
0x73C439: mov     ecx, esi
0x73C43B: call    NiTArray_SetSize
0x73C440: lea     ecx, [esp+0Ch+arg_0]
0x73C444: push    ecx
0x73C445: push    ebx
0x73C446: mov     ecx, esi
0x73C448: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C44D: mov     edx, [edi+140h]
0x73C453: push    edx; int
0x73C454: push    offset aM_efilter; "m_eFilter"
0x73C459: call    sub_703B20
0x73C45E: movzx   ebx, word ptr [esi+0Ah]
0x73C462: mov     [esp+14h+arg_0], eax
0x73C466: movzx   eax, word ptr [esi+8]
0x73C46A: add     esp, 8
0x73C46D: cmp     ebx, eax
0x73C46F: jb      short loc_73C47F
0x73C471: movzx   ecx, word ptr [esi+0Eh]
0x73C475: add     ecx, ebx
0x73C477: push    ecx
0x73C478: mov     ecx, esi
0x73C47A: call    NiTArray_SetSize
0x73C47F: lea     edx, [esp+0Ch+arg_0]
0x73C483: push    edx
0x73C484: push    ebx
0x73C485: mov     ecx, esi
0x73C487: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C48C: mov     eax, [edi+144h]
0x73C492: push    eax; int
0x73C493: push    offset aM_eclamp; "m_eClamp"
0x73C498: call    sub_703A70
0x73C49D: movzx   ebx, word ptr [esi+0Ah]
0x73C4A1: movzx   ecx, word ptr [esi+8]
0x73C4A5: add     esp, 8
0x73C4A8: cmp     ebx, ecx
0x73C4AA: mov     [esp+0Ch+arg_0], eax
0x73C4AE: jb      short loc_73C4BE
0x73C4B0: movzx   edx, word ptr [esi+0Eh]
0x73C4B4: add     edx, ebx
0x73C4B6: push    edx
0x73C4B7: mov     ecx, esi
0x73C4B9: call    NiTArray_SetSize
0x73C4BE: lea     eax, [esp+0Ch+arg_0]
0x73C4C2: push    eax
0x73C4C3: push    ebx
0x73C4C4: mov     ecx, esi
0x73C4C6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C4CB: mov     ecx, [edi+148h]
0x73C4D1: push    ecx; int
0x73C4D2: push    offset aM_etexturemode; "m_eTextureMode"
0x73C4D7: call    sub_73BA20
0x73C4DC: movzx   ebx, word ptr [esi+0Ah]
0x73C4E0: movzx   edx, word ptr [esi+8]
0x73C4E4: add     esp, 8
0x73C4E7: cmp     ebx, edx
0x73C4E9: mov     [esp+0Ch+arg_0], eax
0x73C4ED: jb      short loc_73C4FD
0x73C4EF: movzx   eax, word ptr [esi+0Eh]
0x73C4F3: add     eax, ebx
0x73C4F5: push    eax
0x73C4F6: mov     ecx, esi
0x73C4F8: call    NiTArray_SetSize
0x73C4FD: lea     ecx, [esp+0Ch+arg_0]
0x73C501: push    ecx
0x73C502: push    ebx
0x73C503: mov     ecx, esi
0x73C505: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C50A: mov     edx, [edi+14Ch]
0x73C510: push    edx; int
0x73C511: push    offset aM_ecoordmode; "m_eCoordMode"
0x73C516: call    sub_73BAD0
0x73C51B: movzx   ebx, word ptr [esi+0Ah]
0x73C51F: mov     [esp+14h+arg_0], eax
0x73C523: movzx   eax, word ptr [esi+8]
0x73C527: add     esp, 8
0x73C52A: cmp     ebx, eax
0x73C52C: jb      short loc_73C53C
0x73C52E: movzx   ecx, word ptr [esi+0Eh]
0x73C532: add     ecx, ebx
0x73C534: push    ecx
0x73C535: mov     ecx, esi
0x73C537: call    NiTArray_SetSize
0x73C53C: lea     edx, [esp+0Ch+arg_0]
0x73C540: push    edx
0x73C541: push    ebx
0x73C542: mov     ecx, esi
0x73C544: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C549: movzx   eax, byte ptr [edi+150h]
0x73C550: push    eax; char
0x73C551: push    offset aM_bplaneenable; "m_bPlaneEnable"
0x73C556: call    TESOutput_PrintLabeledBool
0x73C55B: movzx   ebx, word ptr [esi+0Ah]
0x73C55F: movzx   ecx, word ptr [esi+8]
0x73C563: add     esp, 8
0x73C566: cmp     ebx, ecx
0x73C568: mov     [esp+0Ch+arg_0], eax
0x73C56C: jb      short loc_73C57C
0x73C56E: movzx   edx, word ptr [esi+0Eh]
0x73C572: add     edx, ebx
0x73C574: push    edx
0x73C575: mov     ecx, esi
0x73C577: call    NiTArray_SetSize
0x73C57C: lea     eax, [esp+0Ch+arg_0]
0x73C580: push    eax
0x73C581: push    ebx
0x73C582: mov     ecx, esi
0x73C584: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C589: push    offset aM_kmodelplane; "m_kModelPlane"
0x73C58E: lea     ecx, [edi+154h]
0x73C594: call    sub_716E40
0x73C599: movzx   edi, word ptr [esi+0Ah]
0x73C59D: movzx   ecx, word ptr [esi+8]
0x73C5A1: cmp     edi, ecx
0x73C5A3: mov     [esp+0Ch+arg_0], eax
0x73C5A7: jb      short loc_73C5B7
0x73C5A9: movzx   edx, word ptr [esi+0Eh]
0x73C5AD: add     edx, edi
0x73C5AF: push    edx
0x73C5B0: mov     ecx, esi
0x73C5B2: call    NiTArray_SetSize
0x73C5B7: lea     eax, [esp+0Ch+arg_0]
0x73C5BB: push    eax
0x73C5BC: push    edi
0x73C5BD: mov     ecx, esi
0x73C5BF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73C5C4: pop     edi
0x73C5C5: pop     esi
0x73C5C6: pop     ebx
0x73C5C7: retn    4
