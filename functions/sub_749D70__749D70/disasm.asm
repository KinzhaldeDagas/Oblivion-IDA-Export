0x749D70: push    ebx
0x749D71: push    esi
0x749D72: mov     esi, [esp+8+arg_0]
0x749D76: push    edi
0x749D77: push    esi
0x749D78: mov     edi, ecx
0x749D7A: call    sub_7421B0
0x749D7F: mov     eax, ds:0B40864h
0x749D84: push    eax; ArgList
0x749D85: call    TESOutput_PrintString
0x749D8A: movzx   ebx, word ptr [esi+0Ah]
0x749D8E: movzx   ecx, word ptr [esi+8]
0x749D92: add     esp, 4
0x749D95: cmp     ebx, ecx
0x749D97: mov     [esp+0Ch+arg_0], eax
0x749D9B: jb      short loc_749DAB
0x749D9D: movzx   edx, word ptr [esi+0Eh]
0x749DA1: add     edx, ebx
0x749DA3: push    edx
0x749DA4: mov     ecx, esi
0x749DA6: call    NiTArray_SetSize
0x749DAB: lea     eax, [esp+0Ch+arg_0]
0x749DAF: push    eax
0x749DB0: push    ebx
0x749DB1: mov     ecx, esi
0x749DB3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x749DB8: movzx   ecx, byte ptr [edi+0C0h]
0x749DBF: push    ecx; char
0x749DC0: push    offset aWorldSpace; "World Space"
0x749DC5: call    TESOutput_PrintLabeledBool
0x749DCA: movzx   ebx, word ptr [esi+0Ah]
0x749DCE: movzx   edx, word ptr [esi+8]
0x749DD2: add     esp, 8
0x749DD5: cmp     ebx, edx
0x749DD7: mov     [esp+0Ch+arg_0], eax
0x749DDB: jb      short loc_749DEB
0x749DDD: movzx   eax, word ptr [esi+0Eh]
0x749DE1: add     eax, ebx
0x749DE3: push    eax
0x749DE4: mov     ecx, esi
0x749DE6: call    NiTArray_SetSize
0x749DEB: lea     ecx, [esp+0Ch+arg_0]
0x749DEF: push    ecx
0x749DF0: push    ebx
0x749DF1: mov     ecx, esi
0x749DF3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x749DF8: mov     eax, [edi+0D0h]
0x749DFE: push    eax; int
0x749DFF: push    offset aNummods; "NumMods"
0x749E04: call    TESOutput_PrintLabeledUnsignedInt
0x749E09: movzx   ebx, word ptr [esi+0Ah]
0x749E0D: movzx   edx, word ptr [esi+8]
0x749E11: add     esp, 8
0x749E14: cmp     ebx, edx
0x749E16: mov     [esp+0Ch+arg_0], eax
0x749E1A: jb      short loc_749E2A
0x749E1C: movzx   eax, word ptr [esi+0Eh]
0x749E20: add     eax, ebx
0x749E22: push    eax
0x749E23: mov     ecx, esi
0x749E25: call    NiTArray_SetSize
0x749E2A: lea     ecx, [esp+0Ch+arg_0]
0x749E2E: push    ecx
0x749E2F: push    ebx
0x749E30: mov     ecx, esi
0x749E32: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x749E37: mov     edx, [edi+0B4h]
0x749E3D: movzx   eax, word ptr [edx+48h]
0x749E41: push    eax; __int16
0x749E42: push    offset aNumparticles; "NumParticles"
0x749E47: call    TESOutput_PrintLabeledUnsignedShort
0x749E4C: movzx   ebx, word ptr [esi+0Ah]
0x749E50: mov     [esp+14h+arg_0], eax
0x749E54: movzx   eax, word ptr [esi+8]
0x749E58: add     esp, 8
0x749E5B: cmp     ebx, eax
0x749E5D: jb      short loc_749E6D
0x749E5F: movzx   ecx, word ptr [esi+0Eh]
0x749E63: add     ecx, ebx
0x749E65: push    ecx
0x749E66: mov     ecx, esi
0x749E68: call    NiTArray_SetSize
0x749E6D: lea     edx, [esp+0Ch+arg_0]
0x749E71: push    edx
0x749E72: push    ebx
0x749E73: mov     ecx, esi
0x749E75: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x749E7A: mov     eax, [edi+0B4h]
0x749E80: movzx   eax, word ptr [eax+8]
0x749E84: push    eax; __int16
0x749E85: push    offset aMaxparticles; "MaxParticles"
0x749E8A: call    TESOutput_PrintLabeledUnsignedShort
0x749E8F: movzx   edi, word ptr [esi+0Ah]
0x749E93: movzx   ecx, word ptr [esi+8]
0x749E97: add     esp, 8
0x749E9A: cmp     edi, ecx
0x749E9C: mov     [esp+0Ch+arg_0], eax
0x749EA0: jb      short loc_749EB0
0x749EA2: movzx   edx, word ptr [esi+0Eh]
0x749EA6: add     edx, edi
0x749EA8: push    edx
0x749EA9: mov     ecx, esi
0x749EAB: call    NiTArray_SetSize
0x749EB0: lea     eax, [esp+0Ch+arg_0]
0x749EB4: push    eax
0x749EB5: push    edi
0x749EB6: mov     ecx, esi
0x749EB8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x749EBD: pop     edi
0x749EBE: pop     esi
0x749EBF: pop     ebx
0x749EC0: retn    4
