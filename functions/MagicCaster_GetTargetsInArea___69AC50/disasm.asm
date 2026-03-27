0x69AC50: sub     esp, 10h
0x69AC53: cmp     [esp+10h+arg_14], 0
0x69AC58: push    ebx
0x69AC59: push    ebp
0x69AC5A: push    esi
0x69AC5B: push    edi
0x69AC5C: mov     [esp+20h+var_C], ecx
0x69AC60: jz      loc_69AF1D
0x69AC66: mov     ebp, [esp+20h+arg_0]
0x69AC6A: xor     ebx, ebx
0x69AC6C: test    ebp, ebp
0x69AC6E: jz      loc_69AF1D
0x69AC74: lea     esi, [ebp+0Ch]
0x69AC77: test    esi, esi
0x69AC79: jz      loc_69AF1D
0x69AC7F: nop
0x69AC80: cmp     dword ptr [esi+8], 0
0x69AC84: jnz     short loc_69AC8C
0x69AC86: cmp     dword ptr [esi+4], 0
0x69AC8A: jz      short loc_69ACBC
0x69AC8C: mov     edi, [esi+4]
0x69AC8F: test    edi, edi
0x69AC91: jz      short loc_69ACB0
0x69AC93: mov     eax, [esp+20h+arg_4]
0x69AC97: cmp     [edi+10h], eax
0x69AC9A: jnz     short loc_69ACB0
0x69AC9C: mov     ecx, edi
0x69AC9E: call    EffectItem_GetArea
0x69ACA3: cmp     eax, ebx
0x69ACA5: jle     short loc_69ACB0
0x69ACA7: mov     ecx, edi
0x69ACA9: call    EffectItem_GetArea
0x69ACAE: mov     ebx, eax
0x69ACB0: mov     esi, [esi+8]
0x69ACB3: test    esi, esi
0x69ACB5: jz      short loc_69ACBC
0x69ACB7: add     esi, 0FFFFFFFCh
0x69ACBA: jnz     short loc_69AC80
0x69ACBC: test    ebx, ebx
0x69ACBE: mov     [esp+20h+var_10], ebx
0x69ACC2: jz      loc_69AF1D
0x69ACC8: push    0; int
0x69ACCA: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x69ACCF: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x69ACD4: push    0; int
0x69ACD6: push    ebp; void *
0x69ACD7: call    OblivionDynamicCast
0x69ACDC: add     esp, 14h
0x69ACDF: test    eax, eax
0x69ACE1: jz      short loc_69ACEE
0x69ACE3: test    byte ptr [eax+40h], 10h
0x69ACE7: mov     byte ptr [esp+20h+arg_0], 1
0x69ACEC: jnz     short loc_69ACF3
0x69ACEE: mov     byte ptr [esp+20h+arg_0], 0
0x69ACF3: fild    [esp+20h+var_10]
0x69ACF7: mov     esi, [esp+20h+var_C]
0x69ACFB: mov     edx, [esi]
0x69ACFD: mov     eax, [edx+20h]
0x69AD00: fmul    dword ptr ds:0B37DB8h
0x69AD06: mov     ecx, esi
0x69AD08: fstp    [esp+20h+var_8]
0x69AD0C: call    eax
0x69AD0E: test    eax, eax
0x69AD10: jz      short loc_69AD2B
0x69AD12: mov     edx, [eax]
0x69AD14: mov     ecx, eax
0x69AD16: mov     eax, [edx+190h]
0x69AD1C: call    eax
0x69AD1E: test    al, al
0x69AD20: jz      short loc_69AD2B
0x69AD22: add     esi, 0FFFFFFA4h
0x69AD25: mov     [esp+20h+var_10], esi
0x69AD29: jmp     short loc_69AD33
0x69AD2B: mov     [esp+20h+var_10], 0
0x69AD33: push    0; a2
0x69AD35: mov     ecx, offset ActorProcessManager_ptr; this
0x69AD3A: call    sub_673A50
0x69AD3F: mov     ecx, eax; this
0x69AD41: call    sub_7616D0
0x69AD46: test    eax, eax
0x69AD48: mov     [esp+20h+arg_4], eax
0x69AD4C: jz      loc_69AE90
0x69AD52: jmp     short loc_69AD58
0x69AD54: mov     eax, [esp+20h+arg_4]
0x69AD58: mov     esi, [eax]
0x69AD5A: test    esi, esi
0x69AD5C: jz      loc_69AE90
0x69AD62: xor     edi, edi
0x69AD64: mov     edx, [esi]
0x69AD66: mov     eax, [edx+124h]
0x69AD6C: mov     ecx, esi
0x69AD6E: call    eax
0x69AD70: push    0; int
0x69AD72: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x69AD77: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x69AD7C: push    0; int
0x69AD7E: push    esi; void *
0x69AD7F: mov     [esp+34h+var_4], eax
0x69AD83: xor     bl, bl
0x69AD85: call    OblivionDynamicCast
0x69AD8A: mov     ebp, eax
0x69AD8C: mov     eax, [esp+34h+var_10]
0x69AD90: add     esp, 14h
0x69AD93: test    eax, eax
0x69AD95: jz      short loc_69AD9C
0x69AD97: cmp     ebp, eax
0x69AD99: setz    bl
0x69AD9C: cmp     [esp+20h+var_4], 0
0x69ADA1: jz      short loc_69AE17
0x69ADA3: test    bl, bl
0x69ADA5: jnz     short loc_69AE17
0x69ADA7: mov     edx, [esi]
0x69ADA9: mov     eax, [edx+154h]
0x69ADAF: mov     ecx, esi
0x69ADB1: call    eax
0x69ADB3: test    eax, eax
0x69ADB5: jz      short loc_69AE17
0x69ADB7: lea     ecx, [esp+20h+arg_8]
0x69ADBB: push    ecx
0x69ADBC: mov     ecx, esi
0x69ADBE: call    sub_4D7E30
0x69ADC3: fld     [esp+20h+var_8]
0x69ADC7: fcompp
0x69ADC9: fnstsw  ax
0x69ADCB: test    ah, 1
0x69ADCE: jnz     short loc_69AE17
0x69ADD0: test    ebp, ebp
0x69ADD2: jz      short loc_69ADDF
0x69ADD4: mov     ecx, ebp; this
0x69ADD6: call    Actor_IsGhost
0x69ADDB: test    al, al
0x69ADDD: jnz     short loc_69AE17
0x69ADDF: cmp     byte ptr [esp+20h+arg_0], 0
0x69ADE4: jnz     short loc_69AE0D
0x69ADE6: mov     edx, [esp+20h+arg_8]
0x69ADEA: mov     ecx, [esp+20h+arg_C]
0x69ADEE: push    ebp
0x69ADEF: sub     esp, 0Ch
0x69ADF2: mov     eax, esp
0x69ADF4: mov     [eax], edx
0x69ADF6: mov     edx, [esp+30h+arg_10]
0x69ADFA: mov     [eax+4], ecx
0x69ADFD: mov     ecx, [esp+30h+var_C]
0x69AE01: mov     [eax+8], edx
0x69AE04: call    sub_69A490
0x69AE09: test    al, al
0x69AE0B: jz      short loc_69AE17
0x69AE0D: mov     ecx, [esp+20h+arg_14]
0x69AE11: push    ebp
0x69AE12: call    BSSimpleList_PushFront
0x69AE17: test    edi, edi
0x69AE19: jz      short loc_69AE7D
0x69AE1B: mov     eax, [edi]
0x69AE1D: test    eax, eax
0x69AE1F: jz      short loc_69AE7D
0x69AE21: push    0; int
0x69AE23: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x69AE28: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x69AE2D: push    0; int
0x69AE2F: push    eax; void *
0x69AE30: call    OblivionDynamicCast
0x69AE35: mov     edi, [edi+4]
0x69AE38: mov     esi, eax
0x69AE3A: add     esp, 14h
0x69AE3D: test    esi, esi
0x69AE3F: jz      short loc_69AE7D
0x69AE41: mov     ecx, [esi+58h]
0x69AE44: test    ecx, ecx
0x69AE46: jz      short loc_69AE57
0x69AE48: mov     eax, [ecx]
0x69AE4A: mov     edx, [eax+8]
0x69AE4D: call    edx
0x69AE4F: test    eax, eax
0x69AE51: jz      loc_69AD64
0x69AE57: test    edi, edi
0x69AE59: jz      short loc_69AE7D
0x69AE5B: mov     eax, [edi]
0x69AE5D: push    0; int
0x69AE5F: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x69AE64: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x69AE69: push    0; int
0x69AE6B: push    eax; void *
0x69AE6C: call    OblivionDynamicCast
0x69AE71: mov     edi, [edi+4]
0x69AE74: mov     esi, eax
0x69AE76: add     esp, 14h
0x69AE79: test    esi, esi
0x69AE7B: jnz     short loc_69AE41
0x69AE7D: mov     eax, [esp+20h+arg_4]
0x69AE81: mov     eax, [eax+4]
0x69AE84: test    eax, eax
0x69AE86: mov     [esp+20h+arg_4], eax
0x69AE8A: jnz     loc_69AD54
0x69AE90: mov     ecx, ds:0B333C4h
0x69AE96: cmp     ecx, [esp+20h+var_10]
0x69AE9A: jz      loc_69AF1D
0x69AEA0: mov     edx, [ecx]
0x69AEA2: mov     eax, [edx+154h]
0x69AEA8: call    eax
0x69AEAA: test    eax, eax
0x69AEAC: jz      short loc_69AF1D
0x69AEAE: lea     ecx, [esp+20h+arg_8]
0x69AEB2: push    ecx
0x69AEB3: mov     ecx, ds:0B333C4h
0x69AEB9: call    sub_4D7E30
0x69AEBE: fld     [esp+20h+var_8]
0x69AEC2: fcompp
0x69AEC4: fnstsw  ax
0x69AEC6: test    ah, 1
0x69AEC9: jnz     short loc_69AF1D
0x69AECB: mov     ecx, ds:0B333C4h; this
0x69AED1: call    Actor_IsGhost
0x69AED6: test    al, al
0x69AED8: jnz     short loc_69AF1D
0x69AEDA: cmp     byte ptr [esp+20h+arg_0], al
0x69AEDE: jnz     short loc_69AF0D
0x69AEE0: mov     edx, ds:0B333C4h
0x69AEE6: mov     ecx, [esp+20h+arg_8]
0x69AEEA: push    edx
0x69AEEB: mov     edx, [esp+24h+arg_C]
0x69AEEF: sub     esp, 0Ch
0x69AEF2: mov     eax, esp
0x69AEF4: mov     [eax], ecx
0x69AEF6: mov     ecx, [esp+30h+arg_10]
0x69AEFA: mov     [eax+4], edx
0x69AEFD: mov     [eax+8], ecx
0x69AF00: mov     ecx, [esp+30h+var_C]
0x69AF04: call    sub_69A490
0x69AF09: test    al, al
0x69AF0B: jz      short loc_69AF1D
0x69AF0D: mov     edx, ds:0B333C4h
0x69AF13: mov     ecx, [esp+20h+arg_14]
0x69AF17: push    edx
0x69AF18: call    BSSimpleList_PushFront
0x69AF1D: pop     edi
0x69AF1E: pop     esi
0x69AF1F: pop     ebp
0x69AF20: pop     ebx
0x69AF21: add     esp, 10h
0x69AF24: retn    18h
