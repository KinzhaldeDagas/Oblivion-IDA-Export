0x96E320: push    ebx
0x96E321: push    esi
0x96E322: mov     esi, [esp+8+arg_0]
0x96E326: push    edi
0x96E327: push    esi
0x96E328: mov     edi, ecx
0x96E32A: call    sub_711E60
0x96E32F: mov     eax, ds:0BA9AC8h
0x96E334: push    eax; ArgList
0x96E335: call    TESOutput_PrintString
0x96E33A: movzx   ebx, word ptr [esi+0Ah]
0x96E33E: movzx   ecx, word ptr [esi+8]
0x96E342: add     esp, 4
0x96E345: cmp     ebx, ecx
0x96E347: mov     [esp+0Ch+arg_0], eax
0x96E34B: jb      short loc_96E35B
0x96E34D: movzx   edx, word ptr [esi+0Eh]
0x96E351: add     edx, ebx
0x96E353: push    edx
0x96E354: mov     ecx, esi
0x96E356: call    NiTArray_SetSize
0x96E35B: lea     eax, [esp+0Ch+arg_0]
0x96E35F: push    eax
0x96E360: push    ebx
0x96E361: mov     ecx, esi
0x96E363: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96E368: mov     eax, [edi+24h]
0x96E36B: push    eax; int
0x96E36C: push    offset aM_epropagation; "m_ePropagationMode"
0x96E371: mov     ecx, edi
0x96E373: call    sub_96DA10
0x96E378: movzx   ebx, word ptr [esi+0Ah]
0x96E37C: movzx   ecx, word ptr [esi+8]
0x96E380: cmp     ebx, ecx
0x96E382: mov     [esp+0Ch+arg_0], eax
0x96E386: jb      short loc_96E396
0x96E388: movzx   edx, word ptr [esi+0Eh]
0x96E38C: add     edx, ebx
0x96E38E: push    edx
0x96E38F: mov     ecx, esi
0x96E391: call    NiTArray_SetSize
0x96E396: lea     eax, [esp+0Ch+arg_0]
0x96E39A: push    eax
0x96E39B: push    ebx
0x96E39C: mov     ecx, esi
0x96E39E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96E3A3: mov     eax, [edi+28h]
0x96E3A6: push    eax; int
0x96E3A7: push    offset aM_ecollisionmo; "m_eCollisionMode"
0x96E3AC: mov     ecx, edi
0x96E3AE: call    sub_96D930
0x96E3B3: movzx   ebx, word ptr [esi+0Ah]
0x96E3B7: movzx   ecx, word ptr [esi+8]
0x96E3BB: cmp     ebx, ecx
0x96E3BD: mov     [esp+0Ch+arg_0], eax
0x96E3C1: jb      short loc_96E3D1
0x96E3C3: movzx   edx, word ptr [esi+0Eh]
0x96E3C7: add     edx, ebx
0x96E3C9: push    edx
0x96E3CA: mov     ecx, esi
0x96E3CC: call    NiTArray_SetSize
0x96E3D1: lea     eax, [esp+0Ch+arg_0]
0x96E3D5: push    eax
0x96E3D6: push    ebx
0x96E3D7: mov     ecx, esi
0x96E3D9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96E3DE: cmp     dword ptr [edi+2Ch], 0
0x96E3E2: jz      short loc_96E3F4
0x96E3E4: mov     ecx, [edi+2Ch]
0x96E3E7: mov     edx, [ecx]
0x96E3E9: mov     eax, [edx+2Ch]
0x96E3EC: push    esi
0x96E3ED: push    offset aM_pkmodelabvTy; "m_pkModelABV->Type"
0x96E3F2: call    eax
0x96E3F4: push    offset aM_klocalveloci; "m_kLocalVelocity"
0x96E3F9: lea     ecx, [edi+0Ch]
0x96E3FC: call    sub_707280
0x96E401: movzx   ebx, word ptr [esi+0Ah]
0x96E405: movzx   ecx, word ptr [esi+8]
0x96E409: cmp     ebx, ecx
0x96E40B: mov     [esp+0Ch+arg_0], eax
0x96E40F: jb      short loc_96E41F
0x96E411: movzx   edx, word ptr [esi+0Eh]
0x96E415: add     edx, ebx
0x96E417: push    edx
0x96E418: mov     ecx, esi
0x96E41A: call    NiTArray_SetSize
0x96E41F: lea     eax, [esp+0Ch+arg_0]
0x96E423: push    eax
0x96E424: push    ebx
0x96E425: mov     ecx, esi
0x96E427: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96E42C: push    offset aM_kworldveloci; "m_kWorldVelocity"
0x96E431: lea     ecx, [edi+18h]
0x96E434: call    sub_707280
0x96E439: movzx   edi, word ptr [esi+0Ah]
0x96E43D: movzx   ecx, word ptr [esi+8]
0x96E441: cmp     edi, ecx
0x96E443: mov     [esp+0Ch+arg_0], eax
0x96E447: jb      short loc_96E457
0x96E449: movzx   edx, word ptr [esi+0Eh]
0x96E44D: add     edx, edi
0x96E44F: push    edx
0x96E450: mov     ecx, esi
0x96E452: call    NiTArray_SetSize
0x96E457: lea     eax, [esp+0Ch+arg_0]
0x96E45B: push    eax
0x96E45C: push    edi
0x96E45D: mov     ecx, esi
0x96E45F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96E464: pop     edi
0x96E465: pop     esi
0x96E466: pop     ebx
0x96E467: retn    4
