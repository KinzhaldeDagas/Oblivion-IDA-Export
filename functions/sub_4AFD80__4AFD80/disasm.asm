0x4AFD80: push    0FFFFFFFFh
0x4AFD82: push    offset SEH_4AFD80
0x4AFD87: mov     eax, large fs:0
0x4AFD8D: push    eax
0x4AFD8E: sub     esp, 1Ch
0x4AFD91: push    ebx
0x4AFD92: push    ebp
0x4AFD93: push    esi
0x4AFD94: push    edi
0x4AFD95: mov     eax, ds:0B30AACh
0x4AFD9A: xor     eax, esp
0x4AFD9C: push    eax
0x4AFD9D: lea     eax, [esp+3Ch+var_C]
0x4AFDA1: mov     large fs:0, eax
0x4AFDA7: mov     esi, ecx
0x4AFDA9: mov     [esp+3Ch+var_20], esi
0x4AFDAD: push    0DCh ; 'Ü'; Size
0x4AFDB2: call    FormHeapAlloc
0x4AFDB7: add     esp, 4
0x4AFDBA: mov     [esp+3Ch+var_24], eax
0x4AFDBE: xor     ecx, ecx
0x4AFDC0: cmp     eax, ecx
0x4AFDC2: mov     [esp+3Ch+var_4], ecx
0x4AFDC6: jz      short loc_4AFDD8
0x4AFDC8: push    ecx
0x4AFDC9: mov     ecx, eax; this
0x4AFDCB: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4AFDD0: mov     ebp, eax
0x4AFDD2: mov     [esp+3Ch+var_28], ebp
0x4AFDD6: jmp     short loc_4AFDDE
0x4AFDD8: mov     [esp+3Ch+var_28], ecx
0x4AFDDC: mov     ebp, ecx
0x4AFDDE: mov     eax, [esi]
0x4AFDE0: mov     edx, [eax+0D4h]
0x4AFDE6: mov     ecx, esi
0x4AFDE8: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4AFDF0: call    edx
0x4AFDF2: push    eax; Src
0x4AFDF3: mov     ecx, ebp
0x4AFDF5: call    NiObjectNET_SetName
0x4AFDFA: mov     edi, [esp+3Ch+arg_0]
0x4AFDFE: mov     ecx, edi
0x4AFE00: call    sub_4D7A50
0x4AFE05: test    al, al
0x4AFE07: jnz     loc_4AFFA7
0x4AFE0D: mov     eax, [edi+8]
0x4AFE10: shr     eax, 0Dh
0x4AFE13: test    al, 1
0x4AFE15: jnz     loc_4AFFA7
0x4AFE1B: mov     ecx, ds:0B33B00h
0x4AFE21: call    sub_45A500
0x4AFE26: test    al, al
0x4AFE28: jnz     loc_4AFFA7
0x4AFE2E: lea     ecx, [esp+3Ch+var_1C]
0x4AFE32: mov     byte ptr [esp+3Ch+var_24], al
0x4AFE36: call    TESContainer_constr
0x4AFE3B: lea     ecx, [edi+44h]
0x4AFE3E: mov     [esp+3Ch+var_4], 1
0x4AFE46: call    sub_420760
0x4AFE4B: mov     ecx, ds:0B333C4h
0x4AFE51: mov     ebx, eax
0x4AFE53: call    Actor_GetLevel
0x4AFE58: movzx   eax, ax
0x4AFE5B: add     eax, ebx
0x4AFE5D: cmp     eax, 1
0x4AFE60: jge     short loc_4AFE67
0x4AFE62: mov     eax, 1
0x4AFE67: lea     ecx, [esp+38h+anonymous_0]
0x4AFE6B: push    ecx
0x4AFE6C: push    1; int
0x4AFE6E: push    eax; int
0x4AFE6F: lea     ecx, [esi+24h]; this
0x4AFE72: call    TESLeveledList_CalcLeveledForm
0x4AFE77: push    0
0x4AFE79: lea     ecx, [esp+40h+var_1C]
0x4AFE7D: call    TESContainer_GetNthForm
0x4AFE82: mov     esi, eax
0x4AFE84: push    esi
0x4AFE85: lea     ecx, [esp+40h+var_1C]
0x4AFE89: call    TESContainer_GetFormCount
0x4AFE8E: test    esi, esi
0x4AFE90: movzx   ebx, ax
0x4AFE93: mov     [esp+3Ch+arg_0], 0
0x4AFE9B: jz      loc_4AFF8A
0x4AFEA1: test    bx, bx
0x4AFEA4: jz      loc_4AFF8A
0x4AFEAA: cmp     [esp+3Ch+arg_0], 0FFFFFFFFh
0x4AFEAF: ja      loc_4AFF8A
0x4AFEB5: push    0; int
0x4AFEB7: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4AFEBC: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4AFEC1: push    0; int
0x4AFEC3: push    esi; void *
0x4AFEC4: call    OblivionDynamicCast
0x4AFEC9: mov     ebp, eax
0x4AFECB: add     esp, 14h
0x4AFECE: test    ebp, ebp
0x4AFED0: jz      loc_4AFF59
0x4AFED6: test    bx, bx
0x4AFED9: jbe     short loc_4AFF59
0x4AFEDB: push    0
0x4AFEDD: mov     ecx, edi; this
0x4AFEDF: call    TESObjectREFR_GetWorldSpace
0x4AFEE4: push    eax
0x4AFEE5: mov     ecx, edi; this
0x4AFEE7: call    TESObjectREFR_GetParentCell
0x4AFEEC: mov     edx, [edi]
0x4AFEEE: push    eax
0x4AFEEF: lea     eax, [edi+20h]
0x4AFEF2: push    eax
0x4AFEF3: mov     eax, [edx+174h]
0x4AFEF9: mov     ecx, edi
0x4AFEFB: call    eax
0x4AFEFD: mov     ecx, ds:0B33A98h
0x4AFF03: push    eax
0x4AFF04: push    ebp
0x4AFF05: call    TESDataHandler_PlaceObjectRef
0x4AFF0A: mov     esi, eax
0x4AFF0C: test    esi, esi
0x4AFF0E: jz      short loc_4AFF4E
0x4AFF10: mov     edx, [edi]
0x4AFF12: mov     eax, [edx+0ECh]
0x4AFF18: mov     ecx, edi
0x4AFF1A: call    eax
0x4AFF1C: push    ecx
0x4AFF1D: mov     ecx, esi
0x4AFF1F: fstp    [esp+40h+var_40]; float
0x4AFF22: call    sub_4DB520
0x4AFF27: mov     ecx, [esp+3Ch+var_20]
0x4AFF2B: mov     eax, [ecx+40h]
0x4AFF2E: mov     edx, [esi]
0x4AFF30: push    eax
0x4AFF31: mov     eax, [edx+12Ch]
0x4AFF37: mov     ecx, esi
0x4AFF39: call    eax
0x4AFF3B: push    1
0x4AFF3D: mov     ecx, esi
0x4AFF3F: call    sub_4D7A90
0x4AFF44: add     [esp+3Ch+arg_0], 1
0x4AFF49: mov     byte ptr [esp+3Ch+var_24], 1
0x4AFF4E: add     ebx, 0FFFFh
0x4AFF54: test    bx, bx
0x4AFF57: ja      short loc_4AFEDB
0x4AFF59: push    0
0x4AFF5B: lea     ecx, [esp+40h+var_1C]
0x4AFF5F: call    TESContainer_RemoveNthEntry
0x4AFF64: push    0
0x4AFF66: lea     ecx, [esp+40h+var_1C]
0x4AFF6A: call    TESContainer_GetNthForm
0x4AFF6F: mov     esi, eax
0x4AFF71: push    esi
0x4AFF72: lea     ecx, [esp+40h+var_1C]
0x4AFF76: call    TESContainer_GetFormCount
0x4AFF7B: test    esi, esi
0x4AFF7D: mov     ebp, [esp+3Ch+var_28]
0x4AFF81: movzx   ebx, ax
0x4AFF84: jnz     loc_4AFEA1
0x4AFF8A: lea     ecx, [esp+3Ch+var_1C]
0x4AFF8E: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4AFF96: call    TESContainer_destr
0x4AFF9B: mov     ecx, [esp+3Ch+var_24]
0x4AFF9F: push    ecx
0x4AFFA0: mov     ecx, edi
0x4AFFA2: call    sub_4D7A90
0x4AFFA7: mov     eax, ebp
0x4AFFA9: mov     ecx, [esp+3Ch+var_C]
0x4AFFAD: mov     large fs:0, ecx
0x4AFFB4: pop     ecx
0x4AFFB5: pop     edi
0x4AFFB6: pop     esi
0x4AFFB7: pop     ebp
0x4AFFB8: pop     ebx
0x4AFFB9: add     esp, 28h
0x4AFFBC: retn    4
