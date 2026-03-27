0x74CD60: push    ebx
0x74CD61: push    esi
0x74CD62: mov     esi, [esp+8+arg_0]
0x74CD66: push    edi
0x74CD67: push    esi
0x74CD68: mov     ebx, ecx
0x74CD6A: call    sub_7531E0
0x74CD6F: mov     eax, ds:0B40944h
0x74CD74: push    eax; ArgList
0x74CD75: call    TESOutput_PrintString
0x74CD7A: movzx   edi, word ptr [esi+0Ah]
0x74CD7E: movzx   ecx, word ptr [esi+8]
0x74CD82: add     esp, 4
0x74CD85: cmp     edi, ecx
0x74CD87: mov     [esp+0Ch+arg_0], eax
0x74CD8B: jb      short loc_74CD9B
0x74CD8D: movzx   edx, word ptr [esi+0Eh]
0x74CD91: add     edx, edi
0x74CD93: push    edx
0x74CD94: mov     ecx, esi
0x74CD96: call    NiTArray_SetSize
0x74CD9B: lea     eax, [esp+0Ch+arg_0]
0x74CD9F: push    eax
0x74CDA0: push    edi
0x74CDA1: mov     ecx, esi
0x74CDA3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74CDA8: fld     dword ptr [ebx+54h]
0x74CDAB: push    ecx
0x74CDAC: fstp    [esp+10h+var_10]; float
0x74CDAF: push    offset aRadius; "Radius"
0x74CDB4: call    TESOutput_PrintLabeledFloat
0x74CDB9: movzx   edi, word ptr [esi+0Ah]
0x74CDBD: movzx   ecx, word ptr [esi+8]
0x74CDC1: add     esp, 8
0x74CDC4: cmp     edi, ecx
0x74CDC6: mov     [esp+0Ch+arg_0], eax
0x74CDCA: jb      short loc_74CDDA
0x74CDCC: movzx   edx, word ptr [esi+0Eh]
0x74CDD0: add     edx, edi
0x74CDD2: push    edx
0x74CDD3: mov     ecx, esi
0x74CDD5: call    NiTArray_SetSize
0x74CDDA: lea     eax, [esp+0Ch+arg_0]
0x74CDDE: push    eax
0x74CDDF: push    edi
0x74CDE0: mov     ecx, esi
0x74CDE2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74CDE7: fld     dword ptr [ebx+58h]
0x74CDEA: push    ecx
0x74CDEB: fstp    [esp+10h+var_10]; float
0x74CDEE: push    offset aHeight_1; "Height"
0x74CDF3: call    TESOutput_PrintLabeledFloat
0x74CDF8: movzx   edi, word ptr [esi+0Ah]
0x74CDFC: movzx   ecx, word ptr [esi+8]
0x74CE00: add     esp, 8
0x74CE03: cmp     edi, ecx
0x74CE05: mov     [esp+0Ch+arg_0], eax
0x74CE09: jb      short loc_74CE19
0x74CE0B: movzx   edx, word ptr [esi+0Eh]
0x74CE0F: add     edx, edi
0x74CE11: push    edx
0x74CE12: mov     ecx, esi
0x74CE14: call    NiTArray_SetSize
0x74CE19: lea     eax, [esp+0Ch+arg_0]
0x74CE1D: push    eax
0x74CE1E: push    edi
0x74CE1F: mov     ecx, esi
0x74CE21: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74CE26: pop     edi
0x74CE27: pop     esi
0x74CE28: pop     ebx
0x74CE29: retn    4
