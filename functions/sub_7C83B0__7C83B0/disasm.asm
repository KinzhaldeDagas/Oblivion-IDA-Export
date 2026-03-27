0x7C83B0: push    ebx
0x7C83B1: push    esi
0x7C83B2: mov     esi, [esp+8+arg_0]
0x7C83B6: push    edi
0x7C83B7: push    esi
0x7C83B8: mov     ebx, ecx
0x7C83BA: call    sub_7411F0
0x7C83BF: mov     eax, ds:0B43484h
0x7C83C4: push    eax; ArgList
0x7C83C5: call    TESOutput_PrintString
0x7C83CA: movzx   edi, word ptr [esi+0Ah]
0x7C83CE: movzx   ecx, word ptr [esi+8]
0x7C83D2: add     esp, 4
0x7C83D5: cmp     edi, ecx
0x7C83D7: mov     [esp+0Ch+arg_0], eax
0x7C83DB: jb      short loc_7C83EB
0x7C83DD: movzx   edx, word ptr [esi+0Eh]
0x7C83E1: add     edx, edi
0x7C83E3: push    edx
0x7C83E4: mov     ecx, esi
0x7C83E6: call    NiTArray_SetSize
0x7C83EB: lea     eax, [esp+0Ch+arg_0]
0x7C83EF: push    eax
0x7C83F0: push    edi
0x7C83F1: mov     ecx, esi
0x7C83F3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C83F8: fld     dword ptr [ebx+2Ch]
0x7C83FB: push    ecx
0x7C83FC: fstp    [esp+10h+var_10]; float
0x7C83FF: push    offset aFogStartDistan; "fog start distance"
0x7C8404: call    TESOutput_PrintLabeledFloat
0x7C8409: movzx   edi, word ptr [esi+0Ah]
0x7C840D: movzx   ecx, word ptr [esi+8]
0x7C8411: add     esp, 8
0x7C8414: cmp     edi, ecx
0x7C8416: mov     [esp+0Ch+arg_0], eax
0x7C841A: jb      short loc_7C842A
0x7C841C: movzx   edx, word ptr [esi+0Eh]
0x7C8420: add     edx, edi
0x7C8422: push    edx
0x7C8423: mov     ecx, esi
0x7C8425: call    NiTArray_SetSize
0x7C842A: lea     eax, [esp+0Ch+arg_0]
0x7C842E: push    eax
0x7C842F: push    edi
0x7C8430: mov     ecx, esi
0x7C8432: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C8437: fld     dword ptr [ebx+30h]
0x7C843A: push    ecx
0x7C843B: fstp    [esp+10h+var_10]; float
0x7C843E: push    offset aFogEndDistance; "fog end distance"
0x7C8443: call    TESOutput_PrintLabeledFloat
0x7C8448: movzx   edi, word ptr [esi+0Ah]
0x7C844C: movzx   ecx, word ptr [esi+8]
0x7C8450: add     esp, 8
0x7C8453: cmp     edi, ecx
0x7C8455: mov     [esp+0Ch+arg_0], eax
0x7C8459: jb      short loc_7C8469
0x7C845B: movzx   edx, word ptr [esi+0Eh]
0x7C845F: add     edx, edi
0x7C8461: push    edx
0x7C8462: mov     ecx, esi
0x7C8464: call    NiTArray_SetSize
0x7C8469: lea     eax, [esp+0Ch+arg_0]
0x7C846D: push    eax
0x7C846E: push    edi
0x7C846F: mov     ecx, esi
0x7C8471: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C8476: pop     edi
0x7C8477: pop     esi
0x7C8478: pop     ebx
0x7C8479: retn    4
