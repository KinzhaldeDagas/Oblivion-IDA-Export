0x730AD0: push    ebx
0x730AD1: push    esi
0x730AD2: mov     esi, [esp+8+arg_0]
0x730AD6: push    edi
0x730AD7: push    esi
0x730AD8: mov     ebx, ecx
0x730ADA: call    sub_721730
0x730ADF: mov     eax, ds:0B3FFA0h
0x730AE4: push    eax; ArgList
0x730AE5: call    TESOutput_PrintString
0x730AEA: movzx   edi, word ptr [esi+0Ah]
0x730AEE: movzx   ecx, word ptr [esi+8]
0x730AF2: add     esp, 4
0x730AF5: cmp     edi, ecx
0x730AF7: mov     [esp+0Ch+arg_0], eax
0x730AFB: jb      short loc_730B0B
0x730AFD: movzx   edx, word ptr [esi+0Eh]
0x730B01: add     edx, edi
0x730B03: push    edx
0x730B04: mov     ecx, esi
0x730B06: call    NiTArray_SetSize
0x730B0B: lea     eax, [esp+0Ch+arg_0]
0x730B0F: push    eax
0x730B10: push    edi
0x730B11: mov     ecx, esi
0x730B13: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x730B18: mov     ecx, [ebx+0Ch]
0x730B1B: push    ecx; int
0x730B1C: push    offset aM_ivalue; "m_iValue"
0x730B21: call    TESOutput_PrintLabeledSignedInt
0x730B26: movzx   edi, word ptr [esi+0Ah]
0x730B2A: movzx   edx, word ptr [esi+8]
0x730B2E: add     esp, 8
0x730B31: cmp     edi, edx
0x730B33: mov     [esp+0Ch+arg_0], eax
0x730B37: jb      short loc_730B47
0x730B39: movzx   eax, word ptr [esi+0Eh]
0x730B3D: add     eax, edi
0x730B3F: push    eax
0x730B40: mov     ecx, esi
0x730B42: call    NiTArray_SetSize
0x730B47: lea     ecx, [esp+0Ch+arg_0]
0x730B4B: push    ecx
0x730B4C: push    edi
0x730B4D: mov     ecx, esi
0x730B4F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x730B54: pop     edi
0x730B55: pop     esi
0x730B56: pop     ebx
0x730B57: retn    4
