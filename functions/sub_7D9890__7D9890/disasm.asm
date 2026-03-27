0x7D9890: push    ebx
0x7D9891: push    esi
0x7D9892: mov     esi, [esp+8+arg_0]
0x7D9896: push    edi
0x7D9897: push    esi
0x7D9898: mov     edi, ecx
0x7D989A: call    sub_7EE5D0
0x7D989F: mov     eax, ds:0B45DA8h
0x7D98A4: push    eax; ArgList
0x7D98A5: call    TESOutput_PrintString
0x7D98AA: movzx   ebx, word ptr [esi+0Ah]
0x7D98AE: movzx   ecx, word ptr [esi+8]
0x7D98B2: add     esp, 4
0x7D98B5: cmp     ebx, ecx
0x7D98B7: mov     [esp+0Ch+arg_0], eax
0x7D98BB: jb      short loc_7D98CB
0x7D98BD: movzx   edx, word ptr [esi+0Eh]
0x7D98C1: add     edx, ebx
0x7D98C3: push    edx
0x7D98C4: mov     ecx, esi
0x7D98C6: call    NiTArray_SetSize
0x7D98CB: lea     eax, [esp+0Ch+arg_0]
0x7D98CF: push    eax
0x7D98D0: push    ebx
0x7D98D1: mov     ecx, esi
0x7D98D3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D98D8: test    dword ptr [edi+1Ch], 400h
0x7D98DF: jbe     short loc_7D991B
0x7D98E1: push    1; char
0x7D98E3: push    offset aFacegenblend_0; "facegenblend"
0x7D98E8: call    TESOutput_PrintLabeledBool
0x7D98ED: movzx   ebx, word ptr [esi+0Ah]
0x7D98F1: movzx   ecx, word ptr [esi+8]
0x7D98F5: add     esp, 8
0x7D98F8: cmp     ebx, ecx
0x7D98FA: mov     [esp+0Ch+arg_0], eax
0x7D98FE: jb      short loc_7D990E
0x7D9900: movzx   edx, word ptr [esi+0Eh]
0x7D9904: add     edx, ebx
0x7D9906: push    edx
0x7D9907: mov     ecx, esi
0x7D9909: call    NiTArray_SetSize
0x7D990E: lea     eax, [esp+0Ch+arg_0]
0x7D9912: push    eax
0x7D9913: push    ebx
0x7D9914: mov     ecx, esi
0x7D9916: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D991B: test    dword ptr [edi+1Ch], 4000h
0x7D9922: ja      loc_7D9B01
0x7D9928: mov     ecx, [edi+0BCh]
0x7D992E: mov     eax, [ecx]
0x7D9930: push    eax
0x7D9931: call    sub_6F9540
0x7D9936: add     esp, 4
0x7D9939: test    eax, eax
0x7D993B: jz      short loc_7D9970
0x7D993D: push    eax; int
0x7D993E: push    offset aBaseDiff; "base diff"
0x7D9943: call    TESOutput_PrintLabeledString
0x7D9948: movzx   ebx, word ptr [esi+0Ah]
0x7D994C: movzx   edx, word ptr [esi+8]
0x7D9950: add     esp, 8
0x7D9953: cmp     ebx, edx
0x7D9955: mov     [esp+0Ch+arg_0], eax
0x7D9959: jb      short loc_7D9969
0x7D995B: movzx   eax, word ptr [esi+0Eh]
0x7D995F: add     eax, ebx
0x7D9961: push    eax
0x7D9962: mov     ecx, esi
0x7D9964: call    NiTArray_SetSize
0x7D9969: lea     ecx, [esp+0Ch+arg_0]
0x7D996D: push    ecx
0x7D996E: jmp     short loc_7D99A9
0x7D9970: mov     edx, [edi+0BCh]
0x7D9976: mov     eax, [edx]
0x7D9978: push    eax; int
0x7D9979: push    offset aBaseDiff; "base diff"
0x7D997E: call    TESOutput_PrintLabeledPointer
0x7D9983: movzx   ebx, word ptr [esi+0Ah]
0x7D9987: mov     [esp+14h+arg_0], eax
0x7D998B: movzx   eax, word ptr [esi+8]
0x7D998F: add     esp, 8
0x7D9992: cmp     ebx, eax
0x7D9994: jb      short loc_7D99A4
0x7D9996: movzx   ecx, word ptr [esi+0Eh]
0x7D999A: add     ecx, ebx
0x7D999C: push    ecx
0x7D999D: mov     ecx, esi
0x7D999F: call    NiTArray_SetSize
0x7D99A4: lea     edx, [esp+0Ch+arg_0]
0x7D99A8: push    edx
0x7D99A9: push    ebx
0x7D99AA: mov     ecx, esi
0x7D99AC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D99B1: mov     eax, [edi+0C0h]
0x7D99B7: mov     eax, [eax]
0x7D99B9: push    eax
0x7D99BA: call    sub_6F9540
0x7D99BF: add     esp, 4
0x7D99C2: test    eax, eax
0x7D99C4: jz      short loc_7D99F9
0x7D99C6: push    eax; int
0x7D99C7: push    offset aBaseNormal; "base normal"
0x7D99CC: call    TESOutput_PrintLabeledString
0x7D99D1: movzx   ebx, word ptr [esi+0Ah]
0x7D99D5: movzx   ecx, word ptr [esi+8]
0x7D99D9: add     esp, 8
0x7D99DC: cmp     ebx, ecx
0x7D99DE: mov     [esp+0Ch+arg_0], eax
0x7D99E2: jb      short loc_7D99F2
0x7D99E4: movzx   edx, word ptr [esi+0Eh]
0x7D99E8: add     edx, ebx
0x7D99EA: push    edx
0x7D99EB: mov     ecx, esi
0x7D99ED: call    NiTArray_SetSize
0x7D99F2: lea     eax, [esp+0Ch+arg_0]
0x7D99F6: push    eax
0x7D99F7: jmp     short loc_7D9A32
0x7D99F9: mov     ecx, [edi+0C0h]
0x7D99FF: mov     eax, [ecx]
0x7D9A01: push    eax; int
0x7D9A02: push    offset aBaseNormal; "base normal"
0x7D9A07: call    TESOutput_PrintLabeledPointer
0x7D9A0C: movzx   ebx, word ptr [esi+0Ah]
0x7D9A10: movzx   edx, word ptr [esi+8]
0x7D9A14: add     esp, 8
0x7D9A17: cmp     ebx, edx
0x7D9A19: mov     [esp+0Ch+arg_0], eax
0x7D9A1D: jb      short loc_7D9A2D
0x7D9A1F: movzx   eax, word ptr [esi+0Eh]
0x7D9A23: add     eax, ebx
0x7D9A25: push    eax
0x7D9A26: mov     ecx, esi
0x7D9A28: call    NiTArray_SetSize
0x7D9A2D: lea     ecx, [esp+0Ch+arg_0]
0x7D9A31: push    ecx
0x7D9A32: push    ebx
0x7D9A33: mov     ecx, esi
0x7D9A35: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9A3A: mov     edx, [edi+0BCh]
0x7D9A40: mov     eax, [edx+4]
0x7D9A43: test    eax, eax
0x7D9A45: jz      short loc_7D9A94
0x7D9A47: push    eax
0x7D9A48: call    sub_6F9540
0x7D9A4D: add     esp, 4
0x7D9A50: test    eax, eax
0x7D9A52: jz      short loc_7D9A6D
0x7D9A54: push    eax; int
0x7D9A55: push    offset aMultiDiff; "multi diff"
0x7D9A5A: call    TESOutput_PrintLabeledString
0x7D9A5F: mov     [esp+14h+arg_0], eax
0x7D9A63: add     esp, 8
0x7D9A66: lea     eax, [esp+0Ch+arg_0]
0x7D9A6A: push    eax
0x7D9A6B: jmp     short loc_7D9A8D
0x7D9A6D: mov     ecx, [edi+0BCh]
0x7D9A73: mov     eax, [ecx+4]
0x7D9A76: push    eax; int
0x7D9A77: push    offset aMultiDiff; "multi diff"
0x7D9A7C: call    TESOutput_PrintLabeledPointer
0x7D9A81: add     esp, 8
0x7D9A84: lea     edx, [esp+0Ch+arg_0]
0x7D9A88: mov     [esp+0Ch+arg_0], eax
0x7D9A8C: push    edx
0x7D9A8D: mov     ecx, esi
0x7D9A8F: call    NiTArray_Add
0x7D9A94: mov     eax, [edi+0C0h]
0x7D9A9A: mov     eax, [eax+4]
0x7D9A9D: test    eax, eax
0x7D9A9F: jz      loc_7D9D19
0x7D9AA5: push    eax
0x7D9AA6: call    sub_6F9540
0x7D9AAB: add     esp, 4
0x7D9AAE: test    eax, eax
0x7D9AB0: jz      short loc_7D9AD5
0x7D9AB2: push    eax; int
0x7D9AB3: push    offset aMultiNormal; "multi normal"
0x7D9AB8: call    TESOutput_PrintLabeledString
0x7D9ABD: add     esp, 8
0x7D9AC0: lea     ecx, [esp+0Ch+arg_0]
0x7D9AC4: push    ecx
0x7D9AC5: mov     ecx, esi
0x7D9AC7: mov     [esp+10h+arg_0], eax
0x7D9ACB: call    NiTArray_Add
0x7D9AD0: jmp     loc_7D9D19
0x7D9AD5: mov     edx, [edi+0C0h]
0x7D9ADB: mov     eax, [edx+4]
0x7D9ADE: push    eax; int
0x7D9ADF: push    offset aMultiNormal; "multi normal"
0x7D9AE4: call    TESOutput_PrintLabeledPointer
0x7D9AE9: mov     [esp+14h+arg_0], eax
0x7D9AED: add     esp, 8
0x7D9AF0: lea     eax, [esp+0Ch+arg_0]
0x7D9AF4: push    eax
0x7D9AF5: mov     ecx, esi
0x7D9AF7: call    NiTArray_Add
0x7D9AFC: jmp     loc_7D9D19
0x7D9B01: push    1; char
0x7D9B03: push    offset aLandscapeTextu; "landscape texturing"
0x7D9B08: call    TESOutput_PrintLabeledBool
0x7D9B0D: movzx   ebx, word ptr [esi+0Ah]
0x7D9B11: movzx   ecx, word ptr [esi+8]
0x7D9B15: add     esp, 8
0x7D9B18: cmp     ebx, ecx
0x7D9B1A: mov     [esp+0Ch+arg_0], eax
0x7D9B1E: jb      short loc_7D9B2E
0x7D9B20: movzx   edx, word ptr [esi+0Eh]
0x7D9B24: add     edx, ebx
0x7D9B26: push    edx
0x7D9B27: mov     ecx, esi
0x7D9B29: call    NiTArray_SetSize
0x7D9B2E: lea     eax, [esp+0Ch+arg_0]
0x7D9B32: push    eax
0x7D9B33: push    ebx
0x7D9B34: mov     ecx, esi
0x7D9B36: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9B3B: movzx   ecx, word ptr [edi+0B8h]
0x7D9B42: push    ecx; __int16
0x7D9B43: push    offset aLandscapeTex_0; "landscape textures"
0x7D9B48: call    TESOutput_PrintLabeledUnsignedShort
0x7D9B4D: movzx   ebx, word ptr [esi+0Ah]
0x7D9B51: movzx   edx, word ptr [esi+8]
0x7D9B55: add     esp, 8
0x7D9B58: cmp     ebx, edx
0x7D9B5A: mov     [esp+0Ch+arg_0], eax
0x7D9B5E: jb      short loc_7D9B6E
0x7D9B60: movzx   eax, word ptr [esi+0Eh]
0x7D9B64: add     eax, ebx
0x7D9B66: push    eax
0x7D9B67: mov     ecx, esi
0x7D9B69: call    NiTArray_SetSize
0x7D9B6E: push    ebp
0x7D9B6F: lea     ecx, [esp+10h+arg_0]
0x7D9B73: push    ecx
0x7D9B74: push    ebx
0x7D9B75: mov     ecx, esi
0x7D9B77: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9B7C: xor     ebp, ebp
0x7D9B7E: mov     edi, edi
0x7D9B80: mov     edx, [edi+0BCh]
0x7D9B86: cmp     dword ptr [edx+ebp*4], 0
0x7D9B8A: lea     eax, [edx+ebp*4]
0x7D9B8D: jz      loc_7D9D0C
0x7D9B93: mov     eax, [eax]
0x7D9B95: push    eax
0x7D9B96: call    sub_6F9540
0x7D9B9B: add     esp, 4
0x7D9B9E: test    eax, eax
0x7D9BA0: jz      short loc_7D9BD5
0x7D9BA2: push    eax; int
0x7D9BA3: push    offset aBaseTex; "base tex"
0x7D9BA8: call    TESOutput_PrintLabeledString
0x7D9BAD: movzx   ebx, word ptr [esi+0Ah]
0x7D9BB1: mov     [esp+18h+arg_0], eax
0x7D9BB5: movzx   eax, word ptr [esi+8]
0x7D9BB9: add     esp, 8
0x7D9BBC: cmp     ebx, eax
0x7D9BBE: jb      short loc_7D9BCE
0x7D9BC0: movzx   ecx, word ptr [esi+0Eh]
0x7D9BC4: add     ecx, ebx
0x7D9BC6: push    ecx
0x7D9BC7: mov     ecx, esi
0x7D9BC9: call    NiTArray_SetSize
0x7D9BCE: lea     edx, [esp+10h+arg_0]
0x7D9BD2: push    edx
0x7D9BD3: jmp     short loc_7D9C0E
0x7D9BD5: mov     eax, [edi+0BCh]
0x7D9BDB: mov     eax, [eax]
0x7D9BDD: push    eax; int
0x7D9BDE: push    offset aBaseTex; "base tex"
0x7D9BE3: call    TESOutput_PrintLabeledPointer
0x7D9BE8: movzx   ebx, word ptr [esi+0Ah]
0x7D9BEC: movzx   ecx, word ptr [esi+8]
0x7D9BF0: add     esp, 8
0x7D9BF3: cmp     ebx, ecx
0x7D9BF5: mov     [esp+10h+arg_0], eax
0x7D9BF9: jb      short loc_7D9C09
0x7D9BFB: movzx   edx, word ptr [esi+0Eh]
0x7D9BFF: add     edx, ebx
0x7D9C01: push    edx
0x7D9C02: mov     ecx, esi
0x7D9C04: call    NiTArray_SetSize
0x7D9C09: lea     eax, [esp+10h+arg_0]
0x7D9C0D: push    eax
0x7D9C0E: push    ebx
0x7D9C0F: mov     ecx, esi
0x7D9C11: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9C16: mov     ecx, [edi+0C0h]
0x7D9C1C: mov     eax, [ecx+ebp*4]
0x7D9C1F: test    eax, eax
0x7D9C21: jz      short loc_7D9C6C
0x7D9C23: push    eax
0x7D9C24: call    sub_6F9540
0x7D9C29: add     esp, 4
0x7D9C2C: test    eax, eax
0x7D9C2E: jz      short loc_7D9C45
0x7D9C30: push    eax; int
0x7D9C31: push    offset aNormalMap; " normal map"
0x7D9C36: call    TESOutput_PrintLabeledString
0x7D9C3B: add     esp, 8
0x7D9C3E: lea     edx, [esp+10h+arg_0]
0x7D9C42: push    edx
0x7D9C43: jmp     short loc_7D9C61
0x7D9C45: mov     eax, [edi+0C0h]
0x7D9C4B: mov     eax, [eax+ebp*4]
0x7D9C4E: push    eax; int
0x7D9C4F: push    offset aNormalMap; " normal map"
0x7D9C54: call    TESOutput_PrintLabeledPointer
0x7D9C59: add     esp, 8
0x7D9C5C: lea     ecx, [esp+10h+arg_0]
0x7D9C60: push    ecx
0x7D9C61: mov     ecx, esi
0x7D9C63: mov     [esp+14h+arg_0], eax
0x7D9C67: call    NiTArray_Add
0x7D9C6C: mov     edx, [edi+0D0h]
0x7D9C72: cmp     byte ptr [edx+ebp], 0
0x7D9C76: jz      short loc_7D9CB2
0x7D9C78: push    1; char
0x7D9C7A: push    offset aSpecular_1; " specular"
0x7D9C7F: call    TESOutput_PrintLabeledBool
0x7D9C84: movzx   ebx, word ptr [esi+0Ah]
0x7D9C88: mov     [esp+18h+arg_0], eax
0x7D9C8C: movzx   eax, word ptr [esi+8]
0x7D9C90: add     esp, 8
0x7D9C93: cmp     ebx, eax
0x7D9C95: jb      short loc_7D9CA5
0x7D9C97: movzx   ecx, word ptr [esi+0Eh]
0x7D9C9B: add     ecx, ebx
0x7D9C9D: push    ecx
0x7D9C9E: mov     ecx, esi
0x7D9CA0: call    NiTArray_SetSize
0x7D9CA5: lea     edx, [esp+10h+arg_0]
0x7D9CA9: push    edx
0x7D9CAA: push    ebx
0x7D9CAB: mov     ecx, esi
0x7D9CAD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9CB2: mov     eax, [edi+0C4h]
0x7D9CB8: mov     eax, [eax+ebp*4]
0x7D9CBB: test    eax, eax
0x7D9CBD: jz      short loc_7D9D0C
0x7D9CBF: push    eax
0x7D9CC0: call    sub_6F9540
0x7D9CC5: add     esp, 4
0x7D9CC8: test    eax, eax
0x7D9CCA: jz      short loc_7D9CE5
0x7D9CCC: push    eax; int
0x7D9CCD: push    offset aGlowMap_0; " glow map"
0x7D9CD2: call    TESOutput_PrintLabeledString
0x7D9CD7: add     esp, 8
0x7D9CDA: lea     ecx, [esp+10h+arg_0]
0x7D9CDE: mov     [esp+10h+arg_0], eax
0x7D9CE2: push    ecx
0x7D9CE3: jmp     short loc_7D9D05
0x7D9CE5: mov     edx, [edi+0C4h]
0x7D9CEB: mov     eax, [edx+ebp*4]
0x7D9CEE: push    eax; int
0x7D9CEF: push    offset aGlowMap_0; " glow map"
0x7D9CF4: call    TESOutput_PrintLabeledPointer
0x7D9CF9: mov     [esp+18h+arg_0], eax
0x7D9CFD: add     esp, 8
0x7D9D00: lea     eax, [esp+10h+arg_0]
0x7D9D04: push    eax
0x7D9D05: mov     ecx, esi
0x7D9D07: call    NiTArray_Add
0x7D9D0C: add     ebp, 1
0x7D9D0F: cmp     ebp, 9
0x7D9D12: jl      loc_7D9B80
0x7D9D18: pop     ebp
0x7D9D19: mov     eax, [edi+0C4h]
0x7D9D1F: test    eax, eax
0x7D9D21: jz      loc_7D9DAA
0x7D9D27: mov     eax, [eax]
0x7D9D29: push    eax
0x7D9D2A: call    sub_6F9540
0x7D9D2F: add     esp, 4
0x7D9D32: test    eax, eax
0x7D9D34: jz      short loc_7D9D69
0x7D9D36: push    eax; int
0x7D9D37: push    offset aGlowmapTexture; "glowmap texture"
0x7D9D3C: call    TESOutput_PrintLabeledString
0x7D9D41: movzx   ebx, word ptr [esi+0Ah]
0x7D9D45: movzx   ecx, word ptr [esi+8]
0x7D9D49: add     esp, 8
0x7D9D4C: cmp     ebx, ecx
0x7D9D4E: mov     [esp+0Ch+arg_0], eax
0x7D9D52: jb      short loc_7D9D62
0x7D9D54: movzx   edx, word ptr [esi+0Eh]
0x7D9D58: add     edx, ebx
0x7D9D5A: push    edx
0x7D9D5B: mov     ecx, esi
0x7D9D5D: call    NiTArray_SetSize
0x7D9D62: lea     eax, [esp+0Ch+arg_0]
0x7D9D66: push    eax
0x7D9D67: jmp     short loc_7D9DA2
0x7D9D69: mov     ecx, [edi+0C4h]
0x7D9D6F: mov     eax, [ecx]
0x7D9D71: push    eax; int
0x7D9D72: push    offset aGlowmapTexture; "glowmap texture"
0x7D9D77: call    TESOutput_PrintLabeledPointer
0x7D9D7C: movzx   ebx, word ptr [esi+0Ah]
0x7D9D80: movzx   edx, word ptr [esi+8]
0x7D9D84: add     esp, 8
0x7D9D87: cmp     ebx, edx
0x7D9D89: mov     [esp+0Ch+arg_0], eax
0x7D9D8D: jb      short loc_7D9D9D
0x7D9D8F: movzx   eax, word ptr [esi+0Eh]
0x7D9D93: add     eax, ebx
0x7D9D95: push    eax
0x7D9D96: mov     ecx, esi
0x7D9D98: call    NiTArray_SetSize
0x7D9D9D: lea     ecx, [esp+0Ch+arg_0]
0x7D9DA1: push    ecx
0x7D9DA2: push    ebx
0x7D9DA3: mov     ecx, esi
0x7D9DA5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9DAA: mov     edx, [edi]
0x7D9DAC: mov     eax, [edx+78h]
0x7D9DAF: mov     ecx, edi
0x7D9DB1: call    eax
0x7D9DB3: test    eax, eax
0x7D9DB5: jnz     short loc_7D9DF1
0x7D9DB7: push    1; char
0x7D9DB9: push    offset aClamp; "clamp"
0x7D9DBE: call    TESOutput_PrintLabeledBool
0x7D9DC3: movzx   ebx, word ptr [esi+0Ah]
0x7D9DC7: movzx   ecx, word ptr [esi+8]
0x7D9DCB: add     esp, 8
0x7D9DCE: cmp     ebx, ecx
0x7D9DD0: mov     [esp+0Ch+arg_0], eax
0x7D9DD4: jb      short loc_7D9DE4
0x7D9DD6: movzx   edx, word ptr [esi+0Eh]
0x7D9DDA: add     edx, ebx
0x7D9DDC: push    edx
0x7D9DDD: mov     ecx, esi
0x7D9DDF: call    NiTArray_SetSize
0x7D9DE4: lea     eax, [esp+0Ch+arg_0]
0x7D9DE8: push    eax
0x7D9DE9: push    ebx
0x7D9DEA: mov     ecx, esi
0x7D9DEC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9DF1: mov     eax, [edi+1Ch]
0x7D9DF4: test    eax, 8000h
0x7D9DF9: jbe     short loc_7D9E3A
0x7D9DFB: fld     dword ptr [edi+0E8h]
0x7D9E01: push    ecx
0x7D9E02: fstp    [esp+10h+var_10]; float
0x7D9E05: push    offset aRefractionPowe; "refraction power"
0x7D9E0A: call    TESOutput_PrintLabeledFloat
0x7D9E0F: movzx   ebx, word ptr [esi+0Ah]
0x7D9E13: movzx   ecx, word ptr [esi+8]
0x7D9E17: add     esp, 8
0x7D9E1A: cmp     ebx, ecx
0x7D9E1C: mov     [esp+0Ch+arg_0], eax
0x7D9E20: jb      short loc_7D9E30
0x7D9E22: movzx   edx, word ptr [esi+0Eh]
0x7D9E26: add     edx, ebx
0x7D9E28: push    edx
0x7D9E29: mov     ecx, esi
0x7D9E2B: call    NiTArray_SetSize
0x7D9E30: lea     eax, [esp+0Ch+arg_0]
0x7D9E34: push    eax
0x7D9E35: jmp     loc_7D9EBE
0x7D9E3A: test    eax, 10000h
0x7D9E3F: jbe     loc_7D9EC6
0x7D9E45: fld     dword ptr [edi+0E8h]
0x7D9E4B: push    ecx
0x7D9E4C: fstp    [esp+10h+var_10]; float
0x7D9E4F: push    offset aRefractionPowe; "refraction power"
0x7D9E54: call    TESOutput_PrintLabeledFloat
0x7D9E59: movzx   ebx, word ptr [esi+0Ah]
0x7D9E5D: movzx   ecx, word ptr [esi+8]
0x7D9E61: add     esp, 8
0x7D9E64: cmp     ebx, ecx
0x7D9E66: mov     [esp+0Ch+arg_0], eax
0x7D9E6A: jb      short loc_7D9E7A
0x7D9E6C: movzx   edx, word ptr [esi+0Eh]
0x7D9E70: add     edx, ebx
0x7D9E72: push    edx
0x7D9E73: mov     ecx, esi
0x7D9E75: call    NiTArray_SetSize
0x7D9E7A: lea     eax, [esp+0Ch+arg_0]
0x7D9E7E: push    eax
0x7D9E7F: push    ebx
0x7D9E80: mov     ecx, esi
0x7D9E82: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9E87: mov     ecx, [edi+0ECh]
0x7D9E8D: push    ecx; int
0x7D9E8E: push    offset aRefractionPeri; "refraction period"
0x7D9E93: call    TESOutput_PrintLabeledSignedInt
0x7D9E98: movzx   ebx, word ptr [esi+0Ah]
0x7D9E9C: movzx   edx, word ptr [esi+8]
0x7D9EA0: add     esp, 8
0x7D9EA3: cmp     ebx, edx
0x7D9EA5: mov     [esp+0Ch+arg_0], eax
0x7D9EA9: jb      short loc_7D9EB9
0x7D9EAB: movzx   eax, word ptr [esi+0Eh]
0x7D9EAF: add     eax, ebx
0x7D9EB1: push    eax
0x7D9EB2: mov     ecx, esi
0x7D9EB4: call    NiTArray_SetSize
0x7D9EB9: lea     ecx, [esp+0Ch+arg_0]
0x7D9EBD: push    ecx
0x7D9EBE: push    ebx
0x7D9EBF: mov     ecx, esi
0x7D9EC1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9EC6: test    byte ptr [edi+1Ch], 1
0x7D9ECA: jbe     short loc_7D9F0E
0x7D9ECC: fld     dword ptr [edi+9Ch]
0x7D9ED2: push    ecx
0x7D9ED3: fstp    [esp+10h+var_10]; float
0x7D9ED6: push    offset aSpecularLod; "specular lod"
0x7D9EDB: call    TESOutput_PrintLabeledFloat
0x7D9EE0: movzx   ebx, word ptr [esi+0Ah]
0x7D9EE4: movzx   edx, word ptr [esi+8]
0x7D9EE8: add     esp, 8
0x7D9EEB: cmp     ebx, edx
0x7D9EED: mov     [esp+0Ch+arg_0], eax
0x7D9EF1: jb      short loc_7D9F01
0x7D9EF3: movzx   eax, word ptr [esi+0Eh]
0x7D9EF7: add     eax, ebx
0x7D9EF9: push    eax
0x7D9EFA: mov     ecx, esi
0x7D9EFC: call    NiTArray_SetSize
0x7D9F01: lea     ecx, [esp+0Ch+arg_0]
0x7D9F05: push    ecx
0x7D9F06: push    ebx
0x7D9F07: mov     ecx, esi
0x7D9F09: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9F0E: test    dword ptr [edi+1Ch], 80h
0x7D9F15: jbe     short loc_7D9F59
0x7D9F17: fld     dword ptr [edi+0A4h]
0x7D9F1D: push    ecx
0x7D9F1E: fstp    [esp+10h+var_10]; float
0x7D9F21: push    offset aEnvmapLod; "envmap lod"
0x7D9F26: call    TESOutput_PrintLabeledFloat
0x7D9F2B: movzx   ebx, word ptr [esi+0Ah]
0x7D9F2F: movzx   edx, word ptr [esi+8]
0x7D9F33: add     esp, 8
0x7D9F36: cmp     ebx, edx
0x7D9F38: mov     [esp+0Ch+arg_0], eax
0x7D9F3C: jb      short loc_7D9F4C
0x7D9F3E: movzx   eax, word ptr [esi+0Eh]
0x7D9F42: add     eax, ebx
0x7D9F44: push    eax
0x7D9F45: mov     ecx, esi
0x7D9F47: call    NiTArray_SetSize
0x7D9F4C: lea     ecx, [esp+0Ch+arg_0]
0x7D9F50: push    ecx
0x7D9F51: push    ebx
0x7D9F52: mov     ecx, esi
0x7D9F54: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9F59: mov     eax, [edi+0E0h]
0x7D9F5F: test    eax, eax
0x7D9F61: jz      loc_7DA20D
0x7D9F67: push    eax; int
0x7D9F68: push    offset aSptexeffectdat; "spTexEffectData"
0x7D9F6D: call    TESOutput_PrintLabeledPointer
0x7D9F72: movzx   ebx, word ptr [esi+0Ah]
0x7D9F76: movzx   edx, word ptr [esi+8]
0x7D9F7A: add     esp, 8
0x7D9F7D: cmp     ebx, edx
0x7D9F7F: mov     [esp+0Ch+arg_0], eax
0x7D9F83: jb      short loc_7D9F93
0x7D9F85: movzx   eax, word ptr [esi+0Eh]
0x7D9F89: add     eax, ebx
0x7D9F8B: push    eax
0x7D9F8C: mov     ecx, esi
0x7D9F8E: call    NiTArray_SetSize
0x7D9F93: lea     ecx, [esp+0Ch+arg_0]
0x7D9F97: push    ecx
0x7D9F98: push    ebx
0x7D9F99: mov     ecx, esi
0x7D9F9B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9FA0: mov     eax, [edi+0E0h]
0x7D9FA6: fld     dword ptr [eax+0Ch]
0x7D9FA9: push    ecx
0x7D9FAA: fstp    [esp+10h+var_10]; float
0x7D9FAD: push    offset aFillColorR; "Fill Color R"
0x7D9FB2: call    TESOutput_PrintLabeledFloat
0x7D9FB7: movzx   ebx, word ptr [esi+0Ah]
0x7D9FBB: movzx   edx, word ptr [esi+8]
0x7D9FBF: add     esp, 8
0x7D9FC2: cmp     ebx, edx
0x7D9FC4: mov     [esp+0Ch+arg_0], eax
0x7D9FC8: jb      short loc_7D9FD8
0x7D9FCA: movzx   eax, word ptr [esi+0Eh]
0x7D9FCE: add     eax, ebx
0x7D9FD0: push    eax
0x7D9FD1: mov     ecx, esi
0x7D9FD3: call    NiTArray_SetSize
0x7D9FD8: lea     ecx, [esp+0Ch+arg_0]
0x7D9FDC: push    ecx
0x7D9FDD: push    ebx
0x7D9FDE: mov     ecx, esi
0x7D9FE0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7D9FE5: mov     eax, [edi+0E0h]
0x7D9FEB: fld     dword ptr [eax+10h]
0x7D9FEE: push    ecx
0x7D9FEF: fstp    [esp+10h+var_10]; float
0x7D9FF2: push    offset aFillColorG; "Fill Color G"
0x7D9FF7: call    TESOutput_PrintLabeledFloat
0x7D9FFC: movzx   ebx, word ptr [esi+0Ah]
0x7DA000: movzx   edx, word ptr [esi+8]
0x7DA004: add     esp, 8
0x7DA007: cmp     ebx, edx
0x7DA009: mov     [esp+0Ch+arg_0], eax
0x7DA00D: jb      short loc_7DA01D
0x7DA00F: movzx   eax, word ptr [esi+0Eh]
0x7DA013: add     eax, ebx
0x7DA015: push    eax
0x7DA016: mov     ecx, esi
0x7DA018: call    NiTArray_SetSize
0x7DA01D: lea     ecx, [esp+0Ch+arg_0]
0x7DA021: push    ecx
0x7DA022: push    ebx
0x7DA023: mov     ecx, esi
0x7DA025: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA02A: mov     eax, [edi+0E0h]
0x7DA030: fld     dword ptr [eax+14h]
0x7DA033: push    ecx
0x7DA034: fstp    [esp+10h+var_10]; float
0x7DA037: push    offset aFillColorR; "Fill Color R"
0x7DA03C: call    TESOutput_PrintLabeledFloat
0x7DA041: movzx   ebx, word ptr [esi+0Ah]
0x7DA045: movzx   edx, word ptr [esi+8]
0x7DA049: add     esp, 8
0x7DA04C: cmp     ebx, edx
0x7DA04E: mov     [esp+0Ch+arg_0], eax
0x7DA052: jb      short loc_7DA062
0x7DA054: movzx   eax, word ptr [esi+0Eh]
0x7DA058: add     eax, ebx
0x7DA05A: push    eax
0x7DA05B: mov     ecx, esi
0x7DA05D: call    NiTArray_SetSize
0x7DA062: lea     ecx, [esp+0Ch+arg_0]
0x7DA066: push    ecx
0x7DA067: push    ebx
0x7DA068: mov     ecx, esi
0x7DA06A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA06F: mov     eax, [edi+0E0h]
0x7DA075: fld     dword ptr [eax+18h]
0x7DA078: push    ecx
0x7DA079: fstp    [esp+10h+var_10]; float
0x7DA07C: push    offset aFillColorA; "Fill Color A"
0x7DA081: call    TESOutput_PrintLabeledFloat
0x7DA086: movzx   ebx, word ptr [esi+0Ah]
0x7DA08A: movzx   edx, word ptr [esi+8]
0x7DA08E: add     esp, 8
0x7DA091: cmp     ebx, edx
0x7DA093: mov     [esp+0Ch+arg_0], eax
0x7DA097: jb      short loc_7DA0A7
0x7DA099: movzx   eax, word ptr [esi+0Eh]
0x7DA09D: add     eax, ebx
0x7DA09F: push    eax
0x7DA0A0: mov     ecx, esi
0x7DA0A2: call    NiTArray_SetSize
0x7DA0A7: lea     ecx, [esp+0Ch+arg_0]
0x7DA0AB: push    ecx
0x7DA0AC: push    ebx
0x7DA0AD: mov     ecx, esi
0x7DA0AF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA0B4: mov     eax, [edi+0E0h]
0x7DA0BA: fld     dword ptr [eax+1Ch]
0x7DA0BD: push    ecx
0x7DA0BE: fstp    [esp+10h+var_10]; float
0x7DA0C1: push    offset aEdgeColorR; "Edge Color R"
0x7DA0C6: call    TESOutput_PrintLabeledFloat
0x7DA0CB: movzx   ebx, word ptr [esi+0Ah]
0x7DA0CF: movzx   edx, word ptr [esi+8]
0x7DA0D3: add     esp, 8
0x7DA0D6: cmp     ebx, edx
0x7DA0D8: mov     [esp+0Ch+arg_0], eax
0x7DA0DC: jb      short loc_7DA0EC
0x7DA0DE: movzx   eax, word ptr [esi+0Eh]
0x7DA0E2: add     eax, ebx
0x7DA0E4: push    eax
0x7DA0E5: mov     ecx, esi
0x7DA0E7: call    NiTArray_SetSize
0x7DA0EC: lea     ecx, [esp+0Ch+arg_0]
0x7DA0F0: push    ecx
0x7DA0F1: push    ebx
0x7DA0F2: mov     ecx, esi
0x7DA0F4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA0F9: mov     eax, [edi+0E0h]
0x7DA0FF: fld     dword ptr [eax+20h]
0x7DA102: push    ecx
0x7DA103: fstp    [esp+10h+var_10]; float
0x7DA106: push    offset aEdgeColorG; "Edge Color G"
0x7DA10B: call    TESOutput_PrintLabeledFloat
0x7DA110: movzx   ebx, word ptr [esi+0Ah]
0x7DA114: movzx   edx, word ptr [esi+8]
0x7DA118: add     esp, 8
0x7DA11B: cmp     ebx, edx
0x7DA11D: mov     [esp+0Ch+arg_0], eax
0x7DA121: jb      short loc_7DA131
0x7DA123: movzx   eax, word ptr [esi+0Eh]
0x7DA127: add     eax, ebx
0x7DA129: push    eax
0x7DA12A: mov     ecx, esi
0x7DA12C: call    NiTArray_SetSize
0x7DA131: lea     ecx, [esp+0Ch+arg_0]
0x7DA135: push    ecx
0x7DA136: push    ebx
0x7DA137: mov     ecx, esi
0x7DA139: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA13E: mov     eax, [edi+0E0h]
0x7DA144: fld     dword ptr [eax+24h]
0x7DA147: push    ecx
0x7DA148: fstp    [esp+10h+var_10]; float
0x7DA14B: push    offset aEdgeColorR; "Edge Color R"
0x7DA150: call    TESOutput_PrintLabeledFloat
0x7DA155: movzx   ebx, word ptr [esi+0Ah]
0x7DA159: movzx   edx, word ptr [esi+8]
0x7DA15D: add     esp, 8
0x7DA160: cmp     ebx, edx
0x7DA162: mov     [esp+0Ch+arg_0], eax
0x7DA166: jb      short loc_7DA176
0x7DA168: movzx   eax, word ptr [esi+0Eh]
0x7DA16C: add     eax, ebx
0x7DA16E: push    eax
0x7DA16F: mov     ecx, esi
0x7DA171: call    NiTArray_SetSize
0x7DA176: lea     ecx, [esp+0Ch+arg_0]
0x7DA17A: push    ecx
0x7DA17B: push    ebx
0x7DA17C: mov     ecx, esi
0x7DA17E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA183: mov     eax, [edi+0E0h]
0x7DA189: fld     dword ptr [eax+28h]
0x7DA18C: push    ecx
0x7DA18D: fstp    [esp+10h+var_10]; float
0x7DA190: push    offset aEdgeColorA; "Edge Color A"
0x7DA195: call    TESOutput_PrintLabeledFloat
0x7DA19A: movzx   ebx, word ptr [esi+0Ah]
0x7DA19E: movzx   edx, word ptr [esi+8]
0x7DA1A2: add     esp, 8
0x7DA1A5: cmp     ebx, edx
0x7DA1A7: mov     [esp+0Ch+arg_0], eax
0x7DA1AB: jb      short loc_7DA1BB
0x7DA1AD: movzx   eax, word ptr [esi+0Eh]
0x7DA1B1: add     eax, ebx
0x7DA1B3: push    eax
0x7DA1B4: mov     ecx, esi
0x7DA1B6: call    NiTArray_SetSize
0x7DA1BB: lea     ecx, [esp+0Ch+arg_0]
0x7DA1BF: push    ecx
0x7DA1C0: push    ebx
0x7DA1C1: mov     ecx, esi
0x7DA1C3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA1C8: mov     edi, [edi+0E0h]
0x7DA1CE: fld     dword ptr [edi+54h]
0x7DA1D1: push    ecx
0x7DA1D2: fstp    [esp+10h+var_10]; float
0x7DA1D5: push    offset aEdgeFalloff; "Edge Falloff"
0x7DA1DA: call    TESOutput_PrintLabeledFloat
0x7DA1DF: movzx   edi, word ptr [esi+0Ah]
0x7DA1E3: movzx   edx, word ptr [esi+8]
0x7DA1E7: add     esp, 8
0x7DA1EA: cmp     edi, edx
0x7DA1EC: mov     [esp+0Ch+arg_0], eax
0x7DA1F0: jb      short loc_7DA200
0x7DA1F2: movzx   eax, word ptr [esi+0Eh]
0x7DA1F6: add     eax, edi
0x7DA1F8: push    eax
0x7DA1F9: mov     ecx, esi
0x7DA1FB: call    NiTArray_SetSize
0x7DA200: lea     ecx, [esp+0Ch+arg_0]
0x7DA204: push    ecx
0x7DA205: push    edi
0x7DA206: mov     ecx, esi
0x7DA208: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7DA20D: pop     edi
0x7DA20E: pop     esi
0x7DA20F: pop     ebx
0x7DA210: retn    4
