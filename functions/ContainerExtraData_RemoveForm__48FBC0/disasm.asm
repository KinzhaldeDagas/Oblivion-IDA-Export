0x48FBC0: push    0FFFFFFFFh
0x48FBC2: push    offset ContainerExtraData_RemoveForm_SEH
0x48FBC7: mov     eax, large fs:0
0x48FBCD: push    eax
0x48FBCE: sub     esp, 34h
0x48FBD1: push    ebx
0x48FBD2: push    ebp
0x48FBD3: push    esi
0x48FBD4: push    edi
0x48FBD5: mov     eax, ds:0B30AACh
0x48FBDA: xor     eax, esp
0x48FBDC: push    eax
0x48FBDD: lea     eax, [esp+54h+var_C]
0x48FBE1: mov     large fs:0, eax
0x48FBE7: mov     ebx, ecx
0x48FBE9: mov     [esp+54h+var_30], ebx
0x48FBED: mov     ecx, [ebx+4]
0x48FBF0: fld     dword ptr ds:0A30634h
0x48FBF6: xor     edi, edi
0x48FBF8: fstp    dword ptr [ebx+8]
0x48FBFB: cmp     ecx, edi
0x48FBFD: mov     [esp+54h+var_38], edi
0x48FC01: mov     [esp+54h+var_3E], 0
0x48FC06: jz      short loc_48FC14
0x48FC08: mov     eax, [ecx]
0x48FC0A: mov     edx, [eax+40h]
0x48FC0D: push    8000000h
0x48FC12: call    edx
0x48FC14: mov     ecx, [esp+54h+arg_18]
0x48FC18: cmp     ecx, edi
0x48FC1A: jz      short loc_48FC28
0x48FC1C: mov     eax, [ecx]
0x48FC1E: mov     edx, [eax+40h]
0x48FC21: push    8000000h
0x48FC26: call    edx
0x48FC28: mov     eax, [ebx]
0x48FC2A: cmp     eax, edi
0x48FC2C: mov     esi, [esp+54h+arg_4]
0x48FC30: mov     dl, 1
0x48FC32: jz      short loc_48FC56
0x48FC34: test    dl, dl
0x48FC36: jz      short loc_48FC50
0x48FC38: mov     ecx, [eax]
0x48FC3A: cmp     ecx, edi
0x48FC3C: jz      short loc_48FC47
0x48FC3E: cmp     [ecx+8], esi
0x48FC41: jnz     short loc_48FC47
0x48FC43: xor     dl, dl
0x48FC45: jmp     short loc_48FC4A
0x48FC47: mov     eax, [eax+4]
0x48FC4A: cmp     eax, edi
0x48FC4C: jnz     short loc_48FC34
0x48FC4E: jmp     short loc_48FC56
0x48FC50: cmp     eax, edi
0x48FC52: jz      short loc_48FC56
0x48FC54: mov     edi, [eax]
0x48FC56: mov     ebp, [esp+54h+arg_10]
0x48FC5A: xor     esi, esi
0x48FC5C: test    ebp, ebp
0x48FC5E: mov     [esp+54h+var_34], edi
0x48FC62: mov     [esp+54h+var_3C], esi
0x48FC66: jz      short loc_48FC92
0x48FC68: mov     ecx, ebp
0x48FC6A: call    BaseExtraList_Count
0x48FC6F: test    eax, eax
0x48FC71: jnz     short loc_48FC92
0x48FC73: test    edi, edi
0x48FC75: jz      short loc_48FC83
0x48FC77: mov     ecx, [edi]
0x48FC79: test    ecx, ecx
0x48FC7B: jz      short loc_48FC83
0x48FC7D: push    ebp
0x48FC7E: call    BSSimpleList_Remove
0x48FC83: mov     eax, [ebp+0]
0x48FC86: mov     edx, [eax]
0x48FC88: push    1
0x48FC8A: mov     ecx, ebp
0x48FC8C: call    edx
0x48FC8E: mov     [esp+54h+arg_10], esi
0x48FC92: xor     ebp, ebp
0x48FC94: cmp     [esp+54h+arg_0], esi
0x48FC98: mov     [esp+54h+var_2C], ebp
0x48FC9C: jz      short loc_48FD01
0x48FC9E: mov     ecx, [ebx+4]; this
0x48FCA1: test    ecx, ecx
0x48FCA3: jz      short loc_48FCAC
0x48FCA5: call    TESObjectREFR_GetContainer
0x48FCAA: jmp     short loc_48FCAE
0x48FCAC: xor     eax, eax
0x48FCAE: mov     ecx, [esp+54h+arg_4]
0x48FCB2: push    ecx
0x48FCB3: mov     ecx, eax
0x48FCB5: call    TESContainer_GetFormCount
0x48FCBA: test    edi, edi
0x48FCBC: mov     ebp, eax
0x48FCBE: mov     [esp+54h+var_2C], ebp
0x48FCC2: jz      short loc_48FD01
0x48FCC4: push    0
0x48FCC6: mov     ecx, edi
0x48FCC8: call    ContainerEntryExtraData_HasWorn
0x48FCCD: test    al, al
0x48FCCF: jnz     short loc_48FD01
0x48FCD1: mov     ecx, edi
0x48FCD3: call    sub_4845D0
0x48FCD8: mov     ecx, edi
0x48FCDA: mov     ebx, eax
0x48FCDC: call    sub_484620
0x48FCE1: mov     edx, [edi+4]
0x48FCE4: add     ebx, eax
0x48FCE6: add     edx, ebp
0x48FCE8: cmp     edx, ebx
0x48FCEA: jle     short loc_48FCFD
0x48FCEC: mov     ecx, edi
0x48FCEE: call    sub_484F20
0x48FCF3: test    eax, eax
0x48FCF5: jz      short loc_48FCFD
0x48FCF7: xor     ebp, ebp
0x48FCF9: mov     [esp+54h+var_2C], ebp
0x48FCFD: mov     ebx, [esp+54h+var_30]
0x48FD01: test    ebp, ebp
0x48FD03: mov     [esp+54h+var_18], esi
0x48FD07: jge     short loc_48FD3C
0x48FD09: mov     ecx, [ebx+4]
0x48FD0C: mov     eax, [ecx]
0x48FD0E: mov     edx, [eax+190h]
0x48FD14: call    edx
0x48FD16: test    al, al
0x48FD18: jz      short loc_48FD53
0x48FD1A: mov     ecx, [ebx+4]
0x48FD1D: mov     eax, [ecx]
0x48FD1F: mov     edx, [eax+198h]
0x48FD25: push    0
0x48FD27: call    edx
0x48FD29: test    al, al
0x48FD2B: jz      short loc_48FD53
0x48FD2D: test    edi, edi
0x48FD2F: jz      short loc_48FD4B
0x48FD31: xor     ebp, ebp
0x48FD33: mov     [esp+54h+var_2C], ebp
0x48FD37: mov     [esp+54h+var_3E], 1
0x48FD3C: test    edi, edi
0x48FD3E: jz      short loc_48FD74
0x48FD40: mov     eax, [edi+4]
0x48FD43: test    eax, eax
0x48FD45: jz      short loc_48FD78
0x48FD47: add     eax, ebp
0x48FD49: jmp     short loc_48FD76
0x48FD4B: neg     ebp
0x48FD4D: mov     [esp+54h+var_18], ebp
0x48FD51: jmp     short loc_48FD59
0x48FD53: mov     [esp+54h+var_18], ebp
0x48FD57: neg     ebp
0x48FD59: test    ebp, ebp
0x48FD5B: mov     [esp+54h+var_2C], ebp
0x48FD5F: jge     short loc_48FD3C
0x48FD61: mov     eax, [esp+54h+arg_18]
0x48FD65: cmp     eax, ds:0B333C4h
0x48FD6B: jz      short loc_48FD3C
0x48FD6D: xor     eax, eax
0x48FD6F: jmp     loc_49166C
0x48FD74: test    ebp, ebp
0x48FD76: jz      short loc_48FD6D
0x48FD78: test    edi, edi
0x48FD7A: mov     [esp+54h+var_1C], esi
0x48FD7E: mov     [esp+54h+var_3F], 0
0x48FD83: jz      loc_491019
0x48FD89: lea     esp, [esp+0]
0x48FD90: cmp     [esp+54h+arg_C], 0
0x48FD95: jle     loc_491019
0x48FD9B: mov     eax, [edi+4]
0x48FD9E: add     eax, ebp
0x48FDA0: test    eax, eax
0x48FDA2: jle     loc_491019
0x48FDA8: test    esi, esi
0x48FDAA: jz      short loc_48FDCE
0x48FDAC: mov     ecx, [esi]
0x48FDAE: test    ecx, ecx
0x48FDB0: jz      short loc_48FDB7
0x48FDB2: call    BSSimpleList_Clear
0x48FDB7: mov     eax, [esi]
0x48FDB9: push    eax
0x48FDBA: call    FormHeapFree
0x48FDBF: push    esi
0x48FDC0: mov     dword ptr [esi], 0
0x48FDC6: call    FormHeapFree
0x48FDCB: add     esp, 8
0x48FDCE: push    0Ch; Size
0x48FDD0: call    FormHeapAlloc
0x48FDD5: add     esp, 4
0x48FDD8: test    eax, eax
0x48FDDA: jz      short loc_48FDEA
0x48FDDC: xor     ecx, ecx
0x48FDDE: mov     [eax+8], ecx
0x48FDE1: mov     [eax], ecx
0x48FDE3: mov     [eax+4], ecx
0x48FDE6: mov     ebx, eax
0x48FDE8: jmp     short loc_48FDEC
0x48FDEA: xor     ebx, ebx
0x48FDEC: cmp     [esp+54h+arg_10], 0
0x48FDF1: mov     eax, [edi+8]
0x48FDF4: mov     [ebx+8], eax
0x48FDF7: mov     esi, [edi]
0x48FDF9: mov     [esp+54h+var_3C], ebx
0x48FDFD: mov     [esp+54h+var_24], esi
0x48FE01: mov     [esp+54h+var_40], 1
0x48FE06: jz      short loc_48FE15
0x48FE08: mov     ecx, [esp+54h+arg_10]
0x48FE0C: call    BaseExtraList_Count
0x48FE11: test    eax, eax
0x48FE13: jnz     short loc_48FE23
0x48FE15: cmp     byte ptr [esp+54h+arg_28], 0
0x48FE1D: jz      loc_49069A
0x48FE23: test    esi, esi
0x48FE25: jz      loc_49069A
0x48FE2B: cmp     dword ptr [esi], 0
0x48FE2E: jz      loc_49069A
0x48FE34: mov     esi, [esp+54h+var_24]
0x48FE38: mov     edi, [esi]
0x48FE3A: test    edi, edi
0x48FE3C: jz      loc_490A33
0x48FE42: cmp     [esp+54h+var_40], 0
0x48FE47: jz      loc_490A33
0x48FE4D: mov     eax, [esp+54h+arg_10]
0x48FE51: cmp     eax, edi
0x48FE53: jz      short loc_48FE79
0x48FE55: test    eax, eax
0x48FE57: jnz     short loc_48FE6D
0x48FE59: cmp     byte ptr [esp+54h+arg_28], al
0x48FE60: jz      short loc_48FE6D
0x48FE62: mov     ecx, edi
0x48FE64: call    ExtraDataList_GetOwner
0x48FE69: test    eax, eax
0x48FE6B: jnz     short loc_48FE79
0x48FE6D: mov     ecx, [esi+4]
0x48FE70: mov     [esp+54h+var_24], ecx
0x48FE74: jmp     loc_490650
0x48FE79: mov     ecx, edi
0x48FE7B: mov     [esp+54h+arg_10], 0
0x48FE83: mov     [esp+54h+var_40], 0
0x48FE88: call    ExtraDataList_GetExtraCount
0x48FE8D: push    0
0x48FE8F: mov     ecx, edi
0x48FE91: movsx   ebp, ax
0x48FE94: call    ExtraDataList_HasWorn
0x48FE99: test    al, al
0x48FE9B: jnz     loc_49108B
0x48FEA1: mov     ebx, [esp+54h+arg_C]
0x48FEA5: cmp     ebp, ebx
0x48FEA7: jg      short loc_48FF03
0x48FEA9: mov     ecx, edi
0x48FEAB: call    sub_41E850
0x48FEB0: test    eax, eax
0x48FEB2: jnz     short loc_48FF03
0x48FEB4: mov     ecx, [esp+54h+var_34]
0x48FEB8: sub     [ecx+4], ebp
0x48FEBB: mov     edx, [esp+54h+var_3C]
0x48FEBF: mov     eax, [edx+4]
0x48FEC2: add     eax, ebp
0x48FEC4: mov     [edx+4], eax
0x48FEC7: mov     ecx, [ecx]
0x48FEC9: sub     ebx, ebp
0x48FECB: push    edi
0x48FECC: mov     esi, edi
0x48FECE: mov     [esp+58h+arg_C], ebx
0x48FED2: call    BSSimpleList_Remove
0x48FED7: mov     edx, [esp+54h+arg_0]
0x48FEDB: push    4
0x48FEDD: push    esi
0x48FEDE: push    edx
0x48FEDF: xor     edi, edi
0x48FEE1: call    Script_AddEventToExtraScript
0x48FEE6: add     esp, 0Ch
0x48FEE9: cmp     [esi+4], edi
0x48FEEC: jnz     loc_490052
0x48FEF2: mov     eax, [esi]
0x48FEF4: mov     edx, [eax]
0x48FEF6: push    1
0x48FEF8: mov     ecx, esi
0x48FEFA: call    edx
0x48FEFC: xor     esi, esi
0x48FEFE: jmp     loc_4900BE
0x48FF03: mov     ecx, edi
0x48FF05: call    sub_41E850
0x48FF0A: mov     ecx, edi
0x48FF0C: mov     [esp+54h+var_1C], eax
0x48FF10: call    sub_41E850
0x48FF15: test    eax, eax
0x48FF17: jz      short loc_48FF95
0x48FF19: mov     ecx, edi
0x48FF1B: call    ExtraDataList_GetExtraScript
0x48FF20: test    eax, eax
0x48FF22: jz      short loc_48FF95
0x48FF24: mov     eax, [esp+54h+var_34]
0x48FF28: mov     ecx, [eax]
0x48FF2A: push    edi
0x48FF2B: mov     esi, edi
0x48FF2D: call    BSSimpleList_Remove
0x48FF32: push    14h; Size
0x48FF34: call    FormHeapAlloc
0x48FF39: add     esp, 4
0x48FF3C: mov     [esp+54h+arg_C], eax
0x48FF40: xor     ebp, ebp
0x48FF42: cmp     eax, ebp
0x48FF44: mov     [esp+54h+var_4], ebp
0x48FF48: jz      short loc_48FF53
0x48FF4A: mov     ecx, eax
0x48FF4C: call    ExtraDataList_constr
0x48FF51: mov     ebp, eax
0x48FF53: mov     ecx, edi
0x48FF55: mov     [esp+54h+var_4], 0FFFFFFFFh
0x48FF5D: call    sub_41E850
0x48FF62: mov     ecx, [eax+0Ch]
0x48FF65: push    ecx
0x48FF66: mov     ecx, ebp
0x48FF68: call    ExtraDataList_AddExtraLeveledItem
0x48FF6D: push    ebp
0x48FF6E: mov     ebp, [esp+58h+var_34]
0x48FF72: mov     ecx, [ebp+0]
0x48FF75: call    BSSimpleList_PushFront
0x48FF7A: mov     ecx, edi
0x48FF7C: call    sub_424790
0x48FF81: mov     ecx, edi
0x48FF83: call    ExtraDataList_GetExtraCount
0x48FF88: movsx   edx, ax
0x48FF8B: neg     edx
0x48FF8D: mov     [ebp+4], edx
0x48FF90: jmp     loc_490038
0x48FF95: mov     ecx, edi
0x48FF97: call    sub_41DEF0
0x48FF9C: test    al, al
0x48FF9E: mov     eax, [esp+54h+var_34]
0x48FFA2: mov     ecx, edi
0x48FFA4: jz      short loc_48FFB1
0x48FFA6: cmp     ebx, ebp
0x48FFA8: jnz     short loc_48FFB1
0x48FFAA: sub     [eax+4], ebp
0x48FFAD: neg     ebp
0x48FFAF: jmp     short loc_48FFB6
0x48FFB1: sub     [eax+4], ebx
0x48FFB4: sub     ebp, ebx
0x48FFB6: push    ebp
0x48FFB7: call    ExtraDataList_SetExtraCount
0x48FFBC: push    14h; Size
0x48FFBE: call    FormHeapAlloc
0x48FFC3: add     esp, 4
0x48FFC6: mov     [esp+54h+arg_C], eax
0x48FFCA: test    eax, eax
0x48FFCC: mov     [esp+54h+var_4], 1
0x48FFD4: jz      short loc_48FFE1
0x48FFD6: mov     ecx, eax
0x48FFD8: call    ExtraDataList_constr
0x48FFDD: mov     esi, eax
0x48FFDF: jmp     short loc_48FFE3
0x48FFE1: xor     esi, esi
0x48FFE3: push    0
0x48FFE5: push    edi
0x48FFE6: mov     ecx, esi
0x48FFE8: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x48FFF0: call    ExtraDataList_CopyListForReference
0x48FFF5: mov     ecx, esi
0x48FFF7: call    sub_424790
0x48FFFC: push    ebx
0x48FFFD: mov     ecx, esi
0x48FFFF: call    ExtraDataList_SetExtraCount
0x490004: mov     ecx, esi
0x490006: call    BaseExtraList_Count
0x49000B: cmp     eax, 1
0x49000E: jnz     short loc_49001D
0x490010: mov     ecx, esi
0x490012: call    ExtraDataList_GetExtraCount
0x490017: cmp     ax, 1
0x49001B: jg      short loc_490028
0x49001D: mov     ecx, esi
0x49001F: call    BaseExtraList_Count
0x490024: test    eax, eax
0x490026: jnz     short loc_490038
0x490028: test    esi, esi
0x49002A: jz      short loc_490036
0x49002C: mov     eax, [esi]
0x49002E: mov     edx, [eax]
0x490030: push    1
0x490032: mov     ecx, esi
0x490034: call    edx
0x490036: xor     esi, esi
0x490038: mov     eax, [esp+54h+arg_0]
0x49003C: push    4
0x49003E: push    esi
0x49003F: push    eax
0x490040: call    Script_AddEventToExtraScript
0x490045: add     esp, 0Ch
0x490048: mov     ebp, ebx
0x49004A: mov     [esp+54h+arg_C], 0
0x490052: test    esi, esi
0x490054: jz      short loc_4900BE
0x490056: mov     ecx, esi
0x490058: call    BaseExtraList_Count
0x49005D: test    eax, eax
0x49005F: jz      short loc_4900BE
0x490061: mov     ebx, [esp+54h+var_3C]
0x490065: cmp     dword ptr [ebx], 0
0x490068: jnz     short loc_49008B
0x49006A: push    8; Size
0x49006C: call    FormHeapAlloc
0x490071: add     esp, 4
0x490074: test    eax, eax
0x490076: jz      short loc_490087
0x490078: mov     dword ptr [eax], 0
0x49007E: mov     dword ptr [eax+4], 0
0x490085: jmp     short loc_490089
0x490087: xor     eax, eax
0x490089: mov     [ebx], eax
0x49008B: mov     ecx, [esp+54h+var_3C]
0x49008F: mov     ebx, [ecx]
0x490091: cmp     dword ptr [ebx], 0
0x490094: jz      short loc_4900BC
0x490096: push    8; Size
0x490098: call    FormHeapAlloc
0x49009D: add     esp, 4
0x4900A0: test    eax, eax
0x4900A2: jz      short loc_4900B1
0x4900A4: mov     edx, [ebx]
0x4900A6: mov     [eax], edx
0x4900A8: mov     dword ptr [eax+4], 0
0x4900AF: jmp     short loc_4900B3
0x4900B1: xor     eax, eax
0x4900B3: mov     ecx, [ebx+4]
0x4900B6: mov     [eax+4], ecx
0x4900B9: mov     [ebx+4], eax
0x4900BC: mov     [ebx], esi
0x4900BE: cmp     byte ptr [esp+54h+arg_14], 0
0x4900C3: jz      loc_49041A
0x4900C9: test    esi, esi
0x4900CB: jz      loc_490293
0x4900D1: mov     ecx, esi
0x4900D3: call    ExtraDataList_GetReferencePointer
0x4900D8: test    eax, eax
0x4900DA: jz      loc_490293
0x4900E0: mov     ecx, esi
0x4900E2: call    ExtraDataList_GetReferencePointer
0x4900E7: test    eax, eax
0x4900E9: mov     [esp+54h+var_38], eax
0x4900ED: jz      loc_490650
0x4900F3: mov     ebx, eax
0x4900F5: mov     edx, [ebx]
0x4900F7: mov     eax, [edx+8Ch]
0x4900FD: push    0
0x4900FF: mov     ecx, ebx
0x490101: call    eax
0x490103: mov     ecx, esi
0x490105: call    sub_4246B0
0x49010A: test    edi, edi
0x49010C: mov     byte ptr [esp+54h+var_14], 1
0x490111: jz      short loc_490118
0x490113: mov     byte ptr [esp+54h+var_14], 0
0x490118: mov     ecx, esi
0x49011A: call    ExtraDataList_Scale
0x49011F: push    ecx
0x490120: mov     ecx, ebx
0x490122: fstp    [esp+58h+duration]; float
0x490125: call    sub_4DB520
0x49012A: mov     ecx, [esp+54h+var_14]
0x49012E: push    ecx
0x49012F: lea     edi, [ebx+44h]
0x490132: push    esi
0x490133: mov     ecx, edi
0x490135: call    ExtraDataList_CopyListForReference
0x49013A: mov     ecx, edi
0x49013C: call    sub_41F690
0x490141: mov     ecx, edi
0x490143: call    sub_4246B0
0x490148: mov     ecx, edi
0x49014A: call    sub_41F7F0
0x49014F: test    eax, eax
0x490151: jnz     short loc_490166
0x490153: push    ebx
0x490154: mov     ecx, edi
0x490156: call    sub_423D30
0x49015B: mov     edx, [ebx]
0x49015D: mov     eax, [edx+40h]
0x490160: push    20h ; ' '
0x490162: mov     ecx, ebx
0x490164: call    eax
0x490166: mov     ecx, [esp+54h+arg_20]
0x49016A: mov     edx, [esp+54h+arg_1C]
0x49016E: mov     eax, [esp+54h+var_34]
0x490172: push    ecx
0x490173: mov     ecx, [eax+8]
0x490176: push    edx
0x490177: push    ebx
0x490178: push    ebp
0x490179: mov     ebp, [esp+64h+arg_0]
0x49017D: push    ecx
0x49017E: mov     ecx, [esp+68h+var_30]
0x490182: push    ebp
0x490183: call    sub_48B080
0x490188: mov     edi, [esp+54h+var_3C]
0x49018C: test    edi, edi
0x49018E: jz      short loc_4901B2
0x490190: mov     ecx, [edi]
0x490192: test    ecx, ecx
0x490194: jz      short loc_49019B
0x490196: call    BSSimpleList_Clear
0x49019B: mov     eax, [edi]
0x49019D: push    eax
0x49019E: call    FormHeapFree
0x4901A3: push    edi
0x4901A4: mov     dword ptr [edi], 0
0x4901AA: call    FormHeapFree
0x4901AF: add     esp, 8
0x4901B2: mov     edx, [esi]
0x4901B4: mov     eax, [edx]
0x4901B6: push    1
0x4901B8: mov     ecx, esi
0x4901BA: mov     [esp+58h+var_3C], 0
0x4901C2: call    eax
0x4901C4: mov     ecx, ebp; this
0x4901C6: call    TESObjectREFR_GetParentCell
0x4901CB: mov     ecx, ebx
0x4901CD: mov     esi, eax
0x4901CF: call    sub_4D72B0
0x4901D4: test    eax, eax
0x4901D6: jnz     short loc_4901F7
0x4901D8: test    esi, esi
0x4901DA: jz      short loc_4901F7
0x4901DC: mov     ecx, esi
0x4901DE: call    TESObjectCELL_GetOwner
0x4901E3: test    eax, eax
0x4901E5: jz      short loc_4901F7
0x4901E7: push    ebp
0x4901E8: mov     ecx, esi
0x4901EA: call    sub_4CAAC0
0x4901EF: test    al, al
0x4901F1: jz      loc_490279
0x4901F7: mov     edx, [ebp+0]
0x4901FA: mov     eax, [edx+170h]
0x490200: mov     ecx, ebp
0x490202: call    eax
0x490204: cmp     byte ptr [eax+4], 23h ; '#'
0x490208: jnz     loc_490650
0x49020E: mov     ecx, ebp
0x490210: mov     edx, [ecx]
0x490212: mov     eax, [edx+170h]
0x490218: call    eax
0x49021A: mov     ecx, eax
0x49021C: call    TESActorBase_IsFemale
0x490221: cmp     eax, 1
0x490224: jnz     loc_490650
0x49022A: mov     ecx, [esp+54h+var_38]
0x49022E: mov     edx, [ecx]
0x490230: mov     eax, [edx+170h]
0x490236: push    0; int
0x490238: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x49023D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x490242: push    0; int
0x490244: call    eax
0x490246: push    eax; void *
0x490247: call    OblivionDynamicCast
0x49024C: mov     esi, eax
0x49024E: add     esp, 14h
0x490251: test    esi, esi
0x490253: jz      loc_490650
0x490259: push    1
0x49025B: mov     ecx, esi
0x49025D: call    TESBipedModelForm_GetWorldModel
0x490262: push    0
0x490264: mov     ecx, esi
0x490266: mov     edi, eax
0x490268: call    TESBipedModelForm_GetWorldModel
0x49026D: cmp     edi, eax
0x49026F: jz      loc_490650
0x490275: mov     ebx, [esp+54h+var_38]
0x490279: mov     edx, [ebp+0]
0x49027C: mov     eax, [edx+170h]
0x490282: mov     ecx, ebp
0x490284: call    eax
0x490286: push    eax
0x490287: mov     ecx, ebx
0x490289: call    sub_4DB890
0x49028E: jmp     loc_490650
0x490293: mov     ecx, [esp+54h+arg_20]
0x490297: mov     edx, [esp+54h+arg_1C]
0x49029B: mov     eax, [esp+54h+var_34]
0x49029F: push    ecx
0x4902A0: mov     ecx, [eax+8]
0x4902A3: push    edx
0x4902A4: push    0
0x4902A6: push    ebp
0x4902A7: mov     ebp, [esp+64h+arg_0]
0x4902AB: push    ecx
0x4902AC: mov     ecx, [esp+68h+var_30]
0x4902B0: push    ebp
0x4902B1: call    sub_48B080
0x4902B6: mov     edi, eax
0x4902B8: mov     edx, [edi]
0x4902BA: mov     eax, [edx+40h]
0x4902BD: push    20h ; ' '
0x4902BF: mov     ecx, edi
0x4902C1: mov     [esp+58h+var_38], edi
0x4902C5: call    eax
0x4902C7: test    esi, esi
0x4902C9: jz      short loc_4902FC
0x4902CB: mov     ecx, esi
0x4902CD: call    BaseExtraList_Count
0x4902D2: test    eax, eax
0x4902D4: jz      short loc_4902FC
0x4902D6: mov     ecx, esi
0x4902D8: call    ExtraDataList_Scale
0x4902DD: push    ecx
0x4902DE: mov     ecx, edi
0x4902E0: fstp    [esp+58h+duration]; float
0x4902E3: call    sub_4DB520
0x4902E8: push    1
0x4902EA: lea     ebx, [edi+44h]
0x4902ED: push    esi
0x4902EE: mov     ecx, ebx
0x4902F0: call    ExtraDataList_CopyListForReference
0x4902F5: mov     ecx, ebx
0x4902F7: call    sub_41F690
0x4902FC: mov     ecx, ebp; this
0x4902FE: mov     [esp+54h+var_3D], 0
0x490303: call    TESObjectREFR_GetParentCell
0x490308: mov     ecx, edi
0x49030A: mov     ebx, eax
0x49030C: call    sub_4D72B0
0x490311: test    eax, eax
0x490313: jnz     short loc_490332
0x490315: test    ebx, ebx
0x490317: jz      short loc_490332
0x490319: mov     ecx, ebx
0x49031B: call    TESObjectCELL_GetOwner
0x490320: test    eax, eax
0x490322: jz      short loc_490332
0x490324: push    ebp
0x490325: mov     ecx, ebx
0x490327: call    sub_4CAAC0
0x49032C: test    al, al
0x49032E: mov     bl, 1
0x490330: jz      short loc_490336
0x490332: mov     bl, [esp+54h+var_3D]
0x490336: mov     ecx, edi; this
0x490338: call    TESObjectREFR_GetOwner
0x49033D: test    eax, eax
0x49033F: jnz     short loc_4903B8
0x490341: test    bl, bl
0x490343: jnz     short loc_4903BC
0x490345: mov     edx, [ebp+0]
0x490348: mov     eax, [edx+170h]
0x49034E: mov     ecx, ebp
0x490350: call    eax
0x490352: cmp     byte ptr [eax+4], 23h ; '#'
0x490356: jnz     short loc_4903D1
0x490358: mov     edx, [ebp+0]
0x49035B: mov     eax, [edx+170h]
0x490361: mov     ecx, ebp
0x490363: call    eax
0x490365: mov     ecx, eax
0x490367: call    TESActorBase_IsFemale
0x49036C: cmp     eax, 1
0x49036F: jnz     short loc_4903D1
0x490371: mov     edx, [edi]
0x490373: mov     eax, [edx+170h]
0x490379: push    0; int
0x49037B: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x490380: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x490385: push    0; int
0x490387: mov     ecx, edi
0x490389: call    eax
0x49038B: push    eax; void *
0x49038C: call    OblivionDynamicCast
0x490391: mov     ebx, eax
0x490393: add     esp, 14h
0x490396: test    ebx, ebx
0x490398: jz      short loc_4903D1
0x49039A: push    1
0x49039C: mov     ecx, ebx
0x49039E: call    TESBipedModelForm_GetWorldModel
0x4903A3: push    0
0x4903A5: mov     ecx, ebx
0x4903A7: mov     [esp+58h+var_20], eax
0x4903AB: call    TESBipedModelForm_GetWorldModel
0x4903B0: mov     ecx, [esp+54h+var_20]
0x4903B4: cmp     ecx, eax
0x4903B6: jmp     short loc_4903BA
0x4903B8: test    bl, bl
0x4903BA: jz      short loc_4903D1
0x4903BC: mov     edx, [ebp+0]
0x4903BF: mov     eax, [edx+170h]
0x4903C5: mov     ecx, ebp
0x4903C7: call    eax
0x4903C9: push    eax
0x4903CA: mov     ecx, edi
0x4903CC: call    sub_4DB890
0x4903D1: mov     edi, [esp+54h+var_3C]
0x4903D5: test    edi, edi
0x4903D7: jz      short loc_4903FB
0x4903D9: mov     ecx, [edi]
0x4903DB: test    ecx, ecx
0x4903DD: jz      short loc_4903E4
0x4903DF: call    BSSimpleList_Clear
0x4903E4: mov     eax, [edi]
0x4903E6: push    eax
0x4903E7: call    FormHeapFree
0x4903EC: push    edi
0x4903ED: mov     dword ptr [edi], 0
0x4903F3: call    FormHeapFree
0x4903F8: add     esp, 8
0x4903FB: test    esi, esi
0x4903FD: mov     [esp+54h+var_3C], 0
0x490405: jz      loc_490650
0x49040B: mov     edx, [esi]
0x49040D: mov     eax, [edx]
0x49040F: push    1
0x490411: mov     ecx, esi
0x490413: call    eax
0x490415: jmp     loc_490650
0x49041A: cmp     [esp+54h+arg_18], 0
0x49041F: jz      loc_4905EF
0x490425: mov     ecx, [esp+54h+var_3C]
0x490429: mov     eax, [ecx]
0x49042B: xor     esi, esi
0x49042D: test    eax, eax
0x49042F: jz      loc_49050F
0x490435: mov     esi, eax
0x490437: mov     edi, [esi]
0x490439: test    edi, edi
0x49043B: jz      loc_4904DE
0x490441: mov     ecx, edi
0x490443: call    ExtraDataList_GetOwner
0x490448: test    eax, eax
0x49044A: jnz     short loc_4904BB
0x49044C: mov     ebx, [esp+54h+arg_0]
0x490450: mov     edx, [ebx]
0x490452: mov     eax, [edx+190h]
0x490458: mov     ecx, ebx
0x49045A: call    eax
0x49045C: test    al, al
0x49045E: mov     ecx, ebx; this
0x490460: jz      short loc_49046E
0x490462: mov     edx, [ebx]
0x490464: mov     eax, [edx+170h]
0x49046A: call    eax
0x49046C: jmp     short loc_490473
0x49046E: call    TESObjectREFR_GetOwner
0x490473: cmp     byte ptr [esp+54h+arg_8], 0
0x490478: mov     [esp+54h+var_20], eax
0x49047C: jz      short loc_4904BB
0x49047E: mov     ecx, [esp+54h+var_3C]
0x490482: mov     eax, [ecx+8]
0x490485: push    eax
0x490486: call    sub_469980
0x49048B: add     esp, 4
0x49048E: test    al, al
0x490490: jnz     short loc_4904BB
0x490492: mov     edx, [esp+54h+var_20]
0x490496: push    edx
0x490497: mov     ecx, ebx
0x490499: call    sub_4DE880
0x49049E: test    al, al
0x4904A0: jnz     short loc_4904BB
0x4904A2: mov     eax, [esp+54h+var_3C]
0x4904A6: mov     eax, [eax+8]
0x4904A9: cmp     byte ptr [eax+4], 22h ; '"'
0x4904AD: jz      short loc_4904BB
0x4904AF: mov     ecx, [esp+54h+var_20]
0x4904B3: push    ecx
0x4904B4: mov     ecx, edi
0x4904B6: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4904BB: mov     edx, [esp+54h+var_3C]
0x4904BF: mov     eax, [edx+8]
0x4904C2: mov     ecx, [esp+54h+arg_18]
0x4904C6: mov     edx, [ecx]
0x4904C8: push    ebp
0x4904C9: push    edi
0x4904CA: push    eax
0x4904CB: mov     eax, [edx+114h]
0x4904D1: call    eax
0x4904D3: mov     esi, [esi+4]
0x4904D6: test    esi, esi
0x4904D8: jnz     loc_490437
0x4904DE: mov     ecx, [esp+54h+var_3C]
0x4904E2: mov     ecx, [ecx]
0x4904E4: test    ecx, ecx
0x4904E6: jz      short loc_4904ED
0x4904E8: call    BSSimpleList_Clear
0x4904ED: mov     esi, [esp+54h+var_3C]
0x4904F1: mov     eax, [esi]
0x4904F3: push    eax
0x4904F4: call    FormHeapFree
0x4904F9: push    esi
0x4904FA: mov     dword ptr [esi], 0
0x490500: call    FormHeapFree
0x490505: mov     [esp+5Ch+var_40], 0
0x49050A: jmp     loc_490645
0x49050F: mov     ebx, [esp+54h+arg_0]
0x490513: mov     edx, [ebx]
0x490515: mov     eax, [edx+190h]
0x49051B: mov     ecx, ebx
0x49051D: call    eax
0x49051F: test    al, al
0x490521: mov     ecx, ebx; this
0x490523: jz      short loc_490531
0x490525: mov     edx, [ebx]
0x490527: mov     eax, [edx+170h]
0x49052D: call    eax
0x49052F: jmp     short loc_490536
0x490531: call    TESObjectREFR_GetOwner
0x490536: cmp     byte ptr [esp+54h+arg_8], 0
0x49053B: mov     edi, [esp+54h+var_3C]
0x49053F: mov     [esp+54h+var_20], eax
0x490543: jz      short loc_4905B5
0x490545: mov     eax, [edi+8]
0x490548: push    eax
0x490549: call    sub_469980
0x49054E: add     esp, 4
0x490551: test    al, al
0x490553: jnz     short loc_4905B5
0x490555: mov     ecx, [esp+54h+var_20]
0x490559: push    ecx
0x49055A: mov     ecx, ebx
0x49055C: call    sub_4DE880
0x490561: test    al, al
0x490563: jnz     short loc_4905B5
0x490565: mov     eax, [edi+8]
0x490568: cmp     byte ptr [eax+4], 22h ; '"'
0x49056C: jz      short loc_4905B5
0x49056E: push    14h; Size
0x490570: call    FormHeapAlloc
0x490575: add     esp, 4
0x490578: mov     [esp+54h+var_28], eax
0x49057C: test    eax, eax
0x49057E: mov     [esp+54h+var_4], 2
0x490586: jz      short loc_490593
0x490588: mov     ecx, eax
0x49058A: call    ExtraDataList_constr
0x49058F: mov     esi, eax
0x490591: jmp     short loc_490595
0x490593: xor     esi, esi
0x490595: mov     edx, [esp+54h+var_20]
0x490599: push    edx
0x49059A: mov     ecx, esi
0x49059C: mov     [esp+58h+var_4], 0FFFFFFFFh
0x4905A4: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4905A9: mov     eax, [esp+54h+arg_C]
0x4905AD: push    eax
0x4905AE: mov     ecx, esi
0x4905B0: call    ExtraDataList_SetExtraCount
0x4905B5: mov     eax, [edi+8]
0x4905B8: mov     ecx, [esp+54h+arg_18]
0x4905BC: mov     edx, [ecx]
0x4905BE: push    ebp
0x4905BF: push    esi
0x4905C0: push    eax
0x4905C1: mov     eax, [edx+114h]
0x4905C7: call    eax
0x4905C9: mov     ecx, [edi]
0x4905CB: test    ecx, ecx
0x4905CD: jz      short loc_4905D4
0x4905CF: call    BSSimpleList_Clear
0x4905D4: mov     eax, [edi]
0x4905D6: push    eax
0x4905D7: call    FormHeapFree
0x4905DC: push    edi
0x4905DD: mov     dword ptr [edi], 0
0x4905E3: call    FormHeapFree
0x4905E8: mov     [esp+5Ch+var_40], 0
0x4905ED: jmp     short loc_490645
0x4905EF: push    3F0h
0x4905F4: call    Menu_GetOpenMenuTile
0x4905F9: add     esp, 4
0x4905FC: test    eax, eax
0x4905FE: jz      short loc_490611
0x490600: mov     ecx, eax
0x490602: call    Tile_GetParentMenu
0x490607: test    eax, eax
0x490609: jz      short loc_490611
0x49060B: cmp     byte ptr [eax+61h], 0
0x49060F: jnz     short loc_49061E
0x490611: mov     esi, [esp+54h+var_3C]
0x490615: mov     ecx, esi
0x490617: call    ContainerEntryExtraData_ClearDataTable
0x49061C: jmp     short loc_490622
0x49061E: mov     esi, [esp+54h+var_3C]
0x490622: test    esi, esi
0x490624: jz      short loc_490648
0x490626: mov     ecx, [esi]
0x490628: test    ecx, ecx
0x49062A: jz      short loc_490631
0x49062C: call    BSSimpleList_Clear
0x490631: mov     eax, [esi]
0x490633: push    eax
0x490634: call    FormHeapFree
0x490639: push    esi
0x49063A: mov     dword ptr [esi], 0
0x490640: call    FormHeapFree
0x490645: add     esp, 8
0x490648: mov     [esp+54h+var_3C], 0
0x490650: mov     eax, [esp+54h+arg_C]
0x490654: test    eax, eax
0x490656: jle     short loc_490666
0x490658: cmp     byte ptr [esp+54h+arg_28], 0
0x490660: jnz     loc_4911F6
0x490666: cmp     eax, 1
0x490669: jl      short loc_49068A
0x49066B: mov     eax, [esp+54h+var_38]
0x49066F: test    eax, eax
0x490671: jnz     loc_49166C
0x490677: cmp     [esp+54h+var_24], eax
0x49067B: jnz     loc_48FE34
0x490681: mov     [esp+54h+arg_10], eax
0x490685: jmp     loc_490A33
0x49068A: cmp     [esp+54h+var_24], 0
0x49068F: jnz     loc_48FE34
0x490695: jmp     loc_490A33
0x49069A: test    ebp, ebp
0x49069C: mov     esi, [edi+4]
0x49069F: jge     short loc_4906A5
0x4906A1: sub     esi, ebp
0x4906A3: jmp     short loc_4906A7
0x4906A5: add     esi, ebp
0x4906A7: test    esi, esi
0x4906A9: jge     short loc_4906B3
0x4906AB: test    ebp, ebp
0x4906AD: jge     loc_491668
0x4906B3: cmp     dword ptr [edi], 0
0x4906B6: jz      short loc_4906C5
0x4906B8: mov     ecx, edi
0x4906BA: call    sub_484620
0x4906BF: test    eax, eax
0x4906C1: jle     short loc_4906C5
0x4906C3: sub     esi, eax
0x4906C5: xor     edx, edx
0x4906C7: cmp     esi, edx
0x4906C9: jge     short loc_4906CD
0x4906CB: xor     esi, esi
0x4906CD: cmp     esi, edx
0x4906CF: mov     [esp+54h+var_28], edx
0x4906D3: jle     loc_49093E
0x4906D9: mov     eax, [esp+54h+arg_C]
0x4906DD: cmp     esi, eax
0x4906DF: jl      short loc_4906F2
0x4906E1: cmp     [esp+54h+var_18], edx
0x4906E5: jnz     short loc_4906EA
0x4906E7: sub     [edi+4], eax
0x4906EA: mov     esi, eax
0x4906EC: mov     [esp+54h+arg_C], edx
0x4906F0: jmp     short loc_49071D
0x4906F2: mov     ecx, [esp+54h+var_30]
0x4906F6: mov     ecx, [ecx+4]; this
0x4906F9: cmp     ecx, edx
0x4906FB: jz      short loc_490704
0x4906FD: call    TESObjectREFR_GetContainer
0x490702: jmp     short loc_490706
0x490704: xor     eax, eax
0x490706: mov     edx, [esp+54h+arg_4]
0x49070A: push    edx
0x49070B: mov     ecx, eax
0x49070D: call    TESContainer_GetFormCount
0x490712: test    eax, eax
0x490714: jle     short loc_490719
0x490716: sub     [edi+4], esi
0x490719: sub     [esp+54h+arg_C], esi
0x49071D: mov     eax, [edi+4]
0x490720: add     eax, ebp
0x490722: jns     short loc_490736
0x490724: test    ebp, ebp
0x490726: jz      short loc_49072F
0x490728: neg     ebp
0x49072A: mov     [edi+4], ebp
0x49072D: jmp     short loc_490736
0x49072F: mov     dword ptr [edi+4], 0
0x490736: cmp     byte ptr [esp+54h+arg_14], 0
0x49073B: jz      loc_49084A
0x490741: mov     ecx, [esp+54h+arg_20]
0x490745: mov     edx, [esp+54h+arg_1C]
0x490749: mov     eax, [esp+54h+arg_4]
0x49074D: mov     ebp, [esp+54h+arg_0]
0x490751: push    ecx
0x490752: mov     ecx, [esp+58h+var_30]
0x490756: push    edx
0x490757: push    0
0x490759: push    esi
0x49075A: push    eax
0x49075B: push    ebp
0x49075C: call    sub_48B080
0x490761: mov     edi, eax
0x490763: mov     ecx, ebp; this
0x490765: mov     [esp+54h+var_38], edi
0x490769: call    TESObjectREFR_GetParentCell
0x49076E: mov     ecx, edi
0x490770: mov     esi, eax
0x490772: call    sub_4D72B0
0x490777: test    eax, eax
0x490779: jnz     short loc_490796
0x49077B: test    esi, esi
0x49077D: jz      short loc_490796
0x49077F: mov     ecx, esi
0x490781: call    TESObjectCELL_GetOwner
0x490786: test    eax, eax
0x490788: jz      short loc_490796
0x49078A: push    ebp
0x49078B: mov     ecx, esi
0x49078D: call    sub_4CAAC0
0x490792: test    al, al
0x490794: jz      short loc_490809
0x490796: mov     edx, [ebp+0]
0x490799: mov     eax, [edx+170h]
0x49079F: mov     ecx, ebp
0x4907A1: call    eax
0x4907A3: cmp     byte ptr [eax+4], 23h ; '#'
0x4907A7: jnz     short loc_49081E
0x4907A9: mov     edx, [ebp+0]
0x4907AC: mov     eax, [edx+170h]
0x4907B2: mov     ecx, ebp
0x4907B4: call    eax
0x4907B6: mov     ecx, eax
0x4907B8: call    TESActorBase_IsFemale
0x4907BD: cmp     eax, 1
0x4907C0: jnz     short loc_49081E
0x4907C2: mov     edx, [edi]
0x4907C4: mov     eax, [edx+170h]
0x4907CA: push    0; int
0x4907CC: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4907D1: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4907D6: push    0; int
0x4907D8: mov     ecx, edi
0x4907DA: call    eax
0x4907DC: push    eax; void *
0x4907DD: call    OblivionDynamicCast
0x4907E2: mov     esi, eax
0x4907E4: add     esp, 14h
0x4907E7: test    esi, esi
0x4907E9: jz      short loc_49081E
0x4907EB: push    1
0x4907ED: mov     ecx, esi
0x4907EF: call    TESBipedModelForm_GetWorldModel
0x4907F4: push    0
0x4907F6: mov     ecx, esi
0x4907F8: mov     [esp+58h+var_20], eax
0x4907FC: call    TESBipedModelForm_GetWorldModel
0x490801: mov     ecx, [esp+54h+var_20]
0x490805: cmp     ecx, eax
0x490807: jz      short loc_49081E
0x490809: mov     edx, [ebp+0]
0x49080C: mov     eax, [edx+170h]
0x490812: mov     ecx, ebp
0x490814: call    eax
0x490816: push    eax
0x490817: mov     ecx, edi
0x490819: call    sub_4DB890
0x49081E: mov     ecx, [ebx]
0x490820: test    ecx, ecx
0x490822: jz      short loc_490829
0x490824: call    BSSimpleList_Clear
0x490829: mov     eax, [ebx]
0x49082B: push    eax
0x49082C: call    FormHeapFree
0x490831: push    ebx
0x490832: mov     dword ptr [ebx], 0
0x490838: call    FormHeapFree
0x49083D: mov     [esp+5Ch+var_28], 0
0x490845: jmp     loc_490933
0x49084A: cmp     [esp+54h+arg_18], 0
0x49084F: jz      loc_490914
0x490855: mov     ebp, [esp+54h+arg_0]
0x490859: mov     edx, [ebp+0]
0x49085C: mov     eax, [edx+190h]
0x490862: mov     ecx, ebp
0x490864: call    eax
0x490866: test    al, al
0x490868: mov     ecx, ebp; this
0x49086A: jz      short loc_490879
0x49086C: mov     edx, [ebp+0]
0x49086F: mov     eax, [edx+170h]
0x490875: call    eax
0x490877: jmp     short loc_49087E
0x490879: call    TESObjectREFR_GetOwner
0x49087E: cmp     byte ptr [esp+54h+arg_8], 0
0x490883: mov     edi, eax
0x490885: jz      short loc_4908FB
0x490887: mov     ecx, [esp+54h+arg_4]
0x49088B: push    ecx
0x49088C: call    sub_469980
0x490891: add     esp, 4
0x490894: test    al, al
0x490896: jnz     short loc_4908FB
0x490898: push    edi
0x490899: mov     ecx, ebp
0x49089B: call    sub_4DE880
0x4908A0: test    al, al
0x4908A2: jnz     short loc_4908FB
0x4908A4: mov     edx, [esp+54h+arg_4]
0x4908A8: cmp     byte ptr [edx+4], 22h ; '"'
0x4908AC: jz      short loc_4908FB
0x4908AE: mov     ebp, [esp+54h+arg_10]
0x4908B2: test    ebp, ebp
0x4908B4: jnz     short loc_4908E9
0x4908B6: push    14h; Size
0x4908B8: call    FormHeapAlloc
0x4908BD: add     esp, 4
0x4908C0: mov     [esp+54h+arg_10], eax
0x4908C4: test    eax, eax
0x4908C6: mov     [esp+54h+var_4], 3
0x4908CE: jz      short loc_4908D9
0x4908D0: mov     ecx, eax
0x4908D2: call    ExtraDataList_constr
0x4908D7: jmp     short loc_4908DB
0x4908D9: xor     eax, eax
0x4908DB: mov     ebp, eax
0x4908DD: mov     [esp+54h+var_4], 0FFFFFFFFh
0x4908E5: mov     [esp+54h+arg_10], ebp
0x4908E9: push    edi
0x4908EA: mov     ecx, ebp
0x4908EC: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4908F1: push    esi
0x4908F2: mov     ecx, ebp
0x4908F4: call    ExtraDataList_SetExtraCount
0x4908F9: jmp     short loc_4908FF
0x4908FB: mov     ebp, [esp+54h+arg_10]
0x4908FF: mov     ecx, [esp+54h+arg_18]
0x490903: mov     eax, [ecx]
0x490905: mov     edx, [esp+54h+arg_4]
0x490909: mov     eax, [eax+114h]
0x49090F: push    esi
0x490910: push    ebp
0x490911: push    edx
0x490912: call    eax
0x490914: mov     ecx, [ebx]
0x490916: test    ecx, ecx
0x490918: jz      short loc_49091F
0x49091A: call    BSSimpleList_Clear
0x49091F: mov     eax, [ebx]
0x490921: push    eax
0x490922: call    FormHeapFree
0x490927: push    ebx
0x490928: mov     dword ptr [ebx], 0
0x49092E: call    FormHeapFree
0x490933: add     esp, 8
0x490936: mov     [esp+54h+var_3C], 0
0x49093E: cmp     [esp+54h+arg_C], 0
0x490943: jle     loc_490A33
0x490949: mov     ecx, [esp+54h+var_34]
0x49094D: mov     eax, [ecx]
0x49094F: test    eax, eax
0x490951: jz      loc_490A33
0x490957: cmp     dword ptr [eax+4], 0
0x49095B: jnz     short loc_490966
0x49095D: cmp     dword ptr [eax], 0
0x490960: jz      loc_490A33
0x490966: mov     [esp+54h+var_24], eax
0x49096A: mov     edx, [esp+54h+var_24]
0x49096E: mov     eax, [edx]
0x490970: test    eax, eax
0x490972: jz      loc_490A33
0x490978: cmp     [esp+54h+arg_C], 0
0x49097D: jle     loc_490A33
0x490983: mov     esi, [esp+54h+var_3C]
0x490987: xor     edi, edi
0x490989: cmp     esi, edi
0x49098B: mov     ebx, eax
0x49098D: mov     [esp+54h+var_20], ebx
0x490991: jz      short loc_4909B1
0x490993: mov     ecx, [esi]
0x490995: cmp     ecx, edi
0x490997: jz      short loc_49099E
0x490999: call    BSSimpleList_Clear
0x49099E: mov     eax, [esi]
0x4909A0: push    eax
0x4909A1: call    FormHeapFree
0x4909A6: push    esi
0x4909A7: mov     [esi], edi
0x4909A9: call    FormHeapFree
0x4909AE: add     esp, 8
0x4909B1: push    0Ch; Size
0x4909B3: call    FormHeapAlloc
0x4909B8: add     esp, 4
0x4909BB: cmp     eax, edi
0x4909BD: jz      short loc_4909CB
0x4909BF: mov     [eax+8], edi
0x4909C2: mov     [eax], edi
0x4909C4: mov     [eax+4], edi
0x4909C7: mov     esi, eax
0x4909C9: jmp     short loc_4909CD
0x4909CB: xor     esi, esi
0x4909CD: mov     ebp, [esp+54h+var_34]
0x4909D1: mov     eax, [ebp+8]
0x4909D4: mov     ecx, ebx
0x4909D6: mov     [esi+8], eax
0x4909D9: call    ExtraDataList_GetExtraCount
0x4909DE: test    ax, ax
0x4909E1: jge     loc_490A69
0x4909E7: mov     eax, [esp+54h+var_24]
0x4909EB: mov     ecx, [eax+4]
0x4909EE: mov     [esp+54h+var_24], ecx
0x4909F2: mov     ecx, [esi]
0x4909F4: cmp     ecx, edi
0x4909F6: jz      short loc_4909FD
0x4909F8: call    BSSimpleList_Clear
0x4909FD: mov     eax, [esi]
0x4909FF: push    eax
0x490A00: call    FormHeapFree
0x490A05: push    esi
0x490A06: mov     [esi], edi
0x490A08: call    FormHeapFree
0x490A0D: mov     ecx, [esp+5Ch+var_28]
0x490A11: add     esp, 8
0x490A14: cmp     ecx, edi
0x490A16: mov     [esp+54h+var_3C], edi
0x490A1A: jz      short loc_490A24
0x490A1C: mov     eax, [ecx]
0x490A1E: mov     edx, [eax]
0x490A20: push    1
0x490A22: call    edx
0x490A24: mov     [esp+54h+var_28], edi
0x490A28: cmp     [esp+54h+var_24], 0
0x490A2D: jnz     loc_49096A
0x490A33: mov     eax, [esp+54h+var_30]
0x490A37: mov     eax, [eax]
0x490A39: test    eax, eax
0x490A3B: mov     dl, 1
0x490A3D: jz      loc_491011
0x490A43: mov     esi, [esp+54h+arg_4]
0x490A47: test    dl, dl
0x490A49: jz      loc_49106E
0x490A4F: mov     ecx, [eax]
0x490A51: test    ecx, ecx
0x490A53: jz      loc_491006
0x490A59: cmp     [ecx+8], esi
0x490A5C: jnz     loc_491006
0x490A62: xor     dl, dl
0x490A64: jmp     loc_491009
0x490A69: push    edi
0x490A6A: mov     ecx, ebx
0x490A6C: call    ExtraDataList_HasWorn
0x490A71: test    al, al
0x490A73: mov     ecx, ebx
0x490A75: jnz     loc_49122E
0x490A7B: call    ExtraDataList_GetExtraCount
0x490A80: movsx   edi, ax
0x490A83: cmp     edi, [esp+54h+arg_C]
0x490A87: jg      loc_490B1B
0x490A8D: mov     ecx, ebx
0x490A8F: call    sub_41E850
0x490A94: test    eax, eax
0x490A96: jnz     loc_490B1B
0x490A9C: sub     [ebp+4], edi
0x490A9F: mov     eax, [esi+4]
0x490AA2: sub     [esp+54h+arg_C], edi
0x490AA6: add     eax, edi
0x490AA8: mov     [esi+4], eax
0x490AAB: mov     ecx, [ebp+0]
0x490AAE: push    ebx
0x490AAF: mov     [esp+58h+var_28], ebx
0x490AB3: call    BSSimpleList_Remove
0x490AB8: cmp     dword ptr [ebx+4], 0
0x490ABC: mov     [esp+54h+var_20], 0
0x490AC4: jnz     short loc_490ADB
0x490AC6: mov     edx, [ebx]
0x490AC8: mov     eax, [edx]
0x490ACA: push    1
0x490ACC: mov     ecx, ebx
0x490ACE: call    eax
0x490AD0: xor     ebx, ebx
0x490AD2: mov     [esp+54h+var_28], ebx
0x490AD6: jmp     loc_490BC0
0x490ADB: cmp     dword ptr [esi], 0
0x490ADE: jnz     short loc_490B0E
0x490AE0: push    8; Size
0x490AE2: call    FormHeapAlloc
0x490AE7: add     esp, 4
0x490AEA: test    eax, eax
0x490AEC: jz      short loc_490B0A
0x490AEE: mov     dword ptr [eax], 0
0x490AF4: mov     dword ptr [eax+4], 0
0x490AFB: push    ebx
0x490AFC: mov     ecx, eax
0x490AFE: mov     [esi], eax
0x490B00: call    BSSimpleList_PushFront
0x490B05: jmp     loc_490BC0
0x490B0A: xor     eax, eax
0x490B0C: mov     [esi], eax
0x490B0E: mov     ecx, [esi]
0x490B10: push    ebx
0x490B11: call    BSSimpleList_PushFront
0x490B16: jmp     loc_490BC0
0x490B1B: mov     ecx, ebx
0x490B1D: call    sub_41E850
0x490B22: mov     [esp+54h+var_1C], eax
0x490B26: test    eax, eax
0x490B28: mov     eax, [esp+54h+arg_C]
0x490B2C: jz      short loc_490B3E
0x490B2E: cmp     eax, edi
0x490B30: jz      short loc_490B34
0x490B32: jle     short loc_490B3E
0x490B34: sub     [ebp+4], edi
0x490B37: mov     edx, edi
0x490B39: neg     edx
0x490B3B: push    edx
0x490B3C: jmp     short loc_490B46
0x490B3E: mov     ecx, edi
0x490B40: sub     ecx, eax
0x490B42: sub     [ebp+4], eax
0x490B45: push    ecx
0x490B46: mov     ecx, ebx
0x490B48: call    ExtraDataList_SetExtraCount
0x490B4D: push    14h; Size
0x490B4F: call    FormHeapAlloc
0x490B54: add     esp, 4
0x490B57: mov     [esp+54h+var_28], eax
0x490B5B: test    eax, eax
0x490B5D: mov     [esp+54h+var_4], 4
0x490B65: jz      short loc_490B72
0x490B67: mov     ecx, eax
0x490B69: call    ExtraDataList_constr
0x490B6E: mov     ebp, eax
0x490B70: jmp     short loc_490B74
0x490B72: xor     ebp, ebp
0x490B74: mov     edx, [esp+54h+var_20]
0x490B78: push    0
0x490B7A: mov     ebx, ebp
0x490B7C: push    edx
0x490B7D: mov     ecx, ebp
0x490B7F: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x490B87: mov     [esp+5Ch+var_28], ebx
0x490B8B: call    ExtraDataList_CopyListForReference
0x490B90: mov     ecx, ebp
0x490B92: call    sub_424790
0x490B97: cmp     edi, [esp+54h+arg_C]
0x490B9B: mov     ecx, ebp
0x490B9D: jge     short loc_490BA2
0x490B9F: push    edi
0x490BA0: jmp     short loc_490BA7
0x490BA2: mov     eax, [esp+54h+arg_C]
0x490BA6: push    eax
0x490BA7: call    ExtraDataList_SetExtraCount
0x490BAC: mov     eax, [esp+54h+arg_C]
0x490BB0: cmp     eax, edi
0x490BB2: jge     short loc_490BB6
0x490BB4: mov     edi, eax
0x490BB6: mov     ebp, [esp+54h+var_34]
0x490BBA: sub     eax, edi
0x490BBC: mov     [esp+54h+arg_C], eax
0x490BC0: cmp     byte ptr [esp+54h+arg_14], 0
0x490BC5: jz      loc_490EB4
0x490BCB: test    ebx, ebx
0x490BCD: jz      loc_490D97
0x490BD3: mov     ecx, ebx
0x490BD5: call    ExtraDataList_GetReferencePointer
0x490BDA: test    eax, eax
0x490BDC: jz      loc_490D97
0x490BE2: mov     ecx, ebx
0x490BE4: call    ExtraDataList_GetReferencePointer
0x490BE9: test    eax, eax
0x490BEB: mov     [esp+54h+var_38], eax
0x490BEF: jz      loc_490FB5
0x490BF5: mov     edx, [eax]
0x490BF7: mov     ecx, eax
0x490BF9: mov     eax, [edx+8Ch]
0x490BFF: push    0
0x490C01: call    eax
0x490C03: mov     ecx, ebx
0x490C05: call    sub_4246B0
0x490C0A: cmp     [esp+54h+var_20], 0
0x490C0F: mov     byte ptr [esp+54h+var_10], 1
0x490C14: jz      short loc_490C1B
0x490C16: mov     byte ptr [esp+54h+var_10], 0
0x490C1B: mov     ecx, ebx
0x490C1D: call    ExtraDataList_Scale
0x490C22: mov     ebp, [esp+54h+var_38]
0x490C26: push    ecx
0x490C27: mov     ecx, ebp
0x490C29: fstp    [esp+58h+duration]; float
0x490C2C: call    sub_4DB520
0x490C31: mov     ecx, [esp+54h+var_10]
0x490C35: push    ecx
0x490C36: add     ebp, 44h ; 'D'
0x490C39: push    ebx
0x490C3A: mov     ecx, ebp
0x490C3C: call    ExtraDataList_CopyListForReference
0x490C41: mov     ecx, ebp
0x490C43: call    sub_41F690
0x490C48: mov     ecx, ebp
0x490C4A: call    sub_4246B0
0x490C4F: mov     ecx, ebp
0x490C51: call    sub_41F7F0
0x490C56: test    eax, eax
0x490C58: jnz     short loc_490C73
0x490C5A: mov     edx, [esp+54h+var_38]
0x490C5E: push    edx
0x490C5F: mov     ecx, ebp
0x490C61: call    sub_423D30
0x490C66: mov     ecx, [esp+54h+var_38]
0x490C6A: mov     eax, [ecx]
0x490C6C: mov     edx, [eax+40h]
0x490C6F: push    20h ; ' '
0x490C71: call    edx
0x490C73: mov     eax, [esp+54h+arg_20]
0x490C77: mov     ecx, [esp+54h+arg_1C]
0x490C7B: mov     edx, [esp+54h+var_38]
0x490C7F: push    eax
0x490C80: mov     eax, [esp+58h+var_34]
0x490C84: push    ecx
0x490C85: mov     ecx, [eax+8]
0x490C88: push    edx
0x490C89: push    edi
0x490C8A: mov     edi, [esp+64h+arg_0]
0x490C8E: push    ecx
0x490C8F: mov     ecx, [esp+68h+var_30]
0x490C93: push    edi
0x490C94: call    sub_48B080
0x490C99: mov     ecx, [esi]
0x490C9B: test    ecx, ecx
0x490C9D: mov     ebp, eax
0x490C9F: mov     [esp+54h+var_38], ebp
0x490CA3: jz      short loc_490CAA
0x490CA5: call    BSSimpleList_Clear
0x490CAA: mov     eax, [esi]
0x490CAC: push    eax
0x490CAD: call    FormHeapFree
0x490CB2: push    esi
0x490CB3: mov     dword ptr [esi], 0
0x490CB9: call    FormHeapFree
0x490CBE: mov     edx, [ebx]
0x490CC0: mov     eax, [edx]
0x490CC2: add     esp, 8
0x490CC5: push    1
0x490CC7: mov     ecx, ebx
0x490CC9: call    eax
0x490CCB: mov     ecx, edi; this
0x490CCD: mov     [esp+54h+var_28], 0
0x490CD5: call    TESObjectREFR_GetParentCell
0x490CDA: mov     ecx, ebp
0x490CDC: mov     esi, eax
0x490CDE: call    sub_4D72B0
0x490CE3: test    eax, eax
0x490CE5: jnz     short loc_490D02
0x490CE7: test    esi, esi
0x490CE9: jz      short loc_490D02
0x490CEB: mov     ecx, esi
0x490CED: call    TESObjectCELL_GetOwner
0x490CF2: test    eax, eax
0x490CF4: jz      short loc_490D02
0x490CF6: push    edi
0x490CF7: mov     ecx, esi
0x490CF9: call    sub_4CAAC0
0x490CFE: test    al, al
0x490D00: jz      short loc_490D7E
0x490D02: mov     edx, [edi]
0x490D04: mov     eax, [edx+170h]
0x490D0A: mov     ecx, edi
0x490D0C: call    eax
0x490D0E: cmp     byte ptr [eax+4], 23h ; '#'
0x490D12: jnz     loc_490FD7
0x490D18: mov     edx, [edi]
0x490D1A: mov     eax, [edx+170h]
0x490D20: mov     ecx, edi
0x490D22: call    eax
0x490D24: mov     ecx, eax
0x490D26: call    TESActorBase_IsFemale
0x490D2B: cmp     eax, 1
0x490D2E: jnz     loc_490FD7
0x490D34: mov     edx, [ebp+0]
0x490D37: mov     eax, [edx+170h]
0x490D3D: push    0; int
0x490D3F: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x490D44: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x490D49: push    0; int
0x490D4B: mov     ecx, ebp
0x490D4D: call    eax
0x490D4F: push    eax; void *
0x490D50: call    OblivionDynamicCast
0x490D55: mov     esi, eax
0x490D57: add     esp, 14h
0x490D5A: test    esi, esi
0x490D5C: jz      loc_490FD7
0x490D62: push    1
0x490D64: mov     ecx, esi
0x490D66: call    TESBipedModelForm_GetWorldModel
0x490D6B: push    0
0x490D6D: mov     ecx, esi
0x490D6F: mov     ebx, eax
0x490D71: call    TESBipedModelForm_GetWorldModel
0x490D76: cmp     ebx, eax
0x490D78: jz      loc_490FD7
0x490D7E: mov     edx, [edi]
0x490D80: mov     eax, [edx+170h]
0x490D86: mov     ecx, edi
0x490D88: call    eax
0x490D8A: push    eax
0x490D8B: mov     ecx, ebp
0x490D8D: call    sub_4DB890
0x490D92: jmp     loc_490FD7
0x490D97: mov     ecx, [esp+54h+arg_20]
0x490D9B: mov     edx, [esp+54h+arg_1C]
0x490D9F: mov     eax, [ebp+8]
0x490DA2: mov     ebp, [esp+54h+arg_0]
0x490DA6: push    ecx
0x490DA7: mov     ecx, [esp+58h+var_30]
0x490DAB: push    edx
0x490DAC: push    0
0x490DAE: push    edi
0x490DAF: push    eax
0x490DB0: push    ebp
0x490DB1: call    sub_48B080
0x490DB6: mov     ecx, ebp; this
0x490DB8: mov     [esp+54h+var_38], eax
0x490DBC: call    TESObjectREFR_GetParentCell
0x490DC1: mov     ecx, [esp+54h+var_38]
0x490DC5: mov     edi, eax
0x490DC7: call    sub_4D72B0
0x490DCC: test    eax, eax
0x490DCE: jnz     short loc_490DEB
0x490DD0: test    edi, edi
0x490DD2: jz      short loc_490DEB
0x490DD4: mov     ecx, edi
0x490DD6: call    TESObjectCELL_GetOwner
0x490DDB: test    eax, eax
0x490DDD: jz      short loc_490DEB
0x490DDF: push    ebp
0x490DE0: mov     ecx, edi
0x490DE2: call    sub_4CAAC0
0x490DE7: test    al, al
0x490DE9: jz      short loc_490E60
0x490DEB: mov     edx, [ebp+0]
0x490DEE: mov     eax, [edx+170h]
0x490DF4: mov     ecx, ebp
0x490DF6: call    eax
0x490DF8: cmp     byte ptr [eax+4], 23h ; '#'
0x490DFC: jnz     short loc_490E77
0x490DFE: mov     edx, [ebp+0]
0x490E01: mov     eax, [edx+170h]
0x490E07: mov     ecx, ebp
0x490E09: call    eax
0x490E0B: mov     ecx, eax
0x490E0D: call    TESActorBase_IsFemale
0x490E12: cmp     eax, 1
0x490E15: jnz     short loc_490E77
0x490E17: mov     ecx, [esp+54h+var_38]
0x490E1B: mov     edx, [ecx]
0x490E1D: mov     eax, [edx+170h]
0x490E23: push    0; int
0x490E25: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x490E2A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x490E2F: push    0; int
0x490E31: call    eax
0x490E33: push    eax; void *
0x490E34: call    OblivionDynamicCast
0x490E39: mov     edi, eax
0x490E3B: add     esp, 14h
0x490E3E: test    edi, edi
0x490E40: jz      short loc_490E77
0x490E42: push    1
0x490E44: mov     ecx, edi
0x490E46: call    TESBipedModelForm_GetWorldModel
0x490E4B: push    0
0x490E4D: mov     ecx, edi
0x490E4F: mov     [esp+58h+var_28], eax
0x490E53: call    TESBipedModelForm_GetWorldModel
0x490E58: mov     ecx, [esp+54h+var_28]
0x490E5C: cmp     ecx, eax
0x490E5E: jz      short loc_490E77
0x490E60: mov     edx, [ebp+0]
0x490E63: mov     eax, [edx+170h]
0x490E69: mov     ecx, ebp
0x490E6B: call    eax
0x490E6D: mov     ecx, [esp+54h+var_38]
0x490E71: push    eax
0x490E72: call    sub_4DB890
0x490E77: mov     ecx, [esi]
0x490E79: test    ecx, ecx
0x490E7B: jz      short loc_490E82
0x490E7D: call    BSSimpleList_Clear
0x490E82: mov     eax, [esi]
0x490E84: push    eax
0x490E85: call    FormHeapFree
0x490E8A: push    esi
0x490E8B: mov     dword ptr [esi], 0
0x490E91: call    FormHeapFree
0x490E96: add     esp, 8
0x490E99: test    ebx, ebx
0x490E9B: jz      short loc_490EA7
0x490E9D: mov     edx, [ebx]
0x490E9F: mov     eax, [edx]
0x490EA1: push    1
0x490EA3: mov     ecx, ebx
0x490EA5: call    eax
0x490EA7: mov     [esp+54h+var_28], 0
0x490EAF: jmp     loc_490FD7
0x490EB4: cmp     [esp+54h+arg_18], 0
0x490EB9: jz      loc_490FA7
0x490EBF: mov     eax, [esi]
0x490EC1: test    eax, eax
0x490EC3: jz      short loc_490EC9
0x490EC5: mov     ebp, [eax]
0x490EC7: jmp     short loc_490F21
0x490EC9: push    14h; Size
0x490ECB: call    FormHeapAlloc
0x490ED0: add     esp, 4
0x490ED3: mov     [esp+54h+var_3C], eax
0x490ED7: test    eax, eax
0x490ED9: mov     [esp+54h+var_4], 5
0x490EE1: jz      short loc_490EEE
0x490EE3: mov     ecx, eax
0x490EE5: call    ExtraDataList_constr
0x490EEA: mov     ebp, eax
0x490EEC: jmp     short loc_490EF0
0x490EEE: xor     ebp, ebp
0x490EF0: push    8; Size
0x490EF2: mov     [esp+58h+var_4], 0FFFFFFFFh
0x490EFA: call    FormHeapAlloc
0x490EFF: add     esp, 4
0x490F02: test    eax, eax
0x490F04: jz      short loc_490F15
0x490F06: mov     dword ptr [eax], 0
0x490F0C: mov     dword ptr [eax+4], 0
0x490F13: jmp     short loc_490F17
0x490F15: xor     eax, eax
0x490F17: push    ebp
0x490F18: mov     ecx, eax
0x490F1A: mov     [esi], eax
0x490F1C: call    BSSimpleList_PushFront
0x490F21: mov     ecx, [esp+54h+arg_0]
0x490F25: mov     edx, [ecx]
0x490F27: mov     eax, [edx+190h]
0x490F2D: call    eax
0x490F2F: test    al, al
0x490F31: mov     ecx, [esp+54h+arg_0]; this
0x490F35: jz      short loc_490F43
0x490F37: mov     edx, [ecx]
0x490F39: mov     eax, [edx+170h]
0x490F3F: call    eax
0x490F41: jmp     short loc_490F48
0x490F43: call    TESObjectREFR_GetOwner
0x490F48: cmp     byte ptr [esp+54h+arg_8], 0
0x490F4D: mov     ebx, eax
0x490F4F: jz      short loc_490F8A
0x490F51: mov     eax, [esi+8]
0x490F54: push    eax
0x490F55: call    sub_469980
0x490F5A: add     esp, 4
0x490F5D: test    al, al
0x490F5F: jnz     short loc_490F8A
0x490F61: mov     ecx, [esp+54h+arg_0]
0x490F65: push    ebx
0x490F66: call    sub_4DE880
0x490F6B: test    al, al
0x490F6D: jnz     short loc_490F8A
0x490F6F: mov     eax, [esi+8]
0x490F72: cmp     byte ptr [eax+4], 22h ; '"'
0x490F76: jz      short loc_490F8A
0x490F78: push    ebx
0x490F79: mov     ecx, ebp
0x490F7B: call    ExtraDataList__SetOrRemoveExtraOwnership
0x490F80: push    edi
0x490F81: mov     ecx, ebp
0x490F83: call    ExtraDataList_SetExtraCount
0x490F88: jmp     short loc_490F91
0x490F8A: mov     ecx, ebp
0x490F8C: call    ExtraDataList_RemoveOwner
0x490F91: mov     eax, [esi+8]
0x490F94: mov     ecx, [esp+54h+arg_18]
0x490F98: mov     edx, [ecx]
0x490F9A: push    edi
0x490F9B: push    ebp
0x490F9C: push    eax
0x490F9D: mov     eax, [edx+114h]
0x490FA3: call    eax
0x490FA5: jmp     short loc_490FB5
0x490FA7: cmp     [esp+54h+arg_24], 0
0x490FAC: jz      short loc_490FB5
0x490FAE: mov     ecx, esi
0x490FB0: call    ContainerEntryExtraData_ClearDataTable
0x490FB5: mov     ecx, [esi]
0x490FB7: test    ecx, ecx
0x490FB9: jz      short loc_490FC0
0x490FBB: call    BSSimpleList_Clear
0x490FC0: mov     eax, [esi]
0x490FC2: push    eax
0x490FC3: call    FormHeapFree
0x490FC8: push    esi
0x490FC9: mov     dword ptr [esi], 0
0x490FCF: call    FormHeapFree
0x490FD4: add     esp, 8
0x490FD7: cmp     [esp+54h+var_20], 0
0x490FDC: mov     [esp+54h+var_3C], 0
0x490FE4: jz      short loc_490FF1
0x490FE6: mov     ecx, [esp+54h+var_24]
0x490FEA: mov     edx, [ecx+4]
0x490FED: mov     [esp+54h+var_24], edx
0x490FF1: cmp     [esp+54h+arg_C], 0
0x490FF6: jz      loc_490A28
0x490FFC: mov     [esp+54h+var_3F], 1
0x491001: jmp     loc_490A28
0x491006: mov     eax, [eax+4]
0x491009: test    eax, eax
0x49100B: jnz     loc_490A47
0x491011: mov     [esp+54h+var_34], 0
0x491019: cmp     byte ptr [esp+54h+arg_28], 0
0x491021: mov     ebp, [esp+54h+arg_C]
0x491025: jz      loc_49130A
0x49102B: test    ebp, ebp
0x49102D: jle     loc_49130A
0x491033: mov     edx, [esp+54h+arg_20]
0x491037: mov     eax, [esp+54h+arg_1C]
0x49103B: mov     ecx, [esp+54h+arg_18]
0x49103F: push    0
0x491041: push    1
0x491043: push    edx
0x491044: mov     edx, [esp+60h+arg_14]
0x491048: push    eax
0x491049: mov     eax, [esp+64h+arg_10]
0x49104D: push    ecx
0x49104E: mov     ecx, [esp+68h+arg_8]
0x491052: push    edx
0x491053: mov     edx, [esp+6Ch+arg_4]
0x491057: push    eax
0x491058: mov     eax, [esp+70h+arg_0]
0x49105C: push    ebp
0x49105D: push    ecx
0x49105E: mov     ecx, [esp+78h+var_30]
0x491062: push    edx
0x491063: push    eax
0x491064: call    ContainerExtraData_RemoveForm
0x491069: jmp     loc_49166C
0x49106E: test    eax, eax
0x491070: jz      short loc_491011
0x491072: mov     eax, [eax]
0x491074: test    eax, eax
0x491076: mov     [esp+54h+var_34], eax
0x49107A: jz      short loc_491019
0x49107C: mov     ebp, [esp+54h+var_2C]
0x491080: mov     esi, [esp+54h+var_3C]
0x491084: mov     edi, eax
0x491086: jmp     loc_48FD90
0x49108B: mov     ecx, edi
0x49108D: mov     byte ptr [esp+54h+arg_28], 0
0x491095: call    BaseExtraList_Count
0x49109A: cmp     eax, 1
0x49109D: jbe     short loc_4910CF
0x49109F: mov     ecx, edi
0x4910A1: call    BaseExtraList_Count
0x4910A6: cmp     eax, 2
0x4910A9: jnz     short loc_4910B8
0x4910AB: mov     ecx, edi
0x4910AD: call    ExtraDataList_GetExtraCount
0x4910B2: cmp     ax, 1
0x4910B6: jg      short loc_4910CF
0x4910B8: mov     ecx, edi
0x4910BA: call    sub_41DEF0
0x4910BF: test    al, al
0x4910C1: jz      short loc_4910D7
0x4910C3: mov     ecx, edi
0x4910C5: call    BaseExtraList_Count
0x4910CA: cmp     eax, 2
0x4910CD: jnz     short loc_4910D7
0x4910CF: mov     byte ptr [esp+54h+arg_28], 1
0x4910D7: mov     ebp, [esp+54h+arg_0]
0x4910DB: mov     edx, [ebp+0]
0x4910DE: mov     eax, [edx+190h]
0x4910E4: mov     ecx, ebp
0x4910E6: call    eax
0x4910E8: test    al, al
0x4910EA: jz      short loc_491139
0x4910EC: mov     ecx, [ebp+8]
0x4910EF: shr     ecx, 0Bh
0x4910F2: test    cl, 1
0x4910F5: jnz     short loc_491139
0x4910F7: push    0; int
0x4910F9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4910FE: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x491103: push    0; int
0x491105: push    ebp; void *
0x491106: call    OblivionDynamicCast
0x49110B: mov     ebx, eax
0x49110D: add     esp, 14h
0x491110: cmp     dword ptr [ebx+58h], 0
0x491114: jz      short loc_49116A
0x491116: mov     edx, [esp+54h+var_34]
0x49111A: mov     esi, [edx+8]
0x49111D: push    0
0x49111F: push    0
0x491121: push    1
0x491123: push    edi
0x491124: mov     ecx, edi
0x491126: call    ExtraDataList_GetExtraCount
0x49112B: movsx   eax, ax
0x49112E: push    eax
0x49112F: push    esi
0x491130: mov     ecx, ebx
0x491132: call    Actor_UnequipItem
0x491137: jmp     short loc_49115C
0x491139: mov     ecx, [esp+54h+var_34]
0x49113D: mov     ebx, [ecx+8]
0x491140: mov     esi, [ebp+0]
0x491143: push    edi
0x491144: mov     ecx, edi
0x491146: add     esi, 10Ch
0x49114C: call    ExtraDataList_GetExtraCount
0x491151: movsx   edx, ax
0x491154: mov     eax, [esi]
0x491156: push    edx
0x491157: push    ebx
0x491158: mov     ecx, ebp
0x49115A: call    eax
0x49115C: test    al, al
0x49115E: jz      short loc_49116A
0x491160: cmp     byte ptr [esp+54h+arg_28], 0
0x491168: jz      short loc_49116C
0x49116A: xor     edi, edi
0x49116C: mov     esi, [esp+54h+arg_4]
0x491170: mov     ebx, [esp+54h+var_30]
0x491174: push    0
0x491176: push    1
0x491178: push    esi
0x491179: mov     ecx, ebx
0x49117B: call    ContainerExtraData_GetEntryForForm
0x491180: test    eax, eax
0x491182: jz      short loc_491191
0x491184: push    0
0x491186: mov     ecx, eax
0x491188: call    ContainerEntryExtraData_HasWorn
0x49118D: test    al, al
0x49118F: jnz     short loc_4911C1
0x491191: mov     ecx, [esp+54h+arg_20]
0x491195: mov     edx, [esp+54h+arg_1C]
0x491199: mov     eax, [esp+54h+arg_18]
0x49119D: push    0
0x49119F: push    1
0x4911A1: push    ecx
0x4911A2: mov     ecx, [esp+60h+arg_14]
0x4911A6: push    edx
0x4911A7: mov     edx, [esp+64h+arg_C]
0x4911AB: push    eax
0x4911AC: mov     eax, [esp+68h+arg_8]
0x4911B0: push    ecx
0x4911B1: push    edi
0x4911B2: push    edx
0x4911B3: push    eax
0x4911B4: push    esi
0x4911B5: push    ebp
0x4911B6: mov     ecx, ebx
0x4911B8: call    ContainerExtraData_RemoveForm
0x4911BD: mov     edi, eax
0x4911BF: jmp     short loc_4911C5
0x4911C1: mov     edi, [esp+54h+var_38]
0x4911C5: mov     esi, [esp+54h+var_3C]
0x4911C9: test    esi, esi
0x4911CB: jz      short loc_4911EF
0x4911CD: mov     ecx, [esi]
0x4911CF: test    ecx, ecx
0x4911D1: jz      short loc_4911D8
0x4911D3: call    BSSimpleList_Clear
0x4911D8: mov     ecx, [esi]
0x4911DA: push    ecx
0x4911DB: call    FormHeapFree
0x4911E0: push    esi
0x4911E1: mov     dword ptr [esi], 0
0x4911E7: call    FormHeapFree
0x4911EC: add     esp, 8
0x4911EF: mov     eax, edi
0x4911F1: jmp     loc_49166C
0x4911F6: mov     edx, [esp+54h+arg_20]
0x4911FA: mov     ecx, [esp+54h+arg_1C]
0x4911FE: push    0
0x491200: push    1
0x491202: push    edx
0x491203: mov     edx, [esp+60h+arg_18]
0x491207: push    ecx
0x491208: mov     ecx, [esp+64h+arg_14]
0x49120C: push    edx
0x49120D: mov     edx, [esp+68h+arg_8]
0x491211: push    ecx
0x491212: mov     ecx, [esp+6Ch+arg_0]
0x491216: push    0
0x491218: push    eax
0x491219: mov     eax, [esp+74h+arg_4]
0x49121D: push    edx
0x49121E: push    eax
0x49121F: push    ecx
0x491220: mov     ecx, [esp+80h+var_30]
0x491224: call    ContainerExtraData_RemoveForm
0x491229: jmp     loc_49166C
0x49122E: call    BaseExtraList_Count
0x491233: cmp     eax, 1
0x491236: jbe     short loc_491250
0x491238: mov     ecx, ebx
0x49123A: call    BaseExtraList_Count
0x49123F: cmp     eax, 2
0x491242: jnz     short loc_491254
0x491244: mov     ecx, ebx
0x491246: call    ExtraDataList_GetExtraCount
0x49124B: test    ax, ax
0x49124E: jz      short loc_491254
0x491250: mov     [esp+54h+arg_10], edi
0x491254: mov     edi, [ebp+8]
0x491257: mov     ebp, [esp+54h+arg_0]
0x49125B: mov     eax, [ebp+0]
0x49125E: push    ebx
0x49125F: mov     ecx, ebx
0x491261: mov     [esp+58h+arg_28], eax
0x491268: call    ExtraDataList_GetExtraCount
0x49126D: movsx   edx, ax
0x491270: mov     eax, [esp+58h+arg_28]
0x491277: mov     eax, [eax+10Ch]
0x49127D: push    edx
0x49127E: push    edi
0x49127F: mov     ecx, ebp
0x491281: call    eax
0x491283: test    al, al
0x491285: jz      short loc_4912C1
0x491287: mov     ecx, [esp+54h+arg_20]
0x49128B: mov     edx, [esp+54h+arg_1C]
0x49128F: mov     eax, [esp+54h+arg_18]
0x491293: push    0
0x491295: push    1
0x491297: push    ecx
0x491298: mov     ecx, [esp+60h+arg_14]
0x49129C: push    edx
0x49129D: mov     edx, [esp+64h+arg_10]
0x4912A1: push    eax
0x4912A2: mov     eax, [esp+68h+arg_C]
0x4912A6: push    ecx
0x4912A7: mov     ecx, [esp+6Ch+arg_8]
0x4912AB: push    edx
0x4912AC: mov     edx, [esp+70h+arg_4]
0x4912B0: push    eax
0x4912B1: push    ecx
0x4912B2: mov     ecx, [esp+78h+var_30]
0x4912B6: push    edx
0x4912B7: push    ebp
0x4912B8: call    ContainerExtraData_RemoveForm
0x4912BD: mov     edi, eax
0x4912BF: jmp     short loc_4912E1
0x4912C1: fld     dword ptr ds:0A30634h
0x4912C7: mov     eax, ds:0B38560h
0x4912CC: push    ecx
0x4912CD: fstp    [esp+58h+duration]; duration
0x4912D0: push    1; unk2
0x4912D2: push    0; unk1
0x4912D4: push    eax; string
0x4912D5: call    GameUI_QueueMessage
0x4912DA: mov     edi, [esp+64h+var_38]
0x4912DE: add     esp, 10h
0x4912E1: mov     ecx, [esi]
0x4912E3: test    ecx, ecx
0x4912E5: jz      short loc_4912EC
0x4912E7: call    BSSimpleList_Clear
0x4912EC: mov     ecx, [esi]
0x4912EE: push    ecx
0x4912EF: call    FormHeapFree
0x4912F4: push    esi
0x4912F5: mov     dword ptr [esi], 0
0x4912FB: call    FormHeapFree
0x491300: add     esp, 8
0x491303: mov     eax, edi
0x491305: jmp     loc_49166C
0x49130A: mov     ebx, [esp+54h+var_34]
0x49130E: test    ebx, ebx
0x491310: jz      short loc_49131D
0x491312: cmp     [esp+54h+var_3F], 0
0x491317: jz      loc_491597
0x49131D: mov     eax, [esp+54h+var_2C]
0x491321: test    eax, eax
0x491323: jz      loc_491597
0x491329: test    ebx, ebx
0x49132B: jz      short loc_491334
0x49132D: add     eax, [ebx+4]
0x491330: mov     [esp+54h+var_2C], eax
0x491334: test    eax, eax
0x491336: jnz     short loc_49133F
0x491338: mov     ecx, [ebx]
0x49133A: jmp     loc_491663
0x49133F: cmp     byte ptr [esp+54h+arg_14], 0
0x491344: jz      loc_491447
0x49134A: mov     ecx, [esp+54h+arg_20]
0x49134E: mov     edx, [esp+54h+arg_1C]
0x491352: mov     eax, [esp+54h+arg_4]
0x491356: mov     esi, [esp+54h+arg_0]
0x49135A: push    ecx
0x49135B: mov     ecx, [esp+58h+var_30]
0x49135F: push    edx
0x491360: push    0
0x491362: push    ebp
0x491363: push    eax
0x491364: push    esi
0x491365: call    sub_48B080
0x49136A: mov     ecx, esi; this
0x49136C: mov     [esp+54h+var_38], eax
0x491370: call    TESObjectREFR_GetParentCell
0x491375: mov     ecx, [esp+54h+var_38]
0x491379: mov     edi, eax
0x49137B: call    sub_4D72B0
0x491380: test    eax, eax
0x491382: jnz     short loc_4913A3
0x491384: test    edi, edi
0x491386: jz      short loc_4913A3
0x491388: mov     ecx, edi
0x49138A: call    TESObjectCELL_GetOwner
0x49138F: test    eax, eax
0x491391: jz      short loc_4913A3
0x491393: push    esi
0x491394: mov     ecx, edi
0x491396: call    sub_4CAAC0
0x49139B: test    al, al
0x49139D: jz      loc_49142C
0x4913A3: mov     edx, [esi]
0x4913A5: mov     eax, [edx+170h]
0x4913AB: mov     ecx, esi
0x4913AD: call    eax
0x4913AF: cmp     byte ptr [eax+4], 23h ; '#'
0x4913B3: jnz     loc_491520
0x4913B9: mov     edx, [esi]
0x4913BB: mov     eax, [edx+170h]
0x4913C1: mov     ecx, esi
0x4913C3: call    eax
0x4913C5: mov     ecx, eax
0x4913C7: call    TESActorBase_IsFemale
0x4913CC: cmp     eax, 1
0x4913CF: jnz     loc_491520
0x4913D5: mov     ecx, [esp+54h+var_38]
0x4913D9: mov     edx, [ecx]
0x4913DB: mov     eax, [edx+170h]
0x4913E1: push    0; int
0x4913E3: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4913E8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4913ED: push    0; int
0x4913EF: call    eax
0x4913F1: push    eax; void *
0x4913F2: call    OblivionDynamicCast
0x4913F7: mov     edi, eax
0x4913F9: add     esp, 14h
0x4913FC: test    edi, edi
0x4913FE: jz      loc_491520
0x491404: push    1
0x491406: mov     ecx, edi
0x491408: call    TESBipedModelForm_GetWorldModel
0x49140D: push    0
0x49140F: mov     ecx, edi
0x491411: mov     [esp+58h+arg_28], eax
0x491418: call    TESBipedModelForm_GetWorldModel
0x49141D: mov     ecx, [esp+54h+arg_28]
0x491424: cmp     ecx, eax
0x491426: jz      loc_491520
0x49142C: mov     edx, [esi]
0x49142E: mov     eax, [edx+170h]
0x491434: mov     ecx, esi
0x491436: call    eax
0x491438: mov     ecx, [esp+54h+var_38]
0x49143C: push    eax
0x49143D: call    sub_4DB890
0x491442: jmp     loc_491520
0x491447: mov     ebx, [esp+54h+arg_18]
0x49144B: test    ebx, ebx
0x49144D: jz      loc_49151C
0x491453: mov     esi, [esp+54h+arg_0]
0x491457: mov     edx, [esi]
0x491459: mov     eax, [edx+190h]
0x49145F: mov     ecx, esi
0x491461: call    eax
0x491463: test    al, al
0x491465: mov     ecx, esi; this
0x491467: jz      short loc_491475
0x491469: mov     edx, [esi]
0x49146B: mov     eax, [edx+170h]
0x491471: call    eax
0x491473: jmp     short loc_49147A
0x491475: call    TESObjectREFR_GetOwner
0x49147A: cmp     byte ptr [esp+54h+arg_8], 0
0x49147F: mov     edi, eax
0x491481: jz      short loc_4914F6
0x491483: mov     ecx, [esp+54h+arg_4]
0x491487: push    ecx
0x491488: call    sub_469980
0x49148D: add     esp, 4
0x491490: test    al, al
0x491492: jnz     short loc_4914F6
0x491494: push    edi
0x491495: mov     ecx, esi
0x491497: call    sub_4DE880
0x49149C: test    al, al
0x49149E: jnz     short loc_4914F6
0x4914A0: mov     edx, [esp+54h+arg_4]
0x4914A4: cmp     byte ptr [edx+4], 22h ; '"'
0x4914A8: jz      short loc_4914F6
0x4914AA: mov     esi, [esp+54h+arg_10]
0x4914AE: test    esi, esi
0x4914B0: jnz     short loc_4914E4
0x4914B2: push    14h; Size
0x4914B4: call    FormHeapAlloc
0x4914B9: add     esp, 4
0x4914BC: mov     [esp+54h+arg_28], eax
0x4914C3: test    eax, eax
0x4914C5: mov     [esp+54h+var_4], 6
0x4914CD: jz      short loc_4914D8
0x4914CF: mov     ecx, eax
0x4914D1: call    ExtraDataList_constr
0x4914D6: jmp     short loc_4914DA
0x4914D8: xor     eax, eax
0x4914DA: mov     [esp+54h+var_4], 0FFFFFFFFh
0x4914E2: mov     esi, eax
0x4914E4: push    edi
0x4914E5: mov     ecx, esi
0x4914E7: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4914EC: push    ebp
0x4914ED: mov     ecx, esi
0x4914EF: call    ExtraDataList_SetExtraCount
0x4914F4: jmp     short loc_491505
0x4914F6: mov     esi, [esp+54h+arg_10]
0x4914FA: test    esi, esi
0x4914FC: jz      short loc_491505
0x4914FE: mov     ecx, esi
0x491500: call    ExtraDataList_RemoveOwner
0x491505: test    ebp, ebp
0x491507: jle     short loc_49151C
0x491509: mov     ecx, [esp+54h+arg_4]
0x49150D: mov     eax, [ebx]
0x49150F: mov     edx, [eax+114h]
0x491515: push    ebp
0x491516: push    esi
0x491517: push    ecx
0x491518: mov     ecx, ebx
0x49151A: call    edx
0x49151C: mov     ebx, [esp+54h+var_34]
0x491520: mov     esi, [esp+54h+var_3C]
0x491524: test    esi, esi
0x491526: jz      short loc_49154A
0x491528: mov     ecx, [esi]
0x49152A: test    ecx, ecx
0x49152C: jz      short loc_491533
0x49152E: call    BSSimpleList_Clear
0x491533: mov     eax, [esi]
0x491535: push    eax
0x491536: call    FormHeapFree
0x49153B: push    esi
0x49153C: mov     dword ptr [esi], 0
0x491542: call    FormHeapFree
0x491547: add     esp, 8
0x49154A: test    ebx, ebx
0x49154C: jnz     short loc_491594
0x49154E: push    0Ch; Size
0x491550: call    FormHeapAlloc
0x491555: add     esp, 4
0x491558: mov     [esp+54h+arg_28], eax
0x49155F: test    eax, eax
0x491561: mov     [esp+54h+var_4], 7
0x491569: jz      short loc_49157C
0x49156B: mov     ecx, [esp+54h+arg_4]
0x49156F: neg     ebp
0x491571: push    ebp
0x491572: push    ecx
0x491573: mov     ecx, eax
0x491575: call    ContainerEntryExtraData_constr
0x49157A: jmp     short loc_49157E
0x49157C: xor     eax, eax
0x49157E: mov     edx, [esp+54h+var_30]
0x491582: mov     ecx, [edx]
0x491584: push    eax
0x491585: mov     [esp+58h+var_4], 0FFFFFFFFh
0x49158D: call    BSSimpleList_PushBack
0x491592: jmp     short loc_491597
0x491594: sub     [ebx+4], ebp
0x491597: mov     eax, [esp+54h+arg_4]
0x49159B: mov     ecx, [esp+54h+var_30]
0x49159F: push    0
0x4915A1: push    1
0x4915A3: push    eax
0x4915A4: call    ContainerExtraData_GetEntryForForm
0x4915A9: mov     esi, eax
0x4915AB: test    esi, esi
0x4915AD: jz      loc_491668
0x4915B3: cmp     [esp+54h+var_3E], 0
0x4915B8: jnz     loc_49163E
0x4915BE: cmp     [esp+54h+var_1C], 0
0x4915C3: jnz     short loc_49163E
0x4915C5: mov     edi, [esi+4]
0x4915C8: test    edi, edi
0x4915CA: jnz     short loc_4915D2
0x4915CC: cmp     [esp+54h+var_2C], edi
0x4915D0: jz      short loc_4915E5
0x4915D2: mov     ecx, [esi]
0x4915D4: test    ecx, ecx
0x4915D6: jz      short loc_49163E
0x4915D8: call    BSSimpleList_IsEmpty
0x4915DD: test    al, al
0x4915DF: jz      short loc_49163E
0x4915E1: test    edi, edi
0x4915E3: jnz     short loc_49163E
0x4915E5: push    3F0h
0x4915EA: call    Menu_GetOpenMenuTile
0x4915EF: add     esp, 4
0x4915F2: test    eax, eax
0x4915F4: jz      short loc_491607
0x4915F6: mov     ecx, eax
0x4915F8: call    Tile_GetParentMenu
0x4915FD: test    eax, eax
0x4915FF: jz      short loc_491607
0x491601: cmp     byte ptr [eax+61h], 0
0x491605: jnz     short loc_49160E
0x491607: mov     ecx, esi
0x491609: call    ContainerEntryExtraData_ClearDataTable
0x49160E: mov     ecx, [esp+54h+var_30]
0x491612: mov     ecx, [ecx]
0x491614: push    esi
0x491615: call    BSSimpleList_Remove
0x49161A: mov     ecx, [esi]
0x49161C: test    ecx, ecx
0x49161E: jz      short loc_491625
0x491620: call    BSSimpleList_Clear
0x491625: mov     edx, [esi]
0x491627: push    edx
0x491628: call    FormHeapFree
0x49162D: push    esi
0x49162E: mov     dword ptr [esi], 0
0x491634: call    FormHeapFree
0x491639: add     esp, 8
0x49163C: jmp     short loc_491668
0x49163E: mov     eax, [esi+4]
0x491641: add     eax, [esp+54h+var_2C]
0x491645: jns     short loc_491668
0x491647: push    0
0x491649: mov     ecx, esi
0x49164B: call    ContainerEntryExtraData_HasWorn
0x491650: test    al, al
0x491652: jnz     short loc_491668
0x491654: mov     esi, [esi]
0x491656: test    esi, esi
0x491658: jz      short loc_491668
0x49165A: cmp     [esp+54h+var_1C], 0
0x49165F: jnz     short loc_491668
0x491661: mov     ecx, esi
0x491663: call    BSSimpleList_Clear
0x491668: mov     eax, [esp+54h+var_38]
0x49166C: mov     ecx, [esp+54h+var_C]
0x491670: mov     large fs:0, ecx
0x491677: pop     ecx
0x491678: pop     edi
0x491679: pop     esi
0x49167A: pop     ebp
0x49167B: pop     ebx
0x49167C: add     esp, 40h
0x49167F: retn    2Ch ; ','
