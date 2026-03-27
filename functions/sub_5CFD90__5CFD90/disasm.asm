0x5CFD90: push    0FFFFFFFFh
0x5CFD92: push    offset SEH_5CFD90
0x5CFD97: mov     eax, large fs:0
0x5CFD9D: push    eax
0x5CFD9E: sub     esp, 144h
0x5CFDA4: mov     eax, ds:0B30AACh
0x5CFDA9: xor     eax, esp
0x5CFDAB: mov     [esp+150h+var_10], eax
0x5CFDB2: push    ebx
0x5CFDB3: push    ebp
0x5CFDB4: push    esi
0x5CFDB5: push    edi
0x5CFDB6: mov     eax, ds:0B30AACh
0x5CFDBB: xor     eax, esp
0x5CFDBD: push    eax; a3
0x5CFDBE: lea     eax, [esp+164h+var_C]
0x5CFDC5: mov     large fs:0, eax
0x5CFDCB: mov     eax, [esp+164h+arg_0]
0x5CFDD2: cmp     eax, 3
0x5CFDD5: mov     esi, ecx
0x5CFDD7: mov     ecx, [esp+164h+arg_4]
0x5CFDDE: mov     [esp+164h+var_140], esi
0x5CFDE2: mov     [esp+164h+var_144], ecx
0x5CFDE6: jnz     short loc_5CFDFC
0x5CFDE8: push    2; int
0x5CFDEA: call    sub_57DE50
0x5CFDEF: add     esp, 4
0x5CFDF2: call    sub_5CE9B0
0x5CFDF7: jmp     loc_5D026E
0x5CFDFC: cmp     eax, 33h ; '3'
0x5CFDFF: jl      loc_5D026E
0x5CFE05: push    0; a3
0x5CFE07: push    0FB9h
0x5CFE0C: call    Tile_GetFloat
0x5CFE11: call    Double_To_SInt32
0x5CFE16: mov     ecx, ds:0B333C4h; this
0x5CFE1C: push    eax; a2
0x5CFE1D: call    GetInventoryEntryOfItem
0x5CFE22: mov     ebp, eax
0x5CFE24: test    ebp, ebp
0x5CFE26: mov     [esp+164h+var_150], ebp
0x5CFE2A: jz      loc_5D026E
0x5CFE30: mov     eax, [esi+38h]
0x5CFE33: mov     esi, [eax+38h]
0x5CFE36: xor     edi, edi
0x5CFE38: xor     ebx, ebx
0x5CFE3A: test    esi, esi
0x5CFE3C: jz      loc_5CFF11
0x5CFE42: cmp     edi, [esp+164h+var_144]
0x5CFE46: jz      short loc_5CFE74
0x5CFE48: test    edi, edi
0x5CFE4A: jz      short loc_5CFE67
0x5CFE4C: push    0FA1h
0x5CFE51: mov     ecx, edi
0x5CFE53: call    Tile_GetFloat
0x5CFE58: fcomp   dword ptr ds:0A2F948h
0x5CFE5E: fnstsw  ax
0x5CFE60: test    ah, 44h
0x5CFE63: jnp     short loc_5CFE67
0x5CFE65: mov     ebx, edi
0x5CFE67: mov     edi, [esi+8]
0x5CFE6A: lea     eax, [esi+8]
0x5CFE6D: mov     esi, [esi+4]
0x5CFE70: test    esi, esi
0x5CFE72: jnz     short loc_5CFE42
0x5CFE74: test    edi, edi
0x5CFE76: jz      loc_5CFF11
0x5CFE7C: test    esi, esi
0x5CFE7E: jz      short loc_5CFEC5
0x5CFE80: mov     edi, [esi+8]
0x5CFE83: lea     eax, [esi+8]
0x5CFE86: mov     esi, [esi+4]
0x5CFE89: test    esi, esi
0x5CFE8B: jz      short loc_5CFEA6
0x5CFE8D: push    0FA1h
0x5CFE92: mov     ecx, edi
0x5CFE94: call    Tile_GetFloat
0x5CFE99: fcomp   dword ptr ds:0A2F948h
0x5CFE9F: fnstsw  ax
0x5CFEA1: test    ah, 44h
0x5CFEA4: jnp     short loc_5CFE80
0x5CFEA6: test    edi, edi
0x5CFEA8: jz      short loc_5CFF11
0x5CFEAA: push    0FA1h
0x5CFEAF: mov     ecx, edi
0x5CFEB1: call    Tile_GetFloat
0x5CFEB6: fcomp   dword ptr ds:0A2F948h
0x5CFEBC: fnstsw  ax
0x5CFEBE: test    ah, 44h
0x5CFEC1: jnp     short loc_5CFF11
0x5CFEC3: jmp     short loc_5CFEC7
0x5CFEC5: mov     edi, ebx
0x5CFEC7: test    edi, edi
0x5CFEC9: jz      short loc_5CFF11
0x5CFECB: push    1; arg1
0x5CFECD: push    0; canCreate
0x5CFECF: call    InterfaceManager_GetSingleton
0x5CFED4: push    1; arg1
0x5CFED6: push    0; canCreate
0x5CFED8: call    InterfaceManager_GetSingleton
0x5CFEDD: add     dword ptr [eax+8Ch], 1
0x5CFEE4: fild    dword ptr [eax+8Ch]
0x5CFEEA: mov     ecx, [eax+8Ch]
0x5CFEF0: add     eax, 8Ch ; 'Œ'
0x5CFEF5: test    ecx, ecx
0x5CFEF7: jge     short loc_5CFEFF
0x5CFEF9: fadd    dword ptr ds:0A2FC78h
0x5CFEFF: add     esp, 0Ch
0x5CFF02: fstp    [esp+168h+a2]; a3
0x5CFF05: push    0FF0h; a2
0x5CFF0A: mov     ecx, edi; this
0x5CFF0C: call    Tile_SetFloat
0x5CFF11: mov     eax, [esp+164h+var_140]
0x5CFF15: cmp     dword ptr [eax+44h], 0
0x5CFF19: jz      loc_5D0176
0x5CFF1F: mov     eax, [ebp+0]
0x5CFF22: mov     ecx, [eax]
0x5CFF24: call    ExtraDataList_GetExtraCount
0x5CFF29: mov     ecx, ds:0B333C4h
0x5CFF2F: add     ecx, 44h ; 'D'; this
0x5CFF32: movsx   ebx, ax
0x5CFF35: call    ExtraDataList_GetContainerChanges
0x5CFF3A: xor     esi, esi
0x5CFF3C: push    esi; int
0x5CFF3D: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5CFF42: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5CFF47: mov     edi, eax
0x5CFF49: mov     eax, [ebp+8]
0x5CFF4C: push    esi; int
0x5CFF4D: push    eax; void *
0x5CFF4E: call    OblivionDynamicCast
0x5CFF53: add     esp, 14h
0x5CFF56: cmp     eax, esi
0x5CFF58: mov     [esp+164h+var_148], 7FFFFFFFh
0x5CFF60: jz      short loc_5CFF6D
0x5CFF62: movzx   eax, word ptr [eax+8]
0x5CFF66: movzx   edx, ax
0x5CFF69: mov     [esp+164h+var_148], edx
0x5CFF6D: push    14h; Size
0x5CFF6F: call    FormHeapAlloc
0x5CFF74: add     esp, 4
0x5CFF77: mov     [esp+164h+var_14C], eax
0x5CFF7B: cmp     eax, esi
0x5CFF7D: mov     [esp+164h+var_4], esi
0x5CFF84: jz      short loc_5CFF8F
0x5CFF86: mov     ecx, eax
0x5CFF88: call    ExtraDataList_constr
0x5CFF8D: mov     esi, eax
0x5CFF8F: mov     eax, [ebp+8]
0x5CFF92: push    0
0x5CFF94: push    1
0x5CFF96: push    eax
0x5CFF97: mov     ecx, edi
0x5CFF99: mov     [esp+170h+var_4], 0FFFFFFFFh
0x5CFFA4: call    ContainerExtraData_GetEntryForForm
0x5CFFA9: mov     ebp, eax
0x5CFFAB: mov     eax, [esp+16Ch+var_158]
0x5CFFAF: mov     ecx, [eax]
0x5CFFB1: mov     edi, [ecx]
0x5CFFB3: mov     ecx, edi
0x5CFFB5: call    ExtraDataList_GetExtraCount
0x5CFFBA: cmp     ax, 1
0x5CFFBE: jnz     short loc_5CFFD2
0x5CFFC0: test    esi, esi
0x5CFFC2: jz      short loc_5CFFCE
0x5CFFC4: mov     edx, [esi]
0x5CFFC6: mov     eax, [edx]
0x5CFFC8: push    1
0x5CFFCA: mov     ecx, esi
0x5CFFCC: call    eax
0x5CFFCE: mov     esi, edi
0x5CFFD0: jmp     short loc_5CFFEB
0x5CFFD2: mov     ecx, [esp+16Ch+var_158]
0x5CFFD6: mov     edx, [ecx]
0x5CFFD8: mov     eax, [edx]
0x5CFFDA: push    eax
0x5CFFDB: mov     ecx, esi
0x5CFFDD: call    BaseExtraList_Copy
0x5CFFE2: push    1
0x5CFFE4: mov     ecx, esi
0x5CFFE6: call    ExtraDataList_SetExtraCount
0x5CFFEB: mov     ecx, edi
0x5CFFED: call    ExtraDataList_GetExtraCount
0x5CFFF2: cmp     ax, 1
0x5CFFF6: jle     short loc_5D0003
0x5CFFF8: add     ebx, 0FFFFFFFFh
0x5CFFFB: push    ebx
0x5CFFFC: mov     ecx, edi
0x5CFFFE: call    ExtraDataList_SetExtraCount
0x5D0003: mov     ecx, [esp+170h+var_15C]
0x5D0007: call    sub_4849C0
0x5D000C: mov     ecx, [esp+170h+var_14C]
0x5D0010: fiadd   dword ptr [ecx+4Ch]
0x5D0013: push    ecx
0x5D0014: mov     ecx, esi
0x5D0016: fstp    [esp+174h+var_158]
0x5D001A: fld     [esp+174h+var_158]
0x5D001E: fstp    [esp+174h+var_174]; float
0x5D0021: call    sub_41EE90
0x5D0026: fild    [esp+170h+var_154]
0x5D002A: mov     ecx, esi
0x5D002C: fstp    [esp+170h+var_158]
0x5D0030: call    ExtraDataList_GetCharge
0x5D0035: fld     [esp+170h+var_158]
0x5D0039: fcompp
0x5D003B: fnstsw  ax
0x5D003D: test    ah, 41h
0x5D0040: jp      short loc_5D006A
0x5D0042: push    2Eh ; '.'
0x5D0044: mov     ecx, esi
0x5D0046: call    BaseExtraList_RemoveExtraByType
0x5D004B: cmp     dword ptr [esi+4], 0
0x5D004F: jnz     short loc_5D008C
0x5D0051: cmp     esi, edi
0x5D0053: jnz     short loc_5D005E
0x5D0055: mov     ecx, [ebp+0]
0x5D0058: push    edi
0x5D0059: call    BSSimpleList_Remove
0x5D005E: mov     edx, [esi]
0x5D0060: mov     eax, [edx]
0x5D0062: push    1
0x5D0064: mov     ecx, esi
0x5D0066: call    eax
0x5D0068: jmp     short loc_5D00C2
0x5D006A: push    1; arg1
0x5D006C: push    0; canCreate
0x5D006E: call    InterfaceManager_GetSingleton
0x5D0073: push    1
0x5D0075: call    sub_5966F0
0x5D007A: mov     ecx, [esp+17Ch+var_150]
0x5D007E: add     esp, 0Ch
0x5D0081: push    eax
0x5D0082: push    0FF0h
0x5D0087: call    sub_57D300
0x5D008C: test    esi, esi
0x5D008E: jz      short loc_5D00C2
0x5D0090: cmp     esi, edi
0x5D0092: jz      short loc_5D00C2
0x5D0094: mov     edi, [ebp+0]
0x5D0097: test    edi, edi
0x5D0099: jz      short loc_5D00B9
0x5D009B: jmp     short loc_5D00A0
0x5D009D: align 10h
0x5D00A0: mov     ebx, [edi]
0x5D00A2: test    ebx, ebx
0x5D00A4: jz      short loc_5D00B9
0x5D00A6: push    esi
0x5D00A7: mov     ecx, ebx
0x5D00A9: call    ExtraDataList_CompareList
0x5D00AE: test    al, al
0x5D00B0: jz      short loc_5D0107
0x5D00B2: mov     edi, [edi+4]
0x5D00B5: test    edi, edi
0x5D00B7: jnz     short loc_5D00A0
0x5D00B9: mov     ecx, [ebp+0]
0x5D00BC: push    esi
0x5D00BD: call    BSSimpleList_PushFront
0x5D00C2: mov     esi, [esp+174h+var_150]
0x5D00C6: mov     edx, [esi+44h]
0x5D00C9: mov     ecx, [edx]
0x5D00CB: xor     eax, eax
0x5D00CD: test    ecx, ecx
0x5D00CF: jz      short loc_5D00D3
0x5D00D1: mov     eax, [ecx]
0x5D00D3: mov     edx, [edx+8]
0x5D00D6: cmp     edx, ds:0B35EE4h
0x5D00DC: jz      short loc_5D011C
0x5D00DE: mov     ecx, ds:0B333C4h
0x5D00E4: mov     edi, [ecx]
0x5D00E6: push    0
0x5D00E8: push    1
0x5D00EA: push    0
0x5D00EC: push    0
0x5D00EE: push    0
0x5D00F0: push    0
0x5D00F2: push    0
0x5D00F4: push    1
0x5D00F6: push    eax
0x5D00F7: push    edx
0x5D00F8: mov     edx, [edi+100h]
0x5D00FE: call    edx
0x5D0100: call    sub_5C1900
0x5D0105: jmp     short loc_5D0127
0x5D0107: mov     ecx, ebx
0x5D0109: call    ExtraDataList_GetExtraCount
0x5D010E: add     ax, 1
0x5D0112: mov     ecx, ebx
0x5D0114: push    eax
0x5D0115: call    ExtraDataList_SetExtraCount
0x5D011A: jmp     short loc_5D00C2
0x5D011C: test    eax, eax
0x5D011E: jz      short loc_5D0127
0x5D0120: mov     ecx, eax
0x5D0122: call    sub_41F650
0x5D0127: mov     ecx, ds:0B333C4h
0x5D012D: call    sub_65DD20
0x5D0132: push    18h; int
0x5D0134: call    sub_57DE50
0x5D0139: mov     ecx, [esi+4]
0x5D013C: add     esp, 4
0x5D013F: push    0FB4h
0x5D0144: call    Tile_GetFloat
0x5D0149: fcomp   dword ptr ds:0A2F948h
0x5D014F: fnstsw  ax
0x5D0151: test    ah, 41h
0x5D0154: jnz     short loc_5D0168
0x5D0156: push    0
0x5D0158: mov     ecx, esi
0x5D015A: call    ??0?$NiTPointerListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@QAE@XZ; NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(void)
0x5D015F: mov     ebp, [esp+19Ch+var_188]
0x5D0163: jmp     loc_5D025E
0x5D0168: call    sub_5CE9B0
0x5D016D: mov     ebp, [esp+19Ch+var_188]
0x5D0171: jmp     loc_5D025E
0x5D0176: cmp     dword ptr [eax+48h], 0
0x5D017A: jz      loc_5D025E
0x5D0180: mov     eax, [ebp+8]
0x5D0183: push    0; int
0x5D0185: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5D018A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5D018F: push    0; int
0x5D0191: push    eax; void *
0x5D0192: call    OblivionDynamicCast
0x5D0197: add     esp, 14h
0x5D019A: test    eax, eax
0x5D019C: mov     [esp+164h+var_148], 7FFFFFFFh
0x5D01A4: jz      short loc_5D01AE
0x5D01A6: movzx   eax, word ptr [eax+8]
0x5D01AA: mov     [esp+164h+var_148], eax
0x5D01AE: mov     ecx, ebp
0x5D01B0: call    sub_4849C0
0x5D01B5: sub     esp, 8
0x5D01B8: fstp    [esp+16Ch+a2]; float
0x5D01BC: fild    [esp+16Ch+var_148]
0x5D01C0: fstp    [esp+16Ch+var_16C]; float
0x5D01C3: call    sub_5483E0
0x5D01C8: mov     esi, eax
0x5D01CA: add     esp, 8
0x5D01CD: cmp     esi, 1
0x5D01D0: jg      short loc_5D01D7
0x5D01D2: mov     esi, 1
0x5D01D7: mov     ecx, ds:0B333C4h
0x5D01DD: call    sub_5E4420
0x5D01E2: cmp     eax, esi
0x5D01E4: jl      short loc_5D0238
0x5D01E6: mov     edx, ds:0B38D20h
0x5D01EC: mov     eax, ds:0B38858h
0x5D01F1: mov     ecx, [esp+164h+var_144]
0x5D01F5: push    edx
0x5D01F6: push    esi
0x5D01F7: push    eax
0x5D01F8: mov     ds:0B3B708h, ecx
0x5D01FE: lea     ecx, [esp+170h+var_13C]
0x5D0202: push    offset aSDS?; "%s %d %s?"
0x5D0207: push    ecx
0x5D0208: mov     ds:0B3B70Ch, esi
0x5D020E: call    __sprintf
0x5D0213: mov     edx, ds:0B38D00h
0x5D0219: mov     eax, ds:0B38CF8h
0x5D021E: push    0
0x5D0220: push    edx
0x5D0221: push    eax
0x5D0222: push    1
0x5D0224: lea     ecx, [esp+188h+var_13C]
0x5D0228: push    offset sub_5CF9B0
0x5D022D: push    ecx
0x5D022E: call    ShowUIMessageBox
0x5D0233: add     esp, 2Ch
0x5D0236: jmp     short loc_5D0253
0x5D0238: mov     edx, ds:0B38CF0h
0x5D023E: mov     eax, ds:0B38DB0h
0x5D0243: push    0
0x5D0245: push    edx
0x5D0246: push    1
0x5D0248: push    0
0x5D024A: push    eax
0x5D024B: call    ShowUIMessageBox
0x5D0250: add     esp, 14h
0x5D0253: mov     ecx, ds:0B333C4h
0x5D0259: call    sub_65DD20
0x5D025E: mov     ecx, ebp
0x5D0260: call    ContainerEntryExtraData_DestroyDataTable
0x5D0265: push    ebp
0x5D0266: call    FormHeapFree
0x5D026B: add     esp, 4
0x5D026E: mov     ecx, [esp+164h+var_C]
0x5D0275: mov     large fs:0, ecx
0x5D027C: pop     ecx
0x5D027D: pop     edi
0x5D027E: pop     esi
0x5D027F: pop     ebp
0x5D0280: pop     ebx
0x5D0281: mov     ecx, [esp+150h+var_10]
0x5D0288: xor     ecx, esp
0x5D028A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D028F: add     esp, 150h
0x5D0295: retn    8
