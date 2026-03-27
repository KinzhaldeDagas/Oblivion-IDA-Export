0x758E90: push    ebx
0x758E91: push    esi
0x758E92: mov     esi, [esp+8+arg_0]
0x758E96: push    edi
0x758E97: push    esi
0x758E98: mov     edi, ecx
0x758E9A: call    sub_752EC0
0x758E9F: mov     eax, ds:0B417C4h
0x758EA4: push    eax; ArgList
0x758EA5: call    TESOutput_PrintString
0x758EAA: movzx   ebx, word ptr [esi+0Ah]
0x758EAE: movzx   ecx, word ptr [esi+8]
0x758EB2: add     esp, 4
0x758EB5: cmp     ebx, ecx
0x758EB7: mov     [esp+0Ch+arg_0], eax
0x758EBB: jb      short loc_758ECB
0x758EBD: movzx   edx, word ptr [esi+0Eh]
0x758EC1: add     edx, ebx
0x758EC3: push    edx
0x758EC4: mov     ecx, esi
0x758EC6: call    NiTArray_SetSize
0x758ECB: lea     eax, [esp+0Ch+arg_0]
0x758ECF: push    eax
0x758ED0: push    ebx
0x758ED1: mov     ecx, esi
0x758ED3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758ED8: mov     eax, [edi+18h]
0x758EDB: test    eax, eax
0x758EDD: jz      short loc_758EE4
0x758EDF: mov     eax, [eax+8]
0x758EE2: jmp     short loc_758EE9
0x758EE4: mov     eax, offset aNone; "None"
0x758EE9: push    eax; int
0x758EEA: push    offset aDragObject; "Drag Object"
0x758EEF: call    TESOutput_PrintLabeledString
0x758EF4: movzx   ebx, word ptr [esi+0Ah]
0x758EF8: movzx   ecx, word ptr [esi+8]
0x758EFC: add     esp, 8
0x758EFF: cmp     ebx, ecx
0x758F01: mov     [esp+0Ch+arg_0], eax
0x758F05: jb      short loc_758F15
0x758F07: movzx   edx, word ptr [esi+0Eh]
0x758F0B: add     edx, ebx
0x758F0D: push    edx
0x758F0E: mov     ecx, esi
0x758F10: call    NiTArray_SetSize
0x758F15: lea     eax, [esp+0Ch+arg_0]
0x758F19: push    eax
0x758F1A: push    ebx
0x758F1B: mov     ecx, esi
0x758F1D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758F22: push    offset aDragAxis; "Drag Axis"
0x758F27: lea     ecx, [edi+1Ch]
0x758F2A: call    sub_707280
0x758F2F: movzx   ebx, word ptr [esi+0Ah]
0x758F33: movzx   ecx, word ptr [esi+8]
0x758F37: cmp     ebx, ecx
0x758F39: mov     [esp+0Ch+arg_0], eax
0x758F3D: jb      short loc_758F4D
0x758F3F: movzx   edx, word ptr [esi+0Eh]
0x758F43: add     edx, ebx
0x758F45: push    edx
0x758F46: mov     ecx, esi
0x758F48: call    NiTArray_SetSize
0x758F4D: lea     eax, [esp+0Ch+arg_0]
0x758F51: push    eax
0x758F52: push    ebx
0x758F53: mov     ecx, esi
0x758F55: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758F5A: fld     dword ptr [edi+28h]
0x758F5D: push    ecx
0x758F5E: fstp    [esp+10h+var_10]; float
0x758F61: push    offset aPercentage; "Percentage"
0x758F66: call    TESOutput_PrintLabeledFloat
0x758F6B: movzx   ebx, word ptr [esi+0Ah]
0x758F6F: movzx   ecx, word ptr [esi+8]
0x758F73: add     esp, 8
0x758F76: cmp     ebx, ecx
0x758F78: mov     [esp+0Ch+arg_0], eax
0x758F7C: jb      short loc_758F8C
0x758F7E: movzx   edx, word ptr [esi+0Eh]
0x758F82: add     edx, ebx
0x758F84: push    edx
0x758F85: mov     ecx, esi
0x758F87: call    NiTArray_SetSize
0x758F8C: lea     eax, [esp+0Ch+arg_0]
0x758F90: push    eax
0x758F91: push    ebx
0x758F92: mov     ecx, esi
0x758F94: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758F99: fld     dword ptr [edi+2Ch]
0x758F9C: push    ecx
0x758F9D: fstp    [esp+10h+var_10]; float
0x758FA0: push    offset aRange; "Range"
0x758FA5: call    TESOutput_PrintLabeledFloat
0x758FAA: movzx   ebx, word ptr [esi+0Ah]
0x758FAE: movzx   ecx, word ptr [esi+8]
0x758FB2: add     esp, 8
0x758FB5: cmp     ebx, ecx
0x758FB7: mov     [esp+0Ch+arg_0], eax
0x758FBB: jb      short loc_758FCB
0x758FBD: movzx   edx, word ptr [esi+0Eh]
0x758FC1: add     edx, ebx
0x758FC3: push    edx
0x758FC4: mov     ecx, esi
0x758FC6: call    NiTArray_SetSize
0x758FCB: lea     eax, [esp+0Ch+arg_0]
0x758FCF: push    eax
0x758FD0: push    ebx
0x758FD1: mov     ecx, esi
0x758FD3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758FD8: fld     dword ptr [edi+30h]
0x758FDB: push    ecx
0x758FDC: fstp    [esp+10h+var_10]; float
0x758FDF: push    offset aRangefalloff; "RangeFalloff"
0x758FE4: call    TESOutput_PrintLabeledFloat
0x758FE9: movzx   edi, word ptr [esi+0Ah]
0x758FED: movzx   ecx, word ptr [esi+8]
0x758FF1: add     esp, 8
0x758FF4: cmp     edi, ecx
0x758FF6: mov     [esp+0Ch+arg_0], eax
0x758FFA: jb      short loc_75900A
0x758FFC: movzx   edx, word ptr [esi+0Eh]
0x759000: add     edx, edi
0x759002: push    edx
0x759003: mov     ecx, esi
0x759005: call    NiTArray_SetSize
0x75900A: lea     eax, [esp+0Ch+arg_0]
0x75900E: push    eax
0x75900F: push    edi
0x759010: mov     ecx, esi
0x759012: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x759017: pop     edi
0x759018: pop     esi
0x759019: pop     ebx
0x75901A: retn    4
