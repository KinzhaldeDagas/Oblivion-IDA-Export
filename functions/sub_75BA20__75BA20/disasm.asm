0x75BA20: push    ebx
0x75BA21: push    esi
0x75BA22: mov     esi, [esp+8+arg_0]
0x75BA26: push    edi
0x75BA27: push    esi
0x75BA28: mov     edi, ecx
0x75BA2A: call    sub_752EC0
0x75BA2F: mov     eax, ds:0B41A28h
0x75BA34: push    eax; ArgList
0x75BA35: call    TESOutput_PrintString
0x75BA3A: movzx   ebx, word ptr [esi+0Ah]
0x75BA3E: movzx   ecx, word ptr [esi+8]
0x75BA42: add     esp, 4
0x75BA45: cmp     ebx, ecx
0x75BA47: mov     [esp+0Ch+arg_0], eax
0x75BA4B: jb      short loc_75BA5B
0x75BA4D: movzx   edx, word ptr [esi+0Eh]
0x75BA51: add     edx, ebx
0x75BA53: push    edx
0x75BA54: mov     ecx, esi
0x75BA56: call    NiTArray_SetSize
0x75BA5B: lea     eax, [esp+0Ch+arg_0]
0x75BA5F: push    eax
0x75BA60: push    ebx
0x75BA61: mov     ecx, esi
0x75BA63: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BA68: mov     eax, [edi+18h]
0x75BA6B: test    eax, eax
0x75BA6D: jz      short loc_75BA74
0x75BA6F: mov     eax, [eax+8]
0x75BA72: jmp     short loc_75BA79
0x75BA74: mov     eax, offset aNone; "None"
0x75BA79: push    eax; int
0x75BA7A: push    offset aBombObject; "Bomb Object"
0x75BA7F: call    TESOutput_PrintLabeledString
0x75BA84: movzx   ebx, word ptr [esi+0Ah]
0x75BA88: movzx   ecx, word ptr [esi+8]
0x75BA8C: add     esp, 8
0x75BA8F: cmp     ebx, ecx
0x75BA91: mov     [esp+0Ch+arg_0], eax
0x75BA95: jb      short loc_75BAA5
0x75BA97: movzx   edx, word ptr [esi+0Eh]
0x75BA9B: add     edx, ebx
0x75BA9D: push    edx
0x75BA9E: mov     ecx, esi
0x75BAA0: call    NiTArray_SetSize
0x75BAA5: lea     eax, [esp+0Ch+arg_0]
0x75BAA9: push    eax
0x75BAAA: push    ebx
0x75BAAB: mov     ecx, esi
0x75BAAD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BAB2: push    offset aBombAxis; "Bomb Axis"
0x75BAB7: lea     ecx, [edi+1Ch]
0x75BABA: call    sub_707280
0x75BABF: movzx   ebx, word ptr [esi+0Ah]
0x75BAC3: movzx   ecx, word ptr [esi+8]
0x75BAC7: cmp     ebx, ecx
0x75BAC9: mov     [esp+0Ch+arg_0], eax
0x75BACD: jb      short loc_75BADD
0x75BACF: movzx   edx, word ptr [esi+0Eh]
0x75BAD3: add     edx, ebx
0x75BAD5: push    edx
0x75BAD6: mov     ecx, esi
0x75BAD8: call    NiTArray_SetSize
0x75BADD: lea     eax, [esp+0Ch+arg_0]
0x75BAE1: push    eax
0x75BAE2: push    ebx
0x75BAE3: mov     ecx, esi
0x75BAE5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BAEA: fld     dword ptr [edi+28h]
0x75BAED: push    ecx
0x75BAEE: fstp    [esp+10h+var_10]; float
0x75BAF1: push    offset aDecay; "Decay"
0x75BAF6: call    TESOutput_PrintLabeledFloat
0x75BAFB: movzx   ebx, word ptr [esi+0Ah]
0x75BAFF: movzx   ecx, word ptr [esi+8]
0x75BB03: add     esp, 8
0x75BB06: cmp     ebx, ecx
0x75BB08: mov     [esp+0Ch+arg_0], eax
0x75BB0C: jb      short loc_75BB1C
0x75BB0E: movzx   edx, word ptr [esi+0Eh]
0x75BB12: add     edx, ebx
0x75BB14: push    edx
0x75BB15: mov     ecx, esi
0x75BB17: call    NiTArray_SetSize
0x75BB1C: lea     eax, [esp+0Ch+arg_0]
0x75BB20: push    eax
0x75BB21: push    ebx
0x75BB22: mov     ecx, esi
0x75BB24: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BB29: fld     dword ptr [edi+2Ch]
0x75BB2C: push    ecx
0x75BB2D: fstp    [esp+10h+var_10]; float
0x75BB30: push    offset aDeltav; "DeltaV"
0x75BB35: call    TESOutput_PrintLabeledFloat
0x75BB3A: movzx   ebx, word ptr [esi+0Ah]
0x75BB3E: movzx   ecx, word ptr [esi+8]
0x75BB42: add     esp, 8
0x75BB45: cmp     ebx, ecx
0x75BB47: mov     [esp+0Ch+arg_0], eax
0x75BB4B: jb      short loc_75BB5B
0x75BB4D: movzx   edx, word ptr [esi+0Eh]
0x75BB51: add     edx, ebx
0x75BB53: push    edx
0x75BB54: mov     ecx, esi
0x75BB56: call    NiTArray_SetSize
0x75BB5B: lea     eax, [esp+0Ch+arg_0]
0x75BB5F: push    eax
0x75BB60: push    ebx
0x75BB61: mov     ecx, esi
0x75BB63: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BB68: mov     eax, [edi+30h]
0x75BB6B: sub     eax, 0
0x75BB6E: jz      short loc_75BB8F
0x75BB70: sub     eax, 1
0x75BB73: jz      short loc_75BB88
0x75BB75: sub     eax, 1
0x75BB78: jz      short loc_75BB81
0x75BB7A: mov     eax, offset aUnknown_2; "Unknown"
0x75BB7F: jmp     short loc_75BB94
0x75BB81: mov     eax, offset aExponential; "EXPONENTIAL"
0x75BB86: jmp     short loc_75BB94
0x75BB88: mov     eax, offset aLinear; "LINEAR"
0x75BB8D: jmp     short loc_75BB94
0x75BB8F: mov     eax, offset aNone_0; "NONE"
0x75BB94: push    eax; int
0x75BB95: push    offset aDecayType; "Decay Type"
0x75BB9A: call    TESOutput_PrintLabeledString
0x75BB9F: movzx   ebx, word ptr [esi+0Ah]
0x75BBA3: movzx   ecx, word ptr [esi+8]
0x75BBA7: add     esp, 8
0x75BBAA: cmp     ebx, ecx
0x75BBAC: mov     [esp+0Ch+arg_0], eax
0x75BBB0: jb      short loc_75BBC0
0x75BBB2: movzx   edx, word ptr [esi+0Eh]
0x75BBB6: add     edx, ebx
0x75BBB8: push    edx
0x75BBB9: mov     ecx, esi
0x75BBBB: call    NiTArray_SetSize
0x75BBC0: lea     eax, [esp+0Ch+arg_0]
0x75BBC4: push    eax
0x75BBC5: push    ebx
0x75BBC6: mov     ecx, esi
0x75BBC8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BBCD: mov     edi, [edi+34h]
0x75BBD0: sub     edi, 0
0x75BBD3: jz      short loc_75BBF4
0x75BBD5: sub     edi, 1
0x75BBD8: jz      short loc_75BBED
0x75BBDA: sub     edi, 1
0x75BBDD: jz      short loc_75BBE6
0x75BBDF: mov     eax, offset aUnknown_2; "Unknown"
0x75BBE4: jmp     short loc_75BBF9
0x75BBE6: mov     eax, offset aPlanar; "PLANAR"
0x75BBEB: jmp     short loc_75BBF9
0x75BBED: mov     eax, offset aCylindrical; "CYLINDRICAL"
0x75BBF2: jmp     short loc_75BBF9
0x75BBF4: mov     eax, offset aSpherical; "SPHERICAL"
0x75BBF9: push    eax; int
0x75BBFA: push    offset aSymmetryType; "Symmetry Type"
0x75BBFF: call    TESOutput_PrintLabeledString
0x75BC04: movzx   edi, word ptr [esi+0Ah]
0x75BC08: movzx   ecx, word ptr [esi+8]
0x75BC0C: add     esp, 8
0x75BC0F: cmp     edi, ecx
0x75BC11: mov     [esp+0Ch+arg_0], eax
0x75BC15: jb      short loc_75BC25
0x75BC17: movzx   edx, word ptr [esi+0Eh]
0x75BC1B: add     edx, edi
0x75BC1D: push    edx
0x75BC1E: mov     ecx, esi
0x75BC20: call    NiTArray_SetSize
0x75BC25: lea     eax, [esp+0Ch+arg_0]
0x75BC29: push    eax
0x75BC2A: push    edi
0x75BC2B: mov     ecx, esi
0x75BC2D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BC32: pop     edi
0x75BC33: pop     esi
0x75BC34: pop     ebx
0x75BC35: retn    4
