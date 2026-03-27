0x5CFB50: push    0FFFFFFFFh
0x5CFB52: push    offset ProcessSleepWaitMenu_SEH
0x5CFB57: mov     eax, large fs:0
0x5CFB5D: push    eax
0x5CFB5E: sub     esp, 10h
0x5CFB61: push    ebx
0x5CFB62: push    ebp
0x5CFB63: push    esi
0x5CFB64: push    edi
0x5CFB65: mov     eax, ds:0B30AACh
0x5CFB6A: xor     eax, esp
0x5CFB6C: push    eax; a3
0x5CFB6D: lea     eax, [esp+30h+var_C]
0x5CFB71: mov     large fs:0, eax
0x5CFB77: mov     ebx, [esp+30h+arg_0]
0x5CFB7B: xor     ebp, ebp
0x5CFB7D: cmp     ebx, ebp
0x5CFB7F: jnz     short loc_5CFB97
0x5CFB81: xor     eax, eax
0x5CFB83: mov     ecx, [esp+30h+var_C]
0x5CFB87: mov     large fs:0, ecx
0x5CFB8E: pop     ecx
0x5CFB8F: pop     edi
0x5CFB90: pop     esi
0x5CFB91: pop     ebp
0x5CFB92: pop     ebx
0x5CFB93: add     esp, 1Ch
0x5CFB96: retn
0x5CFB97: call    sub_5CE840
0x5CFB9C: mov     edi, eax
0x5CFB9E: cmp     edi, ebp
0x5CFBA0: jz      short loc_5CFBC2
0x5CFBA2: push    ebp; int
0x5CFBA3: push    offset ??_R0?AVRechargeMenu@@@8; struct TypeDescriptor *
0x5CFBA8: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5CFBAD: push    ebp; int
0x5CFBAE: mov     ecx, edi
0x5CFBB0: call    Tile_GetParentMenu
0x5CFBB5: push    eax; void *
0x5CFBB6: call    OblivionDynamicCast
0x5CFBBB: add     esp, 14h
0x5CFBBE: mov     esi, eax
0x5CFBC0: jmp     short loc_5CFBC4
0x5CFBC2: xor     esi, esi
0x5CFBC4: mov     ecx, ebx
0x5CFBC6: call    TESHealthForm_GetHealth
0x5CFBCB: test    eax, eax
0x5CFBCD: jnz     short loc_5CFBD8
0x5CFBCF: push    1
0x5CFBD1: mov     ecx, ebx
0x5CFBD3: call    sub_60D020
0x5CFBD8: cmp     esi, ebp
0x5CFBDA: jz      loc_5CFCC5
0x5CFBE0: fldz
0x5CFBE2: push    ecx
0x5CFBE3: fstp    [esp+34h+a2]; a3
0x5CFBE6: mov     ecx, edi; this
0x5CFBE8: push    0FAEh; a2
0x5CFBED: mov     [esi+44h], ebx
0x5CFBF0: call    Tile_SetFloat
0x5CFBF5: mov     [esp+30h+var_1C], ebp
0x5CFBF9: mov     [esp+30h+var_18], bp
0x5CFBFE: mov     [esp+30h+var_16], bp
0x5CFC03: mov     eax, [ebx+8]
0x5CFC06: mov     eax, [eax+4Ch]
0x5CFC09: cmp     eax, ebp
0x5CFC0B: mov     [esp+30h+var_4], ebp
0x5CFC0F: jnz     short loc_5CFC16
0x5CFC11: mov     eax, offset EmptyString
0x5CFC16: push    eax
0x5CFC17: push    offset aIcons; "Icons"
0x5CFC1C: lea     eax, [esp+38h+var_1C]
0x5CFC20: push    offset aSS_2; "%s\\%s"
0x5CFC25: push    eax; int
0x5CFC26: call    BSStringT_Static_Format
0x5CFC2B: mov     ecx, [esp+40h+var_1C]
0x5CFC2F: add     esp, 10h
0x5CFC32: push    ecx
0x5CFC33: push    0FAFh
0x5CFC38: mov     ecx, edi
0x5CFC3A: call    Tile_SetString
0x5CFC3F: mov     ecx, ebx
0x5CFC41: call    sub_488DF0
0x5CFC46: push    eax
0x5CFC47: push    0FB0h
0x5CFC4C: mov     ecx, edi
0x5CFC4E: call    Tile_SetString
0x5CFC53: mov     [esp+30h+var_14], ebp
0x5CFC57: mov     [esp+30h+var_10], bp
0x5CFC5C: mov     [esp+30h+var_E], bp
0x5CFC61: mov     ecx, ebx
0x5CFC63: mov     byte ptr [esp+30h+var_4], 1
0x5CFC68: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5CFC6D: push    eax
0x5CFC6E: call    Actor__GetSoulValueFromLevel
0x5CFC73: mov     [esi+4Ch], eax
0x5CFC76: mov     edx, ds:0B33498h
0x5CFC7C: push    edx
0x5CFC7D: push    eax; ArgList
0x5CFC7E: lea     eax, [esp+3Ch+var_14]
0x5CFC82: push    offset aDS_0; "%d %s"
0x5CFC87: push    eax; int
0x5CFC88: call    BSStringT_Static_Format
0x5CFC8D: mov     ebx, [esp+44h+var_14]
0x5CFC91: add     esp, 14h
0x5CFC94: push    ebx
0x5CFC95: push    0FB2h
0x5CFC9A: mov     ecx, edi
0x5CFC9C: call    Tile_SetString
0x5CFCA1: push    1
0x5CFCA3: mov     ecx, esi
0x5CFCA5: call    ??0?$NiTPointerListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@QAE@XZ; NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(void)
0x5CFCAA: push    ebp; char
0x5CFCAB: mov     ecx, esi; int
0x5CFCAD: call    EnableMenu
0x5CFCB2: push    ebx
0x5CFCB3: call    FormHeapFree
0x5CFCB8: mov     ecx, [esp+34h+var_1C]
0x5CFCBC: push    ecx
0x5CFCBD: call    FormHeapFree
0x5CFCC2: add     esp, 8
0x5CFCC5: mov     eax, edi
0x5CFCC7: mov     ecx, [esp+30h+var_C]
0x5CFCCB: mov     large fs:0, ecx
0x5CFCD2: pop     ecx
0x5CFCD3: pop     edi
0x5CFCD4: pop     esi
0x5CFCD5: pop     ebp
0x5CFCD6: pop     ebx
0x5CFCD7: add     esp, 1Ch
0x5CFCDA: retn
