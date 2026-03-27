0x754D50: push    ebx
0x754D51: push    esi
0x754D52: mov     esi, [esp+8+arg_0]
0x754D56: push    edi
0x754D57: push    esi
0x754D58: mov     ebx, ecx
0x754D5A: call    sub_75F110
0x754D5F: mov     eax, ds:0B40ED0h
0x754D64: push    eax; ArgList
0x754D65: call    TESOutput_PrintString
0x754D6A: movzx   edi, word ptr [esi+0Ah]
0x754D6E: movzx   ecx, word ptr [esi+8]
0x754D72: add     esp, 4
0x754D75: cmp     edi, ecx
0x754D77: mov     [esp+0Ch+arg_0], eax
0x754D7B: jb      short loc_754D8B
0x754D7D: movzx   edx, word ptr [esi+0Eh]
0x754D81: add     edx, edi
0x754D83: push    edx
0x754D84: mov     ecx, esi
0x754D86: call    NiTArray_SetSize
0x754D8B: lea     eax, [esp+0Ch+arg_0]
0x754D8F: push    eax
0x754D90: push    edi
0x754D91: mov     ecx, esi
0x754D93: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x754D98: mov     eax, [ebx+2Ch]
0x754D9B: test    eax, eax
0x754D9D: jz      short loc_754DA4
0x754D9F: mov     eax, [eax+8]
0x754DA2: jmp     short loc_754DA9
0x754DA4: mov     eax, offset aNone; "None"
0x754DA9: push    eax; int
0x754DAA: push    offset aColliderObject; "Collider Object"
0x754DAF: call    TESOutput_PrintLabeledString
0x754DB4: movzx   edi, word ptr [esi+0Ah]
0x754DB8: movzx   ecx, word ptr [esi+8]
0x754DBC: add     esp, 8
0x754DBF: cmp     edi, ecx
0x754DC1: mov     [esp+0Ch+arg_0], eax
0x754DC5: jb      short loc_754DD5
0x754DC7: movzx   edx, word ptr [esi+0Eh]
0x754DCB: add     edx, edi
0x754DCD: push    edx
0x754DCE: mov     ecx, esi
0x754DD0: call    NiTArray_SetSize
0x754DD5: lea     eax, [esp+0Ch+arg_0]
0x754DD9: push    eax
0x754DDA: push    edi
0x754DDB: mov     ecx, esi
0x754DDD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x754DE2: fld     dword ptr [ebx+30h]
0x754DE5: push    ecx
0x754DE6: fstp    [esp+10h+var_10]; float
0x754DE9: push    offset aRadius; "Radius"
0x754DEE: call    TESOutput_PrintLabeledFloat
0x754DF3: movzx   edi, word ptr [esi+0Ah]
0x754DF7: movzx   ecx, word ptr [esi+8]
0x754DFB: add     esp, 8
0x754DFE: cmp     edi, ecx
0x754E00: mov     [esp+0Ch+arg_0], eax
0x754E04: jb      short loc_754E14
0x754E06: movzx   edx, word ptr [esi+0Eh]
0x754E0A: add     edx, edi
0x754E0C: push    edx
0x754E0D: mov     ecx, esi
0x754E0F: call    NiTArray_SetSize
0x754E14: lea     eax, [esp+0Ch+arg_0]
0x754E18: push    eax
0x754E19: push    edi
0x754E1A: mov     ecx, esi
0x754E1C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x754E21: pop     edi
0x754E22: pop     esi
0x754E23: pop     ebx
0x754E24: retn    4
