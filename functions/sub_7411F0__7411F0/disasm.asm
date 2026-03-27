0x7411F0: push    ebx
0x7411F1: push    esi
0x7411F2: mov     esi, dword ptr [esp+8+arg_0]
0x7411F6: push    edi
0x7411F7: push    esi
0x7411F8: mov     edi, ecx
0x7411FA: call    sub_700B10
0x7411FF: mov     eax, ds:0B401F4h
0x741204: push    eax; ArgList
0x741205: call    TESOutput_PrintString
0x74120A: movzx   ebx, word ptr [esi+0Ah]
0x74120E: movzx   ecx, word ptr [esi+8]
0x741212: add     esp, 4
0x741215: cmp     ebx, ecx
0x741217: mov     dword ptr [esp+0Ch+arg_0], eax
0x74121B: jb      short loc_74122B
0x74121D: movzx   edx, word ptr [esi+0Eh]
0x741221: add     edx, ebx
0x741223: push    edx
0x741224: mov     ecx, esi
0x741226: call    NiTArray_SetSize
0x74122B: lea     eax, [esp+0Ch+arg_0]
0x74122F: push    eax
0x741230: push    ebx
0x741231: mov     ecx, esi
0x741233: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741238: mov     cl, [edi+18h]
0x74123B: and     cl, 1
0x74123E: mov     [esp+0Ch+arg_0], cl
0x741242: mov     edx, dword ptr [esp+0Ch+arg_0]
0x741246: push    edx; char
0x741247: push    offset aEnable; "Enable"
0x74124C: call    TESOutput_PrintLabeledBool
0x741251: movzx   ebx, word ptr [esi+0Ah]
0x741255: mov     dword ptr [esp+14h+arg_0], eax
0x741259: movzx   eax, word ptr [esi+8]
0x74125D: add     esp, 8
0x741260: cmp     ebx, eax
0x741262: jb      short loc_741272
0x741264: movzx   ecx, word ptr [esi+0Eh]
0x741268: add     ecx, ebx
0x74126A: push    ecx
0x74126B: mov     ecx, esi
0x74126D: call    NiTArray_SetSize
0x741272: lea     edx, [esp+0Ch+arg_0]
0x741276: push    edx
0x741277: push    ebx
0x741278: mov     ecx, esi
0x74127A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74127F: fld     dword ptr [edi+1Ch]
0x741282: push    ecx
0x741283: fstp    [esp+10h+var_10]; float
0x741286: push    offset aDepth_1; "Depth"
0x74128B: call    TESOutput_PrintLabeledFloat
0x741290: movzx   ebx, word ptr [esi+0Ah]
0x741294: mov     dword ptr [esp+14h+arg_0], eax
0x741298: movzx   eax, word ptr [esi+8]
0x74129C: add     esp, 8
0x74129F: cmp     ebx, eax
0x7412A1: jb      short loc_7412B1
0x7412A3: movzx   ecx, word ptr [esi+0Eh]
0x7412A7: add     ecx, ebx
0x7412A9: push    ecx
0x7412AA: mov     ecx, esi
0x7412AC: call    NiTArray_SetSize
0x7412B1: lea     edx, [esp+0Ch+arg_0]
0x7412B5: push    edx
0x7412B6: push    ebx
0x7412B7: mov     ecx, esi
0x7412B9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7412BE: movzx   eax, byte ptr [edi+18h]
0x7412C2: shr     eax, 1
0x7412C4: and     eax, 3
0x7412C7: push    eax; int
0x7412C8: push    offset aFunction; "Function"
0x7412CD: call    sub_740D30
0x7412D2: movzx   ebx, word ptr [esi+0Ah]
0x7412D6: mov     dword ptr [esp+14h+arg_0], eax
0x7412DA: movzx   eax, word ptr [esi+8]
0x7412DE: add     esp, 8
0x7412E1: cmp     ebx, eax
0x7412E3: jb      short loc_7412F3
0x7412E5: movzx   ecx, word ptr [esi+0Eh]
0x7412E9: add     ecx, ebx
0x7412EB: push    ecx
0x7412EC: mov     ecx, esi
0x7412EE: call    NiTArray_SetSize
0x7412F3: lea     edx, [esp+0Ch+arg_0]
0x7412F7: push    edx
0x7412F8: push    ebx
0x7412F9: mov     ecx, esi
0x7412FB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741300: push    offset aColor_1; "Color"
0x741305: lea     ecx, [edi+20h]
0x741308: call    sub_709370
0x74130D: movzx   edi, word ptr [esi+0Ah]
0x741311: mov     dword ptr [esp+0Ch+arg_0], eax
0x741315: movzx   eax, word ptr [esi+8]
0x741319: cmp     edi, eax
0x74131B: jb      short loc_74132B
0x74131D: movzx   ecx, word ptr [esi+0Eh]
0x741321: add     ecx, edi
0x741323: push    ecx
0x741324: mov     ecx, esi
0x741326: call    NiTArray_SetSize
0x74132B: lea     edx, [esp+0Ch+arg_0]
0x74132F: push    edx
0x741330: push    edi
0x741331: mov     ecx, esi
0x741333: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741338: pop     edi
0x741339: pop     esi
0x74133A: pop     ebx
0x74133B: retn    4
