0x48C870: sub     esp, 18h
0x48C873: cmp     byte ptr [esp+18h+arg_8], 0
0x48C878: fld     dword ptr ds:0A3B888h
0x48C87E: push    esi
0x48C87F: fstp    [esp+1Ch+var_14]
0x48C883: push    edi
0x48C884: mov     edi, ecx
0x48C886: mov     [esp+20h+var_8], edi
0x48C88A: mov     [esp+20h+var_18], 0
0x48C892: jz      short loc_48C8DF
0x48C894: mov     eax, [esp+20h+arg_4]
0x48C898: push    0
0x48C89A: push    eax
0x48C89B: call    ContainerExtraData_GetEquippedInstance
0x48C8A0: mov     esi, eax
0x48C8A2: test    esi, esi
0x48C8A4: jz      short loc_48C8DF
0x48C8A6: mov     ecx, [esi]
0x48C8A8: mov     ecx, [ecx]
0x48C8AA: call    sub_41DF40
0x48C8AF: test    al, al
0x48C8B1: jz      short loc_48C8BD
0x48C8B3: pop     edi
0x48C8B4: mov     eax, esi
0x48C8B6: pop     esi
0x48C8B7: add     esp, 18h
0x48C8BA: retn    0Ch
0x48C8BD: mov     ecx, [esi]
0x48C8BF: test    ecx, ecx
0x48C8C1: jz      short loc_48C8C8
0x48C8C3: call    BSSimpleList_Clear
0x48C8C8: mov     edx, [esi]
0x48C8CA: push    edx
0x48C8CB: call    FormHeapFree
0x48C8D0: push    esi
0x48C8D1: mov     dword ptr [esi], 0
0x48C8D7: call    FormHeapFree
0x48C8DC: add     esp, 8
0x48C8DF: mov     ecx, [edi+4]; this
0x48C8E2: test    ecx, ecx
0x48C8E4: jz      short loc_48C8ED
0x48C8E6: call    TESObjectREFR_GetContainer
0x48C8EB: jmp     short loc_48C8EF
0x48C8ED: xor     eax, eax
0x48C8EF: push    ebx
0x48C8F0: add     eax, 8
0x48C8F3: push    ebp
0x48C8F4: mov     [esp+28h+var_10], eax
0x48C8F8: jz      loc_48CD2C
0x48C8FE: jmp     short loc_48C904
0x48C900: mov     eax, [esp+28h+var_10]
0x48C904: cmp     dword ptr [eax+4], 0
0x48C908: jnz     short loc_48C913
0x48C90A: cmp     dword ptr [eax], 0
0x48C90D: jz      loc_48CD2C
0x48C913: mov     eax, [eax]
0x48C915: mov     eax, [eax+4]
0x48C918: push    0; int
0x48C91A: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x48C91F: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48C924: push    0; int
0x48C926: push    eax; void *
0x48C927: call    OblivionDynamicCast
0x48C92C: mov     ebx, eax
0x48C92E: mov     eax, [edi]
0x48C930: add     esp, 14h
0x48C933: test    eax, eax
0x48C935: mov     dl, 1
0x48C937: jz      short loc_48C95A
0x48C939: lea     esp, [esp+0]
0x48C940: test    dl, dl
0x48C942: jz      short loc_48C986
0x48C944: mov     ecx, [eax]
0x48C946: test    ecx, ecx
0x48C948: jz      short loc_48C953
0x48C94A: cmp     [ecx+8], ebx
0x48C94D: jnz     short loc_48C953
0x48C94F: xor     dl, dl
0x48C951: jmp     short loc_48C956
0x48C953: mov     eax, [eax+4]
0x48C956: test    eax, eax
0x48C958: jnz     short loc_48C940
0x48C95A: xor     edi, edi
0x48C95C: xor     ebp, ebp
0x48C95E: test    edi, edi
0x48C960: jz      loc_48CA09
0x48C966: mov     eax, [edi]
0x48C968: test    eax, eax
0x48C96A: jz      short loc_48C98E
0x48C96C: mov     esi, [eax]
0x48C96E: test    esi, esi
0x48C970: jz      short loc_48C98E
0x48C972: mov     ecx, esi
0x48C974: call    ExtraDataList_GetOwner
0x48C979: test    eax, eax
0x48C97B: jz      short loc_48C98E
0x48C97D: mov     ecx, esi
0x48C97F: call    ExtraDataList_GetOwner
0x48C984: jmp     short loc_48C990
0x48C986: test    eax, eax
0x48C988: jz      short loc_48C95A
0x48C98A: mov     edi, [eax]
0x48C98C: jmp     short loc_48C95C
0x48C98E: xor     eax, eax
0x48C990: cmp     eax, [esp+28h+arg_0]
0x48C994: jz      short loc_48C9BB
0x48C996: cmp     dword ptr [edi+4], 0
0x48C99A: jle     short loc_48C9BB
0x48C99C: mov     esi, [edi]
0x48C99E: test    esi, esi
0x48C9A0: jz      short loc_48C9BB
0x48C9A2: mov     ecx, [esi]
0x48C9A4: test    ecx, ecx
0x48C9A6: jz      short loc_48C9BB
0x48C9A8: call    ExtraDataList_GetOwner
0x48C9AD: test    eax, eax
0x48C9AF: jz      short loc_48C9B4
0x48C9B1: add     ebp, 1
0x48C9B4: mov     esi, [esi+4]
0x48C9B7: test    esi, esi
0x48C9B9: jnz     short loc_48C9A2
0x48C9BB: mov     eax, [edi]
0x48C9BD: test    eax, eax
0x48C9BF: jz      short loc_48C9F0
0x48C9C1: mov     esi, [eax]
0x48C9C3: test    esi, esi
0x48C9C5: jz      short loc_48C9F0
0x48C9C7: mov     ecx, esi
0x48C9C9: call    ExtraDataList_GetOwner
0x48C9CE: test    eax, eax
0x48C9D0: jz      short loc_48C9F0
0x48C9D2: mov     ecx, esi
0x48C9D4: call    ExtraDataList_GetOwner
0x48C9D9: test    eax, eax
0x48C9DB: jz      short loc_48C9F0
0x48C9DD: mov     ecx, [esp+28h+var_10]
0x48C9E1: mov     edx, [ecx]
0x48C9E3: mov     eax, [edi+4]
0x48C9E6: add     eax, [edx]
0x48C9E8: cmp     ebp, eax
0x48C9EA: jge     loc_48CD15
0x48C9F0: mov     ecx, [esp+28h+var_10]
0x48C9F4: mov     edx, [ecx]
0x48C9F6: mov     eax, [edx]
0x48C9F8: mov     ecx, [edi+4]
0x48C9FB: add     ecx, eax
0x48C9FD: test    ecx, ecx
0x48C9FF: jg      short loc_48CA09
0x48CA01: test    eax, eax
0x48CA03: jge     loc_48CD15
0x48CA09: test    ebx, ebx
0x48CA0B: jz      loc_48CD15
0x48CA11: cmp     [esp+28h+arg_4], 0FFFFFFFFh
0x48CA16: jz      loc_48CD15
0x48CA1C: mov     edx, [esp+28h+arg_4]
0x48CA20: push    0
0x48CA22: push    edx
0x48CA23: lea     ecx, [ebx+64h]
0x48CA26: call    TESBipedModelForm_CoversSlot
0x48CA2B: test    al, al
0x48CA2D: jz      loc_48CD15
0x48CA33: test    edi, edi
0x48CA35: jz      loc_48CC0C
0x48CA3B: mov     eax, [edi]
0x48CA3D: test    eax, eax
0x48CA3F: jz      loc_48CC0C
0x48CA45: cmp     dword ptr [eax], 0
0x48CA48: jz      loc_48CC0C
0x48CA4E: mov     ebp, [esp+28h+arg_0]
0x48CA52: mov     esi, eax
0x48CA54: mov     [esp+28h+var_C], esi
0x48CA58: jmp     short loc_48CA60
0x48CA5A: align 10h
0x48CA60: mov     edi, [esi]
0x48CA62: test    edi, edi
0x48CA64: jz      loc_48CD15
0x48CA6A: mov     ecx, edi
0x48CA6C: call    ExtraDataList_GetOwner
0x48CA71: test    eax, eax
0x48CA73: jz      short loc_48CA84
0x48CA75: mov     ecx, edi
0x48CA77: call    ExtraDataList_GetOwner
0x48CA7C: cmp     eax, ebp
0x48CA7E: jnz     loc_48CBF8
0x48CA84: push    2Bh ; '+'; a2
0x48CA86: mov     ecx, edi; this
0x48CA88: call    BaseExtraList_GetExtraData
0x48CA8D: test    eax, eax
0x48CA8F: jz      short loc_48CA9A
0x48CA91: mov     ecx, edi
0x48CA93: call    ExtraDataList_GetHealthData
0x48CA98: jmp     short loc_48CAB5
0x48CA9A: push    ebx
0x48CA9B: call    TESHealthForm_GetHealthForForm
0x48CAA0: add     esp, 4
0x48CAA3: test    eax, eax
0x48CAA5: mov     [esp+28h+arg_8], eax
0x48CAA9: fild    [esp+28h+arg_8]
0x48CAAD: jge     short loc_48CAB5
0x48CAAF: fadd    dword ptr ds:0A2FC78h
0x48CAB5: fstp    [esp+28h+arg_8]
0x48CAB9: fldz
0x48CABB: fld     [esp+28h+arg_8]
0x48CABF: fcom    st(1)
0x48CAC1: fnstsw  ax
0x48CAC3: fstp    st(1)
0x48CAC5: test    ah, 41h
0x48CAC8: jnz     loc_48CBF6
0x48CACE: movzx   eax, word ptr [ebx+0E4h]
0x48CAD5: mov     [esp+28h+arg_8], eax
0x48CAD9: mov     edx, [ebp+0]
0x48CADC: mov     esi, [ebp+0]
0x48CADF: fild    [esp+28h+arg_8]
0x48CAE3: mov     eax, [edx+12Ch]
0x48CAE9: push    ecx
0x48CAEA: mov     ecx, ebp
0x48CAEC: fdiv    qword ptr ds:0A309F0h
0x48CAF2: add     esi, 12Ch
0x48CAF8: fstp    [esp+2Ch+arg_8]
0x48CAFC: fstp    [esp+2Ch+var_2C]
0x48CAFF: push    7
0x48CB01: call    eax
0x48CB03: push    ecx
0x48CB04: mov     ecx, ebx
0x48CB06: fstp    [esp+2Ch+var_2C]; float
0x48CB09: call    TESObjectARMO_GetArmorSkillAV
0x48CB0E: mov     edx, [esi]
0x48CB10: push    eax; float
0x48CB11: mov     ecx, ebp
0x48CB13: call    edx
0x48CB15: push    ecx
0x48CB16: fstp    [esp+34h+var_34]; float
0x48CB19: fld     [esp+34h+arg_8]
0x48CB1D: fnstcw  word ptr [esp+34h+arg_8]
0x48CB21: movzx   eax, word ptr [esp+34h+arg_8]
0x48CB26: or      eax, 0C00h
0x48CB2B: mov     [esp+34h+var_4], eax
0x48CB2F: fldcw   word ptr [esp+34h+var_4]
0x48CB33: fistp   [esp+34h+var_4]
0x48CB37: movzx   eax, word ptr [esp+34h+var_4]
0x48CB3C: push    eax; int
0x48CB3D: fldcw   word ptr [esp+38h+arg_8]
0x48CB41: call    Calc_ArmorRating
0x48CB46: fstp    [esp+38h+arg_8]
0x48CB4A: fld     [esp+38h+arg_8]
0x48CB4E: add     esp, 10h
0x48CB51: fld     [esp+28h+var_14]
0x48CB55: fcomp   st(1)
0x48CB57: fnstsw  ax
0x48CB59: test    ah, 5
0x48CB5C: jp      loc_48CBF2
0x48CB62: mov     esi, [esp+28h+var_18]
0x48CB66: fstp    [esp+28h+var_14]
0x48CB6A: test    esi, esi
0x48CB6C: jz      short loc_48CB90
0x48CB6E: mov     ecx, [esi]
0x48CB70: test    ecx, ecx
0x48CB72: jz      short loc_48CB79
0x48CB74: call    BSSimpleList_Clear
0x48CB79: mov     ecx, [esi]
0x48CB7B: push    ecx
0x48CB7C: call    FormHeapFree
0x48CB81: push    esi
0x48CB82: mov     dword ptr [esi], 0
0x48CB88: call    FormHeapFree
0x48CB8D: add     esp, 8
0x48CB90: push    0Ch; Size
0x48CB92: call    FormHeapAlloc
0x48CB97: add     esp, 4
0x48CB9A: test    eax, eax
0x48CB9C: jz      short loc_48CBAC
0x48CB9E: xor     ecx, ecx
0x48CBA0: mov     [eax+8], ecx
0x48CBA3: mov     [eax], ecx
0x48CBA5: mov     [eax+4], ecx
0x48CBA8: mov     esi, eax
0x48CBAA: jmp     short loc_48CBAE
0x48CBAC: xor     esi, esi
0x48CBAE: push    8; Size
0x48CBB0: mov     [esp+2Ch+var_18], esi
0x48CBB4: mov     [esi+8], ebx
0x48CBB7: call    FormHeapAlloc
0x48CBBC: add     esp, 4
0x48CBBF: test    eax, eax
0x48CBC1: jz      short loc_48CBE0
0x48CBC3: mov     dword ptr [eax], 0
0x48CBC9: mov     dword ptr [eax+4], 0
0x48CBD0: push    edi
0x48CBD1: mov     ecx, eax
0x48CBD3: mov     [esi], eax
0x48CBD5: call    BSSimpleList_PushFront
0x48CBDA: mov     esi, [esp+28h+var_C]
0x48CBDE: jmp     short loc_48CBF8
0x48CBE0: xor     eax, eax
0x48CBE2: push    edi
0x48CBE3: mov     ecx, eax
0x48CBE5: mov     [esi], eax
0x48CBE7: call    BSSimpleList_PushFront
0x48CBEC: mov     esi, [esp+28h+var_C]
0x48CBF0: jmp     short loc_48CBF8
0x48CBF2: mov     esi, [esp+28h+var_C]
0x48CBF6: fstp    st
0x48CBF8: mov     esi, [esi+4]
0x48CBFB: test    esi, esi
0x48CBFD: mov     [esp+28h+var_C], esi
0x48CC01: jnz     loc_48CA60
0x48CC07: jmp     loc_48CD15
0x48CC0C: push    ebx
0x48CC0D: call    TESHealthForm_GetHealthForForm
0x48CC12: test    eax, eax
0x48CC14: mov     [esp+2Ch+arg_8], eax
0x48CC18: fild    [esp+2Ch+arg_8]
0x48CC1C: jge     short loc_48CC24
0x48CC1E: fadd    dword ptr ds:0A2FC78h
0x48CC24: movzx   edx, word ptr [ebx+0E4h]
0x48CC2B: fstp    [esp+2Ch+var_4]
0x48CC2F: mov     [esp+2Ch+arg_8], edx
0x48CC33: mov     edi, [esp+2Ch+arg_0]
0x48CC37: mov     eax, [edi]
0x48CC39: fild    [esp+2Ch+arg_8]
0x48CC3D: mov     esi, [edi]
0x48CC3F: mov     edx, [eax+12Ch]
0x48CC45: mov     ecx, edi
0x48CC47: fdiv    qword ptr ds:0A309F0h
0x48CC4D: add     esi, 12Ch
0x48CC53: fstp    [esp+2Ch+arg_8]
0x48CC57: fld     [esp+2Ch+var_4]
0x48CC5B: fstp    [esp+2Ch+var_2C]
0x48CC5E: push    7
0x48CC60: call    edx
0x48CC62: push    ecx
0x48CC63: mov     ecx, ebx
0x48CC65: fstp    [esp+2Ch+var_2C]; float
0x48CC68: call    TESObjectARMO_GetArmorSkillAV
0x48CC6D: push    eax; float
0x48CC6E: mov     eax, [esi]
0x48CC70: mov     ecx, edi
0x48CC72: call    eax
0x48CC74: push    ecx
0x48CC75: fstp    [esp+34h+var_34]; float
0x48CC78: fld     [esp+34h+arg_8]
0x48CC7C: fnstcw  word ptr [esp+34h+arg_8]
0x48CC80: movzx   eax, word ptr [esp+34h+arg_8]
0x48CC85: or      eax, 0C00h
0x48CC8A: mov     [esp+34h+var_4], eax
0x48CC8E: fldcw   word ptr [esp+34h+var_4]
0x48CC92: fistp   [esp+34h+var_4]
0x48CC96: movzx   ecx, word ptr [esp+34h+var_4]
0x48CC9B: push    ecx; int
0x48CC9C: fldcw   word ptr [esp+38h+arg_8]
0x48CCA0: call    Calc_ArmorRating
0x48CCA5: fstp    [esp+38h+arg_8]
0x48CCA9: fld     [esp+38h+arg_8]
0x48CCAD: add     esp, 10h
0x48CCB0: fld     [esp+28h+var_14]
0x48CCB4: fcomp   st(1)
0x48CCB6: fnstsw  ax
0x48CCB8: test    ah, 5
0x48CCBB: jp      short loc_48CD13
0x48CCBD: mov     esi, [esp+28h+var_18]
0x48CCC1: fstp    [esp+28h+var_14]
0x48CCC5: xor     edi, edi
0x48CCC7: cmp     esi, edi
0x48CCC9: jz      short loc_48CCE9
0x48CCCB: mov     ecx, [esi]
0x48CCCD: cmp     ecx, edi
0x48CCCF: jz      short loc_48CCD6
0x48CCD1: call    BSSimpleList_Clear
0x48CCD6: mov     edx, [esi]
0x48CCD8: push    edx
0x48CCD9: call    FormHeapFree
0x48CCDE: push    esi
0x48CCDF: mov     [esi], edi
0x48CCE1: call    FormHeapFree
0x48CCE6: add     esp, 8
0x48CCE9: push    0Ch; Size
0x48CCEB: call    FormHeapAlloc
0x48CCF0: add     esp, 4
0x48CCF3: cmp     eax, edi
0x48CCF5: jz      short loc_48CD08
0x48CCF7: mov     [eax+8], edi
0x48CCFA: mov     [eax], edi
0x48CCFC: mov     [eax+4], edi
0x48CCFF: mov     [esp+28h+var_18], eax
0x48CD03: mov     [eax+8], ebx
0x48CD06: jmp     short loc_48CD15
0x48CD08: xor     eax, eax
0x48CD0A: mov     [esp+28h+var_18], eax
0x48CD0E: mov     [eax+8], ebx
0x48CD11: jmp     short loc_48CD15
0x48CD13: fstp    st
0x48CD15: mov     eax, [esp+28h+var_10]
0x48CD19: mov     eax, [eax+4]
0x48CD1C: test    eax, eax
0x48CD1E: mov     edi, [esp+28h+var_8]
0x48CD22: mov     [esp+28h+var_10], eax
0x48CD26: jnz     loc_48C900
0x48CD2C: mov     edi, [edi]
0x48CD2E: test    edi, edi
0x48CD30: mov     [esp+28h+var_C], edi
0x48CD34: jz      loc_48D0FD
0x48CD3A: lea     ebx, [ebx+0]
0x48CD40: mov     esi, [esp+28h+var_C]
0x48CD44: cmp     dword ptr [esi+4], 0
0x48CD48: jnz     short loc_48CD53
0x48CD4A: cmp     dword ptr [esi], 0
0x48CD4D: jz      loc_48D0FD
0x48CD53: mov     eax, [esi]
0x48CD55: mov     ecx, [eax+8]
0x48CD58: push    0; int
0x48CD5A: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x48CD5F: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48CD64: push    0; int
0x48CD66: push    ecx; void *
0x48CD67: call    OblivionDynamicCast
0x48CD6C: mov     ebp, [esi]
0x48CD6E: mov     edi, eax
0x48CD70: add     esp, 14h
0x48CD73: test    edi, edi
0x48CD75: jz      loc_48D0EA
0x48CD7B: mov     eax, [ebp+0]
0x48CD7E: test    eax, eax
0x48CD80: jz      short loc_48CDCF
0x48CD82: mov     esi, [eax]
0x48CD84: test    esi, esi
0x48CD86: jz      short loc_48CDCF
0x48CD88: mov     ecx, esi
0x48CD8A: call    ExtraDataList_GetOwner
0x48CD8F: test    eax, eax
0x48CD91: jz      short loc_48CDCF
0x48CD93: mov     ecx, esi
0x48CD95: call    ExtraDataList_GetOwner
0x48CD9A: test    eax, eax
0x48CD9C: jz      short loc_48CDCF
0x48CD9E: mov     eax, [ebp+0]
0x48CDA1: test    eax, eax
0x48CDA3: jz      short loc_48CDBF
0x48CDA5: mov     esi, [eax]
0x48CDA7: test    esi, esi
0x48CDA9: jz      short loc_48CDBF
0x48CDAB: mov     ecx, esi
0x48CDAD: call    ExtraDataList_GetOwner
0x48CDB2: test    eax, eax
0x48CDB4: jz      short loc_48CDBF
0x48CDB6: mov     ecx, esi
0x48CDB8: call    ExtraDataList_GetOwner
0x48CDBD: jmp     short loc_48CDC1
0x48CDBF: xor     eax, eax
0x48CDC1: mov     ebx, [esp+28h+arg_0]
0x48CDC5: cmp     eax, ebx
0x48CDC7: jnz     loc_48D0EA
0x48CDCD: jmp     short loc_48CDD3
0x48CDCF: mov     ebx, [esp+28h+arg_0]
0x48CDD3: cmp     dword ptr [ebp+4], 0
0x48CDD7: jz      loc_48D0EA
0x48CDDD: mov     edx, [esp+28h+var_8]
0x48CDE1: mov     ecx, [edx+4]; this
0x48CDE4: test    ecx, ecx
0x48CDE6: jz      short loc_48CDEF
0x48CDE8: call    TESObjectREFR_GetContainer
0x48CDED: jmp     short loc_48CDF1
0x48CDEF: xor     eax, eax
0x48CDF1: push    edi; a2
0x48CDF2: mov     ecx, eax; this
0x48CDF4: call    TESContainer_HasForm
0x48CDF9: test    al, al
0x48CDFB: jnz     loc_48D0EA
0x48CE01: mov     eax, [esp+28h+arg_4]
0x48CE05: cmp     eax, 0FFFFFFFFh
0x48CE08: jz      loc_48D0EA
0x48CE0E: push    0
0x48CE10: push    eax
0x48CE11: lea     ecx, [edi+64h]
0x48CE14: call    TESBipedModelForm_CoversSlot
0x48CE19: test    al, al
0x48CE1B: jz      loc_48D0EA
0x48CE21: cmp     dword ptr [ebp+4], 0
0x48CE25: jl      loc_48D0EA
0x48CE2B: mov     eax, [ebp+0]
0x48CE2E: test    eax, eax
0x48CE30: jz      loc_48CFE5
0x48CE36: cmp     dword ptr [eax], 0
0x48CE39: jz      loc_48CFE5
0x48CE3F: mov     [esp+28h+var_10], eax
0x48CE43: mov     ebp, [eax]
0x48CE45: test    ebp, ebp
0x48CE47: jz      loc_48D0EA
0x48CE4D: mov     ecx, ebp
0x48CE4F: call    ExtraDataList_GetOwner
0x48CE54: test    eax, eax
0x48CE56: jz      short loc_48CE67
0x48CE58: mov     ecx, ebp
0x48CE5A: call    ExtraDataList_GetOwner
0x48CE5F: cmp     eax, ebx
0x48CE61: jnz     loc_48CFCD
0x48CE67: push    2Bh ; '+'; a2
0x48CE69: mov     ecx, ebp; this
0x48CE6B: call    BaseExtraList_GetExtraData
0x48CE70: test    eax, eax
0x48CE72: jz      short loc_48CE7D
0x48CE74: mov     ecx, ebp
0x48CE76: call    ExtraDataList_GetHealthData
0x48CE7B: jmp     short loc_48CE98
0x48CE7D: push    edi
0x48CE7E: call    TESHealthForm_GetHealthForForm
0x48CE83: add     esp, 4
0x48CE86: test    eax, eax
0x48CE88: mov     [esp+28h+arg_8], eax
0x48CE8C: fild    [esp+28h+arg_8]
0x48CE90: jge     short loc_48CE98
0x48CE92: fadd    dword ptr ds:0A2FC78h
0x48CE98: fstp    [esp+28h+arg_8]
0x48CE9C: fldz
0x48CE9E: fld     [esp+28h+arg_8]
0x48CEA2: fcom    st(1)
0x48CEA4: fnstsw  ax
0x48CEA6: fstp    st(1)
0x48CEA8: test    ah, 41h
0x48CEAB: jnz     loc_48CFCB
0x48CEB1: movzx   eax, word ptr [edi+0E4h]
0x48CEB8: mov     [esp+28h+arg_8], eax
0x48CEBC: mov     edx, [ebx]
0x48CEBE: mov     esi, [ebx]
0x48CEC0: fild    [esp+28h+arg_8]
0x48CEC4: mov     eax, [edx+12Ch]
0x48CECA: push    ecx
0x48CECB: mov     ecx, ebx
0x48CECD: fdiv    qword ptr ds:0A309F0h
0x48CED3: add     esi, 12Ch
0x48CED9: fstp    [esp+2Ch+arg_8]
0x48CEDD: fstp    [esp+2Ch+var_2C]
0x48CEE0: push    7
0x48CEE2: call    eax
0x48CEE4: push    ecx
0x48CEE5: mov     ecx, edi
0x48CEE7: fstp    [esp+2Ch+var_2C]; float
0x48CEEA: call    TESObjectARMO_GetArmorSkillAV
0x48CEEF: mov     edx, [esi]
0x48CEF1: push    eax; float
0x48CEF2: mov     ecx, ebx
0x48CEF4: call    edx
0x48CEF6: push    ecx
0x48CEF7: fstp    [esp+34h+var_34]; float
0x48CEFA: fld     [esp+34h+arg_8]
0x48CEFE: fnstcw  word ptr [esp+34h+arg_8]
0x48CF02: movzx   eax, word ptr [esp+34h+arg_8]
0x48CF07: or      eax, 0C00h
0x48CF0C: mov     [esp+34h+var_4], eax
0x48CF10: fldcw   word ptr [esp+34h+var_4]
0x48CF14: fistp   [esp+34h+var_4]
0x48CF18: movzx   eax, word ptr [esp+34h+var_4]
0x48CF1D: push    eax; int
0x48CF1E: fldcw   word ptr [esp+38h+arg_8]
0x48CF22: call    Calc_ArmorRating
0x48CF27: fstp    [esp+38h+arg_8]
0x48CF2B: fld     [esp+38h+arg_8]
0x48CF2F: add     esp, 10h
0x48CF32: fld     [esp+28h+var_14]
0x48CF36: fcomp   st(1)
0x48CF38: fnstsw  ax
0x48CF3A: test    ah, 5
0x48CF3D: jp      loc_48CFCB
0x48CF43: mov     esi, [esp+28h+var_18]
0x48CF47: fstp    [esp+28h+var_14]
0x48CF4B: test    esi, esi
0x48CF4D: jz      short loc_48CF71
0x48CF4F: mov     ecx, [esi]
0x48CF51: test    ecx, ecx
0x48CF53: jz      short loc_48CF5A
0x48CF55: call    BSSimpleList_Clear
0x48CF5A: mov     ecx, [esi]
0x48CF5C: push    ecx
0x48CF5D: call    FormHeapFree
0x48CF62: push    esi
0x48CF63: mov     dword ptr [esi], 0
0x48CF69: call    FormHeapFree
0x48CF6E: add     esp, 8
0x48CF71: push    0Ch; Size
0x48CF73: call    FormHeapAlloc
0x48CF78: add     esp, 4
0x48CF7B: test    eax, eax
0x48CF7D: jz      short loc_48CF8D
0x48CF7F: xor     ecx, ecx
0x48CF81: mov     [eax+8], ecx
0x48CF84: mov     [eax], ecx
0x48CF86: mov     [eax+4], ecx
0x48CF89: mov     esi, eax
0x48CF8B: jmp     short loc_48CF8F
0x48CF8D: xor     esi, esi
0x48CF8F: push    8; Size
0x48CF91: mov     [esp+2Ch+var_18], esi
0x48CF95: mov     [esi+8], edi
0x48CF98: call    FormHeapAlloc
0x48CF9D: add     esp, 4
0x48CFA0: test    eax, eax
0x48CFA2: jz      short loc_48CFBD
0x48CFA4: mov     dword ptr [eax], 0
0x48CFAA: mov     dword ptr [eax+4], 0
0x48CFB1: push    ebp
0x48CFB2: mov     ecx, eax
0x48CFB4: mov     [esi], eax
0x48CFB6: call    BSSimpleList_PushFront
0x48CFBB: jmp     short loc_48CFCD
0x48CFBD: xor     eax, eax
0x48CFBF: push    ebp
0x48CFC0: mov     ecx, eax
0x48CFC2: mov     [esi], eax
0x48CFC4: call    BSSimpleList_PushFront
0x48CFC9: jmp     short loc_48CFCD
0x48CFCB: fstp    st
0x48CFCD: mov     edx, [esp+28h+var_10]
0x48CFD1: mov     eax, [edx+4]
0x48CFD4: test    eax, eax
0x48CFD6: mov     [esp+28h+var_10], eax
0x48CFDA: jnz     loc_48CE43
0x48CFE0: jmp     loc_48D0EA
0x48CFE5: push    edi
0x48CFE6: call    TESHealthForm_GetHealthForForm
0x48CFEB: test    eax, eax
0x48CFED: mov     [esp+2Ch+arg_8], eax
0x48CFF1: fild    [esp+2Ch+arg_8]
0x48CFF5: jge     short loc_48CFFD
0x48CFF7: fadd    dword ptr ds:0A2FC78h
0x48CFFD: movzx   eax, word ptr [edi+0E4h]
0x48D004: fstp    [esp+2Ch+var_4]
0x48D008: mov     [esp+2Ch+arg_8], eax
0x48D00C: mov     edx, [ebx]
0x48D00E: mov     esi, [ebx]
0x48D010: fild    [esp+2Ch+arg_8]
0x48D014: mov     eax, [edx+12Ch]
0x48D01A: mov     ecx, ebx
0x48D01C: add     esi, 12Ch
0x48D022: fdiv    qword ptr ds:0A309F0h
0x48D028: fstp    [esp+2Ch+arg_8]
0x48D02C: fld     [esp+2Ch+var_4]
0x48D030: fstp    [esp+2Ch+var_2C]
0x48D033: push    7
0x48D035: call    eax
0x48D037: push    ecx
0x48D038: mov     ecx, edi
0x48D03A: fstp    [esp+2Ch+var_2C]; float
0x48D03D: call    TESObjectARMO_GetArmorSkillAV
0x48D042: mov     edx, [esi]
0x48D044: push    eax; float
0x48D045: mov     ecx, ebx
0x48D047: call    edx
0x48D049: push    ecx
0x48D04A: fstp    [esp+34h+var_34]; float
0x48D04D: fld     [esp+34h+arg_8]
0x48D051: fnstcw  word ptr [esp+34h+arg_8]
0x48D055: movzx   eax, word ptr [esp+34h+arg_8]
0x48D05A: or      eax, 0C00h
0x48D05F: mov     [esp+34h+var_4], eax
0x48D063: fldcw   word ptr [esp+34h+var_4]
0x48D067: fistp   [esp+34h+var_4]
0x48D06B: movzx   eax, word ptr [esp+34h+var_4]
0x48D070: push    eax; int
0x48D071: fldcw   word ptr [esp+38h+arg_8]
0x48D075: call    Calc_ArmorRating
0x48D07A: fstp    [esp+38h+arg_8]
0x48D07E: fld     [esp+38h+arg_8]
0x48D082: add     esp, 10h
0x48D085: fld     [esp+28h+var_14]
0x48D089: fcomp   st(1)
0x48D08B: fnstsw  ax
0x48D08D: test    ah, 5
0x48D090: jp      short loc_48D0E8
0x48D092: mov     esi, [esp+28h+var_18]
0x48D096: fstp    [esp+28h+var_14]
0x48D09A: xor     ebx, ebx
0x48D09C: cmp     esi, ebx
0x48D09E: jz      short loc_48D0BE
0x48D0A0: mov     ecx, [esi]
0x48D0A2: cmp     ecx, ebx
0x48D0A4: jz      short loc_48D0AB
0x48D0A6: call    BSSimpleList_Clear
0x48D0AB: mov     ecx, [esi]
0x48D0AD: push    ecx
0x48D0AE: call    FormHeapFree
0x48D0B3: push    esi
0x48D0B4: mov     [esi], ebx
0x48D0B6: call    FormHeapFree
0x48D0BB: add     esp, 8
0x48D0BE: push    0Ch; Size
0x48D0C0: call    FormHeapAlloc
0x48D0C5: add     esp, 4
0x48D0C8: cmp     eax, ebx
0x48D0CA: jz      short loc_48D0DD
0x48D0CC: mov     [eax+8], ebx
0x48D0CF: mov     [eax], ebx
0x48D0D1: mov     [eax+4], ebx
0x48D0D4: mov     [esp+28h+var_18], eax
0x48D0D8: mov     [eax+8], edi
0x48D0DB: jmp     short loc_48D0EA
0x48D0DD: xor     eax, eax
0x48D0DF: mov     [esp+28h+var_18], eax
0x48D0E3: mov     [eax+8], edi
0x48D0E6: jmp     short loc_48D0EA
0x48D0E8: fstp    st
0x48D0EA: mov     edx, [esp+28h+var_C]
0x48D0EE: mov     eax, [edx+4]
0x48D0F1: test    eax, eax
0x48D0F3: mov     [esp+28h+var_C], eax
0x48D0F7: jnz     loc_48CD40
0x48D0FD: mov     eax, [esp+28h+var_18]
0x48D101: pop     ebp
0x48D102: pop     ebx
0x48D103: pop     edi
0x48D104: pop     esi
0x48D105: add     esp, 18h
0x48D108: retn    0Ch
