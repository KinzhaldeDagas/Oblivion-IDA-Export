0x705B20: sub     esp, 90h
0x705B26: mov     eax, ds:0B30AACh
0x705B2B: xor     eax, esp
0x705B2D: mov     [esp+90h+var_4], eax
0x705B34: push    ebx
0x705B35: push    ebp
0x705B36: push    esi
0x705B37: mov     esi, [esp+9Ch+arg_0]
0x705B3E: push    edi; ArgList
0x705B3F: mov     ebx, ecx
0x705B41: push    esi
0x705B42: mov     [esp+0A4h+var_88], ebx
0x705B46: call    sub_700B10
0x705B4B: mov     eax, ds:0B3F96Ch
0x705B50: push    eax; ArgList
0x705B51: call    TESOutput_PrintString
0x705B56: movzx   edi, word ptr [esi+0Ah]
0x705B5A: movzx   ecx, word ptr [esi+8]
0x705B5E: add     esp, 4
0x705B61: cmp     edi, ecx
0x705B63: mov     [esp+0A0h+var_8C], eax
0x705B67: jb      short loc_705B77
0x705B69: movzx   edx, word ptr [esi+0Eh]
0x705B6D: add     edx, edi
0x705B6F: push    edx
0x705B70: mov     ecx, esi
0x705B72: call    NiTArray_SetSize
0x705B77: lea     eax, [esp+0A0h+var_8C]
0x705B7B: push    eax
0x705B7C: push    edi
0x705B7D: mov     ecx, esi
0x705B7F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705B84: movzx   ecx, word ptr [ebx+26h]
0x705B88: push    offset aApplymode; "ApplyMode "
0x705B8D: lea     edx, [esp+0A4h+DstBuf]
0x705B91: push    40h ; '@'; SizeInBytes
0x705B93: push    edx; DstBuf
0x705B94: mov     [esp+0ACh+var_8C], ecx
0x705B98: call    sub_6C5D40
0x705B9D: movzx   eax, byte ptr [ebx+18h]
0x705BA1: shr     eax, 1
0x705BA3: and     eax, 7
0x705BA6: push    eax; int
0x705BA7: lea     eax, [esp+0B0h+DstBuf]
0x705BAB: push    eax; ArgList
0x705BAC: call    TESOutput_PrintLabeledSignedInt
0x705BB1: movzx   edi, word ptr [esi+0Ah]
0x705BB5: movzx   ecx, word ptr [esi+8]
0x705BB9: add     esp, 14h
0x705BBC: cmp     edi, ecx
0x705BBE: mov     [esp+0A0h+var_90], eax
0x705BC2: jb      short loc_705BD2
0x705BC4: movzx   edx, word ptr [esi+0Eh]
0x705BC8: add     edx, edi
0x705BCA: push    edx
0x705BCB: mov     ecx, esi
0x705BCD: call    NiTArray_SetSize
0x705BD2: lea     eax, [esp+0A0h+var_90]
0x705BD6: push    eax
0x705BD7: push    edi
0x705BD8: mov     ecx, esi
0x705BDA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705BDF: xor     ebp, ebp
0x705BE1: cmp     [esp+0A0h+var_8C], ebp
0x705BE5: jbe     loc_705F7E
0x705BEB: jmp     short loc_705BF0
0x705BED: align 10h
0x705BF0: mov     ecx, [ebx+20h]
0x705BF3: mov     edi, [ecx+ebp*4]
0x705BF6: test    edi, edi
0x705BF8: jz      loc_705F71
0x705BFE: lea     eax, [ebp-1]; switch 5 cases
0x705C01: cmp     eax, 4
0x705C04: ja      def_705C0A
0x705C0A: jmp     ds:jpt_705C0A[eax*4]; switch jump
0x705C11: push    ebp; jumptable 00705C0A case 1
0x705C12: push    offset aMultitextureDa; "MultiTexture Dark Map"
0x705C17: jmp     loc_705DFA
0x705C1C: push    ebp; jumptable 00705C0A case 2
0x705C1D: push    offset aMultitextureDe; "MultiTexture Detail Map"
0x705C22: jmp     loc_705DFA
0x705C27: push    ebp; jumptable 00705C0A case 3
0x705C28: push    offset aMultitextureGl; "MultiTexture Gloss Map"
0x705C2D: jmp     loc_705DFA
0x705C32: push    ebp; jumptable 00705C0A case 4
0x705C33: push    offset aMultitexture_0; "MultiTexture Glow Map"
0x705C38: jmp     loc_705DFA
0x705C3D: push    ebp; jumptable 00705C0A case 5
0x705C3E: push    offset aMultitextureBu; "MultiTexture Bump Map"
0x705C43: call    TESOutput_PrintLabeledUnsignedInt
0x705C48: movzx   ebx, word ptr [esi+0Ah]
0x705C4C: movzx   edx, word ptr [esi+8]
0x705C50: add     esp, 8
0x705C53: cmp     ebx, edx
0x705C55: mov     [esp+0A0h+var_90], eax
0x705C59: jb      short loc_705C69
0x705C5B: movzx   eax, word ptr [esi+0Eh]
0x705C5F: add     eax, ebx
0x705C61: push    eax
0x705C62: mov     ecx, esi
0x705C64: call    NiTArray_SetSize
0x705C69: lea     ecx, [esp+0A0h+var_90]
0x705C6D: push    ecx
0x705C6E: push    ebx
0x705C6F: mov     ecx, esi
0x705C71: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705C76: fld     dword ptr [edi+10h]
0x705C79: fstp    [esp+0A0h+var_90]
0x705C7D: push    ecx
0x705C7E: fld     [esp+0A4h+var_90]
0x705C82: fstp    [esp+0A4h+var_A4]; float
0x705C85: push    offset aM_flumascale; "m_fLumaScale"
0x705C8A: call    TESOutput_PrintLabeledFloat
0x705C8F: movzx   ebx, word ptr [esi+0Ah]
0x705C93: movzx   edx, word ptr [esi+8]
0x705C97: add     esp, 8
0x705C9A: cmp     ebx, edx
0x705C9C: mov     [esp+0A0h+var_90], eax
0x705CA0: jb      short loc_705CB0
0x705CA2: movzx   eax, word ptr [esi+0Eh]
0x705CA6: add     eax, ebx
0x705CA8: push    eax
0x705CA9: mov     ecx, esi
0x705CAB: call    NiTArray_SetSize
0x705CB0: lea     ecx, [esp+0A0h+var_90]
0x705CB4: push    ecx
0x705CB5: push    ebx
0x705CB6: mov     ecx, esi
0x705CB8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705CBD: fld     dword ptr [edi+14h]
0x705CC0: fstp    [esp+0A0h+var_90]
0x705CC4: push    ecx
0x705CC5: fld     [esp+0A4h+var_90]
0x705CC9: fstp    [esp+0A4h+var_A4]; float
0x705CCC: push    offset aM_flumaoffset; "m_fLumaOffset"
0x705CD1: call    TESOutput_PrintLabeledFloat
0x705CD6: movzx   ebx, word ptr [esi+0Ah]
0x705CDA: movzx   edx, word ptr [esi+8]
0x705CDE: add     esp, 8
0x705CE1: cmp     ebx, edx
0x705CE3: mov     [esp+0A0h+var_90], eax
0x705CE7: jb      short loc_705CF7
0x705CE9: movzx   eax, word ptr [esi+0Eh]
0x705CED: add     eax, ebx
0x705CEF: push    eax
0x705CF0: mov     ecx, esi
0x705CF2: call    NiTArray_SetSize
0x705CF7: lea     ecx, [esp+0A0h+var_90]
0x705CFB: push    ecx
0x705CFC: push    ebx
0x705CFD: mov     ecx, esi
0x705CFF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705D04: fld     dword ptr [edi+18h]
0x705D07: fstp    [esp+0A0h+var_90]
0x705D0B: push    ecx
0x705D0C: fld     [esp+0A4h+var_90]
0x705D10: fstp    [esp+0A4h+var_A4]; float
0x705D13: push    offset aM_fbumpmat00; "m_fBumpMat00"
0x705D18: call    TESOutput_PrintLabeledFloat
0x705D1D: movzx   ebx, word ptr [esi+0Ah]
0x705D21: movzx   edx, word ptr [esi+8]
0x705D25: add     esp, 8
0x705D28: cmp     ebx, edx
0x705D2A: mov     [esp+0A0h+var_90], eax
0x705D2E: jb      short loc_705D3E
0x705D30: movzx   eax, word ptr [esi+0Eh]
0x705D34: add     eax, ebx
0x705D36: push    eax
0x705D37: mov     ecx, esi
0x705D39: call    NiTArray_SetSize
0x705D3E: lea     ecx, [esp+0A0h+var_90]
0x705D42: push    ecx
0x705D43: push    ebx
0x705D44: mov     ecx, esi
0x705D46: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705D4B: fld     dword ptr [edi+1Ch]
0x705D4E: fstp    [esp+0A0h+var_90]
0x705D52: push    ecx
0x705D53: fld     [esp+0A4h+var_90]
0x705D57: fstp    [esp+0A4h+var_A4]; float
0x705D5A: push    offset aM_fbumpmat01; "m_fBumpMat01"
0x705D5F: call    TESOutput_PrintLabeledFloat
0x705D64: movzx   ebx, word ptr [esi+0Ah]
0x705D68: movzx   edx, word ptr [esi+8]
0x705D6C: add     esp, 8
0x705D6F: cmp     ebx, edx
0x705D71: mov     [esp+0A0h+var_90], eax
0x705D75: jb      short loc_705D85
0x705D77: movzx   eax, word ptr [esi+0Eh]
0x705D7B: add     eax, ebx
0x705D7D: push    eax
0x705D7E: mov     ecx, esi
0x705D80: call    NiTArray_SetSize
0x705D85: lea     ecx, [esp+0A0h+var_90]
0x705D89: push    ecx
0x705D8A: push    ebx
0x705D8B: mov     ecx, esi
0x705D8D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705D92: fld     dword ptr [edi+20h]
0x705D95: fstp    [esp+0A0h+var_90]
0x705D99: push    ecx
0x705D9A: fld     [esp+0A4h+var_90]
0x705D9E: fstp    [esp+0A4h+var_A4]; float
0x705DA1: push    offset aM_fbumpmat10; "m_fBumpMat10"
0x705DA6: call    TESOutput_PrintLabeledFloat
0x705DAB: movzx   ebx, word ptr [esi+0Ah]
0x705DAF: movzx   edx, word ptr [esi+8]
0x705DB3: add     esp, 8
0x705DB6: cmp     ebx, edx
0x705DB8: mov     [esp+0A0h+var_90], eax
0x705DBC: jb      short loc_705DCC
0x705DBE: movzx   eax, word ptr [esi+0Eh]
0x705DC2: add     eax, ebx
0x705DC4: push    eax
0x705DC5: mov     ecx, esi
0x705DC7: call    NiTArray_SetSize
0x705DCC: lea     ecx, [esp+0A0h+var_90]
0x705DD0: push    ecx
0x705DD1: push    ebx
0x705DD2: mov     ecx, esi
0x705DD4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705DD9: fld     dword ptr [edi+24h]
0x705DDC: fstp    [esp+0A0h+var_90]
0x705DE0: push    ecx
0x705DE1: fld     [esp+0A4h+var_90]
0x705DE5: fstp    [esp+0A4h+var_A4]; float
0x705DE8: push    offset aM_fbumpmat11; "m_fBumpMat11"
0x705DED: call    TESOutput_PrintLabeledFloat
0x705DF2: jmp     short loc_705DFF
