0x5A9C40: sub     esp, 18h
0x5A9C43: push    ebp; a3
0x5A9C44: mov     ebp, [esp+1Ch+arg_0]
0x5A9C48: cmp     ebp, 3E9h
0x5A9C4E: push    esi; a3
0x5A9C4F: mov     esi, ecx
0x5A9C51: jge     short loc_5A9C5F
0x5A9C53: lea     eax, [ebp-0Eh]
0x5A9C56: cmp     eax, 4
0x5A9C59: ja      loc_5AA096
0x5A9C5F: push    ebx; a3
0x5A9C60: push    edi; a3
0x5A9C61: mov     edi, [esp+28h+arg_4]
0x5A9C65: xor     ebx, ebx
0x5A9C67: cmp     edi, ebx
0x5A9C69: jz      loc_5AA094
0x5A9C6F: cmp     ebp, 0Eh
0x5A9C72: jnz     short loc_5A9CA8
0x5A9C74: mov     ecx, edi
0x5A9C76: call    sub_5893B0
0x5A9C7B: test    al, al
0x5A9C7D: jnz     short loc_5A9CA8
0x5A9C7F: push    offset aInv_p4p5_heade; "inv_p4p5_header_text"
0x5A9C84: push    edi; int
0x5A9C85: call    sub_58B800
0x5A9C8A: add     esp, 8
0x5A9C8D: push    ebx
0x5A9C8E: push    0FDDh
0x5A9C93: mov     edi, eax
0x5A9C95: push    edi
0x5A9C96: push    1; arg1
0x5A9C98: push    ebx; canCreate
0x5A9C99: call    InterfaceManager_GetSingleton
0x5A9C9E: add     esp, 8
0x5A9CA1: mov     ecx, eax
0x5A9CA3: call    sub_57F9F0
0x5A9CA8: mov     byte ptr [esi+44h], 0FFh
0x5A9CAC: mov     [esi+3Ch], ebx
0x5A9CAF: call    sub_57BD80
0x5A9CB4: cmp     edi, ebx
0x5A9CB6: jz      loc_5AA06A
0x5A9CBC: cmp     [esi+28h], ebx
0x5A9CBF: jz      loc_5AA06A
0x5A9CC5: push    4; int
0x5A9CC7: call    sub_57DE50
0x5A9CCC: add     esp, 4
0x5A9CCF: push    0FE0h
0x5A9CD4: mov     ecx, edi
0x5A9CD6: call    Tile_GetFloat
0x5A9CDB: call    Double_To_SInt32
0x5A9CE0: mov     ebx, eax
0x5A9CE2: push    0FD1h
0x5A9CE7: mov     ecx, edi
0x5A9CE9: mov     [esp+2Ch+a3], ebx; a3
0x5A9CED: call    Tile_GetFloat
0x5A9CF2: fcomp   dword ptr ds:0A379B4h
0x5A9CF8: fnstsw  ax
0x5A9CFA: test    ah, 44h
0x5A9CFD: jp      short loc_5A9D13
0x5A9CFF: push    0FCBh
0x5A9D04: mov     ecx, edi
0x5A9D06: call    Tile_GetFloat
0x5A9D0B: fmul    qword ptr ds:0A2FAA0h
0x5A9D11: jmp     short loc_5A9D15
0x5A9D13: fldz
0x5A9D15: mov     ecx, edi
0x5A9D17: fstp    qword ptr [esp+28h+var_10]; a3
0x5A9D1B: call    sub_588D90
0x5A9D20: fsub    qword ptr ds:0A2FAA0h
0x5A9D26: push    ecx
0x5A9D27: mov     ecx, [esi+28h]; this
0x5A9D2A: fstp    [esp+2Ch+arg_0]
0x5A9D2E: fld     [esp+2Ch+arg_0]
0x5A9D32: fstp    [esp+2Ch+a2]; a3
0x5A9D35: push    0FABh; a2
0x5A9D3A: call    Tile_SetFloat
0x5A9D3F: lea     ecx, [ebx+ebx]
0x5A9D42: mov     [esp+28h+arg_0], ecx
0x5A9D46: fild    [esp+28h+arg_0]
0x5A9D4A: push    0FCBh
0x5A9D4F: mov     ecx, edi
0x5A9D51: fstp    [esp+2Ch+arg_0]
0x5A9D55: call    Tile_GetFloat
0x5A9D5A: fsub    [esp+28h+arg_0]
0x5A9D5E: push    ecx
0x5A9D5F: mov     ecx, [esi+28h]; this
0x5A9D62: fstp    [esp+2Ch+arg_4]
0x5A9D66: fld     [esp+2Ch+arg_4]
0x5A9D6A: fstp    [esp+2Ch+a2]; a3
0x5A9D6D: push    0FCBh; a2
0x5A9D72: call    Tile_SetFloat
0x5A9D77: push    0FCAh
0x5A9D7C: mov     ecx, edi
0x5A9D7E: call    Tile_GetFloat
0x5A9D83: fsub    [esp+28h+arg_0]
0x5A9D87: push    ecx
0x5A9D88: mov     ecx, [esi+28h]; this
0x5A9D8B: fstp    [esp+2Ch+arg_0]
0x5A9D8F: fld     [esp+2Ch+arg_0]
0x5A9D93: fstp    [esp+2Ch+a2]; a3
0x5A9D96: push    0FCAh; a2
0x5A9D9B: call    Tile_SetFloat
0x5A9DA0: fild    [esp+28h+a3]
0x5A9DA4: mov     ecx, edi
0x5A9DA6: fstp    [esp+28h+arg_0]
0x5A9DAA: call    sub_588C50
0x5A9DAF: fadd    [esp+28h+arg_0]
0x5A9DB3: fld     qword ptr [esp+28h+var_10]
0x5A9DB7: call    Double_To_SInt32
0x5A9DBC: mov     [esp+28h+arg_4], eax
0x5A9DC0: fisub   [esp+28h+arg_4]
0x5A9DC4: push    ecx
0x5A9DC5: mov     ecx, [esi+28h]; this
0x5A9DC8: fstp    [esp+2Ch+arg_4]
0x5A9DCC: fld     [esp+2Ch+arg_4]
0x5A9DD0: fstp    [esp+2Ch+a2]; a3
0x5A9DD3: push    0FADh; a2
0x5A9DD8: call    Tile_SetFloat
0x5A9DDD: mov     ecx, edi
0x5A9DDF: call    sub_588CF0
0x5A9DE4: fadd    [esp+28h+arg_0]
0x5A9DE8: push    ecx
0x5A9DE9: mov     ecx, [esi+28h]; this
0x5A9DEC: fstp    [esp+2Ch+arg_0]
0x5A9DF0: fld     [esp+2Ch+arg_0]
0x5A9DF4: fstp    [esp+2Ch+a2]; a3
0x5A9DF7: push    0FACh; a2
0x5A9DFC: call    Tile_SetFloat
0x5A9E01: fld     dword ptr ds:0A379B4h
0x5A9E07: push    ecx
0x5A9E08: mov     ecx, [esi+28h]; this
0x5A9E0B: fstp    [esp+2Ch+a2]; a3
0x5A9E0E: push    0FA1h; a2
0x5A9E13: call    Tile_SetFloat
0x5A9E18: cmp     ebp, 3E9h
0x5A9E1E: mov     [esi+3Ch], edi
0x5A9E21: jl      loc_5AA094
0x5A9E27: push    0FAAh
0x5A9E2C: mov     ecx, edi
0x5A9E2E: call    Tile_GetFloat
0x5A9E33: call    Double_To_SInt32
0x5A9E38: push    0FB9h
0x5A9E3D: mov     ecx, edi
0x5A9E3F: mov     [esi+54h], eax
0x5A9E42: call    Tile_GetFloat
0x5A9E47: call    Double_To_SInt32
0x5A9E4C: mov     ecx, ds:0B333C4h; this
0x5A9E52: push    0; a3
0x5A9E54: push    eax; a2
0x5A9E55: call    GetInventoryEntryOfItem
0x5A9E5A: mov     ebx, eax
0x5A9E5C: test    ebx, ebx
0x5A9E5E: jz      loc_5AA031
0x5A9E64: mov     eax, [ebx+8]
0x5A9E67: push    0; int
0x5A9E69: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x5A9E6E: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5A9E73: push    0; int
0x5A9E75: push    eax; void *
0x5A9E76: call    OblivionDynamicCast
0x5A9E7B: push    0; int
0x5A9E7D: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5A9E82: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5A9E87: mov     ebp, eax
0x5A9E89: mov     eax, [ebx+8]
0x5A9E8C: push    0; int
0x5A9E8E: push    eax; void *
0x5A9E8F: call    OblivionDynamicCast
0x5A9E94: push    0; int
0x5A9E96: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x5A9E9B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5A9EA0: mov     [esp+5Ch+var_14], eax
0x5A9EA4: mov     eax, [ebx+8]
0x5A9EA7: push    0; int
0x5A9EA9: push    eax; void *
0x5A9EAA: call    OblivionDynamicCast
0x5A9EAF: mov     ecx, [esi+4]
0x5A9EB2: add     esp, 3Ch
0x5A9EB5: push    0FB8h
0x5A9EBA: mov     [esp+2Ch+var_10], eax
0x5A9EBE: call    Tile_GetFloat
0x5A9EC3: fstp    [esp+28h+a3]
0x5A9EC7: mov     ecx, [esi+4]
0x5A9ECA: call    sub_588D90
0x5A9ECF: fstp    [esp+28h+arg_0]
0x5A9ED3: push    1; arg1
0x5A9ED5: push    0; canCreate
0x5A9ED7: call    InterfaceManager_GetSingleton
0x5A9EDC: mov     esi, [esi+4]
0x5A9EDF: add     esp, 8
0x5A9EE2: call    sub_57D7F0
0x5A9EE7: fstp    [esp+28h+var_8]
0x5A9EEB: push    0FBAh
0x5A9EF0: mov     ecx, esi
0x5A9EF2: call    Tile_GetFloat
0x5A9EF7: fsubr   [esp+28h+var_8]
0x5A9EFB: test    ebp, ebp
0x5A9EFD: fstp    [esp+28h+arg_4]
0x5A9F01: jz      short loc_5A9F4B
0x5A9F03: test    byte ptr [ebp+88h], 1
0x5A9F0A: jz      short loc_5A9F4B
0x5A9F0C: mov     ebp, [ebp+64h]
0x5A9F0F: test    ebp, ebp
0x5A9F11: jz      short loc_5A9F4B
0x5A9F13: fld     [esp+28h+arg_0]
0x5A9F17: push    ecx
0x5A9F18: fstp    [esp+2Ch+a2]; float
0x5A9F1B: push    0; int
0x5A9F1D: fld     [esp+30h+arg_4]
0x5A9F21: push    ecx
0x5A9F22: mov     ecx, edi
0x5A9F24: fstp    [esp+34h+var_34]; float
0x5A9F27: call    sub_588CF0
0x5A9F2C: sub     esp, 8
0x5A9F2F: fstp    [esp+3Ch+var_38]; float
0x5A9F33: add     ebp, 18h
0x5A9F36: fld     [esp+3Ch+a3]
0x5A9F3A: fstp    [esp+3Ch+var_3C]; float
0x5A9F3D: push    ebp; int
0x5A9F3E: call    sub_57BB20
0x5A9F43: add     esp, 18h
0x5A9F46: jmp     loc_5AA017
0x5A9F4B: mov     eax, [esp+28h+var_14]
0x5A9F4F: test    eax, eax
0x5A9F51: jz      short loc_5A9F91
0x5A9F53: mov     esi, [eax+4]
0x5A9F56: test    esi, esi
0x5A9F58: jz      short loc_5A9F91
0x5A9F5A: fld     [esp+28h+arg_0]
0x5A9F5E: push    ecx
0x5A9F5F: fstp    [esp+2Ch+a2]; float
0x5A9F62: push    ebx; int
0x5A9F63: fld     [esp+30h+arg_4]
0x5A9F67: push    ecx
0x5A9F68: mov     ecx, edi
0x5A9F6A: fstp    [esp+34h+var_34]; float
0x5A9F6D: call    sub_588CF0
0x5A9F72: sub     esp, 8
0x5A9F75: fstp    [esp+3Ch+var_38]; float
0x5A9F79: add     esi, 18h
0x5A9F7C: fld     [esp+3Ch+a3]
0x5A9F80: fstp    [esp+3Ch+var_3C]; float
0x5A9F83: push    esi; int
0x5A9F84: call    sub_57BB20
0x5A9F89: add     esp, 18h
0x5A9F8C: jmp     loc_5AA017
0x5A9F91: mov     esi, [esp+28h+var_10]
0x5A9F95: test    esi, esi
0x5A9F97: jz      short loc_5A9FCA
0x5A9F99: fld     [esp+28h+arg_0]
0x5A9F9D: push    ecx
0x5A9F9E: fstp    [esp+2Ch+a2]; float
0x5A9FA1: push    ebx; int
0x5A9FA2: fld     [esp+30h+arg_4]
0x5A9FA6: push    ecx
0x5A9FA7: mov     ecx, edi
0x5A9FA9: fstp    [esp+34h+var_34]; float
0x5A9FAC: call    sub_588CF0
0x5A9FB1: sub     esp, 8
0x5A9FB4: fstp    [esp+3Ch+var_38]; float
0x5A9FB8: fld     [esp+3Ch+a3]
0x5A9FBC: fstp    [esp+3Ch+var_3C]; float
0x5A9FBF: push    esi; int
0x5A9FC0: call    sub_57BB20
0x5A9FC5: add     esp, 18h
0x5A9FC8: jmp     short loc_5AA017
0x5A9FCA: mov     edx, [ebx+8]
0x5A9FCD: mov     al, [edx+4]
0x5A9FD0: cmp     al, 26h ; '&'
0x5A9FD2: jz      short loc_5A9FE7
0x5A9FD4: cmp     al, 2Ah ; '*'
0x5A9FD6: jz      short loc_5A9FE7
0x5A9FD8: cmp     al, 21h ; '!'
0x5A9FDA: jz      short loc_5A9FE7
0x5A9FDC: cmp     al, 14h
0x5A9FDE: jz      short loc_5A9FE7
0x5A9FE0: call    sub_57BD80
0x5A9FE5: jmp     short loc_5AA017
0x5A9FE7: fld     [esp+28h+arg_0]
0x5A9FEB: sub     esp, 8
0x5A9FEE: fstp    [esp+30h+a2]; float
0x5A9FF2: mov     ecx, edi
0x5A9FF4: fld     [esp+30h+arg_4]
0x5A9FF8: fstp    [esp+30h+var_30]; float
0x5A9FFB: call    sub_588CF0
0x5AA000: sub     esp, 8
0x5AA003: fstp    [esp+38h+var_34]; float
0x5AA007: fld     [esp+38h+a3]
0x5AA00B: fstp    [esp+38h+var_38]; float
0x5AA00E: push    ebx; int
0x5AA00F: call    sub_57BCC0
0x5AA014: add     esp, 14h
0x5AA017: mov     ecx, ebx
0x5AA019: call    ContainerEntryExtraData_DestroyDataTable
0x5AA01E: push    ebx
0x5AA01F: call    FormHeapFree
0x5AA024: add     esp, 4
0x5AA027: pop     edi
0x5AA028: pop     ebx
0x5AA029: pop     esi
0x5AA02A: pop     ebp
0x5AA02B: add     esp, 18h
0x5AA02E: retn    8
0x5AA031: mov     esi, [esi+28h]
0x5AA034: test    esi, esi
0x5AA036: jz      short loc_5AA094
0x5AA038: fld1
0x5AA03A: push    ecx
0x5AA03B: fstp    [esp+2Ch+a2]; a3
0x5AA03E: mov     ecx, esi; this
0x5AA040: push    0FA1h; a2
0x5AA045: call    Tile_SetFloat
0x5AA04A: push    1; arg1
0x5AA04C: push    0; canCreate
0x5AA04E: call    InterfaceManager_GetSingleton
0x5AA053: add     esp, 8
0x5AA056: pop     edi
0x5AA057: pop     ebx
0x5AA058: pop     esi
0x5AA059: mov     dword ptr [eax+88h], 0
0x5AA063: pop     ebp
0x5AA064: add     esp, 18h
0x5AA067: retn    8
0x5AA06A: mov     esi, [esi+28h]
0x5AA06D: cmp     esi, ebx
0x5AA06F: jz      short loc_5AA094
0x5AA071: fld1
0x5AA073: push    ecx
0x5AA074: fstp    [esp+2Ch+a2]; a3
0x5AA077: mov     ecx, esi; this
0x5AA079: push    0FA1h; a2
0x5AA07E: call    Tile_SetFloat
0x5AA083: push    1; arg1
0x5AA085: push    ebx; canCreate
0x5AA086: call    InterfaceManager_GetSingleton
0x5AA08B: mov     [eax+88h], ebx
0x5AA091: add     esp, 8
0x5AA094: pop     edi
0x5AA095: pop     ebx
0x5AA096: pop     esi
0x5AA097: pop     ebp
0x5AA098: add     esp, 18h
0x5AA09B: retn    8
