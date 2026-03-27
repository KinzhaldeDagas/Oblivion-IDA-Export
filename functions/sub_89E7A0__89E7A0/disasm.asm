0x89E7A0: push    ebp
0x89E7A1: mov     ebp, esp
0x89E7A3: and     esp, 0FFFFFFF0h
0x89E7A6: sub     esp, 44h
0x89E7A9: push    ebx
0x89E7AA: push    esi
0x89E7AB: mov     esi, [ebp+arg_0]
0x89E7AE: push    edi
0x89E7AF: push    esi
0x89E7B0: mov     ebx, ecx
0x89E7B2: call    sub_89E210
0x89E7B7: mov     eax, ds:0BA7D1Ch
0x89E7BC: push    eax; ArgList
0x89E7BD: call    TESOutput_PrintString
0x89E7C2: movzx   edi, word ptr [esi+0Ah]
0x89E7C6: movzx   ecx, word ptr [esi+8]
0x89E7CA: add     esp, 4
0x89E7CD: cmp     edi, ecx
0x89E7CF: mov     [esp+50h+var_44], eax
0x89E7D3: jb      short loc_89E7E3
0x89E7D5: movzx   edx, word ptr [esi+0Eh]
0x89E7D9: add     edx, edi
0x89E7DB: push    edx
0x89E7DC: mov     ecx, esi
0x89E7DE: call    NiTArray_SetSize
0x89E7E3: lea     eax, [esp+50h+var_44]
0x89E7E7: push    eax
0x89E7E8: push    edi
0x89E7E9: mov     ecx, esi
0x89E7EB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89E7F0: lea     ecx, [esp+50h+var_40]
0x89E7F4: call    sub_47F9F0
0x89E7F9: lea     ecx, [esp+50h+var_40]
0x89E7FD: push    ecx
0x89E7FE: mov     ecx, ebx
0x89E800: call    sub_89E370
0x89E805: fld     [esp+50h+var_10]
0x89E809: push    ecx
0x89E80A: fstp    [esp+54h+var_54]; float
0x89E80D: push    offset aDamping; "Damping"
0x89E812: call    TESOutput_PrintLabeledFloat
0x89E817: movzx   edi, word ptr [esi+0Ah]
0x89E81B: movzx   edx, word ptr [esi+8]
0x89E81F: add     esp, 8
0x89E822: cmp     edi, edx
0x89E824: mov     [esp+50h+var_44], eax
0x89E828: jb      short loc_89E838
0x89E82A: movzx   eax, word ptr [esi+0Eh]
0x89E82E: add     eax, edi
0x89E830: push    eax
0x89E831: mov     ecx, esi
0x89E833: call    NiTArray_SetSize
0x89E838: lea     ecx, [esp+50h+var_44]
0x89E83C: push    ecx
0x89E83D: push    edi
0x89E83E: mov     ecx, esi
0x89E840: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89E845: fld     [esp+50h+var_C]
0x89E849: push    ecx
0x89E84A: fstp    [esp+54h+var_54]; float
0x89E84D: push    offset aElasticity; "Elasticity"
0x89E852: call    TESOutput_PrintLabeledFloat
0x89E857: movzx   edi, word ptr [esi+0Ah]
0x89E85B: movzx   edx, word ptr [esi+8]
0x89E85F: add     esp, 8
0x89E862: cmp     edi, edx
0x89E864: mov     [esp+50h+var_44], eax
0x89E868: jb      short loc_89E878
0x89E86A: movzx   eax, word ptr [esi+0Eh]
0x89E86E: add     eax, edi
0x89E870: push    eax
0x89E871: mov     ecx, esi
0x89E873: call    NiTArray_SetSize
0x89E878: lea     ecx, [esp+50h+var_44]
0x89E87C: push    ecx
0x89E87D: push    edi
0x89E87E: mov     ecx, esi
0x89E880: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89E885: fld     [esp+50h+var_4]
0x89E889: push    ecx
0x89E88A: fstp    [esp+54h+var_54]; float
0x89E88D: push    offset aObjectDamping; "Object Damping"
0x89E892: call    TESOutput_PrintLabeledFloat
0x89E897: movzx   edi, word ptr [esi+0Ah]
0x89E89B: movzx   edx, word ptr [esi+8]
0x89E89F: add     esp, 8
0x89E8A2: cmp     edi, edx
0x89E8A4: mov     [esp+50h+var_44], eax
0x89E8A8: jb      short loc_89E8B8
0x89E8AA: movzx   eax, word ptr [esi+0Eh]
0x89E8AE: add     eax, edi
0x89E8B0: push    eax
0x89E8B1: mov     ecx, esi
0x89E8B3: call    NiTArray_SetSize
0x89E8B8: lea     ecx, [esp+50h+var_44]
0x89E8BC: push    ecx
0x89E8BD: push    edi
0x89E8BE: mov     ecx, esi
0x89E8C0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89E8C5: fld     [esp+50h+var_8]
0x89E8C9: push    ecx
0x89E8CA: fstp    [esp+54h+var_54]; float
0x89E8CD: push    offset aMaxForce; "Max Force"
0x89E8D2: call    TESOutput_PrintLabeledFloat
0x89E8D7: movzx   edi, word ptr [esi+0Ah]
0x89E8DB: movzx   edx, word ptr [esi+8]
0x89E8DF: add     esp, 8
0x89E8E2: cmp     edi, edx
0x89E8E4: mov     [esp+50h+var_44], eax
0x89E8E8: jb      short loc_89E8F8
0x89E8EA: movzx   eax, word ptr [esi+0Eh]
0x89E8EE: add     eax, edi
0x89E8F0: push    eax
0x89E8F1: mov     ecx, esi
0x89E8F3: call    NiTArray_SetSize
0x89E8F8: lea     ecx, [esp+50h+var_44]
0x89E8FC: push    ecx
0x89E8FD: push    edi
0x89E8FE: mov     ecx, esi
0x89E900: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89E905: pop     edi
0x89E906: pop     esi
0x89E907: pop     ebx
0x89E908: mov     esp, ebp
0x89E90A: pop     ebp
0x89E90B: retn    4
