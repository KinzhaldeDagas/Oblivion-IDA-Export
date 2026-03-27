0x528A10: push    0FFFFFFFFh
0x528A12: push    offset SEH_528A10
0x528A17: mov     eax, large fs:0
0x528A1D: push    eax
0x528A1E: sub     esp, 11Ch
0x528A24: push    ebx
0x528A25: push    ebp
0x528A26: push    esi
0x528A27: push    edi
0x528A28: mov     eax, ds:0B30AACh
0x528A2D: xor     eax, esp
0x528A2F: push    eax
0x528A30: lea     eax, [esp+13Ch+var_C]
0x528A37: mov     large fs:0, eax
0x528A3D: mov     ebx, ecx
0x528A3F: mov     [esp+13Ch+var_120], ebx
0x528A43: mov     esi, [esp+13Ch+arg_0]
0x528A4A: mov     ecx, [esi+3Ch]
0x528A4D: xor     edi, edi
0x528A4F: test    ecx, ecx
0x528A51: mov     [esp+13Ch+var_128], edi
0x528A55: jz      short loc_528A64
0x528A57: mov     eax, [ecx]
0x528A59: mov     edx, [eax+8]
0x528A5C: call    edx
0x528A5E: mov     [esp+13Ch+var_128], eax
0x528A62: mov     edi, eax
0x528A64: mov     ecx, [esp+13Ch+arg_4]
0x528A6B: push    0
0x528A6D: call    sub_477EC0
0x528A72: mov     ebp, eax
0x528A74: mov     eax, [esi]
0x528A76: mov     edx, [eax+164h]
0x528A7C: mov     ecx, esi
0x528A7E: mov     [esp+13Ch+var_124], 0
0x528A86: call    edx
0x528A88: test    eax, eax
0x528A8A: jz      short loc_528ABA
0x528A8C: mov     eax, [esi]
0x528A8E: mov     edx, [eax+164h]
0x528A94: mov     ecx, esi
0x528A96: call    edx
0x528A98: cmp     dword ptr [eax+98h], 0
0x528A9F: jz      short loc_528ABA
0x528AA1: mov     eax, [esi]
0x528AA3: mov     edx, [eax+164h]
0x528AA9: mov     ecx, esi
0x528AAB: call    edx
0x528AAD: mov     eax, [eax+98h]
0x528AB3: mov     eax, [eax+7Ch]
0x528AB6: mov     [esp+13Ch+var_124], eax
0x528ABA: test    ebp, ebp
0x528ABC: jz      loc_528D4E
0x528AC2: test    edi, edi
0x528AC4: jz      loc_528D4E
0x528ACA: mov     ebx, [esp+13Ch+a2]
0x528AD1: test    ebx, ebx
0x528AD3: jz      loc_528BA1
0x528AD9: mov     edx, [ebx]
0x528ADB: mov     eax, [edx+9Ch]
0x528AE1: mov     ecx, ebx
0x528AE3: call    eax
0x528AE5: test    eax, eax
0x528AE7: jz      short loc_528B33
0x528AE9: mov     ecx, esi; this
0x528AEB: call    TESObjectREFR_GetHealth
0x528AF0: fcomp   dword ptr ds:0A2FAA8h
0x528AF6: fnstsw  ax
0x528AF8: test    ah, 41h
0x528AFB: jp      short loc_528B33
0x528AFD: mov     edx, [ebx]
0x528AFF: mov     eax, [edx+9Ch]
0x528B05: mov     ecx, ebx
0x528B07: call    eax
0x528B09: mov     edx, [eax]
0x528B0B: push    1
0x528B0D: mov     ecx, eax
0x528B0F: mov     eax, [edx+9Ch]
0x528B15: push    1
0x528B17: call    eax
0x528B19: mov     edx, [ebx]
0x528B1B: mov     eax, [edx+9Ch]
0x528B21: mov     ecx, ebx
0x528B23: call    eax
0x528B25: mov     edx, [eax]
0x528B27: mov     ecx, eax
0x528B29: mov     eax, [edx+94h]
0x528B2F: push    1
0x528B31: call    eax
0x528B33: mov     edx, [ebx]
0x528B35: mov     eax, [edx+0B0h]
0x528B3B: push    1
0x528B3D: mov     ecx, ebx
0x528B3F: call    eax
0x528B41: mov     edx, [ebx]
0x528B43: mov     eax, [edx+0B8h]
0x528B49: push    1
0x528B4B: mov     ecx, ebx
0x528B4D: call    eax
0x528B4F: mov     ecx, ds:0B3F9A8h
0x528B55: mov     [ebx+54h], ecx
0x528B58: mov     edx, ds:0B3F9ACh
0x528B5E: mov     [ebx+58h], edx
0x528B61: mov     eax, ds:0B3F9B0h
0x528B66: mov     [ebx+5Ch], eax
0x528B69: lea     edi, [ebx+30h]
0x528B6C: mov     ecx, 9
0x528B71: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x528B76: rep movsd
0x528B78: mov     edx, [ebp+0]
0x528B7B: mov     eax, [edx+84h]
0x528B81: push    1
0x528B83: push    ebx
0x528B84: mov     ecx, ebp
0x528B86: call    eax
0x528B88: mov     ecx, [esp+13Ch+var_124]
0x528B8C: push    ecx
0x528B8D: push    ebx
0x528B8E: call    sub_7165B0
0x528B93: mov     esi, [esp+144h+arg_0]
0x528B9A: mov     edi, [esp+144h+var_128]
0x528B9E: add     esp, 8
0x528BA1: mov     ebp, [esp+13Ch+arg_C]
0x528BA8: test    ebp, ebp
0x528BAA: jz      loc_528CD1
0x528BB0: cmp     word ptr [ebp+0B6h], 0
0x528BB8: jbe     short loc_528C1C
0x528BBA: mov     edx, [ebp+0B0h]
0x528BC0: mov     ecx, [edx]
0x528BC2: test    ecx, ecx
0x528BC4: jz      short loc_528C1C
0x528BC6: push    6
0x528BC8: call    NiNode_GetNiPropertyByID
0x528BCD: test    eax, eax
0x528BCF: jz      short loc_528C1C
0x528BD1: lea     ecx, [esp+13Ch+var_D0]
0x528BD5: call    FaceGenHeadParameters_Ctor
0x528BDA: mov     eax, [esp+13Ch+var_120]
0x528BDE: mov     ecx, [eax+0E8h]
0x528BE4: lea     edx, [esp+13Ch+var_D0]
0x528BE8: push    edx
0x528BE9: push    eax
0x528BEA: mov     [esp+144h+var_4], 0
0x528BF5: call    TESRace_GetFaceGenHeadParameters
0x528BFA: lea     eax, [esp+13Ch+var_D0]
0x528BFE: push    eax
0x528BFF: push    ebp
0x528C00: call    BSFaceGen_DoSomethingWithFaceGenNode
0x528C05: add     esp, 8
0x528C08: lea     ecx, [esp+13Ch+var_D0]
0x528C0C: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x528C17: call    FaceGenHeadParameters_Dtor
0x528C1C: mov     edx, [ebp+0]
0x528C1F: test    ebx, ebx
0x528C21: setz    al
0x528C24: mov     ecx, 9
0x528C29: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x528C2E: lea     edi, [esp+13Ch+var_118]
0x528C32: rep movsd
0x528C34: mov     byte ptr [esp+13Ch+var_11C], al
0x528C38: push    eax
0x528C39: mov     eax, [edx+0B0h]
0x528C3F: mov     ecx, ebp
0x528C41: call    eax
0x528C43: mov     edx, [ebp+0]
0x528C46: mov     eax, [esp+13Ch+var_11C]
0x528C4A: mov     edx, [edx+0B8h]
0x528C50: push    eax
0x528C51: mov     ecx, ebp
0x528C53: call    edx
0x528C55: mov     eax, ds:0B3F9A8h
0x528C5A: mov     esi, [ebp+0]
0x528C5D: mov     [ebp+54h], eax
0x528C60: mov     ecx, ds:0B3F9ACh
0x528C66: mov     [ebp+58h], ecx
0x528C69: mov     edx, ds:0B3F9B0h
0x528C6F: push    1
0x528C71: lea     eax, [esp+140h+var_118]
0x528C75: push    eax
0x528C76: lea     ecx, [esp+144h+var_F4]
0x528C7A: push    ecx
0x528C7B: mov     ecx, [esp+148h+arg_0]
0x528C82: mov     [ebp+5Ch], edx
0x528C85: call    sub_4D7C50
0x528C8A: mov     edx, [esi+0A8h]
0x528C90: push    eax
0x528C91: mov     ecx, ebp
0x528C93: call    edx
0x528C95: mov     esi, [esp+13Ch+var_128]
0x528C99: mov     eax, [esi]
0x528C9B: mov     edx, [eax+84h]
0x528CA1: push    1
0x528CA3: push    ebp
0x528CA4: mov     ecx, esi
0x528CA6: call    edx
0x528CA8: mov     eax, [esp+13Ch+var_124]
0x528CAC: push    eax
0x528CAD: push    ebp
0x528CAE: call    sub_7165B0
0x528CB3: mov     edx, [ebp+0]
0x528CB6: mov     eax, [edx+0C4h]
0x528CBC: add     esp, 8
0x528CBF: push    1
0x528CC1: push    esi
0x528CC2: mov     ecx, ebp
0x528CC4: call    eax
0x528CC6: mov     esi, [esp+13Ch+arg_0]
0x528CCD: mov     edi, [esp+13Ch+var_128]
0x528CD1: test    ebx, ebx
0x528CD3: jz      short loc_528CE5
0x528CD5: mov     edx, [ebx]
0x528CD7: mov     eax, [edx+9Ch]
0x528CDD: mov     ecx, ebx
0x528CDF: call    eax
0x528CE1: test    eax, eax
0x528CE3: jnz     short loc_528CFA
0x528CE5: test    ebp, ebp
0x528CE7: jz      short loc_528D13
0x528CE9: mov     edx, [ebp+0]
0x528CEC: mov     eax, [edx+9Ch]
0x528CF2: mov     ecx, ebp
0x528CF4: call    eax
0x528CF6: test    eax, eax
0x528CF8: jz      short loc_528D13
0x528CFA: mov     edx, [eax]
0x528CFC: fldz
0x528CFE: push    0
0x528D00: push    1
0x528D02: push    1
0x528D04: push    1
0x528D06: push    1
0x528D08: push    ecx
0x528D09: mov     ecx, eax
0x528D0B: fstp    [esp+154h+var_154]
0x528D0E: mov     eax, [edx+78h]
0x528D11: call    eax
0x528D13: push    ebx; a2
0x528D14: mov     ebx, [esp+140h+var_120]
0x528D18: lea     ecx, [ebx+1D4h]; this
0x528D1E: call    NiSmartPointer_Set??
0x528D23: push    ebp; a2
0x528D24: lea     ecx, [ebx+1D8h]; this
0x528D2A: call    NiSmartPointer_Set??
0x528D2F: mov     ecx, edi
0x528D31: call    NiNode_UpdateDynamicEffectState
0x528D36: mov     ecx, edi; this
0x528D38: call    NiAVObject_InitializePropertyState
0x528D3D: fldz
0x528D3F: push    0; a3
0x528D41: push    ecx
0x528D42: mov     ecx, edi; this
0x528D44: fstp    [esp+144h+var_144]; a2
0x528D47: call    NiAVObject_UpdateNiAVObject
0x528D4C: jmp     short loc_528D5F
0x528D4E: mov     ecx, [ebx+0Ch]
0x528D51: push    ecx; ArgList
0x528D52: push    offset aCannotCreate_0; "Cannot create a head for an NPC (%d) th"...
0x528D57: call    PrintError
0x528D5C: add     esp, 8
0x528D5F: push    0
0x528D61: push    esi
0x528D62: mov     ecx, ebx
0x528D64: call    sub_524510
0x528D69: mov     ecx, [esp+13Ch+var_C]
0x528D70: mov     large fs:0, ecx
0x528D77: pop     ecx
0x528D78: pop     edi
0x528D79: pop     esi
0x528D7A: pop     ebp
0x528D7B: pop     ebx
0x528D7C: add     esp, 128h
0x528D82: retn    10h
