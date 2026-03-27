0x7E28E0: push    ebx
0x7E28E1: push    ebp
0x7E28E2: push    esi
0x7E28E3: mov     esi, [esp+0Ch+arg_0]
0x7E28E7: push    edi
0x7E28E8: push    esi
0x7E28E9: mov     ebp, ecx
0x7E28EB: call    sub_73DCA0
0x7E28F0: mov     eax, ds:0B46000h
0x7E28F5: push    eax; ArgList
0x7E28F6: call    TESOutput_PrintString
0x7E28FB: movzx   edi, word ptr [esi+0Ah]
0x7E28FF: movzx   ecx, word ptr [esi+8]
0x7E2903: add     esp, 4
0x7E2906: cmp     edi, ecx
0x7E2908: mov     [esp+10h+arg_0], eax
0x7E290C: jb      short loc_7E291C
0x7E290E: movzx   edx, word ptr [esi+0Eh]
0x7E2912: add     edx, edi
0x7E2914: push    edx
0x7E2915: mov     ecx, esi
0x7E2917: call    NiTArray_SetSize
0x7E291C: lea     eax, [esp+10h+arg_0]
0x7E2920: push    eax
0x7E2921: push    edi
0x7E2922: mov     ecx, esi
0x7E2924: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2929: test    byte ptr [ebp+1Ch], 1
0x7E292D: jbe     short loc_7E2969
0x7E292F: push    1; char
0x7E2931: push    offset aSpecular; "specular"
0x7E2936: call    TESOutput_PrintLabeledBool
0x7E293B: movzx   edi, word ptr [esi+0Ah]
0x7E293F: movzx   ecx, word ptr [esi+8]
0x7E2943: add     esp, 8
0x7E2946: cmp     edi, ecx
0x7E2948: mov     [esp+10h+arg_0], eax
0x7E294C: jb      short loc_7E295C
0x7E294E: movzx   edx, word ptr [esi+0Eh]
0x7E2952: add     edx, edi
0x7E2954: push    edx
0x7E2955: mov     ecx, esi
0x7E2957: call    NiTArray_SetSize
0x7E295C: lea     eax, [esp+10h+arg_0]
0x7E2960: push    eax
0x7E2961: push    edi
0x7E2962: mov     ecx, esi
0x7E2964: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2969: test    byte ptr [ebp+1Ch], 2
0x7E296D: jbe     short loc_7E29A9
0x7E296F: push    1; char
0x7E2971: push    offset aSkinned; "skinned"
0x7E2976: call    TESOutput_PrintLabeledBool
0x7E297B: movzx   edi, word ptr [esi+0Ah]
0x7E297F: movzx   ecx, word ptr [esi+8]
0x7E2983: add     esp, 8
0x7E2986: cmp     edi, ecx
0x7E2988: mov     [esp+10h+arg_0], eax
0x7E298C: jb      short loc_7E299C
0x7E298E: movzx   edx, word ptr [esi+0Eh]
0x7E2992: add     edx, edi
0x7E2994: push    edx
0x7E2995: mov     ecx, esi
0x7E2997: call    NiTArray_SetSize
0x7E299C: lea     eax, [esp+10h+arg_0]
0x7E29A0: push    eax
0x7E29A1: push    edi
0x7E29A2: mov     ecx, esi
0x7E29A4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E29A9: test    byte ptr [ebp+1Ch], 4
0x7E29AD: jbe     short loc_7E29E9
0x7E29AF: push    1; char
0x7E29B1: push    offset aLowdetail; "lowdetail"
0x7E29B6: call    TESOutput_PrintLabeledBool
0x7E29BB: movzx   edi, word ptr [esi+0Ah]
0x7E29BF: movzx   ecx, word ptr [esi+8]
0x7E29C3: add     esp, 8
0x7E29C6: cmp     edi, ecx
0x7E29C8: mov     [esp+10h+arg_0], eax
0x7E29CC: jb      short loc_7E29DC
0x7E29CE: movzx   edx, word ptr [esi+0Eh]
0x7E29D2: add     edx, edi
0x7E29D4: push    edx
0x7E29D5: mov     ecx, esi
0x7E29D7: call    NiTArray_SetSize
0x7E29DC: lea     eax, [esp+10h+arg_0]
0x7E29E0: push    eax
0x7E29E1: push    edi
0x7E29E2: mov     ecx, esi
0x7E29E4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E29E9: test    byte ptr [ebp+1Ch], 8
0x7E29ED: jbe     short loc_7E2A29
0x7E29EF: push    1; char
0x7E29F1: push    offset aMultitexture; "multitexture"
0x7E29F6: call    TESOutput_PrintLabeledBool
0x7E29FB: movzx   edi, word ptr [esi+0Ah]
0x7E29FF: movzx   ecx, word ptr [esi+8]
0x7E2A03: add     esp, 8
0x7E2A06: cmp     edi, ecx
0x7E2A08: mov     [esp+10h+arg_0], eax
0x7E2A0C: jb      short loc_7E2A1C
0x7E2A0E: movzx   edx, word ptr [esi+0Eh]
0x7E2A12: add     edx, edi
0x7E2A14: push    edx
0x7E2A15: mov     ecx, esi
0x7E2A17: call    NiTArray_SetSize
0x7E2A1C: lea     eax, [esp+10h+arg_0]
0x7E2A20: push    eax
0x7E2A21: push    edi
0x7E2A22: mov     ecx, esi
0x7E2A24: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2A29: test    byte ptr [ebp+1Ch], 10h
0x7E2A2D: jbe     short loc_7E2A69
0x7E2A2F: push    1; char
0x7E2A31: push    offset aMultispecular; "multispecular"
0x7E2A36: call    TESOutput_PrintLabeledBool
0x7E2A3B: movzx   edi, word ptr [esi+0Ah]
0x7E2A3F: movzx   ecx, word ptr [esi+8]
0x7E2A43: add     esp, 8
0x7E2A46: cmp     edi, ecx
0x7E2A48: mov     [esp+10h+arg_0], eax
0x7E2A4C: jb      short loc_7E2A5C
0x7E2A4E: movzx   edx, word ptr [esi+0Eh]
0x7E2A52: add     edx, edi
0x7E2A54: push    edx
0x7E2A55: mov     ecx, esi
0x7E2A57: call    NiTArray_SetSize
0x7E2A5C: lea     eax, [esp+10h+arg_0]
0x7E2A60: push    eax
0x7E2A61: push    edi
0x7E2A62: mov     ecx, esi
0x7E2A64: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2A69: test    dword ptr [ebp+1Ch], 80h
0x7E2A70: jbe     short loc_7E2AAC
0x7E2A72: push    1; char
0x7E2A74: push    offset aEnvmapReflecti; "envmap reflection"
0x7E2A79: call    TESOutput_PrintLabeledBool
0x7E2A7E: movzx   edi, word ptr [esi+0Ah]
0x7E2A82: movzx   ecx, word ptr [esi+8]
0x7E2A86: add     esp, 8
0x7E2A89: cmp     edi, ecx
0x7E2A8B: mov     [esp+10h+arg_0], eax
0x7E2A8F: jb      short loc_7E2A9F
0x7E2A91: movzx   edx, word ptr [esi+0Eh]
0x7E2A95: add     edx, edi
0x7E2A97: push    edx
0x7E2A98: mov     ecx, esi
0x7E2A9A: call    NiTArray_SetSize
0x7E2A9F: lea     eax, [esp+10h+arg_0]
0x7E2AA3: push    eax
0x7E2AA4: push    edi
0x7E2AA5: mov     ecx, esi
0x7E2AA7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2AAC: fld1
0x7E2AAE: fcomp   dword ptr [ebp+20h]
0x7E2AB1: fnstsw  ax
0x7E2AB3: test    ah, 41h
0x7E2AB6: jnz     short loc_7E2AF7
0x7E2AB8: fld     dword ptr [ebp+20h]
0x7E2ABB: push    ecx
0x7E2ABC: fstp    [esp+14h+var_14]; float
0x7E2ABF: push    offset aFalpha; "fAlpha"
0x7E2AC4: call    TESOutput_PrintLabeledFloat
0x7E2AC9: movzx   edi, word ptr [esi+0Ah]
0x7E2ACD: movzx   ecx, word ptr [esi+8]
0x7E2AD1: add     esp, 8
0x7E2AD4: cmp     edi, ecx
0x7E2AD6: mov     [esp+10h+arg_0], eax
0x7E2ADA: jb      short loc_7E2AEA
0x7E2ADC: movzx   edx, word ptr [esi+0Eh]
0x7E2AE0: add     edx, edi
0x7E2AE2: push    edx
0x7E2AE3: mov     ecx, esi
0x7E2AE5: call    NiTArray_SetSize
0x7E2AEA: lea     eax, [esp+10h+arg_0]
0x7E2AEE: push    eax
0x7E2AEF: push    edi
0x7E2AF0: mov     ecx, esi
0x7E2AF2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2AF7: test    dword ptr [ebp+1Ch], 100h
0x7E2AFE: jbe     short loc_7E2B3A
0x7E2B00: push    1; char
0x7E2B02: push    offset aAlphaBaseTextu; "alpha base texture"
0x7E2B07: call    TESOutput_PrintLabeledBool
0x7E2B0C: movzx   edi, word ptr [esi+0Ah]
0x7E2B10: movzx   ecx, word ptr [esi+8]
0x7E2B14: add     esp, 8
0x7E2B17: cmp     edi, ecx
0x7E2B19: mov     [esp+10h+arg_0], eax
0x7E2B1D: jb      short loc_7E2B2D
0x7E2B1F: movzx   edx, word ptr [esi+0Eh]
0x7E2B23: add     edx, edi
0x7E2B25: push    edx
0x7E2B26: mov     ecx, esi
0x7E2B28: call    NiTArray_SetSize
0x7E2B2D: lea     eax, [esp+10h+arg_0]
0x7E2B31: push    eax
0x7E2B32: push    edi
0x7E2B33: mov     ecx, esi
0x7E2B35: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2B3A: mov     eax, [ebp+1Ch]
0x7E2B3D: shr     eax, 1Ch
0x7E2B40: movzx   ecx, al
0x7E2B43: push    ecx; int
0x7E2B44: push    offset aScenegraph; "Scenegraph"
0x7E2B49: call    TESOutput_PrintLabeledSignedInt
0x7E2B4E: movzx   edi, word ptr [esi+0Ah]
0x7E2B52: movzx   edx, word ptr [esi+8]
0x7E2B56: add     esp, 8
0x7E2B59: cmp     edi, edx
0x7E2B5B: mov     [esp+10h+arg_0], eax
0x7E2B5F: jb      short loc_7E2B6F
0x7E2B61: movzx   eax, word ptr [esi+0Eh]
0x7E2B65: add     eax, edi
0x7E2B67: push    eax
0x7E2B68: mov     ecx, esi
0x7E2B6A: call    NiTArray_SetSize
0x7E2B6F: lea     ecx, [esp+10h+arg_0]
0x7E2B73: push    ecx
0x7E2B74: push    edi
0x7E2B75: mov     ecx, esi
0x7E2B77: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2B7C: mov     edx, [ebp+24h]
0x7E2B7F: push    edx; int
0x7E2B80: push    offset aIlastrenderpas; "iLastRenderPassState"
0x7E2B85: call    TESOutput_PrintLabeledSignedInt
0x7E2B8A: movzx   edi, word ptr [esi+0Ah]
0x7E2B8E: mov     [esp+18h+arg_0], eax
0x7E2B92: movzx   eax, word ptr [esi+8]
0x7E2B96: add     esp, 8
0x7E2B99: cmp     edi, eax
0x7E2B9B: jb      short loc_7E2BAB
0x7E2B9D: movzx   ecx, word ptr [esi+0Eh]
0x7E2BA1: add     ecx, edi
0x7E2BA3: push    ecx
0x7E2BA4: mov     ecx, esi
0x7E2BA6: call    NiTArray_SetSize
0x7E2BAB: lea     edx, [esp+10h+arg_0]
0x7E2BAF: push    edx
0x7E2BB0: push    edi
0x7E2BB1: mov     ecx, esi
0x7E2BB3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2BB8: mov     ebx, [ebp+34h]
0x7E2BBB: push    ebx; int
0x7E2BBC: push    offset aNumberOfPasses; "number of passes"
0x7E2BC1: call    TESOutput_PrintLabeledSignedInt
0x7E2BC6: movzx   edi, word ptr [esi+0Ah]
0x7E2BCA: mov     [esp+18h+arg_0], eax
0x7E2BCE: movzx   eax, word ptr [esi+8]
0x7E2BD2: add     esp, 8
0x7E2BD5: cmp     edi, eax
0x7E2BD7: jb      short loc_7E2BE7
0x7E2BD9: movzx   ecx, word ptr [esi+0Eh]
0x7E2BDD: add     ecx, edi
0x7E2BDF: push    ecx
0x7E2BE0: mov     ecx, esi
0x7E2BE2: call    NiTArray_SetSize
0x7E2BE7: lea     edx, [esp+10h+arg_0]
0x7E2BEB: push    edx
0x7E2BEC: push    edi
0x7E2BED: mov     ecx, esi
0x7E2BEF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2BF4: test    ebx, ebx
0x7E2BF6: jle     loc_7E2CA9
0x7E2BFC: mov     eax, [ebp+2Ch]
0x7E2BFF: mov     ebx, [eax]
0x7E2C01: lea     ecx, [eax+8]
0x7E2C04: mov     eax, [ecx]
0x7E2C06: test    eax, eax
0x7E2C08: jz      loc_7E2CA9
0x7E2C0E: mov     edi, edi
0x7E2C10: cmp     byte ptr [eax+6], 0
0x7E2C14: jz      short loc_7E2C53
0x7E2C16: movzx   eax, word ptr [eax+4]
0x7E2C1A: push    eax
0x7E2C1B: call    BSShaderProperty_GetRenderPassName
0x7E2C20: push    eax; int
0x7E2C21: push    offset aFpass; " Fpass"
0x7E2C26: call    TESOutput_PrintLabeledString
0x7E2C2B: movzx   edi, word ptr [esi+0Ah]
0x7E2C2F: movzx   ecx, word ptr [esi+8]
0x7E2C33: add     esp, 0Ch
0x7E2C36: cmp     edi, ecx
0x7E2C38: mov     [esp+10h+arg_0], eax
0x7E2C3C: jb      short loc_7E2C4C
0x7E2C3E: movzx   edx, word ptr [esi+0Eh]
0x7E2C42: add     edx, edi
0x7E2C44: push    edx
0x7E2C45: mov     ecx, esi
0x7E2C47: call    NiTArray_SetSize
0x7E2C4C: lea     eax, [esp+10h+arg_0]
0x7E2C50: push    eax
0x7E2C51: jmp     short loc_7E2C8E
0x7E2C53: movzx   ecx, word ptr [eax+4]
0x7E2C57: push    ecx
0x7E2C58: call    BSShaderProperty_GetRenderPassName
0x7E2C5D: push    eax; int
0x7E2C5E: push    offset aPass; "  pass"
0x7E2C63: call    TESOutput_PrintLabeledString
0x7E2C68: movzx   edi, word ptr [esi+0Ah]
0x7E2C6C: movzx   edx, word ptr [esi+8]
0x7E2C70: add     esp, 0Ch
0x7E2C73: cmp     edi, edx
0x7E2C75: mov     [esp+10h+arg_0], eax
0x7E2C79: jb      short loc_7E2C89
0x7E2C7B: movzx   eax, word ptr [esi+0Eh]
0x7E2C7F: add     eax, edi
0x7E2C81: push    eax
0x7E2C82: mov     ecx, esi
0x7E2C84: call    NiTArray_SetSize
0x7E2C89: lea     ecx, [esp+10h+arg_0]
0x7E2C8D: push    ecx
0x7E2C8E: push    edi
0x7E2C8F: mov     ecx, esi
0x7E2C91: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E2C96: test    ebx, ebx
0x7E2C98: jz      short loc_7E2CA9
0x7E2C9A: lea     eax, [ebx+8]
0x7E2C9D: mov     eax, [eax]
0x7E2C9F: test    eax, eax
0x7E2CA1: mov     ebx, [ebx]
0x7E2CA3: jnz     loc_7E2C10
0x7E2CA9: pop     edi
0x7E2CAA: pop     esi
0x7E2CAB: pop     ebp
0x7E2CAC: pop     ebx
0x7E2CAD: retn    4
