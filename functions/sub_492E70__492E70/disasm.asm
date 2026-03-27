0x492E70: push    0FFFFFFFFh
0x492E72: push    offset SEH_492E70
0x492E77: mov     eax, large fs:0
0x492E7D: push    eax
0x492E7E: sub     esp, 1Ch
0x492E81: push    ebx
0x492E82: push    ebp
0x492E83: push    esi
0x492E84: push    edi
0x492E85: mov     eax, ds:0B30AACh
0x492E8A: xor     eax, esp
0x492E8C: push    eax
0x492E8D: lea     eax, [esp+3Ch+var_C]
0x492E91: mov     large fs:0, eax
0x492E97: mov     ebp, ecx
0x492E99: mov     [esp+3Ch+var_20], ebp
0x492E9D: fldz
0x492E9F: mov     ecx, ds:0B333C4h; this
0x492EA5: cmp     [esp+3Ch+arg_0], ecx
0x492EA9: fstp    [esp+3Ch+var_18]
0x492EAD: mov     [esp+3Ch+var_25], 0
0x492EB2: jnz     short loc_492EC2
0x492EB4: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x492EB9: test    al, al
0x492EBB: jz      short loc_492EC2
0x492EBD: mov     [esp+3Ch+var_25], 1
0x492EC2: mov     ecx, [ebp+4]; this
0x492EC5: test    ecx, ecx
0x492EC7: jz      short loc_492ED0
0x492EC9: call    TESObjectREFR_GetContainer
0x492ECE: jmp     short loc_492ED2
0x492ED0: xor     eax, eax
0x492ED2: add     eax, 8
0x492ED5: mov     [esp+3Ch+var_14], eax
0x492ED9: jz      loc_493334
0x492EDF: jmp     short loc_492EE9
0x492EE1: mov     eax, [esp+3Ch+var_14]
0x492EE5: mov     ebp, [esp+3Ch+var_20]
0x492EE9: cmp     dword ptr [eax+4], 0
0x492EED: jnz     short loc_492EF8
0x492EEF: cmp     dword ptr [eax], 0
0x492EF2: jz      loc_493334
0x492EF8: mov     eax, [eax]
0x492EFA: mov     ebx, [eax+4]
0x492EFD: push    0; int
0x492EFF: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x492F04: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x492F09: mov     eax, ebx
0x492F0B: push    0; int
0x492F0D: push    eax; void *
0x492F0E: mov     [esp+50h+var_24], ebx
0x492F12: call    OblivionDynamicCast
0x492F17: push    ebx
0x492F18: mov     esi, eax
0x492F1A: call    sub_4691B0
0x492F1F: mov     edx, [ebx]
0x492F21: mov     edi, eax
0x492F23: mov     eax, [edx+78h]
0x492F26: add     esp, 18h
0x492F29: mov     ecx, ebx
0x492F2B: call    eax
0x492F2D: test    al, al
0x492F2F: jz      loc_492FC7
0x492F35: mov     ecx, [esp+3Ch+arg_0]
0x492F39: cmp     ecx, ds:0B333C4h
0x492F3F: jnz     loc_492FC7
0x492F45: mov     eax, [ebp+0]
0x492F48: test    eax, eax
0x492F4A: mov     dl, 1
0x492F4C: jz      loc_493321
0x492F52: mov     esi, ebx
0x492F54: test    dl, dl
0x492F56: jz      short loc_492F73
0x492F58: mov     ecx, [eax]
0x492F5A: test    ecx, ecx
0x492F5C: jz      short loc_492F67
0x492F5E: cmp     [ecx+8], esi
0x492F61: jnz     short loc_492F67
0x492F63: xor     dl, dl
0x492F65: jmp     short loc_492F6A
0x492F67: mov     eax, [eax+4]
0x492F6A: test    eax, eax
0x492F6C: jnz     short loc_492F54
0x492F6E: jmp     loc_493321
0x492F73: test    eax, eax
0x492F75: jz      loc_493321
0x492F7B: mov     esi, [eax]
0x492F7D: test    esi, esi
0x492F7F: jz      loc_493321
0x492F85: push    0
0x492F87: mov     ecx, esi
0x492F89: call    ContainerEntryExtraData_HasWorn
0x492F8E: test    al, al
0x492F90: jz      loc_493321
0x492F96: mov     edx, [esp+3Ch+var_14]
0x492F9A: mov     eax, [edx]
0x492F9C: mov     eax, [eax]
0x492F9E: mov     ecx, [esi+4]
0x492FA1: mov     edx, [esp+3Ch+var_24]
0x492FA5: push    0
0x492FA7: push    0
0x492FA9: add     eax, ecx
0x492FAB: mov     ecx, [esp+44h+arg_0]
0x492FAF: push    0
0x492FB1: push    ecx
0x492FB2: mov     ecx, [esp+4Ch+var_20]
0x492FB6: push    eax
0x492FB7: push    edx
0x492FB8: lea     eax, [esp+54h+var_26]
0x492FBC: push    eax
0x492FBD: call    ContainerExtraData_UnequipItem
0x492FC2: jmp     loc_493321
0x492FC7: test    esi, esi
0x492FC9: jnz     loc_493321
0x492FCF: test    edi, edi
0x492FD1: jz      short loc_492FE2
0x492FD3: mov     ecx, edi
0x492FD5: call    TESBipedModelForm_IsPlayable
0x492FDA: test    al, al
0x492FDC: jz      loc_493321
0x492FE2: mov     ecx, [esp+3Ch+var_20]
0x492FE6: mov     eax, [ecx]
0x492FE8: test    eax, eax
0x492FEA: mov     dl, 1
0x492FEC: jz      short loc_49300C
0x492FEE: mov     esi, [esp+3Ch+var_24]
0x492FF2: test    dl, dl
0x492FF4: jz      short loc_493014
0x492FF6: mov     ecx, [eax]
0x492FF8: test    ecx, ecx
0x492FFA: jz      short loc_493005
0x492FFC: cmp     [ecx+8], esi
0x492FFF: jnz     short loc_493005
0x493001: xor     dl, dl
0x493003: jmp     short loc_493008
0x493005: mov     eax, [eax+4]
0x493008: test    eax, eax
0x49300A: jnz     short loc_492FF2
0x49300C: xor     edx, edx
0x49300E: mov     [esp+3Ch+var_1C], edx
0x493012: jmp     short loc_493046
0x493014: test    eax, eax
0x493016: jz      short loc_49300C
0x493018: mov     edx, [eax]
0x49301A: test    edx, edx
0x49301C: mov     [esp+3Ch+var_1C], edx
0x493020: jz      short loc_493046
0x493022: mov     esi, [edx]
0x493024: test    esi, esi
0x493026: jz      short loc_493046
0x493028: mov     ecx, [esi]
0x49302A: test    ecx, ecx
0x49302C: jz      short loc_493046
0x49302E: call    sub_41DEF0
0x493033: test    al, al
0x493035: jnz     loc_493321
0x49303B: mov     esi, [esi+4]
0x49303E: test    esi, esi
0x493040: mov     edx, [esp+3Ch+var_1C]
0x493044: jnz     short loc_493028
0x493046: mov     eax, [esp+3Ch+var_14]
0x49304A: mov     eax, [eax]
0x49304C: mov     eax, [eax]
0x49304E: test    eax, eax
0x493050: jge     short loc_493054
0x493052: neg     eax
0x493054: test    edx, edx
0x493056: jz      short loc_493060
0x493058: mov     ecx, [edx+4]
0x49305B: lea     ebx, [ecx+eax]
0x49305E: jmp     short loc_493062
0x493060: mov     ebx, eax
0x493062: test    ebx, ebx
0x493064: jle     loc_493321
0x49306A: mov     ecx, [esp+3Ch+var_24]
0x49306E: push    ecx
0x49306F: call    sub_470520
0x493074: imul    eax, ebx
0x493077: mov     [esp+40h+var_10], eax
0x49307B: add     esp, 4
0x49307E: cmp     [esp+3Ch+var_1C], 0
0x493083: fild    [esp+3Ch+var_10]
0x493087: fadd    [esp+3Ch+var_18]
0x49308B: fstp    [esp+3Ch+var_18]
0x49308F: jz      loc_49326F
0x493095: mov     edx, [esp+3Ch+var_1C]
0x493099: mov     ecx, [edx]
0x49309B: test    ecx, ecx
0x49309D: jz      loc_49326F
0x4930A3: xor     edx, edx
0x4930A5: test    ecx, ecx
0x4930A7: mov     eax, ecx
0x4930A9: jz      loc_49326F
0x4930AF: nop
0x4930B0: cmp     dword ptr [eax], 0
0x4930B3: jz      short loc_4930B8
0x4930B5: add     edx, 1
0x4930B8: mov     eax, [eax+4]
0x4930BB: test    eax, eax
0x4930BD: jnz     short loc_4930B0
0x4930BF: test    edx, edx
0x4930C1: jz      loc_49326F
0x4930C7: mov     ebp, ecx
0x4930C9: test    ebp, ebp
0x4930CB: jz      loc_49326F
0x4930D1: cmp     [ebp+0], eax
0x4930D4: jz      loc_49326F
0x4930DA: mov     [esp+3Ch+var_27], al
0x4930DE: mov     edi, edi
0x4930E0: mov     esi, [ebp+0]
0x4930E3: test    esi, esi
0x4930E5: jz      loc_49326F
0x4930EB: mov     ecx, esi
0x4930ED: call    BaseExtraList_Count
0x4930F2: cmp     eax, 1
0x4930F5: jnb     short loc_493119
0x4930F7: mov     ecx, ebp
0x4930F9: call    sub_67F100
0x4930FE: cmp     dword ptr [ebp+4], 0
0x493102: jnz     short loc_49310E
0x493104: cmp     dword ptr [ebp+0], 0
0x493108: jz      loc_493255
0x49310E: mov     eax, [esp+3Ch+var_1C]
0x493112: mov     ebp, [eax]
0x493114: jmp     loc_49324B
0x493119: mov     ecx, [esp+3Ch+var_1C]
0x49311D: mov     ecx, [ecx]
0x49311F: mov     [esp+3Ch+var_26], 0
0x493124: call    BSSimpleList_Count
0x493129: cmp     eax, 1
0x49312C: ja      short loc_493135
0x49312E: mov     [esp+3Ch+var_27], 1
0x493133: jmp     short loc_49313A
0x493135: mov     [esp+3Ch+var_26], 1
0x49313A: mov     ecx, [esp+3Ch+arg_0]
0x49313E: mov     edx, [ecx]
0x493140: mov     eax, [edx+190h]
0x493146: call    eax
0x493148: test    al, al
0x49314A: mov     ecx, [esp+3Ch+arg_0]; this
0x49314E: jz      short loc_49315C
0x493150: mov     edx, [ecx]
0x493152: mov     eax, [edx+170h]
0x493158: call    eax
0x49315A: jmp     short loc_493161
0x49315C: call    TESObjectREFR_GetOwner
0x493161: cmp     byte ptr [esp+3Ch+arg_8], 0
0x493166: mov     edi, eax
0x493168: jnz     short loc_493171
0x49316A: cmp     [esp+3Ch+arg_C], 0
0x49316F: jz      short loc_4931AF
0x493171: mov     ecx, [esp+3Ch+var_24]
0x493175: push    ecx
0x493176: call    sub_469980
0x49317B: add     esp, 4
0x49317E: test    al, al
0x493180: jnz     short loc_4931AF
0x493182: mov     ecx, [esp+3Ch+arg_0]
0x493186: push    edi
0x493187: call    sub_4DE880
0x49318C: test    al, al
0x49318E: jnz     short loc_4931AF
0x493190: mov     edx, [esp+3Ch+var_24]
0x493194: cmp     byte ptr [edx+4], 22h ; '"'
0x493198: jz      short loc_4931AF
0x49319A: mov     ecx, esi
0x49319C: call    ExtraDataList_GetOwner
0x4931A1: test    eax, eax
0x4931A3: jnz     short loc_4931F3
0x4931A5: push    edi
0x4931A6: mov     ecx, esi
0x4931A8: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4931AD: jmp     short loc_4931F3
0x4931AF: cmp     [esp+3Ch+arg_10], 0
0x4931B4: jz      short loc_4931F3
0x4931B6: mov     ecx, esi
0x4931B8: call    BaseExtraList_Count
0x4931BD: mov     ecx, esi
0x4931BF: mov     edi, eax
0x4931C1: call    ExtraDataList_GetOwner
0x4931C6: test    eax, eax
0x4931C8: jz      short loc_4931EC
0x4931CA: mov     ecx, esi
0x4931CC: call    ExtraDataList_GetExtraCount
0x4931D1: cmp     ax, 1
0x4931D5: jle     short loc_4931DC
0x4931D7: cmp     edi, 2
0x4931DA: jle     short loc_4931E1
0x4931DC: cmp     edi, 1
0x4931DF: jg      short loc_4931EC
0x4931E1: mov     ecx, esi
0x4931E3: call    ExtraDataList_RemoveOwner
0x4931E8: xor     esi, esi
0x4931EA: jmp     short loc_4931F3
0x4931EC: mov     ecx, esi
0x4931EE: call    ExtraDataList_RemoveOwner
0x4931F3: mov     ecx, esi
0x4931F5: call    ExtraDataList_GetExtraCount
0x4931FA: mov     ecx, [esp+3Ch+arg_4]
0x4931FE: push    0
0x493200: push    1
0x493202: push    0
0x493204: push    0
0x493206: push    ecx
0x493207: movsx   eax, ax
0x49320A: push    0
0x49320C: push    esi
0x49320D: mov     ecx, esi
0x49320F: sub     ebx, eax
0x493211: call    ExtraDataList_GetExtraCount
0x493216: mov     ecx, [esp+58h+var_24]
0x49321A: movsx   edx, ax
0x49321D: mov     eax, [esp+58h+arg_8]
0x493221: push    edx
0x493222: mov     edx, [esp+5Ch+arg_0]
0x493226: push    eax
0x493227: push    ecx
0x493228: mov     ecx, [esp+64h+var_20]
0x49322C: push    edx
0x49322D: call    ContainerExtraData_RemoveForm
0x493232: cmp     [esp+3Ch+var_27], 0
0x493237: jnz     short loc_49326F
0x493239: cmp     [esp+3Ch+var_26], 0
0x49323E: jz      short loc_493248
0x493240: mov     eax, [esp+3Ch+var_1C]
0x493244: mov     ebp, [eax]
0x493246: jmp     short loc_49324B
0x493248: mov     ebp, [ebp+4]
0x49324B: test    ebp, ebp
0x49324D: jnz     loc_4930E0
0x493253: jmp     short loc_49326F
0x493255: mov     ecx, ebp
0x493257: call    BSSimpleList_Clear
0x49325C: push    ebp
0x49325D: call    FormHeapFree
0x493262: mov     ecx, [esp+40h+var_1C]
0x493266: add     esp, 4
0x493269: mov     dword ptr [ecx], 0
0x49326F: test    ebx, ebx
0x493271: jle     loc_493321
0x493277: cmp     byte ptr [esp+3Ch+arg_8], 0
0x49327C: jnz     short loc_4932A5
0x49327E: cmp     [esp+3Ch+arg_C], 0
0x493283: jnz     short loc_4932A5
0x493285: mov     edx, [esp+3Ch+arg_4]
0x493289: mov     eax, [esp+3Ch+var_24]
0x49328D: mov     ecx, [esp+3Ch+arg_0]
0x493291: push    0
0x493293: push    1
0x493295: push    0
0x493297: push    0
0x493299: push    edx
0x49329A: push    0
0x49329C: push    0
0x49329E: push    ebx
0x49329F: push    0
0x4932A1: push    eax
0x4932A2: push    ecx
0x4932A3: jmp     short loc_493318
0x4932A5: push    0Ch; Size
0x4932A7: call    FormHeapAlloc
0x4932AC: add     esp, 4
0x4932AF: mov     [esp+3Ch+var_10], eax
0x4932B3: test    eax, eax
0x4932B5: mov     [esp+3Ch+var_4], 0
0x4932BD: jz      short loc_4932D0
0x4932BF: mov     edx, [esp+3Ch+var_24]
0x4932C3: push    ebx
0x4932C4: push    edx
0x4932C5: mov     ecx, eax
0x4932C7: call    ContainerEntryExtraData_constr
0x4932CC: mov     esi, eax
0x4932CE: jmp     short loc_4932D2
0x4932D0: xor     esi, esi
0x4932D2: mov     edi, [esp+3Ch+arg_0]
0x4932D6: push    edi
0x4932D7: mov     ecx, esi
0x4932D9: mov     [esp+40h+var_4], 0FFFFFFFFh
0x4932E1: call    sub_484A40
0x4932E6: mov     esi, [esi]
0x4932E8: mov     esi, [esi]
0x4932EA: push    ebx
0x4932EB: mov     ecx, esi
0x4932ED: call    ExtraDataList_SetExtraCount
0x4932F2: mov     eax, [esp+3Ch+arg_4]
0x4932F6: push    0
0x4932F8: push    1
0x4932FA: push    0
0x4932FC: push    0
0x4932FE: push    eax
0x4932FF: push    0
0x493301: push    esi
0x493302: mov     ecx, esi
0x493304: call    ExtraDataList_GetExtraCount
0x493309: mov     edx, [esp+58h+arg_8]
0x49330D: movsx   ecx, ax
0x493310: mov     eax, [esp+58h+var_24]
0x493314: push    ecx
0x493315: push    edx
0x493316: push    eax
0x493317: push    edi
0x493318: mov     ecx, [esp+68h+var_20]
0x49331C: call    ContainerExtraData_RemoveForm
0x493321: mov     ecx, [esp+3Ch+var_14]
0x493325: mov     eax, [ecx+4]
0x493328: test    eax, eax
0x49332A: mov     [esp+3Ch+var_14], eax
0x49332E: jnz     loc_492EE1
0x493334: mov     ebp, [esp+3Ch+var_20]
0x493338: mov     ebx, [ebp+0]
0x49333B: test    ebx, ebx
0x49333D: jz      loc_4937BD
0x493343: mov     eax, [ebx+4]
0x493346: test    eax, eax
0x493348: jnz     short loc_493352
0x49334A: cmp     [ebx], eax
0x49334C: jz      loc_4937BD
0x493352: mov     edi, [ebx]
0x493354: test    edi, edi
0x493356: jz      loc_4937AD
0x49335C: mov     eax, [edi+8]
0x49335F: push    eax
0x493360: call    sub_4691B0
0x493365: add     esp, 4
0x493368: test    eax, eax
0x49336A: jz      short loc_493377
0x49336C: mov     ecx, eax
0x49336E: call    TESBipedModelForm_IsPlayable
0x493373: test    al, al
0x493375: jz      short loc_4933C5
0x493377: mov     esi, [edi]
0x493379: test    esi, esi
0x49337B: jz      short loc_493396
0x49337D: lea     ecx, [ecx+0]
0x493380: mov     ecx, [esi]
0x493382: test    ecx, ecx
0x493384: jz      short loc_493396
0x493386: call    sub_41DEF0
0x49338B: test    al, al
0x49338D: jnz     short loc_4933CD
0x49338F: mov     esi, [esi+4]
0x493392: test    esi, esi
0x493394: jnz     short loc_493380
0x493396: mov     ecx, [ebp+4]; this
0x493399: test    ecx, ecx
0x49339B: jz      short loc_4933CD
0x49339D: call    TESObjectREFR_GetContainer
0x4933A2: test    eax, eax
0x4933A4: jz      short loc_4933CD
0x4933A6: mov     ecx, [ebp+4]; this
0x4933A9: test    ecx, ecx
0x4933AB: jz      short loc_4933B4
0x4933AD: call    TESObjectREFR_GetContainer
0x4933B2: jmp     short loc_4933B6
0x4933B4: xor     eax, eax
0x4933B6: mov     edx, [edi+8]
0x4933B9: push    edx; a2
0x4933BA: mov     ecx, eax; this
0x4933BC: call    TESContainer_HasForm
0x4933C1: test    al, al
0x4933C3: jz      short loc_4933CD
0x4933C5: mov     ebx, [ebx+4]
0x4933C8: jmp     loc_4937B5
0x4933CD: mov     ecx, [edi+8]
0x4933D0: mov     eax, [ecx]
0x4933D2: mov     edx, [eax+78h]
0x4933D5: call    edx
0x4933D7: test    al, al
0x4933D9: jz      short loc_49342B
0x4933DB: mov     eax, [esp+3Ch+arg_0]
0x4933DF: cmp     eax, ds:0B333C4h
0x4933E5: jnz     short loc_49342B
0x4933E7: push    0
0x4933E9: mov     ecx, edi
0x4933EB: call    ContainerEntryExtraData_HasWorn
0x4933F0: test    al, al
0x4933F2: jz      short loc_493423
0x4933F4: mov     esi, [edi+4]
0x4933F7: push    1
0x4933F9: mov     ecx, edi
0x4933FB: call    ContainerEntryExtraData_HasWorn
0x493400: mov     edx, [esp+3Ch+arg_0]
0x493404: push    0
0x493406: mov     byte ptr [esp+40h+var_10], al
0x49340A: mov     ecx, [esp+40h+var_10]
0x49340E: mov     eax, [edi+8]
0x493411: push    ecx
0x493412: push    0
0x493414: push    edx
0x493415: push    esi
0x493416: push    eax
0x493417: lea     ecx, [esp+54h+var_26]
0x49341B: push    ecx
0x49341C: mov     ecx, ebp
0x49341E: call    ContainerExtraData_UnequipItem
0x493423: mov     ebx, [ebx+4]
0x493426: jmp     loc_4937B5
0x49342B: cmp     dword ptr [edi+4], 0
0x49342F: jle     short loc_493423
0x493431: cmp     [esp+3Ch+var_25], 0
0x493436: jz      short loc_493446
0x493438: mov     ecx, [edi+8]
0x49343B: mov     edx, [ecx]
0x49343D: mov     eax, [edx+78h]
0x493440: call    eax
0x493442: test    al, al
0x493444: jnz     short loc_493423
0x493446: mov     eax, [edi+8]
0x493449: mov     esi, [edi+4]
0x49344C: push    eax
0x49344D: mov     [esp+40h+var_24], eax
0x493451: call    sub_470520
0x493456: imul    eax, esi
0x493459: mov     ecx, [ebp+4]; this
0x49345C: mov     [esp+40h+var_14], eax
0x493460: add     esp, 4
0x493463: fild    [esp+3Ch+var_14]
0x493467: xor     esi, esi
0x493469: test    ecx, ecx
0x49346B: mov     [esp+3Ch+var_26], 0
0x493470: fadd    [esp+3Ch+var_18]
0x493474: fstp    [esp+3Ch+var_18]
0x493478: jz      short loc_4934A0
0x49347A: call    TESObjectREFR_GetContainer
0x49347F: test    eax, eax
0x493481: jz      short loc_4934A0
0x493483: mov     ecx, [ebp+4]; this
0x493486: test    ecx, ecx
0x493488: jz      short loc_493491
0x49348A: call    TESObjectREFR_GetContainer
0x49348F: jmp     short loc_493493
0x493491: xor     eax, eax
0x493493: mov     ecx, [edi+8]
0x493496: push    ecx
0x493497: mov     ecx, eax
0x493499: call    TESContainer_GetFormCount
0x49349E: mov     esi, eax
0x4934A0: mov     eax, [edi+4]
0x4934A3: add     eax, esi
0x4934A5: mov     esi, [edi]
0x4934A7: test    esi, esi
0x4934A9: mov     [esp+3Ch+var_14], eax
0x4934AD: jz      loc_4936D8
0x4934B3: cmp     dword ptr [esi], 0
0x4934B6: jz      loc_4936D8
0x4934BC: lea     esp, [esp+0]
0x4934C0: mov     ebp, [esi]
0x4934C2: test    ebp, ebp
0x4934C4: jz      loc_493555
0x4934CA: cmp     [esp+3Ch+var_26], 0
0x4934CF: jnz     loc_493555
0x4934D5: mov     ecx, ebp
0x4934D7: call    ExtraDataList_GetExtraCount
0x4934DC: cmp     ax, 1
0x4934E0: jge     short loc_4934FA
0x4934E2: mov     esi, [esi+4]
0x4934E5: test    esi, esi
0x4934E7: jnz     short loc_4934C0
0x4934E9: mov     eax, [esp+3Ch+arg_4]
0x4934ED: push    esi
0x4934EE: push    1
0x4934F0: push    esi
0x4934F1: push    esi
0x4934F2: push    eax
0x4934F3: push    esi
0x4934F4: push    esi
0x4934F5: jmp     loc_493789
0x4934FA: mov     ecx, ebp
0x4934FC: call    BaseExtraList_Count
0x493501: cmp     eax, 1
0x493504: jnb     loc_493599
0x49350A: mov     eax, [esi+4]
0x49350D: test    eax, eax
0x49350F: jz      short loc_493526
0x493511: mov     edx, [eax+4]
0x493514: mov     [esi+4], edx
0x493517: mov     ecx, [eax]
0x493519: push    eax
0x49351A: mov     [esi], ecx
0x49351C: call    FormHeapFree
0x493521: add     esp, 4
0x493524: jmp     short loc_49352C
0x493526: mov     dword ptr [esi], 0
0x49352C: cmp     dword ptr [esi+4], 0
0x493530: jnz     loc_4936C9
0x493536: cmp     dword ptr [esi], 0
0x493539: jnz     loc_4936C9
0x49353F: mov     ecx, esi
0x493541: call    BSSimpleList_Clear
0x493546: push    esi
0x493547: call    FormHeapFree
0x49354C: add     esp, 4
0x49354F: mov     dword ptr [edi], 0
0x493555: cmp     [esp+3Ch+var_14], 0
0x49355A: jle     loc_4937B1
0x493560: mov     edx, [esp+3Ch+arg_4]
0x493564: mov     eax, [esp+3Ch+var_14]
0x493568: mov     ecx, [esp+3Ch+arg_8]
0x49356C: mov     esi, [esp+3Ch+var_20]
0x493570: push    0
0x493572: push    1
0x493574: push    0
0x493576: push    0
0x493578: push    edx
0x493579: mov     edx, [esp+50h+var_24]
0x49357D: push    0
0x49357F: push    0
0x493581: push    eax
0x493582: mov     eax, [esp+5Ch+arg_0]
0x493586: push    ecx
0x493587: push    edx
0x493588: push    eax
0x493589: mov     ecx, esi
0x49358B: call    ContainerExtraData_RemoveForm
0x493590: mov     ebx, [esi]
0x493592: mov     ebp, esi
0x493594: jmp     loc_4937B5
0x493599: xor     eax, eax
0x49359B: jmp     short loc_4935A0
0x49359D: align 10h
0x4935A0: cmp     dword ptr [esi], 0
0x4935A3: jz      short loc_4935A8
0x4935A5: add     eax, 1
0x4935A8: mov     esi, [esi+4]
0x4935AB: test    esi, esi
0x4935AD: jnz     short loc_4935A0
0x4935AF: cmp     eax, 1
0x4935B2: ja      short loc_4935B9
0x4935B4: mov     [esp+3Ch+var_26], 1
0x4935B9: mov     edi, [esp+3Ch+arg_0]
0x4935BD: mov     edx, [edi]
0x4935BF: mov     eax, [edx+190h]
0x4935C5: mov     ecx, edi
0x4935C7: call    eax
0x4935C9: test    al, al
0x4935CB: mov     ecx, edi; this
0x4935CD: jz      short loc_4935DB
0x4935CF: mov     edx, [edi]
0x4935D1: mov     eax, [edx+170h]
0x4935D7: call    eax
0x4935D9: jmp     short loc_4935E0
0x4935DB: call    TESObjectREFR_GetOwner
0x4935E0: cmp     byte ptr [esp+3Ch+arg_8], 0
0x4935E5: mov     esi, eax
0x4935E7: jnz     short loc_4935F0
0x4935E9: cmp     [esp+3Ch+arg_C], 0
0x4935EE: jz      short loc_493628
0x4935F0: mov     ebx, [esp+3Ch+var_24]
0x4935F4: push    ebx
0x4935F5: call    sub_469980
0x4935FA: add     esp, 4
0x4935FD: test    al, al
0x4935FF: jnz     short loc_49362C
0x493601: push    esi
0x493602: mov     ecx, edi
0x493604: call    sub_4DE880
0x493609: test    al, al
0x49360B: jnz     short loc_49362C
0x49360D: cmp     byte ptr [ebx+4], 22h ; '"'
0x493611: jz      short loc_49362C
0x493613: mov     ecx, ebp
0x493615: call    ExtraDataList_GetOwner
0x49361A: test    eax, eax
0x49361C: jnz     short loc_49366E
0x49361E: push    esi
0x49361F: mov     ecx, ebp
0x493621: call    ExtraDataList__SetOrRemoveExtraOwnership
0x493626: jmp     short loc_49366E
0x493628: mov     ebx, [esp+3Ch+var_24]
0x49362C: cmp     [esp+3Ch+arg_10], 0
0x493631: jz      short loc_49366E
0x493633: mov     ecx, ebp
0x493635: call    BaseExtraList_Count
0x49363A: mov     ecx, ebp
0x49363C: mov     esi, eax
0x49363E: call    ExtraDataList_GetOwner
0x493643: test    eax, eax
0x493645: jz      short loc_493667
0x493647: mov     ecx, ebp
0x493649: call    ExtraDataList_GetExtraCount
0x49364E: cmp     ax, 1
0x493652: jle     short loc_493659
0x493654: cmp     esi, 2
0x493657: jle     short loc_49365E
0x493659: cmp     esi, 1
0x49365C: jg      short loc_493667
0x49365E: mov     ecx, ebp
0x493660: call    ExtraDataList_RemoveOwner
0x493665: jmp     short loc_4936AB
0x493667: mov     ecx, ebp
0x493669: call    ExtraDataList_RemoveOwner
0x49366E: test    ebp, ebp
0x493670: jz      short loc_4936AB
0x493672: mov     ecx, ebp
0x493674: call    ExtraDataList_GetExtraCount
0x493679: mov     edx, [esp+3Ch+arg_4]
0x49367D: push    0
0x49367F: push    1
0x493681: push    0
0x493683: push    0
0x493685: movsx   ecx, ax
0x493688: sub     [esp+4Ch+var_14], ecx
0x49368C: push    edx
0x49368D: push    0
0x49368F: push    ebp
0x493690: mov     ecx, ebp
0x493692: call    ExtraDataList_GetExtraCount
0x493697: mov     ecx, [esp+58h+arg_8]
0x49369B: movsx   eax, ax
0x49369E: push    eax
0x49369F: push    ecx
0x4936A0: mov     ecx, [esp+60h+var_20]
0x4936A4: push    ebx
0x4936A5: push    edi
0x4936A6: call    ContainerExtraData_RemoveForm
0x4936AB: mov     edx, [esp+3Ch+var_24]
0x4936AF: mov     ecx, [esp+3Ch+var_20]
0x4936B3: mov     ebx, [ecx]
0x4936B5: push    0
0x4936B7: push    1
0x4936B9: push    edx
0x4936BA: call    ContainerExtraData_GetEntryForForm
0x4936BF: mov     edi, eax
0x4936C1: test    edi, edi
0x4936C3: jz      loc_493555
0x4936C9: mov     esi, [edi]
0x4936CB: test    esi, esi
0x4936CD: jnz     loc_4934C0
0x4936D3: jmp     loc_493555
0x4936D8: mov     ecx, [esp+3Ch+arg_0]
0x4936DC: mov     edx, [ecx]
0x4936DE: mov     eax, [edx+190h]
0x4936E4: xor     esi, esi
0x4936E6: call    eax
0x4936E8: test    al, al
0x4936EA: jz      short loc_4936FE
0x4936EC: mov     ebx, [esp+3Ch+arg_0]
0x4936F0: mov     edx, [ebx]
0x4936F2: mov     eax, [edx+170h]
0x4936F8: mov     ecx, ebx
0x4936FA: call    eax
0x4936FC: jmp     short loc_49370B
0x4936FE: mov     ecx, [esp+3Ch+arg_0]; this
0x493702: call    TESObjectREFR_GetOwner
0x493707: mov     ebx, [esp+3Ch+arg_0]
0x49370B: cmp     byte ptr [esp+3Ch+arg_8], 0
0x493710: mov     ebp, eax
0x493712: jnz     short loc_49371B
0x493714: cmp     [esp+3Ch+arg_C], 0
0x493719: jz      short loc_493779
0x49371B: mov     ecx, [esp+3Ch+var_24]
0x49371F: push    ecx
0x493720: call    sub_469980
0x493725: add     esp, 4
0x493728: test    al, al
0x49372A: jnz     short loc_493779
0x49372C: push    ebp
0x49372D: mov     ecx, ebx
0x49372F: call    sub_4DE880
0x493734: test    al, al
0x493736: jnz     short loc_493779
0x493738: mov     edx, [esp+3Ch+var_24]
0x49373C: cmp     byte ptr [edx+4], 22h ; '"'
0x493740: jz      short loc_493779
0x493742: push    14h; Size
0x493744: call    FormHeapAlloc
0x493749: add     esp, 4
0x49374C: mov     [esp+3Ch+var_14], eax
0x493750: test    eax, eax
0x493752: mov     [esp+3Ch+var_4], 1
0x49375A: jz      short loc_493765
0x49375C: mov     ecx, eax
0x49375E: call    ExtraDataList_constr
0x493763: jmp     short loc_493767
0x493765: xor     eax, eax
0x493767: push    ebp
0x493768: mov     ecx, eax
0x49376A: mov     [esp+40h+var_4], 0FFFFFFFFh
0x493772: mov     esi, eax
0x493774: call    ExtraDataList__SetOrRemoveExtraOwnership
0x493779: mov     eax, [esp+3Ch+arg_4]
0x49377D: push    0
0x49377F: push    1
0x493781: push    0
0x493783: push    0
0x493785: push    eax
0x493786: push    0
0x493788: push    esi
0x493789: mov     ecx, [edi+4]
0x49378C: mov     edx, [esp+58h+arg_8]
0x493790: mov     eax, [esp+58h+var_24]
0x493794: mov     esi, [esp+58h+var_20]
0x493798: push    ecx
0x493799: mov     ecx, [esp+5Ch+arg_0]
0x49379D: push    edx
0x49379E: push    eax
0x49379F: push    ecx
0x4937A0: mov     ecx, esi
0x4937A2: call    ContainerExtraData_RemoveForm
0x4937A7: mov     ebx, [esi]
0x4937A9: mov     ebp, esi
0x4937AB: jmp     short loc_4937B5
0x4937AD: mov     ebx, eax
0x4937AF: jmp     short loc_4937B5
0x4937B1: mov     ebp, [esp+3Ch+var_20]
0x4937B5: test    ebx, ebx
0x4937B7: jnz     loc_493343
0x4937BD: fld     [esp+3Ch+var_18]
0x4937C1: mov     ecx, [esp+3Ch+var_C]
0x4937C5: mov     large fs:0, ecx
0x4937CC: pop     ecx
0x4937CD: pop     edi
0x4937CE: pop     esi
0x4937CF: pop     ebp
0x4937D0: pop     ebx
0x4937D1: add     esp, 28h
0x4937D4: retn    14h
