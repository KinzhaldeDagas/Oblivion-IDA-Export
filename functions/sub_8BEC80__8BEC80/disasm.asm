0x8BEC80: push    ebx
0x8BEC81: push    esi
0x8BEC82: mov     esi, [esp+8+arg_0]
0x8BEC86: push    edi
0x8BEC87: push    esi
0x8BEC88: mov     edi, ecx
0x8BEC8A: call    sub_89E210
0x8BEC8F: mov     eax, ds:0BA8080h
0x8BEC94: push    eax; ArgList
0x8BEC95: call    TESOutput_PrintString
0x8BEC9A: movzx   ebx, word ptr [esi+0Ah]
0x8BEC9E: movzx   ecx, word ptr [esi+8]
0x8BECA2: add     esp, 4
0x8BECA5: cmp     ebx, ecx
0x8BECA7: mov     [esp+0Ch+arg_0], eax
0x8BECAB: jb      short loc_8BECBB
0x8BECAD: movzx   edx, word ptr [esi+0Eh]
0x8BECB1: add     edx, ebx
0x8BECB3: push    edx
0x8BECB4: mov     ecx, esi
0x8BECB6: call    NiTArray_SetSize
0x8BECBB: lea     eax, [esp+0Ch+arg_0]
0x8BECBF: push    eax
0x8BECC0: push    ebx
0x8BECC1: mov     ecx, esi
0x8BECC3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BECC8: test    edi, edi
0x8BECCA: jz      short loc_8BECD8
0x8BECCC: mov     eax, [edi+8]
0x8BECCF: test    eax, eax
0x8BECD1: jz      short loc_8BECD8
0x8BECD3: fld     dword ptr [eax+30h]
0x8BECD6: jmp     short loc_8BECDA
0x8BECD8: fldz
0x8BECDA: fstp    [esp+0Ch+arg_0]
0x8BECDE: push    ecx
0x8BECDF: fld     [esp+10h+arg_0]
0x8BECE3: fstp    [esp+10h+var_10]; float
0x8BECE6: push    offset aSpinrate; "SpinRate"
0x8BECEB: call    TESOutput_PrintLabeledFloat
0x8BECF0: movzx   ebx, word ptr [esi+0Ah]
0x8BECF4: movzx   ecx, word ptr [esi+8]
0x8BECF8: add     esp, 8
0x8BECFB: cmp     ebx, ecx
0x8BECFD: mov     [esp+0Ch+arg_0], eax
0x8BED01: jb      short loc_8BED11
0x8BED03: movzx   edx, word ptr [esi+0Eh]
0x8BED07: add     edx, ebx
0x8BED09: push    edx
0x8BED0A: mov     ecx, esi
0x8BED0C: call    NiTArray_SetSize
0x8BED11: lea     eax, [esp+0Ch+arg_0]
0x8BED15: push    eax
0x8BED16: push    ebx
0x8BED17: mov     ecx, esi
0x8BED19: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BED1E: test    edi, edi
0x8BED20: jz      short loc_8BED2E
0x8BED22: mov     edi, [edi+8]
0x8BED25: test    edi, edi
0x8BED27: jz      short loc_8BED2E
0x8BED29: fld     dword ptr [edi+34h]
0x8BED2C: jmp     short loc_8BED30
0x8BED2E: fldz
0x8BED30: fstp    [esp+0Ch+arg_0]
0x8BED34: push    ecx
0x8BED35: fld     [esp+10h+arg_0]
0x8BED39: fstp    [esp+10h+var_10]; float
0x8BED3C: push    offset aGain; "Gain"
0x8BED41: call    TESOutput_PrintLabeledFloat
0x8BED46: movzx   edi, word ptr [esi+0Ah]
0x8BED4A: movzx   ecx, word ptr [esi+8]
0x8BED4E: add     esp, 8
0x8BED51: cmp     edi, ecx
0x8BED53: mov     [esp+0Ch+arg_0], eax
0x8BED57: jb      short loc_8BED67
0x8BED59: movzx   edx, word ptr [esi+0Eh]
0x8BED5D: add     edx, edi
0x8BED5F: push    edx
0x8BED60: mov     ecx, esi
0x8BED62: call    NiTArray_SetSize
0x8BED67: lea     eax, [esp+0Ch+arg_0]
0x8BED6B: push    eax
0x8BED6C: push    edi
0x8BED6D: mov     ecx, esi
0x8BED6F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BED74: pop     edi
0x8BED75: pop     esi
0x8BED76: pop     ebx
0x8BED77: retn    4
