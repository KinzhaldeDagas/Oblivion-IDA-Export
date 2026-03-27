0x4259E0: push    0FFFFFFFFh
0x4259E2: push    offset ExtraDataList_Load_SEH
0x4259E7: mov     eax, large fs:0
0x4259ED: push    eax
0x4259EE: sub     esp, 18h
0x4259F1: push    ebx
0x4259F2: push    ebp
0x4259F3: push    esi
0x4259F4: push    edi
0x4259F5: mov     eax, ___security_cookie
0x4259FA: xor     eax, esp
0x4259FC: push    eax; ArgList
0x4259FD: lea     eax, [esp+38h+var_C]
0x425A01: mov     large fs:0, eax
0x425A07: mov     ebx, ecx
0x425A09: mov     edi, [esp+38h+a2]
0x425A0D: mov     ecx, edi
0x425A0F: call    TESFile_GetChunkType
0x425A14: cmp     eax, 4D434358h
0x425A19: jg      loc_425EED
0x425A1F: jz      loc_425EC8
0x425A25: cmp     eax, 47484358h
0x425A2A: jg      loc_425D17
0x425A30: jz      loc_425CF1
0x425A36: cmp     eax, 44455358h
0x425A3B: jg      loc_425BDD
0x425A41: jz      loc_425B83
0x425A47: cmp     eax, 424C4758h
0x425A4C: jz      loc_425B5E
0x425A52: cmp     eax, 434F4C58h
0x425A57: jz      short loc_425A89
0x425A59: cmp     eax, 43524D58h
0x425A5E: jnz     loc_426251
0x425A64: lea     eax, [esp+38h+a2]
0x425A68: push    eax
0x425A69: mov     ecx, edi
0x425A6B: mov     [esp+3Ch+a2], 0
0x425A73: call    TESFile_GetChunkData4
0x425A78: mov     ecx, [esp+38h+a2]
0x425A7C: push    ecx
0x425A7D: mov     ecx, ebx
0x425A7F: call    sub_4206A0
0x425A84: jmp     loc_426251
0x425A89: push    31h ; '1'; a2
0x425A8B: mov     ecx, ebx; this
0x425A8D: call    BaseExtraList_GetExtraData
0x425A92: mov     ebp, eax
0x425A94: xor     esi, esi
0x425A96: cmp     ebp, esi
0x425A98: jnz     short loc_425AEE
0x425A9A: push    0Ch; Size
0x425A9C: call    FormHeapAlloc
0x425AA1: add     esp, 4
0x425AA4: cmp     eax, esi
0x425AA6: jz      short loc_425AB4
0x425AA8: mov     [eax+4], esi
0x425AAB: mov     byte ptr [eax], 0
0x425AAE: mov     byte ptr [eax+8], 0
0x425AB2: mov     esi, eax
0x425AB4: push    10h; Size
0x425AB6: call    FormHeapAlloc
0x425ABB: add     esp, 4
0x425ABE: mov     [esp+38h+a2], eax
0x425AC2: test    eax, eax
0x425AC4: mov     [esp+38h+var_4], 0
0x425ACC: jz      short loc_425AD8
0x425ACE: push    esi
0x425ACF: mov     ecx, eax
0x425AD1: call    sub_429A80
0x425AD6: jmp     short loc_425ADA
0x425AD8: xor     eax, eax
0x425ADA: push    eax; BSExtraData *
0x425ADB: mov     ecx, ebx; ExtraDataList *
0x425ADD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425AE5: mov     ebp, eax
0x425AE7: call    BaseExtraList_AddExtra
0x425AEC: jmp     short loc_425AF1
0x425AEE: mov     esi, [ebp+0Ch]
0x425AF1: mov     eax, [edi+254h]
0x425AF7: cmp     eax, 0Ch
0x425AFA: jnz     short loc_425B16
0x425AFC: push    eax; a4
0x425AFD: push    esi; Dst
0x425AFE: mov     ecx, edi; a1
0x425B00: call    TESFile_GetChunkData
0x425B05: test    esi, esi
0x425B07: jz      loc_426251
0x425B0D: or      byte ptr [esi+8], 1
0x425B11: jmp     loc_426251
0x425B16: cmp     eax, 10h
0x425B19: jnz     short loc_425B3E
0x425B1B: push    eax; a4
0x425B1C: lea     edx, [esp+3Ch+a1]
0x425B20: push    edx; Dst
0x425B21: mov     ecx, edi; a1
0x425B23: call    TESFile_GetChunkData
0x425B28: mov     al, byte ptr [esp+38h+var_18]
0x425B2C: mov     cl, byte ptr [esp+38h+a1]
0x425B30: mov     edx, [esp+38h+var_20]
0x425B34: mov     [esi+8], al
0x425B37: mov     [esi], cl
0x425B39: mov     [esi+4], edx
0x425B3C: jmp     short loc_425B05
0x425B3E: add     edi, 1Ch
0x425B41: push    edi; ArgList
0x425B42: push    offset aUnrecognizedFo; "Unrecognized format for lock data in fi"...
0x425B47: call    PrintError
0x425B4C: add     esp, 8
0x425B4F: push    1
0x425B51: push    ebp
0x425B52: mov     ecx, ebx
0x425B54: call    BaseExtraList_RemoveExtraByPtr
0x425B59: jmp     loc_426251
0x425B5E: lea     eax, [esp+38h+a2]
0x425B62: push    eax
0x425B63: mov     ecx, edi
0x425B65: mov     [esp+3Ch+a2], 0
0x425B6D: call    TESFile_GetChunkData4
0x425B72: mov     ecx, [esp+38h+a2]
0x425B76: push    ecx
0x425B77: mov     ecx, ebx
0x425B79: call    sub_423720
0x425B7E: jmp     loc_426251
0x425B83: cmp     dword ptr [edi+254h], 4
0x425B8A: mov     byte ptr [esp+38h+a2], 0
0x425B8F: jnz     short loc_425BBE
0x425B91: lea     edx, [esp+38h+a1]
0x425B95: push    edx
0x425B96: mov     ecx, edi
0x425B98: mov     [esp+3Ch+a1], 0
0x425BA0: call    TESFile_GetChunkData4
0x425BA5: mov     al, byte ptr [esp+38h+a1]
0x425BA9: mov     byte ptr [esp+38h+a2], al
0x425BAD: mov     edx, [esp+38h+a2]
0x425BB1: push    edx
0x425BB2: mov     ecx, ebx
0x425BB4: call    sub_423BD0
0x425BB9: jmp     loc_426251
0x425BBE: push    1; a4
0x425BC0: lea     ecx, [esp+3Ch+a2]
0x425BC4: push    ecx; Dst
0x425BC5: mov     ecx, edi; a1
0x425BC7: call    TESFile_GetChunkData
0x425BCC: mov     edx, [esp+38h+a2]
0x425BD0: push    edx
0x425BD1: mov     ecx, ebx
0x425BD3: call    sub_423BD0
0x425BD8: jmp     loc_426251
0x425BDD: cmp     eax, 44475258h
0x425BE2: jz      short loc_425C4E
0x425BE4: cmp     eax, 444F4C58h
0x425BE9: jz      short loc_425C1B
0x425BEB: cmp     eax, 45535558h
0x425BF0: jnz     loc_426251
0x425BF6: lea     eax, [esp+38h+a2]
0x425BFA: push    eax
0x425BFB: mov     ecx, edi
0x425BFD: mov     [esp+3Ch+a2], 0
0x425C05: call    TESFile_GetChunkData4
0x425C0A: mov     ecx, [esp+38h+a2]
0x425C0E: push    ecx
0x425C0F: mov     ecx, ebx
0x425C11: call    ExtraDataList_SetUses
0x425C16: jmp     loc_426251
0x425C1B: fldz
0x425C1D: push    0Ch; a4
0x425C1F: fst     [esp+3Ch+a1]
0x425C23: lea     edx, [esp+3Ch+a1]
0x425C27: fstp    [esp+3Ch+var_20]
0x425C2B: push    edx; Dst
0x425C2C: fld     ds:flt_A34F5C
0x425C32: mov     ecx, edi; a1
0x425C34: fstp    [esp+40h+var_1C]
0x425C38: call    TESFile_GetChunkData
0x425C3D: lea     eax, [esp+38h+a1]
0x425C41: push    eax
0x425C42: mov     ecx, ebx
0x425C44: call    sub_420100
0x425C49: jmp     loc_426251
0x425C4E: push    19h; a2
0x425C50: mov     ecx, ebx; this
0x425C52: call    BaseExtraList_GetExtraData
0x425C57: mov     esi, eax
0x425C59: test    esi, esi
0x425C5B: jnz     short loc_425CC4
0x425C5D: push    10h; Size
0x425C5F: call    FormHeapAlloc
0x425C64: add     esp, 4
0x425C67: mov     [esp+38h+a2], eax
0x425C6B: test    eax, eax
0x425C6D: mov     [esp+38h+var_4], 4
0x425C75: jz      short loc_425C82
0x425C77: mov     ecx, eax; this
0x425C79: call    ??0ExtraRagDollData@@QAE@XZ; ExtraRagDollData::ExtraRagDollData(void)
0x425C7E: mov     esi, eax
0x425C80: jmp     short loc_425C84
0x425C82: xor     esi, esi
0x425C84: push    8; Size
0x425C86: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425C8E: call    FormHeapAlloc
0x425C93: add     esp, 4
0x425C96: mov     [esp+38h+a2], eax
0x425C9A: test    eax, eax
0x425C9C: mov     [esp+38h+var_4], 5
0x425CA4: jz      short loc_425CAF
0x425CA6: mov     ecx, eax
0x425CA8: call    sub_497210
0x425CAD: jmp     short loc_425CB1
0x425CAF: xor     eax, eax
0x425CB1: push    esi; BSExtraData *
0x425CB2: mov     ecx, ebx; ExtraDataList *
0x425CB4: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425CBC: mov     [esi+0Ch], eax
0x425CBF: call    BaseExtraList_AddExtra
0x425CC4: mov     ecx, [esi+0Ch]
0x425CC7: push    edi
0x425CC8: call    sub_497470
0x425CCD: test    al, al
0x425CCF: jnz     loc_426251
0x425CD5: push    offset aFailedToLoadRa; "Failed to load RagDoll Data."
0x425CDA: call    PrintError
0x425CDF: add     esp, 4
0x425CE2: push    1
0x425CE4: push    esi
0x425CE5: mov     ecx, ebx
0x425CE7: call    BaseExtraList_RemoveExtraByPtr
0x425CEC: jmp     loc_426251
0x425CF1: fldz
0x425CF3: lea     ecx, [esp+38h+a2]
0x425CF7: push    ecx
0x425CF8: fstp    [esp+3Ch+a2]
0x425CFC: mov     ecx, edi
0x425CFE: call    TESFile_GetChunkData4
0x425D03: fld     [esp+38h+a2]
0x425D07: push    ecx
0x425D08: mov     ecx, ebx
0x425D0A: fstp    [esp+3Ch+var_3C]; float
0x425D0D: call    sub_41EE90
0x425D12: jmp     loc_426251
0x425D17: cmp     eax, 4B524D58h
0x425D1C: jg      loc_425DE4
0x425D22: jz      short loc_425D93
0x425D24: cmp     eax, 47525458h
0x425D29: jz      short loc_425D6E
0x425D2B: cmp     eax, 49435058h
0x425D30: jz      short loc_425D62
0x425D32: cmp     eax, 4B4E5258h
0x425D37: jnz     loc_426251
0x425D3D: lea     edx, [esp+38h+a2]
0x425D41: push    edx
0x425D42: mov     ecx, edi
0x425D44: mov     [esp+3Ch+a2], 0
0x425D4C: call    TESFile_GetChunkData4
0x425D51: mov     eax, [esp+38h+a2]
0x425D55: push    eax
0x425D56: mov     ecx, ebx
0x425D58: call    sub_4237E0
0x425D5D: jmp     loc_426251
0x425D62: mov     ecx, edi
0x425D64: call    TESFile_GetNextChunk
0x425D69: jmp     loc_426251
0x425D6E: lea     ecx, [esp+38h+a2]
0x425D72: push    ecx
0x425D73: mov     ecx, edi
0x425D75: mov     [esp+3Ch+a2], 0
0x425D7D: call    TESFile_GetChunkData4
0x425D82: mov     edx, [esp+38h+a2]
0x425D86: push    edx
0x425D87: mov     ecx, ebx
0x425D89: call    sub_420D40
0x425D8E: jmp     loc_426251
0x425D93: mov     ecx, ebx
0x425D95: call    ExtraDataList_MapMarker
0x425D9A: mov     esi, eax
0x425D9C: test    esi, esi
0x425D9E: jnz     short loc_425DD7
0x425DA0: push    10h; Size
0x425DA2: call    FormHeapAlloc
0x425DA7: add     esp, 4
0x425DAA: mov     [esp+38h+a2], eax
0x425DAE: test    eax, eax
0x425DB0: mov     [esp+38h+var_4], 2
0x425DB8: jz      short loc_425DC3
0x425DBA: mov     ecx, eax
0x425DBC: call    sub_42B3F0
0x425DC1: jmp     short loc_425DC5
0x425DC3: xor     eax, eax
0x425DC5: push    eax
0x425DC6: mov     ecx, ebx
0x425DC8: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425DD0: mov     esi, eax
0x425DD2: call    sub_423590
0x425DD7: push    edi
0x425DD8: mov     ecx, esi
0x425DDA: call    sub_42B200
0x425DDF: jmp     loc_426251
0x425DE4: cmp     eax, 4C455458h
0x425DE9: jz      loc_425E77
0x425DEF: cmp     eax, 4C4F5358h
0x425DF4: jz      short loc_425E45
0x425DF6: cmp     eax, 4C535058h
0x425DFB: jnz     loc_426251
0x425E01: xor     eax, eax
0x425E03: mov     [esp+38h+a1], eax
0x425E07: mov     [esp+38h+var_20], eax
0x425E0B: mov     [esp+38h+var_1C], eax
0x425E0F: mov     [esp+38h+var_18], eax
0x425E13: mov     [esp+38h+var_14], eax
0x425E17: push    14h; a4
0x425E19: lea     eax, [esp+3Ch+a1]
0x425E1D: push    eax; Dst
0x425E1E: mov     ecx, edi; a1
0x425E20: call    TESFile_GetChunkData
0x425E25: fld     [esp+38h+var_14]
0x425E29: mov     edx, [esp+38h+a1]
0x425E2D: push    ecx
0x425E2E: fstp    [esp+3Ch+var_3C]; float
0x425E31: lea     ecx, [esp+3Ch+var_20]
0x425E35: push    ecx; int
0x425E36: push    0; int
0x425E38: push    edx; int
0x425E39: mov     ecx, ebx
0x425E3B: call    sub_41F4C0
0x425E40: jmp     loc_426251
0x425E45: cmp     dword ptr [edi+254h], 1
0x425E4C: jnz     loc_426251
0x425E52: push    1; a4
0x425E54: lea     eax, [esp+3Ch+a2]
0x425E58: push    eax; Dst
0x425E59: mov     ecx, edi; a1
0x425E5B: mov     byte ptr [esp+40h+a2], 0
0x425E60: call    TESFile_GetChunkData
0x425E65: movsx   ecx, byte ptr [esp+38h+a2]
0x425E6A: push    ecx
0x425E6B: mov     ecx, ebx
0x425E6D: call    BaseExtraList_SetSoulLevel
0x425E72: jmp     loc_426251
0x425E77: mov     ecx, ebx; this
0x425E79: call    ExtraDataList_GetTeleport
0x425E7E: mov     esi, eax
0x425E80: test    esi, esi
0x425E82: jnz     short loc_425EBB
0x425E84: push    1Ch; Size
0x425E86: call    FormHeapAlloc
0x425E8B: add     esp, 4
0x425E8E: mov     [esp+38h+a2], eax
0x425E92: test    eax, eax
0x425E94: mov     [esp+38h+var_4], 1
0x425E9C: jz      short loc_425EA7
0x425E9E: mov     ecx, eax
0x425EA0: call    sub_42B590
0x425EA5: jmp     short loc_425EA9
0x425EA7: xor     eax, eax
0x425EA9: push    eax
0x425EAA: mov     ecx, ebx
0x425EAC: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425EB4: mov     esi, eax
0x425EB6: call    ExtraDataList__SetTeleportData
0x425EBB: push    edi
0x425EBC: mov     ecx, esi
0x425EBE: call    sub_42B670
0x425EC3: jmp     loc_426251
0x425EC8: lea     edx, [esp+38h+a2]
0x425ECC: push    edx
0x425ECD: mov     ecx, edi
0x425ECF: mov     [esp+3Ch+a2], 0
0x425ED7: call    TESFile_GetChunkData4
0x425EDC: mov     eax, [esp+38h+a2]
0x425EE0: push    eax
0x425EE1: mov     ecx, ebx
0x425EE3: call    TESObjectCELL_SetInteriorClimate
0x425EE8: jmp     loc_426251
0x425EED: cmp     eax, 53524858h
0x425EF2: jg      loc_426145
0x425EF8: jz      loc_426120
0x425EFE: cmp     eax, 4E535058h
0x425F03: jg      loc_425FBD
0x425F09: jz      loc_425F98
0x425F0F: cmp     eax, 4D434C58h
0x425F14: jz      short loc_425F73
0x425F16: cmp     eax, 4D495458h
0x425F1B: jz      short loc_425F4D
0x425F1D: cmp     eax, 4D545258h
0x425F22: jnz     loc_426251
0x425F28: lea     ecx, [esp+38h+a2]
0x425F2C: push    ecx
0x425F2D: mov     ecx, edi
0x425F2F: mov     [esp+3Ch+a2], 0
0x425F37: call    TESFile_GetChunkData4
0x425F3C: mov     edx, [esp+38h+a2]
0x425F40: push    edx
0x425F41: mov     ecx, ebx
0x425F43: call    sub_4205C0
0x425F48: jmp     loc_426251
0x425F4D: fldz
0x425F4F: lea     eax, [esp+38h+a2]
0x425F53: push    eax
0x425F54: fstp    [esp+3Ch+a2]
0x425F58: mov     ecx, edi
0x425F5A: call    TESFile_GetChunkData4
0x425F5F: fld     [esp+38h+a2]
0x425F63: push    ecx
0x425F64: mov     ecx, ebx
0x425F66: fstp    [esp+3Ch+var_3C]; float
0x425F69: call    sub_41EDF0
0x425F6E: jmp     loc_426251
0x425F73: lea     ecx, [esp+38h+a4]
0x425F77: push    ecx
0x425F78: mov     ecx, edi
0x425F7A: mov     [esp+3Ch+a4], 0
0x425F82: call    TESFile_GetChunkData4
0x425F87: mov     edx, [esp+38h+a4]
0x425F8B: push    edx
0x425F8C: mov     ecx, ebx
0x425F8E: call    sub_420780
0x425F93: jmp     loc_426251
0x425F98: lea     eax, [esp+38h+a2]
0x425F9C: push    eax
0x425F9D: mov     ecx, edi
0x425F9F: mov     [esp+3Ch+a2], 0
0x425FA7: call    TESFile_GetChunkData4
0x425FAC: mov     ecx, [esp+38h+a2]
0x425FB0: push    ecx
0x425FB1: mov     ecx, ebx
0x425FB3: call    sub_41EFD0
0x425FB8: jmp     loc_426251
0x425FBD: cmp     eax, 4E574F58h
0x425FC2: jz      loc_4260FB
0x425FC8: cmp     eax, 50534558h
0x425FCD: jz      loc_4260C6
0x425FD3: cmp     eax, 524C4358h
0x425FD8: jnz     loc_426251
0x425FDE: mov     eax, [edi+254h]
0x425FE4: mov     ebp, eax
0x425FE6: shr     ebp, 2
0x425FE9: test    al, 3
0x425FEB: mov     [esp+38h+a4], eax
0x425FEF: jz      short loc_426007
0x425FF1: add     edi, 1Ch
0x425FF4: push    edi; ArgList
0x425FF5: push    offset aInvalidExtraDa; "Invalid Extra Data - Region List in fil"...
0x425FFA: call    PrintError
0x425FFF: add     esp, 8
0x426002: jmp     loc_426251
0x426007: push    10h; Size
0x426009: call    FormHeapAlloc
0x42600E: add     esp, 4
0x426011: mov     [esp+38h+a2], eax
0x426015: test    eax, eax
0x426017: mov     [esp+38h+var_4], 3
0x42601F: jz      short loc_426030
0x426021: push    0
0x426023: mov     ecx, eax
0x426025: call    TESRegionList_constr
0x42602A: mov     [esp+38h+a2], eax
0x42602E: jmp     short loc_426038
0x426030: mov     [esp+38h+a2], 0
0x426038: xor     ecx, ecx
0x42603A: mov     eax, ebp
0x42603C: mov     edx, 4
0x426041: mul     edx
0x426043: seto    cl
0x426046: mov     [esp+38h+var_4], 0FFFFFFFFh
0x42604E: neg     ecx
0x426050: or      ecx, eax
0x426052: push    ecx; Size
0x426053: call    FormHeapAlloc
0x426058: mov     ecx, [esp+3Ch+a4]
0x42605C: add     esp, 4
0x42605F: push    ecx; a4
0x426060: push    eax; Dst
0x426061: mov     ecx, edi; a1
0x426063: mov     [esp+40h+a1], eax
0x426067: call    TESFile_GetChunkData
0x42606C: test    ebp, ebp
0x42606E: jbe     short loc_4260A8
0x426070: mov     esi, [esp+38h+a1]
0x426074: push    edi; a2
0x426075: push    esi; a1
0x426076: call    TESForm_ResolveFormID
0x42607B: mov     edx, TESDataHandler
0x426081: mov     eax, [esi]
0x426083: mov     ecx, [edx+0BCh]
0x426089: add     esp, 8
0x42608C: push    eax
0x42608D: call    sub_4A63E0
0x426092: test    eax, eax
0x426094: jz      short loc_4260A0
0x426096: mov     ecx, [esp+38h+a2]
0x42609A: push    eax
0x42609B: call    sub_4A6350
0x4260A0: add     esi, 4
0x4260A3: sub     ebp, 1
0x4260A6: jnz     short loc_426074
0x4260A8: mov     ecx, [esp+38h+a2]
0x4260AC: push    ecx
0x4260AD: mov     ecx, ebx
0x4260AF: call    sub_4241E0
0x4260B4: mov     edx, [esp+38h+a1]
0x4260B8: push    edx
0x4260B9: call    FormHeapFree
0x4260BE: add     esp, 4
0x4260C1: jmp     loc_426251
0x4260C6: xor     eax, eax
0x4260C8: mov     [esp+38h+a1], eax
0x4260CC: mov     [esp+38h+var_20], eax
0x4260D0: push    8; a4
0x4260D2: lea     eax, [esp+3Ch+a1]
0x4260D6: push    eax; Dst
0x4260D7: mov     ecx, edi; a1
0x4260D9: call    TESFile_GetChunkData
0x4260DE: mov     ecx, [esp+38h+a1]
0x4260E2: push    ecx
0x4260E3: mov     ecx, ebx
0x4260E5: call    sub_420280
0x4260EA: mov     edx, [esp+38h+var_20]
0x4260EE: push    edx
0x4260EF: mov     ecx, ebx
0x4260F1: call    sub_420380
0x4260F6: jmp     loc_426251
0x4260FB: lea     eax, [esp+38h+a2]
0x4260FF: push    eax
0x426100: mov     ecx, edi
0x426102: mov     [esp+3Ch+a2], 0
0x42610A: call    TESFile_GetChunkData4
0x42610F: mov     ecx, [esp+38h+a2]
0x426113: push    ecx
0x426114: mov     ecx, ebx
0x426116: call    ExtraDataList__SetOrRemoveExtraOwnership
0x42611B: jmp     loc_426251
0x426120: lea     edx, [esp+38h+a2]
0x426124: push    edx
0x426125: mov     ecx, edi
0x426127: mov     [esp+3Ch+a2], 0
0x42612F: call    TESFile_GetChunkData4
0x426134: mov     eax, [esp+38h+a2]
0x426138: push    eax
0x426139: mov     ecx, ebx
0x42613B: call    sub_420860
0x426140: jmp     loc_426251
0x426145: cmp     eax, 544E4358h
0x42614A: jg      loc_426200
0x426150: jz      loc_4261DE
0x426156: cmp     eax, 54434158h
0x42615B: jz      short loc_4261BC
0x42615D: cmp     eax, 544C4858h
0x426162: jz      short loc_426194
0x426164: cmp     eax, 544D4358h
0x426169: jnz     loc_426251
0x42616F: push    1; a4
0x426171: lea     ecx, [esp+3Ch+a2]
0x426175: push    ecx; Dst
0x426176: mov     ecx, edi; a1
0x426178: mov     byte ptr [esp+40h+a2], 0
0x42617D: call    TESFile_GetChunkData
0x426182: movsx   edx, byte ptr [esp+38h+a2]
0x426187: push    edx
0x426188: mov     ecx, ebx
0x42618A: call    sub_4242C0
0x42618F: jmp     loc_426251
0x426194: lea     eax, [esp+38h+a2]
0x426198: push    eax
0x426199: mov     ecx, edi
0x42619B: mov     [esp+3Ch+a2], 0
0x4261A3: call    TESFile_GetChunkData4
0x4261A8: fild    [esp+38h+a2]
0x4261AC: push    ecx
0x4261AD: mov     ecx, ebx
0x4261AF: fstp    [esp+3Ch+var_3C]; float
0x4261B2: call    ExtraDataList_SetHealthValue
0x4261B7: jmp     loc_426251
0x4261BC: lea     ecx, [esp+38h+a2]
0x4261C0: push    ecx
0x4261C1: mov     ecx, edi
0x4261C3: mov     [esp+3Ch+a2], 0
0x4261CB: call    TESFile_GetChunkData4
0x4261D0: mov     edx, [esp+38h+a2]
0x4261D4: push    edx
0x4261D5: mov     ecx, ebx
0x4261D7: call    sub_423DA0
0x4261DC: jmp     short loc_426251
0x4261DE: lea     eax, [esp+38h+a2]
0x4261E2: push    eax
0x4261E3: mov     ecx, edi
0x4261E5: mov     [esp+3Ch+a2], 0
0x4261ED: call    TESFile_GetChunkData4
0x4261F2: mov     ecx, [esp+38h+a2]
0x4261F6: push    ecx
0x4261F7: mov     ecx, ebx
0x4261F9: call    ExtraDataList_SetExtraCount
0x4261FE: jmp     short loc_426251
0x426200: cmp     eax, 54574358h
0x426205: jz      short loc_426231
0x426207: cmp     eax, 574C4358h
0x42620C: jnz     short loc_426251
0x42620E: fldz
0x426210: lea     edx, [esp+38h+a2]
0x426214: push    edx
0x426215: fstp    [esp+3Ch+a2]
0x426219: mov     ecx, edi
0x42621B: call    TESFile_GetChunkData4
0x426220: fld     [esp+38h+a2]
0x426224: push    ecx
0x426225: mov     ecx, ebx
0x426227: fstp    [esp+3Ch+var_3C]; float
0x42622A: call    sub_423FF0
0x42622F: jmp     short loc_426251
0x426231: lea     eax, [esp+38h+a2]
0x426235: push    eax
0x426236: mov     ecx, edi
0x426238: mov     [esp+3Ch+a2], 0
0x426240: call    TESFile_GetChunkData4
0x426245: mov     ecx, [esp+38h+a2]
0x426249: push    ecx
0x42624A: mov     ecx, ebx
0x42624C: call    sub_4204E0
0x426251: mov     ecx, [esp+38h+var_C]
0x426255: mov     large fs:0, ecx
0x42625C: pop     ecx
0x42625D: pop     edi
0x42625E: pop     esi
0x42625F: pop     ebp
0x426260: pop     ebx
0x426261: add     esp, 24h
0x426264: retn    8
