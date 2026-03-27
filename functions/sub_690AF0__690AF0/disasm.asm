0x690AF0: push    0FFFFFFFFh
0x690AF2: push    offset SEH_690AF0
0x690AF7: mov     eax, large fs:0
0x690AFD: push    eax
0x690AFE: sub     esp, 1Ch
0x690B01: push    ebx
0x690B02: push    ebp
0x690B03: push    esi
0x690B04: push    edi
0x690B05: mov     eax, ds:0B30AACh
0x690B0A: xor     eax, esp
0x690B0C: push    eax
0x690B0D: lea     eax, [esp+3Ch+var_C]
0x690B11: mov     large fs:0, eax
0x690B17: mov     edi, ecx
0x690B19: mov     [esp+3Ch+var_24], edi
0x690B1D: mov     ecx, [edi+20h]; this
0x690B20: test    ecx, ecx
0x690B22: jz      short loc_690B2D
0x690B24: call    MagicTarget_GetParentActor
0x690B29: mov     esi, eax
0x690B2B: jmp     short loc_690B2F
0x690B2D: xor     esi, esi
0x690B2F: mov     eax, [edi+38h]
0x690B32: push    0; int
0x690B34: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x690B39: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x690B3E: push    0; int
0x690B40: push    eax; void *
0x690B41: call    OblivionDynamicCast
0x690B46: push    0; int
0x690B48: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x690B4D: mov     ebp, eax
0x690B4F: mov     eax, [edi+38h]
0x690B52: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x690B57: push    0; int
0x690B59: push    eax; void *
0x690B5A: mov     [esp+64h+var_20], ebp
0x690B5E: call    OblivionDynamicCast
0x690B63: add     esp, 28h
0x690B66: test    ebp, ebp
0x690B68: mov     ebx, eax
0x690B6A: mov     [esp+3Ch+var_14], ebx
0x690B6E: jz      loc_690DD0
0x690B74: mov     ecx, [esi+58h]
0x690B77: mov     eax, [ecx]
0x690B79: mov     edx, [eax+0ECh]
0x690B7F: push    1
0x690B81: call    edx
0x690B83: test    eax, eax
0x690B85: jz      loc_690D00
0x690B8B: mov     ecx, [esi+58h]
0x690B8E: mov     eax, [ecx]
0x690B90: mov     edx, [eax+0ECh]
0x690B96: push    1
0x690B98: call    edx
0x690B9A: mov     eax, [eax]
0x690B9C: mov     ebx, [eax]
0x690B9E: mov     ecx, ebx
0x690BA0: mov     [esp+3Ch+var_1C], ebx
0x690BA4: call    BaseExtraList_Count
0x690BA9: cmp     eax, 2
0x690BAC: jb      short loc_690BC7
0x690BAE: mov     ecx, ebx
0x690BB0: call    BaseExtraList_Count
0x690BB5: cmp     eax, 2
0x690BB8: jnz     short loc_690BCF
0x690BBA: mov     ecx, ebx
0x690BBC: call    ExtraDataList_GetExtraCount
0x690BC1: cmp     ax, 1
0x690BC5: jle     short loc_690BCF
0x690BC7: mov     [esp+3Ch+var_1C], 0
0x690BCF: mov     ecx, [esi+58h]
0x690BD2: mov     eax, [ecx]
0x690BD4: mov     edx, [eax+0ECh]
0x690BDA: push    1
0x690BDC: call    edx
0x690BDE: mov     ebx, [eax+8]
0x690BE1: test    ebx, ebx
0x690BE3: jz      short loc_690C3D
0x690BE5: cmp     byte ptr [edi+86h], 0
0x690BEC: jnz     short loc_690C3D
0x690BEE: push    0; int
0x690BF0: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x690BF5: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x690BFA: push    0; int
0x690BFC: push    ebx; void *
0x690BFD: call    OblivionDynamicCast
0x690C02: add     esp, 14h
0x690C05: test    eax, eax
0x690C07: jz      short loc_690C3D
0x690C09: lea     edi, [eax+30h]
0x690C0C: mov     ecx, edi
0x690C0E: call    sub_449190
0x690C13: test    eax, eax
0x690C15: jbe     short loc_690C3D
0x690C17: mov     eax, [edi]
0x690C19: mov     edx, [eax+14h]
0x690C1C: push    1
0x690C1E: push    0
0x690C20: push    0
0x690C22: mov     ecx, edi
0x690C24: call    edx
0x690C26: mov     ecx, ds:0B33A1Ch
0x690C2C: push    eax
0x690C2D: call    sub_439EB0
0x690C32: mov     eax, [esp+3Ch+var_24]
0x690C36: mov     byte ptr [eax+86h], 1
0x690C3D: mov     edi, [esi+58h]
0x690C40: mov     edx, [edi]
0x690C42: mov     eax, [edx+0ECh]
0x690C48: push    0
0x690C4A: mov     ecx, edi
0x690C4C: call    eax
0x690C4E: mov     eax, [eax]
0x690C50: mov     edx, [edi]
0x690C52: mov     ebp, [eax]
0x690C54: mov     eax, [edx+0ECh]
0x690C5A: push    0
0x690C5C: mov     ecx, edi
0x690C5E: call    eax
0x690C60: mov     eax, [eax+8]
0x690C63: push    0
0x690C65: push    0
0x690C67: push    0
0x690C69: push    ebp
0x690C6A: push    1
0x690C6C: push    eax
0x690C6D: mov     ecx, esi
0x690C6F: call    Actor_UnequipItem
0x690C74: push    0Ch; Size
0x690C76: call    FormHeapAlloc
0x690C7B: add     esp, 4
0x690C7E: mov     [esp+3Ch+var_14], eax
0x690C82: test    eax, eax
0x690C84: mov     [esp+3Ch+var_4], 0
0x690C8C: jz      short loc_690C9A
0x690C8E: push    0
0x690C90: push    ebx
0x690C91: mov     ecx, eax
0x690C93: call    ContainerEntryExtraData_constr
0x690C98: jmp     short loc_690C9C
0x690C9A: xor     eax, eax
0x690C9C: mov     ebp, [esp+3Ch+var_1C]
0x690CA0: mov     ecx, [esp+3Ch+var_24]
0x690CA4: or      ebx, 0FFFFFFFFh
0x690CA7: test    ebp, ebp
0x690CA9: mov     [esp+3Ch+var_4], ebx
0x690CAD: mov     [ecx+3Ch], eax
0x690CB0: jz      short loc_690CFA
0x690CB2: push    14h; Size
0x690CB4: call    FormHeapAlloc
0x690CB9: add     esp, 4
0x690CBC: mov     [esp+3Ch+var_14], eax
0x690CC0: test    eax, eax
0x690CC2: mov     [esp+3Ch+var_4], 1
0x690CCA: jz      short loc_690CD7
0x690CCC: mov     ecx, eax
0x690CCE: call    ExtraDataList_constr
0x690CD3: mov     edi, eax
0x690CD5: jmp     short loc_690CD9
0x690CD7: xor     edi, edi
0x690CD9: push    ebp
0x690CDA: mov     ecx, edi
0x690CDC: mov     [esp+40h+var_4], ebx
0x690CE0: call    ExtraDataList_DuplicateListForContainer
0x690CE5: mov     edx, [esp+3Ch+var_24]
0x690CE9: mov     eax, [edx+3Ch]
0x690CEC: mov     ecx, [eax]
0x690CEE: push    edi
0x690CEF: call    BSSimpleList_PushFront
0x690CF4: mov     edi, [esp+3Ch+var_24]
0x690CF8: jmp     short loc_690CFC
0x690CFA: mov     edi, ecx
0x690CFC: mov     ebp, [esp+3Ch+var_20]
0x690D00: mov     edx, [esi]
0x690D02: mov     eax, [edx+114h]
0x690D08: push    1
0x690D0A: push    0
0x690D0C: push    ebp
0x690D0D: mov     ecx, esi
0x690D0F: call    eax
0x690D11: mov     ecx, [esi+58h]
0x690D14: mov     edx, [ecx]
0x690D16: mov     eax, [edx+0ECh]
0x690D1C: push    1
0x690D1E: call    eax
0x690D20: test    eax, eax
0x690D22: jz      short loc_690D38
0x690D24: mov     ecx, [esi+58h]
0x690D27: mov     edx, [ecx]
0x690D29: mov     eax, [edx+0ECh]
0x690D2F: push    1
0x690D31: call    eax
0x690D33: cmp     [eax+8], ebp
0x690D36: jz      short loc_690D48
0x690D38: push    1
0x690D3A: push    1
0x690D3C: push    0
0x690D3E: push    1
0x690D40: push    ebp
0x690D41: mov     ecx, esi
0x690D43: call    Actor_EquipItem
0x690D48: mov     ecx, [esi+58h]
0x690D4B: test    ecx, ecx
0x690D4D: jz      short loc_690D98
0x690D4F: mov     edx, [ecx]
0x690D51: mov     eax, [edx+0ECh]
0x690D57: push    1
0x690D59: call    eax
0x690D5B: test    eax, eax
0x690D5D: jz      short loc_690D98
0x690D5F: mov     ecx, [esi+58h]
0x690D62: mov     edx, [ecx]
0x690D64: mov     eax, [edx+0ECh]
0x690D6A: push    1
0x690D6C: call    eax
0x690D6E: cmp     dword ptr [eax], 0
0x690D71: jz      short loc_690D98
0x690D73: mov     ecx, [esi+58h]
0x690D76: mov     edx, [ecx]
0x690D78: mov     eax, [edx+0ECh]
0x690D7E: push    1
0x690D80: call    eax
0x690D82: mov     ecx, [eax]
0x690D84: mov     edi, [ecx]
0x690D86: push    1
0x690D88: mov     ecx, edi
0x690D8A: call    sub_41F370
0x690D8F: mov     ecx, edi
0x690D91: call    sub_41F2F0
0x690D96: jmp     short loc_690D9F
0x690D98: mov     byte ptr [edi+88h], 1
0x690D9F: mov     ecx, [esi+58h]
0x690DA2: mov     edx, [ecx]
0x690DA4: mov     eax, [edx+300h]
0x690DAA: push    1
0x690DAC: call    eax
0x690DAE: mov     ecx, [esi+58h]
0x690DB1: mov     edx, [ecx]
0x690DB3: mov     eax, [edx+3D4h]
0x690DB9: push    ebp
0x690DBA: call    eax
0x690DBC: mov     ecx, [esp+3Ch+var_C]
0x690DC0: mov     large fs:0, ecx
0x690DC7: pop     ecx
0x690DC8: pop     edi
0x690DC9: pop     esi
0x690DCA: pop     ebp
0x690DCB: pop     ebx
0x690DCC: add     esp, 28h
0x690DCF: retn
0x690DD0: test    ebx, ebx
0x690DD2: push    0; int
0x690DD4: jz      loc_69100A
0x690DDA: mov     edx, [esi]
0x690DDC: mov     eax, [edx+170h]
0x690DE2: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x690DE7: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x690DEC: push    0; int
0x690DEE: mov     ecx, esi
0x690DF0: mov     [esp+4Ch+var_18], 0
0x690DF8: call    eax
0x690DFA: push    eax; void *
0x690DFB: call    OblivionDynamicCast
0x690E00: add     esp, 14h
0x690E03: test    eax, eax
0x690E05: jz      short loc_690E12
0x690E07: mov     ecx, eax
0x690E09: call    TESActorBase_IsFemale
0x690E0E: mov     [esp+3Ch+var_18], eax
0x690E12: mov     cl, [edi+87h]
0x690E18: xor     ebp, ebp
0x690E1A: add     edi, 40h ; '@'
0x690E1D: mov     byte ptr [esp+3Ch+var_28+3], cl
0x690E21: mov     [esp+3Ch+var_20], ebp
0x690E25: mov     [esp+3Ch+var_1C], edi
0x690E29: jmp     short loc_690E34
0x690E2B: jmp     short loc_690E30
0x690E2D: align 10h
0x690E30: mov     ebx, [esp+3Ch+var_14]
0x690E34: push    0
0x690E36: push    ebp
0x690E37: lea     ecx, [ebx+64h]
0x690E3A: call    TESBipedModelForm_CoversSlot
0x690E3F: test    al, al
0x690E41: jz      loc_690F40
0x690E47: lea     ebx, [esi+44h]
0x690E4A: mov     ecx, ebx; this
0x690E4C: call    ExtraDataList_GetContainerChanges
0x690E51: test    eax, eax
0x690E53: jz      loc_690F40
0x690E59: push    0
0x690E5B: push    ebp
0x690E5C: mov     ecx, eax
0x690E5E: call    ContainerExtraData_GetEquippedInstance
0x690E63: mov     ebp, eax
0x690E65: test    ebp, ebp
0x690E67: jz      loc_690F3C
0x690E6D: mov     eax, [ebp+8]
0x690E70: test    eax, eax
0x690E72: jz      short loc_690EBF
0x690E74: cmp     byte ptr [esp+3Ch+var_28+3], 0
0x690E79: jnz     short loc_690EBF
0x690E7B: push    0; int
0x690E7D: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x690E82: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x690E87: push    0; int
0x690E89: push    eax; void *
0x690E8A: call    OblivionDynamicCast
0x690E8F: add     esp, 14h
0x690E92: test    eax, eax
0x690E94: jz      short loc_690EBF
0x690E96: mov     edx, [esp+3Ch+var_18]
0x690E9A: push    1
0x690E9C: push    0
0x690E9E: push    0
0x690EA0: push    edx
0x690EA1: mov     ecx, eax
0x690EA3: call    TESBipedModelForm_GetModelPath
0x690EA8: mov     ecx, ds:0B33A1Ch
0x690EAE: push    eax
0x690EAF: call    sub_439EB0
0x690EB4: mov     eax, [esp+3Ch+var_24]
0x690EB8: mov     byte ptr [eax+87h], 1
0x690EBF: mov     eax, [ebp+0]
0x690EC2: mov     edi, [eax]
0x690EC4: test    edi, edi
0x690EC6: jz      short loc_690EF8
0x690EC8: push    8
0x690ECA: push    edi
0x690ECB: push    esi
0x690ECC: call    Script_AddEventToExtraScript
0x690ED1: mov     eax, [ebp+8]
0x690ED4: push    8
0x690ED6: push    ebx
0x690ED7: push    eax
0x690ED8: call    Script_AddEventToExtraScript
0x690EDD: add     esp, 18h
0x690EE0: push    0
0x690EE2: mov     ecx, edi
0x690EE4: call    sub_41F6A0
0x690EE9: cmp     dword ptr [edi+4], 0
0x690EED: jnz     short loc_690EF8
0x690EEF: mov     ecx, [ebp+0]
0x690EF2: push    edi
0x690EF3: call    BSSimpleList_Remove
0x690EF8: push    0Ch; Size
0x690EFA: call    FormHeapAlloc
0x690EFF: add     esp, 4
0x690F02: mov     [esp+3Ch+var_10], eax
0x690F06: test    eax, eax
0x690F08: mov     [esp+3Ch+var_4], 2
0x690F10: jz      short loc_690F1C
0x690F12: push    ebp
0x690F13: mov     ecx, eax
0x690F15: call    sub_4844A0
0x690F1A: jmp     short loc_690F1E
0x690F1C: xor     eax, eax
0x690F1E: mov     ecx, [esp+3Ch+var_1C]
0x690F22: mov     [ecx], eax
0x690F24: mov     ecx, ebp
0x690F26: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x690F2E: call    ContainerEntryExtraData_DestroyDataTable
0x690F33: push    ebp
0x690F34: call    FormHeapFree
0x690F39: add     esp, 4
0x690F3C: mov     ebp, [esp+3Ch+var_20]
0x690F40: add     [esp+3Ch+var_1C], 4
0x690F45: add     ebp, 1
0x690F48: cmp     ebp, 10h
0x690F4B: mov     [esp+3Ch+var_20], ebp
0x690F4F: jl      loc_690E30
0x690F55: push    14h; Size
0x690F57: call    FormHeapAlloc
0x690F5C: add     esp, 4
0x690F5F: mov     [esp+3Ch+var_10], eax
0x690F63: test    eax, eax
0x690F65: mov     [esp+3Ch+var_4], 3
0x690F6D: jz      short loc_690F7A
0x690F6F: mov     ecx, eax
0x690F71: call    ExtraDataList_constr
0x690F76: mov     edi, eax
0x690F78: jmp     short loc_690F7C
0x690F7A: xor     edi, edi
0x690F7C: mov     ecx, edi
0x690F7E: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x690F86: call    sub_41F2F0
0x690F8B: mov     edx, [esi]
0x690F8D: mov     eax, [edx+114h]
0x690F93: push    1
0x690F95: push    edi
0x690F96: mov     edi, [esp+44h+var_14]
0x690F9A: push    edi
0x690F9B: mov     ecx, esi
0x690F9D: call    eax
0x690F9F: push    0
0x690FA1: push    1
0x690FA3: push    0
0x690FA5: push    1
0x690FA7: push    edi
0x690FA8: mov     ecx, esi
0x690FAA: call    Actor_EquipItem
0x690FAF: mov     ecx, esi; this
0x690FB1: call    TESObjectREFR_GetContainer
0x690FB6: push    eax
0x690FB7: push    esi; a1
0x690FB8: call    ContainerExtraData_GetContainerExtraDataForRef
0x690FBD: add     esp, 8
0x690FC0: push    1
0x690FC2: push    edi
0x690FC3: mov     ecx, eax
0x690FC5: call    ExtraContainerChanges_SetEquipped
0x690FCA: test    eax, eax
0x690FCC: jz      short loc_690FEB
0x690FCE: push    1
0x690FD0: mov     ecx, eax
0x690FD2: call    sub_41F370
0x690FD7: mov     ecx, [esp+3Ch+var_C]
0x690FDB: mov     large fs:0, ecx
0x690FE2: pop     ecx
0x690FE3: pop     edi
0x690FE4: pop     esi
0x690FE5: pop     ebp
0x690FE6: pop     ebx
0x690FE7: add     esp, 28h
0x690FEA: retn
0x690FEB: mov     ecx, [esp+3Ch+var_24]
0x690FEF: mov     byte ptr [ecx+88h], 1
0x690FF6: mov     ecx, [esp+3Ch+var_C]
0x690FFA: mov     large fs:0, ecx
0x691001: pop     ecx
0x691002: pop     edi
0x691003: pop     esi
0x691004: pop     ebp
0x691005: pop     ebx
0x691006: add     esp, 28h
0x691009: retn
0x69100A: mov     ecx, edi
0x69100C: call    ActiveEffect_Base_Remove
0x691011: mov     ecx, [esp+3Ch+var_C]
0x691015: mov     large fs:0, ecx
0x69101C: pop     ecx
0x69101D: pop     edi
0x69101E: pop     esi
0x69101F: pop     ebp
0x691020: pop     ebx
0x691021: add     esp, 28h
0x691024: retn
