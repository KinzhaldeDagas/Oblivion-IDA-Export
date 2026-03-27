0x4CFAF0: sub     esp, 24h
0x4CFAF3: mov     eax, ds:0B33B00h
0x4CFAF8: push    ebx
0x4CFAF9: mov     ebx, ecx
0x4CFAFB: mov     ecx, [eax+18h]
0x4CFAFE: push    ebp
0x4CFAFF: shr     ecx, 0Bh
0x4CFB02: test    cl, 1
0x4CFB05: push    esi
0x4CFB06: push    edi
0x4CFB07: mov     [esp+34h+var_1C], ebx
0x4CFB0B: jnz     loc_4CFE58
0x4CFB11: lea     ecx, [ebx+28h]
0x4CFB14: call    ExtraDataList?_GetDetachTime
0x4CFB19: mov     edi, eax
0x4CFB1B: test    edi, edi
0x4CFB1D: jz      loc_4CFE58
0x4CFB23: cmp     edi, 0FFFFFFFFh
0x4CFB26: mov     byte ptr [esp+34h+var_24+3], 0
0x4CFB2B: jnz     short loc_4CFB34
0x4CFB2D: mov     byte ptr [esp+34h+var_24+3], 1
0x4CFB32: jmp     short loc_4CFB83
0x4CFB34: mov     ecx, offset TimeGlobals
0x4CFB39: call    TimeGlobals_GetGameDaysPassed
0x4CFB3E: lea     esi, [eax+eax*2]
0x4CFB41: add     esi, esi
0x4CFB43: add     esi, esi
0x4CFB45: mov     ecx, offset TimeGlobals
0x4CFB4A: add     esi, esi
0x4CFB4C: call    TimeGlobals_GetGameHour
0x4CFB51: fnstcw  word ptr [esp+34h+var_20]
0x4CFB55: movzx   eax, word ptr [esp+34h+var_20]
0x4CFB5A: or      eax, 0C00h
0x4CFB5F: mov     [esp+34h+a4], eax
0x4CFB63: fldcw   word ptr [esp+34h+a4]
0x4CFB67: fistp   qword ptr [esp+34h+a4]
0x4CFB6B: mov     edx, [esp+34h+a4]
0x4CFB6F: add     esi, edx
0x4CFB71: sub     esi, edi
0x4CFB73: cmp     esi, ds:0B35C1Ch
0x4CFB79: fldcw   word ptr [esp+34h+var_20]
0x4CFB7D: jbe     loc_4CFE35
0x4CFB83: mov     ecx, ebx
0x4CFB85: call    sub_4CC660
0x4CFB8A: push    ebx; a2
0x4CFB8B: mov     ecx, offset stru_B35C80; this
0x4CFB90: call    sub_496EA0
0x4CFB95: lea     ebp, [ebx+48h]
0x4CFB98: test    ebp, ebp
0x4CFB9A: mov     [esp+34h+var_20], ebp
0x4CFB9E: jz      loc_4CFE2A
0x4CFBA4: jmp     short loc_4CFBAA
0x4CFBA6: mov     ebp, [esp+34h+var_20]
0x4CFBAA: cmp     dword ptr [ebp+4], 0
0x4CFBAE: jnz     short loc_4CFBBA
0x4CFBB0: cmp     dword ptr [ebp+0], 0
0x4CFBB4: jz      loc_4CFE2A
0x4CFBBA: cmp     byte ptr [esp+34h+var_24+3], 0
0x4CFBBF: mov     edi, [ebp+0]
0x4CFBC2: jz      short loc_4CFC09
0x4CFBC4: mov     eax, [edi+0Ch]
0x4CFBC7: mov     ecx, ds:0B33A98h
0x4CFBCD: push    eax; _DWORD
0x4CFBCE: call    TESDataHandler_IsFormIDCreated?
0x4CFBD3: test    al, al
0x4CFBD5: jz      short loc_4CFC09
0x4CFBD7: mov     eax, [edi]
0x4CFBD9: mov     edx, [eax+78h]
0x4CFBDC: mov     ecx, edi
0x4CFBDE: call    edx
0x4CFBE0: test    al, al
0x4CFBE2: jnz     short loc_4CFBFD
0x4CFBE4: mov     ecx, edi
0x4CFBE6: call    sub_4D9040
0x4CFBEB: test    al, al
0x4CFBED: jnz     short loc_4CFBFD
0x4CFBEF: mov     eax, [edi]
0x4CFBF1: mov     edx, [eax+8Ch]
0x4CFBF7: push    1
0x4CFBF9: mov     ecx, edi
0x4CFBFB: call    edx
0x4CFBFD: mov     eax, [ebp+4]
0x4CFC00: mov     [esp+34h+var_20], eax
0x4CFC04: jmp     loc_4CFE1F
0x4CFC09: push    0; int
0x4CFC0B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4CFC10: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4CFC15: push    0; int
0x4CFC17: push    edi; void *
0x4CFC18: call    OblivionDynamicCast
0x4CFC1D: mov     esi, eax
0x4CFC1F: add     esp, 14h
0x4CFC22: test    esi, esi
0x4CFC24: jz      loc_4CFE60
0x4CFC2A: mov     ecx, esi
0x4CFC2C: call    sub_5E1D70
0x4CFC31: test    al, al
0x4CFC33: mov     edx, [esi]
0x4CFC35: push    0
0x4CFC37: mov     ecx, esi
0x4CFC39: jz      loc_4CFD5A
0x4CFC3F: mov     eax, [edx+20Ch]
0x4CFC45: push    0; a3
0x4CFC47: push    1; a2
0x4CFC49: call    eax
0x4CFC4B: lea     ecx, [esi+44h]
0x4CFC4E: call    sub_420480
0x4CFC53: mov     ebp, eax
0x4CFC55: test    ebp, ebp
0x4CFC57: jz      short loc_4CFCC2
0x4CFC59: lea     esp, [esp+0]
0x4CFC60: mov     ecx, ebp
0x4CFC62: call    BSSimpleList_IsEmpty
0x4CFC67: test    al, al
0x4CFC69: jnz     short loc_4CFCBA
0x4CFC6B: mov     ebx, [ebp+0]
0x4CFC6E: push    0
0x4CFC70: lea     ecx, [ebx+44h]
0x4CFC73: call    sub_4203E0
0x4CFC78: mov     edx, [ebx]
0x4CFC7A: mov     eax, [edx+78h]
0x4CFC7D: mov     ecx, ebx
0x4CFC7F: call    eax
0x4CFC81: test    al, al
0x4CFC83: jnz     short loc_4CFC8C
0x4CFC85: mov     ecx, ebx
0x4CFC87: call    sub_4D6640
0x4CFC8C: mov     eax, [ebp+4]
0x4CFC8F: test    eax, eax
0x4CFC91: jz      short loc_4CFCAD
0x4CFC93: mov     ecx, [eax+4]
0x4CFC96: mov     [ebp+4], ecx
0x4CFC99: mov     edx, [eax]
0x4CFC9B: push    eax
0x4CFC9C: mov     [ebp+0], edx
0x4CFC9F: call    FormHeapFree
0x4CFCA4: mov     ebx, [esp+38h+var_1C]
0x4CFCA8: add     esp, 4
0x4CFCAB: jmp     short loc_4CFC60
0x4CFCAD: mov     ebx, [esp+34h+var_1C]
0x4CFCB1: mov     dword ptr [ebp+0], 0
0x4CFCB8: jmp     short loc_4CFC60
0x4CFCBA: lea     ecx, [esi+44h]
0x4CFCBD: call    sub_4204A0
0x4CFCC2: mov     eax, [esi]
0x4CFCC4: mov     edx, [eax+0F4h]
0x4CFCCA: lea     ecx, [esp+34h+a4]
0x4CFCCE: push    ecx
0x4CFCCF: mov     ecx, esi
0x4CFCD1: call    edx
0x4CFCD3: mov     ecx, esi
0x4CFCD5: call    sub_5E1F60
0x4CFCDA: cmp     eax, ebx
0x4CFCDC: jz      short loc_4CFD08
0x4CFCDE: mov     ecx, esi
0x4CFCE0: call    sub_5E1F40
0x4CFCE5: mov     ecx, ebx; this
0x4CFCE7: mov     edx, eax
0x4CFCE9: call    TESObjectCELL_GetWorldSpace
0x4CFCEE: cmp     edx, eax
0x4CFCF0: jnz     loc_4CFDFB
0x4CFCF6: lea     eax, [esp+34h+a4]
0x4CFCFA: push    eax; a4
0x4CFCFB: call    sub_4CC540
0x4CFD00: test    al, al
0x4CFD02: jz      loc_4CFDFB
0x4CFD08: mov     ecx, [esp+34h+a4]
0x4CFD0C: mov     edx, [esp+34h+a4+4]
0x4CFD10: sub     esp, 0Ch
0x4CFD13: mov     eax, esp
0x4CFD15: mov     [eax], ecx
0x4CFD17: mov     ecx, [esp+40h+var_10]
0x4CFD1B: mov     [eax+4], edx
0x4CFD1E: mov     [eax+8], ecx
0x4CFD21: mov     ecx, esi; this
0x4CFD23: call    TESObjectREFR_SetPosition
0x4CFD28: mov     edx, [esi]
0x4CFD2A: mov     edx, [edx+0F0h]
0x4CFD30: lea     eax, [esp+34h+var_C]
0x4CFD34: push    eax
0x4CFD35: mov     ecx, esi
0x4CFD37: call    edx
0x4CFD39: mov     edx, [eax]
0x4CFD3B: sub     esp, 0Ch
0x4CFD3E: mov     ecx, esp
0x4CFD40: mov     [ecx], edx
0x4CFD42: mov     edx, [eax+4]
0x4CFD45: mov     eax, [eax+8]
0x4CFD48: mov     [ecx+4], edx
0x4CFD4B: mov     [ecx+8], eax
0x4CFD4E: mov     ecx, esi
0x4CFD50: call    sub_4D89A0
0x4CFD55: jmp     loc_4CFDFB
0x4CFD5A: mov     eax, [edx+198h]
0x4CFD60: call    eax
0x4CFD62: test    al, al
0x4CFD64: jz      loc_4CFDFF
0x4CFD6A: mov     edx, [esi]
0x4CFD6C: mov     eax, [edx+78h]
0x4CFD6F: mov     ecx, esi
0x4CFD71: call    eax
0x4CFD73: test    al, al
0x4CFD75: jnz     short loc_4CFD89
0x4CFD77: mov     ecx, esi
0x4CFD79: call    sub_4D9040
0x4CFD7E: test    al, al
0x4CFD80: jnz     short loc_4CFD89
0x4CFD82: mov     ecx, esi
0x4CFD84: call    sub_4D6640
0x4CFD89: lea     ebx, [esi+44h]
0x4CFD8C: mov     ecx, ebx
0x4CFD8E: call    sub_420480
0x4CFD93: mov     esi, eax
0x4CFD95: test    esi, esi
0x4CFD97: jz      short loc_4CFDF7
0x4CFD99: lea     esp, [esp+0]
0x4CFDA0: mov     ecx, esi
0x4CFDA2: call    BSSimpleList_IsEmpty
0x4CFDA7: test    al, al
0x4CFDA9: jnz     short loc_4CFDF0
0x4CFDAB: mov     ebp, [esi]
0x4CFDAD: push    0
0x4CFDAF: lea     ecx, [ebp+44h]
0x4CFDB2: call    sub_4203E0
0x4CFDB7: mov     edx, [ebp+0]
0x4CFDBA: mov     eax, [edx+78h]
0x4CFDBD: mov     ecx, ebp
0x4CFDBF: call    eax
0x4CFDC1: test    al, al
0x4CFDC3: jnz     short loc_4CFDCC
0x4CFDC5: mov     ecx, ebp
0x4CFDC7: call    sub_4D6640
0x4CFDCC: mov     eax, [esi+4]
0x4CFDCF: test    eax, eax
0x4CFDD1: jz      short loc_4CFDE8
0x4CFDD3: mov     ecx, [eax+4]
0x4CFDD6: mov     [esi+4], ecx
0x4CFDD9: mov     edx, [eax]
0x4CFDDB: push    eax
0x4CFDDC: mov     [esi], edx
0x4CFDDE: call    FormHeapFree
0x4CFDE3: add     esp, 4
0x4CFDE6: jmp     short loc_4CFDA0
0x4CFDE8: mov     dword ptr [esi], 0
0x4CFDEE: jmp     short loc_4CFDA0
0x4CFDF0: mov     ecx, ebx
0x4CFDF2: call    sub_4204A0
0x4CFDF7: mov     ebx, [esp+34h+var_1C]
0x4CFDFB: mov     ebp, [esp+34h+var_20]
0x4CFDFF: lea     esi, [edi+44h]
0x4CFE02: push    esi
0x4CFE03: push    edi
0x4CFE04: call    sub_4F9EC0
0x4CFE09: push    80000000h
0x4CFE0E: push    esi
0x4CFE0F: push    edi
0x4CFE10: call    Script_AddEventToExtraScript
0x4CFE15: mov     ecx, [ebp+4]
0x4CFE18: add     esp, 14h
0x4CFE1B: mov     [esp+34h+var_20], ecx
0x4CFE1F: cmp     [esp+34h+var_20], 0
0x4CFE24: jnz     loc_4CFBA6
0x4CFE2A: push    ebx; a2
0x4CFE2B: mov     ecx, offset stru_B35C80; this
0x4CFE30: call    sub_496F50
0x4CFE35: mov     ecx, ds:0B33B00h
0x4CFE3B: call    sub_45A500
0x4CFE40: push    0
0x4CFE42: lea     ecx, [ebx+28h]
0x4CFE45: call    ExtraDataList?_SetDetachTime
0x4CFE4A: mov     edx, [ebx]
0x4CFE4C: mov     eax, [edx+44h]
0x4CFE4F: push    0E000000h
0x4CFE54: mov     ecx, ebx
0x4CFE56: call    eax
0x4CFE58: pop     edi
0x4CFE59: pop     esi
0x4CFE5A: pop     ebp
0x4CFE5B: pop     ebx
0x4CFE5C: add     esp, 24h
0x4CFE5F: retn
0x4CFE60: mov     eax, [edi]
0x4CFE62: mov     edx, [eax+170h]
0x4CFE68: mov     ecx, edi
0x4CFE6A: call    edx
0x4CFE6C: movzx   eax, byte ptr [eax+4]
0x4CFE70: sub     eax, 17h
0x4CFE73: jz      loc_4CFEFC
0x4CFE79: sub     eax, 2
0x4CFE7C: jz      short loc_4CFE95
0x4CFE7E: sub     eax, 6
0x4CFE81: jnz     loc_4CFF3C
0x4CFE87: push    0
0x4CFE89: mov     ecx, edi
0x4CFE8B: call    sub_46AA00
0x4CFE90: jmp     loc_4CFF3C
0x4CFE95: mov     eax, [edi+8]
0x4CFE98: shr     eax, 5
0x4CFE9B: test    al, 1
0x4CFE9D: jz      loc_4CFF3C
0x4CFEA3: mov     ecx, edi; this
0x4CFEA5: call    TESForm_GetQuestItem
0x4CFEAA: test    al, al
0x4CFEAC: jnz     loc_4CFF3C
0x4CFEB2: mov     edx, [edi]
0x4CFEB4: mov     eax, [edx+78h]
0x4CFEB7: mov     ecx, edi
0x4CFEB9: call    eax
0x4CFEBB: test    al, al
0x4CFEBD: jnz     short loc_4CFF3C
0x4CFEBF: mov     edx, [edi]
0x4CFEC1: mov     eax, [edx+170h]
0x4CFEC7: push    0; int
0x4CFEC9: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x4CFECE: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4CFED3: push    0; int
0x4CFED5: mov     ecx, edi
0x4CFED7: call    eax
0x4CFED9: push    eax; void *
0x4CFEDA: call    OblivionDynamicCast
0x4CFEDF: add     esp, 14h
0x4CFEE2: test    eax, eax
0x4CFEE4: jz      short loc_4CFF3C
0x4CFEE6: test    byte ptr [eax+7Ch], 2
0x4CFEEA: jz      short loc_4CFF3C
0x4CFEEC: mov     edx, [edi]
0x4CFEEE: mov     eax, [edx+8Ch]
0x4CFEF4: push    0
0x4CFEF6: mov     ecx, edi
0x4CFEF8: call    eax
0x4CFEFA: jmp     short loc_4CFF3C
0x4CFEFC: mov     ecx, edi
0x4CFEFE: call    TESObjectREFR__ShouldReferenceRespawn
0x4CFF03: test    al, al
0x4CFF05: jz      short loc_4CFF3C
0x4CFF07: mov     edx, [edi]
0x4CFF09: mov     eax, [edx+184h]
0x4CFF0F: push    0
0x4CFF11: mov     ecx, edi
0x4CFF13: call    eax
0x4CFF15: lea     esi, [edi+44h]
0x4CFF18: mov     ecx, esi; this
0x4CFF1A: call    ExtraDataList_GetContainerChanges
0x4CFF1F: test    eax, eax
0x4CFF21: jz      short loc_4CFF3C
0x4CFF23: mov     ecx, esi; this
0x4CFF25: call    ExtraDataList_GetContainerChanges
0x4CFF2A: mov     ecx, eax
0x4CFF2C: call    sub_4491B0
0x4CFF31: test    al, al
0x4CFF33: jnz     short loc_4CFF3C
0x4CFF35: mov     ecx, edi
0x4CFF37: call    sub_4DBE40
0x4CFF3C: mov     ecx, ds:0B33B00h
0x4CFF42: push    0
0x4CFF44: push    edi
0x4CFF45: call    sub_4533F0
0x4CFF4A: test    al, 8
0x4CFF4C: jz      loc_4CFDFF
0x4CFF52: test    al, 6
0x4CFF54: jnz     loc_4CFDFF
0x4CFF5A: mov     ecx, ds:0B33B00h
0x4CFF60: push    80000008h
0x4CFF65: push    edi
0x4CFF66: call    TESSaveLoadGame_ClearFormModifier
0x4CFF6B: mov     ecx, ds:0B33B00h
0x4CFF71: push    0
0x4CFF73: push    edi
0x4CFF74: call    sub_45BB30
0x4CFF79: jmp     loc_4CFDFF
