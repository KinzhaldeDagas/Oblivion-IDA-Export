0x46BBB0: mov     eax, [esp+Size]
0x46BBB4: sub     esp, 14h
0x46BBB7: cmp     eax, 0FFFFh
0x46BBBC: push    esi; ArgList
0x46BBBD: mov     esi, ecx
0x46BBBF: jbe     short loc_46BBD5
0x46BBC1: push    offset aTryingToSaveda; "Trying to SaveData that's too large."
0x46BBC6: call    PrintError
0x46BBCB: add     esp, 4
0x46BBCE: pop     esi
0x46BBCF: add     esp, 14h
0x46BBD2: retn    8
0x46BBD5: push    ebx
0x46BBD6: push    ebp
0x46BBD7: push    edi
0x46BBD8: mov     edi, ds:0B33C18h
0x46BBDE: push    eax; Size
0x46BBDF: mov     eax, [esp+28h+Src]
0x46BBE3: push    eax; Src
0x46BBE4: push    41544144h; int
0x46BBE9: xor     ebx, ebx
0x46BBEB: call    TESForm_PutFormRecordChunkData
0x46BBF0: mov     ecx, ds:0B33C14h
0x46BBF6: push    ebx; int
0x46BBF7: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x46BBFC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BC01: add     ecx, edi
0x46BC03: push    ebx; int
0x46BC04: push    esi; void *
0x46BC05: mov     [esp+44h+var_C], ecx
0x46BC09: call    OblivionDynamicCast
0x46BC0E: push    ebx; int
0x46BC0F: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x46BC14: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BC19: push    ebx; int
0x46BC1A: push    esi; void *
0x46BC1B: mov     edi, eax
0x46BC1D: call    OblivionDynamicCast
0x46BC22: push    ebx; int
0x46BC23: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x46BC28: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BC2D: mov     ebp, eax
0x46BC2F: push    ebx; int
0x46BC30: push    esi; void *
0x46BC31: mov     [esp+6Ch+var_8], ebp
0x46BC35: call    OblivionDynamicCast
0x46BC3A: add     esp, 48h
0x46BC3D: push    ebx; int
0x46BC3E: push    offset ??_R0?AVTESWeightForm@@@8; struct TypeDescriptor *
0x46BC43: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BC48: push    ebx; int
0x46BC49: push    esi; void *
0x46BC4A: mov     [esp+38h+Size], eax
0x46BC4E: call    OblivionDynamicCast
0x46BC53: push    ebx; int
0x46BC54: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x46BC59: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BC5E: push    ebx; int
0x46BC5F: push    esi; void *
0x46BC60: mov     [esp+4Ch+Src], eax
0x46BC64: call    OblivionDynamicCast
0x46BC69: push    ebx; int
0x46BC6A: push    offset ??_R0?AVTESAttackDamageForm@@@8; struct TypeDescriptor *
0x46BC6F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BC74: push    ebx; int
0x46BC75: push    esi; void *
0x46BC76: mov     [esp+60h+var_14], eax
0x46BC7A: call    OblivionDynamicCast
0x46BC7F: push    ebx; int
0x46BC80: push    offset ??_R0?AVTESAttributes@@@8; struct TypeDescriptor *
0x46BC85: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BC8A: push    ebx; int
0x46BC8B: push    esi; void *
0x46BC8C: mov     [esp+74h+var_10], eax
0x46BC90: call    OblivionDynamicCast
0x46BC95: add     esp, 50h
0x46BC98: test    edi, edi
0x46BC9A: mov     [esp+24h+var_4], eax
0x46BC9E: jz      short loc_46BCA5
0x46BCA0: mov     ebx, 1
0x46BCA5: test    ebp, ebp
0x46BCA7: jz      short loc_46BCAC
0x46BCA9: add     ebx, 4
0x46BCAC: cmp     [esp+24h+Size], 0
0x46BCB1: jz      short loc_46BCB6
0x46BCB3: add     ebx, 4
0x46BCB6: cmp     [esp+24h+Src], 0
0x46BCBB: jz      short loc_46BCC0
0x46BCBD: add     ebx, 4
0x46BCC0: cmp     [esp+24h+var_14], 0
0x46BCC5: jz      short loc_46BCCA
0x46BCC7: add     ebx, 4
0x46BCCA: cmp     [esp+24h+var_10], 0
0x46BCCF: jz      short loc_46BCD4
0x46BCD1: add     ebx, 2
0x46BCD4: test    eax, eax
0x46BCD6: jz      short loc_46BCDB
0x46BCD8: add     ebx, 8
0x46BCDB: test    bx, bx
0x46BCDE: jz      loc_46BD89
0x46BCE4: mov     edx, [esp+24h+var_C]
0x46BCE8: mov     ebp, ds:0B33C18h
0x46BCEE: push    ebx
0x46BCEF: push    edx
0x46BCF0: mov     ecx, esi
0x46BCF2: call    sub_46AED0
0x46BCF7: test    al, al
0x46BCF9: jz      loc_46BD89
0x46BCFF: test    edi, edi
0x46BD01: mov     eax, ds:0B33C14h
0x46BD06: lea     esi, [eax+ebp]
0x46BD09: jz      short loc_46BD13
0x46BD0B: mov     cl, [edi+4]
0x46BD0E: mov     [esi], cl
0x46BD10: add     esi, 1
0x46BD13: mov     eax, [esp+24h+var_8]
0x46BD17: test    eax, eax
0x46BD19: jz      short loc_46BD23
0x46BD1B: mov     edx, [eax+4]
0x46BD1E: mov     [esi], edx
0x46BD20: add     esi, 4
0x46BD23: mov     ecx, [esp+24h+Size]
0x46BD27: test    ecx, ecx
0x46BD29: jz      short loc_46BD37
0x46BD2B: mov     eax, [ecx]
0x46BD2D: mov     edx, [eax+10h]
0x46BD30: call    edx
0x46BD32: mov     [esi], eax
0x46BD34: add     esi, 4
0x46BD37: mov     eax, [esp+24h+Src]
0x46BD3B: test    eax, eax
0x46BD3D: jz      short loc_46BD48
0x46BD3F: fld     dword ptr [eax+4]
0x46BD42: add     esi, 4
0x46BD45: fstp    dword ptr [esi-4]
0x46BD48: mov     ecx, [esp+24h+var_14]
0x46BD4C: test    ecx, ecx
0x46BD4E: jz      short loc_46BD66
0x46BD50: call    sub_46AFC0
0x46BD55: movzx   eax, al
0x46BD58: mov     [esp+24h+Size], eax
0x46BD5C: add     esi, 4
0x46BD5F: fild    [esp+24h+Size]
0x46BD63: fstp    dword ptr [esi-4]
0x46BD66: mov     ecx, [esp+24h+var_10]
0x46BD6A: test    ecx, ecx
0x46BD6C: jz      short loc_46BD7B
0x46BD6E: mov     edx, [ecx]
0x46BD70: mov     eax, [edx+10h]
0x46BD73: call    eax
0x46BD75: mov     [esi], ax
0x46BD78: add     esi, 2
0x46BD7B: mov     ecx, [esp+24h+var_4]
0x46BD7F: test    ecx, ecx
0x46BD81: jz      short loc_46BD89
0x46BD83: push    esi
0x46BD84: call    sub_468C80
0x46BD89: pop     edi
0x46BD8A: pop     ebp
0x46BD8B: pop     ebx
0x46BD8C: pop     esi
0x46BD8D: add     esp, 14h
0x46BD90: retn    8
