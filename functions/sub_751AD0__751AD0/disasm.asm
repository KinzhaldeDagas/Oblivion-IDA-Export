0x751AD0: push    ebx
0x751AD1: push    esi
0x751AD2: mov     esi, [esp+8+arg_0]
0x751AD6: push    edi
0x751AD7: push    esi
0x751AD8: mov     edi, ecx
0x751ADA: call    sub_752EC0
0x751ADF: mov     eax, ds:0B40C3Ch
0x751AE4: push    eax; ArgList
0x751AE5: call    TESOutput_PrintString
0x751AEA: movzx   ebx, word ptr [esi+0Ah]
0x751AEE: movzx   ecx, word ptr [esi+8]
0x751AF2: add     esp, 4
0x751AF5: cmp     ebx, ecx
0x751AF7: mov     [esp+0Ch+arg_0], eax
0x751AFB: jb      short loc_751B0B
0x751AFD: movzx   edx, word ptr [esi+0Eh]
0x751B01: add     edx, ebx
0x751B03: push    edx
0x751B04: mov     ecx, esi
0x751B06: call    NiTArray_SetSize
0x751B0B: lea     eax, [esp+0Ch+arg_0]
0x751B0F: push    eax
0x751B10: push    ebx
0x751B11: mov     ecx, esi
0x751B13: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751B18: mov     eax, [edi+18h]
0x751B1B: test    eax, eax
0x751B1D: jz      short loc_751B24
0x751B1F: mov     eax, [eax+8]
0x751B22: jmp     short loc_751B29
0x751B24: mov     eax, offset aNone; "None"
0x751B29: push    eax; int
0x751B2A: push    offset aGravityObject; "Gravity Object"
0x751B2F: call    TESOutput_PrintLabeledString
0x751B34: movzx   ebx, word ptr [esi+0Ah]
0x751B38: movzx   ecx, word ptr [esi+8]
0x751B3C: add     esp, 8
0x751B3F: cmp     ebx, ecx
0x751B41: mov     [esp+0Ch+arg_0], eax
0x751B45: jb      short loc_751B55
0x751B47: movzx   edx, word ptr [esi+0Eh]
0x751B4B: add     edx, ebx
0x751B4D: push    edx
0x751B4E: mov     ecx, esi
0x751B50: call    NiTArray_SetSize
0x751B55: lea     eax, [esp+0Ch+arg_0]
0x751B59: push    eax
0x751B5A: push    ebx
0x751B5B: mov     ecx, esi
0x751B5D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751B62: push    offset aGravityAxis; "Gravity Axis"
0x751B67: lea     ecx, [edi+1Ch]
0x751B6A: call    sub_707280
0x751B6F: movzx   ebx, word ptr [esi+0Ah]
0x751B73: movzx   ecx, word ptr [esi+8]
0x751B77: cmp     ebx, ecx
0x751B79: mov     [esp+0Ch+arg_0], eax
0x751B7D: jb      short loc_751B8D
0x751B7F: movzx   edx, word ptr [esi+0Eh]
0x751B83: add     edx, ebx
0x751B85: push    edx
0x751B86: mov     ecx, esi
0x751B88: call    NiTArray_SetSize
0x751B8D: lea     eax, [esp+0Ch+arg_0]
0x751B91: push    eax
0x751B92: push    ebx
0x751B93: mov     ecx, esi
0x751B95: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751B9A: fld     dword ptr [edi+28h]
0x751B9D: push    ecx
0x751B9E: fstp    [esp+10h+var_10]; float
0x751BA1: push    offset aDecay; "Decay"
0x751BA6: call    TESOutput_PrintLabeledFloat
0x751BAB: movzx   ebx, word ptr [esi+0Ah]
0x751BAF: movzx   ecx, word ptr [esi+8]
0x751BB3: add     esp, 8
0x751BB6: cmp     ebx, ecx
0x751BB8: mov     [esp+0Ch+arg_0], eax
0x751BBC: jb      short loc_751BCC
0x751BBE: movzx   edx, word ptr [esi+0Eh]
0x751BC2: add     edx, ebx
0x751BC4: push    edx
0x751BC5: mov     ecx, esi
0x751BC7: call    NiTArray_SetSize
0x751BCC: lea     eax, [esp+0Ch+arg_0]
0x751BD0: push    eax
0x751BD1: push    ebx
0x751BD2: mov     ecx, esi
0x751BD4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751BD9: fld     dword ptr [edi+2Ch]
0x751BDC: push    ecx
0x751BDD: fstp    [esp+10h+var_10]; float
0x751BE0: push    offset aStrength; "Strength"
0x751BE5: call    TESOutput_PrintLabeledFloat
0x751BEA: movzx   ebx, word ptr [esi+0Ah]
0x751BEE: movzx   ecx, word ptr [esi+8]
0x751BF2: add     esp, 8
0x751BF5: cmp     ebx, ecx
0x751BF7: mov     [esp+0Ch+arg_0], eax
0x751BFB: jb      short loc_751C0B
0x751BFD: movzx   edx, word ptr [esi+0Eh]
0x751C01: add     edx, ebx
0x751C03: push    edx
0x751C04: mov     ecx, esi
0x751C06: call    NiTArray_SetSize
0x751C0B: lea     eax, [esp+0Ch+arg_0]
0x751C0F: push    eax
0x751C10: push    ebx
0x751C11: mov     ecx, esi
0x751C13: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751C18: fld     dword ptr [edi+34h]
0x751C1B: push    ecx
0x751C1C: fstp    [esp+10h+var_10]; float
0x751C1F: push    offset aTurbulence; "Turbulence"
0x751C24: call    TESOutput_PrintLabeledFloat
0x751C29: movzx   ebx, word ptr [esi+0Ah]
0x751C2D: movzx   ecx, word ptr [esi+8]
0x751C31: add     esp, 8
0x751C34: cmp     ebx, ecx
0x751C36: mov     [esp+0Ch+arg_0], eax
0x751C3A: jb      short loc_751C4A
0x751C3C: movzx   edx, word ptr [esi+0Eh]
0x751C40: add     edx, ebx
0x751C42: push    edx
0x751C43: mov     ecx, esi
0x751C45: call    NiTArray_SetSize
0x751C4A: lea     eax, [esp+0Ch+arg_0]
0x751C4E: push    eax
0x751C4F: push    ebx
0x751C50: mov     ecx, esi
0x751C52: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751C57: fld     dword ptr [edi+38h]
0x751C5A: push    ecx
0x751C5B: fstp    [esp+10h+var_10]; float
0x751C5E: push    offset aTurbulencescal; "TurbulenceScale"
0x751C63: call    TESOutput_PrintLabeledFloat
0x751C68: movzx   ebx, word ptr [esi+0Ah]
0x751C6C: movzx   ecx, word ptr [esi+8]
0x751C70: add     esp, 8
0x751C73: cmp     ebx, ecx
0x751C75: mov     [esp+0Ch+arg_0], eax
0x751C79: jb      short loc_751C89
0x751C7B: movzx   edx, word ptr [esi+0Eh]
0x751C7F: add     edx, ebx
0x751C81: push    edx
0x751C82: mov     ecx, esi
0x751C84: call    NiTArray_SetSize
0x751C89: lea     eax, [esp+0Ch+arg_0]
0x751C8D: push    eax
0x751C8E: push    ebx
0x751C8F: mov     ecx, esi
0x751C91: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751C96: mov     edi, [edi+30h]
0x751C99: test    edi, edi
0x751C9B: jnz     short loc_751CA4
0x751C9D: mov     eax, offset aForce_planar; "FORCE_PLANAR"
0x751CA2: jmp     short loc_751CB3
0x751CA4: cmp     edi, 1
0x751CA7: mov     eax, offset aForce_spherica; "FORCE_SPHERICAL"
0x751CAC: jz      short loc_751CB3
0x751CAE: mov     eax, offset aUnknown_2; "Unknown"
0x751CB3: push    eax; int
0x751CB4: push    offset aForceType; "Force Type"
0x751CB9: call    TESOutput_PrintLabeledString
0x751CBE: movzx   edi, word ptr [esi+0Ah]
0x751CC2: movzx   ecx, word ptr [esi+8]
0x751CC6: add     esp, 8
0x751CC9: cmp     edi, ecx
0x751CCB: mov     [esp+0Ch+arg_0], eax
0x751CCF: jb      short loc_751CDF
0x751CD1: movzx   edx, word ptr [esi+0Eh]
0x751CD5: add     edx, edi
0x751CD7: push    edx
0x751CD8: mov     ecx, esi
0x751CDA: call    NiTArray_SetSize
0x751CDF: lea     eax, [esp+0Ch+arg_0]
0x751CE3: push    eax
0x751CE4: push    edi
0x751CE5: mov     ecx, esi
0x751CE7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x751CEC: pop     edi
0x751CED: pop     esi
0x751CEE: pop     ebx
0x751CEF: retn    4
