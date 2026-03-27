0x45BB30: sub     esp, 48h
0x45BB33: mov     eax, ds:0BA9DE4h
0x45BB38: push    ebx
0x45BB39: mov     [esp+4Ch+var_44], ecx
0x45BB3D: mov     ecx, large fs:2Ch
0x45BB44: mov     eax, [ecx+eax*4]
0x45BB47: mov     dl, [eax+185h]
0x45BB4D: push    ebp
0x45BB4E: push    esi
0x45BB4F: mov     esi, [esp+54h+arg_0]
0x45BB53: mov     [esp+54h+var_40], eax
0x45BB57: mov     byte ptr [eax+185h], 0
0x45BB5E: mov     eax, [esi]
0x45BB60: mov     [esp+54h+var_45], dl
0x45BB64: mov     edx, [eax+190h]
0x45BB6A: push    edi; a4
0x45BB6B: mov     ecx, esi
0x45BB6D: mov     [esp+58h+var_46], 0
0x45BB72: call    edx
0x45BB74: test    al, al
0x45BB76: jz      loc_45BC26
0x45BB7C: mov     ecx, esi
0x45BB7E: call    sub_5E0260
0x45BB83: test    al, al
0x45BB85: jz      loc_45BC26
0x45BB8B: mov     ecx, esi
0x45BB8D: call    sub_5E1F60
0x45BB92: mov     ecx, esi
0x45BB94: mov     edi, eax
0x45BB96: call    sub_5E1F40
0x45BB9B: test    edi, edi
0x45BB9D: mov     ebp, eax
0x45BB9F: jnz     short loc_45BBA9
0x45BBA1: test    ebp, ebp
0x45BBA3: jz      loc_45BDB6
0x45BBA9: mov     eax, [esi]
0x45BBAB: mov     edx, [eax+0F4h]
0x45BBB1: lea     ecx, [esp+58h+a3]
0x45BBB5: push    ecx; a3
0x45BBB6: mov     ecx, esi
0x45BBB8: call    edx
0x45BBBA: mov     edx, [eax]
0x45BBBC: sub     esp, 0Ch
0x45BBBF: mov     ecx, esp
0x45BBC1: mov     [ecx], edx
0x45BBC3: mov     edx, [eax+4]
0x45BBC6: mov     eax, [eax+8]
0x45BBC9: mov     [ecx+4], edx
0x45BBCC: mov     [ecx+8], eax
0x45BBCF: mov     ecx, esi; this
0x45BBD1: call    TESObjectREFR_SetPosition
0x45BBD6: mov     edx, [esi]
0x45BBD8: mov     edx, [edx+0F0h]
0x45BBDE: lea     eax, [esp+54h+var_2C]
0x45BBE2: push    eax
0x45BBE3: mov     ecx, esi
0x45BBE5: call    edx
0x45BBE7: fld     dword ptr [eax+8]
0x45BBEA: push    ecx
0x45BBEB: mov     ecx, esi
0x45BBED: fstp    [esp+58h+var_58]; float
0x45BBF0: call    sub_4D8A10
0x45BBF5: mov     bl, byte ptr [esp+58h+arg_4]
0x45BBF9: test    bl, bl
0x45BBFB: jz      short loc_45BC05
0x45BBFD: mov     eax, [esp+58h+var_44]
0x45BC01: or      dword ptr [eax+18h], 20h
0x45BC05: push    ebp; int
0x45BC06: push    edi; int
0x45BC07: push    esi; Concurrency::details::SchedulerBase *
0x45BC08: call    sub_4DD4B0
0x45BC0D: add     esp, 0Ch
0x45BC10: test    bl, bl
0x45BC12: jz      short loc_45BC1C
0x45BC14: mov     eax, [esp+58h+var_44]
0x45BC18: and     dword ptr [eax+18h], 0FFFFFFDFh
0x45BC1C: mov     [esp+58h+var_46], 1
0x45BC21: jmp     loc_45BD04
0x45BC26: lea     edi, [esi+44h]
0x45BC29: test    edi, edi
0x45BC2B: jz      loc_45BDB6
0x45BC31: push    14h; a2
0x45BC33: mov     ecx, edi; this
0x45BC35: call    BaseExtraList_GetExtraData
0x45BC3A: test    eax, eax
0x45BC3C: jz      short loc_45BCA5
0x45BC3E: mov     eax, [esi]
0x45BC40: mov     edx, [eax+0F4h]
0x45BC46: lea     ecx, [esp+58h+a2]
0x45BC4A: push    ecx
0x45BC4B: mov     ecx, esi
0x45BC4D: call    edx
0x45BC4F: mov     eax, [esi]
0x45BC51: mov     edx, [eax+0F0h]
0x45BC57: lea     ecx, [esp+58h+a3]
0x45BC5B: push    ecx; a4
0x45BC5C: mov     ecx, esi
0x45BC5E: call    edx
0x45BC60: mov     ecx, [esp+58h+a2]
0x45BC64: mov     edx, [esp+58h+var_38]
0x45BC68: sub     esp, 0Ch
0x45BC6B: mov     eax, esp
0x45BC6D: mov     [eax], ecx
0x45BC6F: mov     ecx, [esp+64h+var_34]
0x45BC73: mov     [eax+4], edx
0x45BC76: mov     [eax+8], ecx
0x45BC79: mov     ecx, esi; this
0x45BC7B: call    TESObjectREFR_SetPosition
0x45BC80: mov     edx, [esp+58h+a3]
0x45BC84: mov     ecx, [esp+58h+var_2C]
0x45BC88: sub     esp, 0Ch
0x45BC8B: mov     eax, esp
0x45BC8D: mov     [eax], edx
0x45BC8F: mov     edx, [esp+64h+var_28]
0x45BC93: mov     [eax+4], ecx
0x45BC96: mov     ecx, esi
0x45BC98: mov     [eax+8], edx
0x45BC9B: call    sub_4D89A0
0x45BCA0: mov     [esp+58h+var_46], 1
0x45BCA5: mov     ecx, edi
0x45BCA7: call    sub_41F7F0
0x45BCAC: mov     edi, eax
0x45BCAE: test    edi, edi
0x45BCB0: jz      short loc_45BCF9
0x45BCB2: push    0; int
0x45BCB4: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x45BCB9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45BCBE: push    0; int
0x45BCC0: push    edi; void *
0x45BCC1: call    OblivionDynamicCast
0x45BCC6: push    0; int
0x45BCC8: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x45BCCD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45BCD2: push    0; int
0x45BCD4: push    edi; void *
0x45BCD5: mov     ebp, eax
0x45BCD7: call    OblivionDynamicCast
0x45BCDC: add     esp, 28h
0x45BCDF: test    ebp, ebp
0x45BCE1: jnz     short loc_45BCE7
0x45BCE3: test    eax, eax
0x45BCE5: jz      short loc_45BCF9
0x45BCE7: push    eax; int
0x45BCE8: push    ebp; int
0x45BCE9: push    esi; Concurrency::details::SchedulerBase *
0x45BCEA: call    sub_4DD4B0
0x45BCEF: add     esp, 0Ch
0x45BCF2: mov     [esp+58h+var_46], 1
0x45BCF7: jmp     short loc_45BD04
0x45BCF9: cmp     [esp+58h+var_46], 0
0x45BCFE: jz      loc_45BDB6
0x45BD04: mov     ebp, [esi+3Ch]
0x45BD07: test    ebp, ebp
0x45BD09: jz      loc_45BDB6
0x45BD0F: mov     eax, [esi]
0x45BD11: mov     edx, [eax+174h]
0x45BD17: mov     ecx, esi
0x45BD19: call    edx
0x45BD1B: mov     edi, [eax]
0x45BD1D: mov     ebx, [eax+4]
0x45BD20: mov     eax, [eax+8]
0x45BD23: push    0; int
0x45BD25: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x45BD2A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x45BD2F: push    0; int
0x45BD31: push    esi; void *
0x45BD32: mov     [esp+6Ch+a2], edi
0x45BD36: mov     [esp+6Ch+var_38], ebx
0x45BD3A: mov     [esp+6Ch+var_34], eax
0x45BD3E: call    OblivionDynamicCast
0x45BD43: add     esp, 14h
0x45BD46: test    eax, eax
0x45BD48: jz      short loc_45BD77
0x45BD4A: mov     ecx, eax; this
0x45BD4C: call    MobileObject_GetCharProxy
0x45BD51: test    eax, eax
0x45BD53: mov     [esp+58h+arg_4], eax
0x45BD57: jz      short loc_45BD77
0x45BD59: lea     ecx, [eax+1E0h]
0x45BD5F: call    sub_88D370
0x45BD64: cmp     eax, 4
0x45BD67: jz      short loc_45BD77
0x45BD69: lea     ecx, [esp+58h+a2]
0x45BD6D: push    ecx; a2
0x45BD6E: mov     ecx, [esp+5Ch+arg_4]; this
0x45BD72: call    sub_452A10
0x45BD77: mov     edx, [esp+58h+var_34]
0x45BD7B: mov     [ebp+54h], edi
0x45BD7E: lea     eax, [esp+58h+var_24]
0x45BD82: mov     [ebp+58h], ebx
0x45BD85: push    eax
0x45BD86: mov     ecx, esi
0x45BD88: mov     [ebp+5Ch], edx
0x45BD8B: call    sub_4D7AF0
0x45BD90: mov     esi, eax
0x45BD92: push    1
0x45BD94: lea     edi, [ebp+30h]
0x45BD97: mov     ecx, 9
0x45BD9C: push    ebp
0x45BD9D: rep movsd
0x45BD9F: call    sub_897A20
0x45BDA4: add     esp, 8
0x45BDA7: fldz
0x45BDA9: push    0; a3
0x45BDAB: push    ecx
0x45BDAC: mov     ecx, ebp; this
0x45BDAE: fstp    [esp+60h+var_60]; a2
0x45BDB1: call    NiAVObject_UpdateNiAVObject
0x45BDB6: mov     cl, [esp+58h+var_45]
0x45BDBA: mov     edx, [esp+58h+var_40]
0x45BDBE: mov     al, [esp+58h+var_46]
0x45BDC2: pop     edi
0x45BDC3: pop     esi
0x45BDC4: pop     ebp
0x45BDC5: mov     [edx+185h], cl
0x45BDCB: pop     ebx
0x45BDCC: add     esp, 48h
0x45BDCF: retn    8
