0x709AA0: push    ebx
0x709AA1: push    esi
0x709AA2: mov     esi, [esp+8+arg_0]
0x709AA6: push    edi
0x709AA7: push    esi
0x709AA8: mov     edi, ecx
0x709AAA: call    sub_700B10
0x709AAF: mov     eax, ds:0B3FA9Ch
0x709AB4: push    eax; ArgList
0x709AB5: call    TESOutput_PrintString
0x709ABA: movzx   ebx, word ptr [esi+0Ah]
0x709ABE: movzx   ecx, word ptr [esi+8]
0x709AC2: add     esp, 4
0x709AC5: cmp     ebx, ecx
0x709AC7: mov     [esp+0Ch+arg_0], eax
0x709ACB: jb      short loc_709ADB
0x709ACD: movzx   edx, word ptr [esi+0Eh]
0x709AD1: add     edx, ebx
0x709AD3: push    edx
0x709AD4: mov     ecx, esi
0x709AD6: call    NiTArray_SetSize
0x709ADB: lea     eax, [esp+0Ch+arg_0]
0x709ADF: push    eax
0x709AE0: push    ebx
0x709AE1: mov     ecx, esi
0x709AE3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709AE8: push    offset aM_amb; "m_amb"
0x709AED: lea     ecx, [edi+1Ch]
0x709AF0: call    sub_709370
0x709AF5: movzx   ebx, word ptr [esi+0Ah]
0x709AF9: movzx   ecx, word ptr [esi+8]
0x709AFD: cmp     ebx, ecx
0x709AFF: mov     [esp+0Ch+arg_0], eax
0x709B03: jb      short loc_709B13
0x709B05: movzx   edx, word ptr [esi+0Eh]
0x709B09: add     edx, ebx
0x709B0B: push    edx
0x709B0C: mov     ecx, esi
0x709B0E: call    NiTArray_SetSize
0x709B13: lea     eax, [esp+0Ch+arg_0]
0x709B17: push    eax
0x709B18: push    ebx
0x709B19: mov     ecx, esi
0x709B1B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709B20: push    offset aM_diff; "m_diff"
0x709B25: lea     ecx, [edi+28h]
0x709B28: call    sub_709370
0x709B2D: movzx   ebx, word ptr [esi+0Ah]
0x709B31: movzx   ecx, word ptr [esi+8]
0x709B35: cmp     ebx, ecx
0x709B37: mov     [esp+0Ch+arg_0], eax
0x709B3B: jb      short loc_709B4B
0x709B3D: movzx   edx, word ptr [esi+0Eh]
0x709B41: add     edx, ebx
0x709B43: push    edx
0x709B44: mov     ecx, esi
0x709B46: call    NiTArray_SetSize
0x709B4B: lea     eax, [esp+0Ch+arg_0]
0x709B4F: push    eax
0x709B50: push    ebx
0x709B51: mov     ecx, esi
0x709B53: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709B58: push    offset aM_spec; "m_spec"
0x709B5D: lea     ecx, [edi+34h]
0x709B60: call    sub_709370
0x709B65: movzx   ebx, word ptr [esi+0Ah]
0x709B69: movzx   ecx, word ptr [esi+8]
0x709B6D: cmp     ebx, ecx
0x709B6F: mov     [esp+0Ch+arg_0], eax
0x709B73: jb      short loc_709B83
0x709B75: movzx   edx, word ptr [esi+0Eh]
0x709B79: add     edx, ebx
0x709B7B: push    edx
0x709B7C: mov     ecx, esi
0x709B7E: call    NiTArray_SetSize
0x709B83: lea     eax, [esp+0Ch+arg_0]
0x709B87: push    eax
0x709B88: push    ebx
0x709B89: mov     ecx, esi
0x709B8B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709B90: push    offset aM_emit; "m_emit"
0x709B95: lea     ecx, [edi+40h]
0x709B98: call    sub_709370
0x709B9D: movzx   ebx, word ptr [esi+0Ah]
0x709BA1: movzx   ecx, word ptr [esi+8]
0x709BA5: cmp     ebx, ecx
0x709BA7: mov     [esp+0Ch+arg_0], eax
0x709BAB: jb      short loc_709BBB
0x709BAD: movzx   edx, word ptr [esi+0Eh]
0x709BB1: add     edx, ebx
0x709BB3: push    edx
0x709BB4: mov     ecx, esi
0x709BB6: call    NiTArray_SetSize
0x709BBB: lea     eax, [esp+0Ch+arg_0]
0x709BBF: push    eax
0x709BC0: push    ebx
0x709BC1: mov     ecx, esi
0x709BC3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709BC8: fld     dword ptr [edi+4Ch]
0x709BCB: push    ecx
0x709BCC: fstp    [esp+10h+var_10]; float
0x709BCF: push    offset aM_fshine; "m_fShine"
0x709BD4: call    TESOutput_PrintLabeledFloat
0x709BD9: movzx   ebx, word ptr [esi+0Ah]
0x709BDD: movzx   ecx, word ptr [esi+8]
0x709BE1: add     esp, 8
0x709BE4: cmp     ebx, ecx
0x709BE6: mov     [esp+0Ch+arg_0], eax
0x709BEA: jb      short loc_709BFA
0x709BEC: movzx   edx, word ptr [esi+0Eh]
0x709BF0: add     edx, ebx
0x709BF2: push    edx
0x709BF3: mov     ecx, esi
0x709BF5: call    NiTArray_SetSize
0x709BFA: lea     eax, [esp+0Ch+arg_0]
0x709BFE: push    eax
0x709BFF: push    ebx
0x709C00: mov     ecx, esi
0x709C02: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709C07: fld     dword ptr [edi+50h]
0x709C0A: push    ecx
0x709C0B: fstp    [esp+10h+var_10]; float
0x709C0E: push    offset aM_falpha; "m_fAlpha"
0x709C13: call    TESOutput_PrintLabeledFloat
0x709C18: movzx   edi, word ptr [esi+0Ah]
0x709C1C: movzx   ecx, word ptr [esi+8]
0x709C20: add     esp, 8
0x709C23: cmp     edi, ecx
0x709C25: mov     [esp+0Ch+arg_0], eax
0x709C29: jb      short loc_709C39
0x709C2B: movzx   edx, word ptr [esi+0Eh]
0x709C2F: add     edx, edi
0x709C31: push    edx
0x709C32: mov     ecx, esi
0x709C34: call    NiTArray_SetSize
0x709C39: lea     eax, [esp+0Ch+arg_0]
0x709C3D: push    eax
0x709C3E: push    edi
0x709C3F: mov     ecx, esi
0x709C41: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709C46: pop     edi
0x709C47: pop     esi
0x709C48: pop     ebx
0x709C49: retn    4
