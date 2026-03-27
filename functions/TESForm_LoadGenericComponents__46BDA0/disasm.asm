0x46BDA0: push    ebp
0x46BDA1: mov     ebp, esp
0x46BDA3: sub     esp, 24h
0x46BDA6: mov     eax, ds:0B30AACh
0x46BDAB: xor     eax, ebp
0x46BDAD: mov     [ebp+var_4], eax
0x46BDB0: mov     eax, [ebp+a1]
0x46BDB3: movzx   eax, word ptr [eax+254h]
0x46BDBA: push    ebx
0x46BDBB: push    esi
0x46BDBC: mov     [ebp+var_8], eax
0x46BDBF: movzx   eax, ax
0x46BDC2: push    edi
0x46BDC3: movzx   edi, word ptr [ebp+arg_8]
0x46BDC7: mov     esi, ecx
0x46BDC9: call    __alloca?
0x46BDCE: movzx   eax, word ptr [ebp+var_8]
0x46BDD2: mov     ecx, [ebp+a1]; a1
0x46BDD5: mov     ebx, esp
0x46BDD7: push    eax; a4
0x46BDD8: push    ebx; Dst
0x46BDD9: call    TESFile_GetChunkData
0x46BDDE: mov     eax, [ebp+var_8]
0x46BDE1: mov     ecx, [ebp+arg_8]
0x46BDE4: cmp     ax, cx
0x46BDE7: movzx   eax, ax
0x46BDEA: jb      short loc_46BDEF
0x46BDEC: movzx   eax, cx
0x46BDEF: mov     edx, [ebp+Dst]
0x46BDF2: movzx   ecx, ax
0x46BDF5: push    ecx; Size
0x46BDF6: push    ebx; Src
0x46BDF7: push    edx; Dst
0x46BDF8: call    _memcpy
0x46BDFD: push    0; int
0x46BDFF: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x46BE04: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BE09: push    0; int
0x46BE0B: push    esi; void *
0x46BE0C: call    OblivionDynamicCast
0x46BE11: push    0; int
0x46BE13: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x46BE18: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BE1D: push    0; int
0x46BE1F: push    esi; void *
0x46BE20: mov     [ebp+var_C], eax
0x46BE23: call    OblivionDynamicCast
0x46BE28: push    0; int
0x46BE2A: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x46BE2F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BE34: push    0; int
0x46BE36: push    esi; void *
0x46BE37: mov     [ebp+var_20], eax
0x46BE3A: call    OblivionDynamicCast
0x46BE3F: add     esp, 48h
0x46BE42: push    0; int
0x46BE44: push    offset ??_R0?AVTESWeightForm@@@8; struct TypeDescriptor *
0x46BE49: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BE4E: push    0; int
0x46BE50: push    esi; void *
0x46BE51: mov     [ebp+var_18], eax
0x46BE54: call    OblivionDynamicCast
0x46BE59: push    0; int
0x46BE5B: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x46BE60: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BE65: push    0; int
0x46BE67: push    esi; void *
0x46BE68: mov     [ebp+var_14], eax
0x46BE6B: call    OblivionDynamicCast
0x46BE70: push    0; int
0x46BE72: push    offset ??_R0?AVTESAttackDamageForm@@@8; struct TypeDescriptor *
0x46BE77: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BE7C: push    0; int
0x46BE7E: push    esi; void *
0x46BE7F: mov     [ebp+var_10], eax
0x46BE82: call    OblivionDynamicCast
0x46BE87: push    0; int
0x46BE89: push    offset ??_R0?AVTESAttributes@@@8; struct TypeDescriptor *
0x46BE8E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BE93: push    0; int
0x46BE95: push    esi; void *
0x46BE96: mov     [ebp+var_1C], eax
0x46BE99: call    OblivionDynamicCast
0x46BE9E: mov     edx, [ebp+var_8]
0x46BEA1: mov     [ebp+var_24], eax
0x46BEA4: mov     eax, [ebp+var_C]
0x46BEA7: add     esp, 50h
0x46BEAA: test    eax, eax
0x46BEAC: jz      short loc_46BEC5
0x46BEAE: mov     esi, [ebp+arg_8]
0x46BEB1: cmp     si, dx
0x46BEB4: jnb     short loc_46BEC5
0x46BEB6: movzx   ecx, si
0x46BEB9: mov     cl, [ecx+ebx]
0x46BEBC: add     esi, 1
0x46BEBF: mov     [eax+4], cl
0x46BEC2: movzx   edi, si
0x46BEC5: mov     ecx, [ebp+var_20]; int
0x46BEC8: test    ecx, ecx
0x46BECA: jz      short loc_46BEE9
0x46BECC: cmp     di, dx
0x46BECF: jnb     short loc_46BEE9
0x46BED1: movzx   edx, di
0x46BED4: mov     eax, [edx+ebx]
0x46BED7: mov     [ebp+var_C], eax
0x46BEDA: mov     edx, [ebp+var_C]
0x46BEDD: push    edx; int
0x46BEDE: add     edi, 4
0x46BEE1: call    TESValueForm_SetValue
0x46BEE6: mov     edx, [ebp+var_8]
0x46BEE9: mov     ecx, [ebp+var_18]
0x46BEEC: test    ecx, ecx
0x46BEEE: jz      short loc_46BF07
0x46BEF0: cmp     di, dx
0x46BEF3: jnb     short loc_46BF07
0x46BEF5: movzx   eax, di
0x46BEF8: mov     eax, [eax+ebx]
0x46BEFB: mov     [ebp+var_C], eax
0x46BEFE: mov     eax, [ebp+var_C]
0x46BF01: add     edi, 4
0x46BF04: mov     [ecx+4], eax
0x46BF07: mov     eax, [ebp+var_14]
0x46BF0A: test    eax, eax
0x46BF0C: jz      short loc_46BF31
0x46BF0E: cmp     di, dx
0x46BF11: jnb     short loc_46BF31
0x46BF13: movzx   ecx, di
0x46BF16: mov     ecx, [ecx+ebx]
0x46BF19: mov     [ebp+var_14], ecx
0x46BF1C: add     edi, 4
0x46BF1F: fld     [ebp+var_14]
0x46BF22: fstp    [ebp+var_C]
0x46BF25: fld     [ebp+var_C]
0x46BF28: fstp    [ebp+var_14]
0x46BF2B: fld     [ebp+var_14]
0x46BF2E: fstp    dword ptr [eax+4]
0x46BF31: mov     ecx, [ebp+var_10]
0x46BF34: test    ecx, ecx
0x46BF36: jz      short loc_46BF77
0x46BF38: cmp     di, dx
0x46BF3B: jnb     short loc_46BF77
0x46BF3D: movzx   eax, di
0x46BF40: fnstcw  word ptr [ebp+var_8+2]
0x46BF43: mov     eax, [eax+ebx]
0x46BF46: mov     [ebp+var_10], eax
0x46BF49: add     edi, 4
0x46BF4C: fld     [ebp+var_10]
0x46BF4F: fstp    [ebp+var_C]
0x46BF52: fld     [ebp+var_C]
0x46BF55: movzx   eax, word ptr [ebp+var_8+2]
0x46BF59: or      eax, 0C00h
0x46BF5E: mov     [ebp+var_10], eax
0x46BF61: fldcw   word ptr [ebp+var_10]
0x46BF64: fistp   [ebp+var_10]
0x46BF67: movzx   eax, byte ptr [ebp+var_10]
0x46BF6B: mov     [ebp+var_10], eax
0x46BF6E: fldcw   word ptr [ebp+var_8+2]
0x46BF71: fild    [ebp+var_10]
0x46BF74: fstp    dword ptr [ecx+4]
0x46BF77: mov     ecx, [ebp+var_1C]
0x46BF7A: test    ecx, ecx
0x46BF7C: jz      short loc_46BF9B
0x46BF7E: cmp     di, dx
0x46BF81: jnb     short loc_46BF9B
0x46BF83: movzx   edx, di
0x46BF86: mov     ax, [edx+ebx]
0x46BF8A: mov     word ptr [ebp+var_8], ax
0x46BF8E: movzx   edx, word ptr [ebp+var_8]
0x46BF92: push    edx
0x46BF93: add     edi, 2
0x46BF96: call    sub_468A50
0x46BF9B: mov     ecx, [ebp+var_24]
0x46BF9E: test    ecx, ecx
0x46BFA0: jz      short loc_46BFAD
0x46BFA2: movzx   eax, di
0x46BFA5: add     eax, ebx
0x46BFA7: push    eax
0x46BFA8: call    sub_468CA0
0x46BFAD: lea     esp, [ebp-30h]
0x46BFB0: pop     edi
0x46BFB1: pop     esi
0x46BFB2: pop     ebx
0x46BFB3: mov     ecx, [ebp+var_4]
0x46BFB6: xor     ecx, ebp
0x46BFB8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46BFBD: mov     esp, ebp
0x46BFBF: pop     ebp
0x46BFC0: retn    0Ch
