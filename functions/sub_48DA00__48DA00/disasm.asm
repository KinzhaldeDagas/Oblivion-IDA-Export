0x48DA00: push    0FFFFFFFFh
0x48DA02: push    offset SEH_48DA00
0x48DA07: mov     eax, large fs:0
0x48DA0D: push    eax
0x48DA0E: sub     esp, 0Ch
0x48DA11: push    ebx
0x48DA12: push    ebp
0x48DA13: push    esi
0x48DA14: push    edi
0x48DA15: mov     eax, ds:0B30AACh
0x48DA1A: xor     eax, esp
0x48DA1C: push    eax
0x48DA1D: lea     eax, [esp+2Ch+var_C]
0x48DA21: mov     large fs:0, eax
0x48DA27: mov     edi, ecx
0x48DA29: mov     [esp+2Ch+var_18], edi
0x48DA2D: mov     esi, [esp+2Ch+arg_4]
0x48DA31: test    esi, esi
0x48DA33: jz      loc_48DF67
0x48DA39: cmp     [esp+2Ch+arg_0], 0
0x48DA3E: jz      loc_48DF67
0x48DA44: mov     ecx, esi; this
0x48DA46: call    TESObjectREFR_GetContainer
0x48DA4B: push    eax
0x48DA4C: push    esi; a1
0x48DA4D: call    ContainerExtraData_GetContainerExtraDataForRef
0x48DA52: add     esp, 8
0x48DA55: test    eax, eax
0x48DA57: mov     [esp+2Ch+var_14], eax
0x48DA5B: jz      loc_48DF67
0x48DA61: mov     ecx, [edi+4]; this
0x48DA64: test    ecx, ecx
0x48DA66: jz      short loc_48DA6F
0x48DA68: call    TESObjectREFR_GetContainer
0x48DA6D: jmp     short loc_48DA71
0x48DA6F: xor     eax, eax
0x48DA71: lea     ebp, [eax+8]
0x48DA74: test    ebp, ebp
0x48DA76: mov     [esp+2Ch+arg_0], ebp
0x48DA7A: jz      loc_48DD1D
0x48DA80: cmp     dword ptr [ebp+4], 0
0x48DA84: jnz     short loc_48DA90
0x48DA86: cmp     dword ptr [ebp+0], 0
0x48DA8A: jz      loc_48DD1D
0x48DA90: mov     eax, [ebp+0]
0x48DA93: mov     edi, [eax+4]
0x48DA96: push    0; int
0x48DA98: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x48DA9D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48DAA2: mov     eax, edi
0x48DAA4: push    0; int
0x48DAA6: push    eax; void *
0x48DAA7: call    OblivionDynamicCast
0x48DAAC: add     esp, 14h
0x48DAAF: test    edi, edi
0x48DAB1: jz      loc_48DD0E
0x48DAB7: mov     ecx, [esp+2Ch+var_18]
0x48DABB: push    0
0x48DABD: push    1
0x48DABF: push    edi
0x48DAC0: call    ContainerExtraData_GetEntryForForm
0x48DAC5: mov     ebx, eax
0x48DAC7: mov     eax, [ebp+0]
0x48DACA: mov     eax, [eax]
0x48DACC: test    eax, eax
0x48DACE: jge     short loc_48DAD2
0x48DAD0: neg     eax
0x48DAD2: test    ebx, ebx
0x48DAD4: jz      short loc_48DADE
0x48DAD6: mov     ecx, [ebx+4]
0x48DAD9: lea     esi, [ecx+eax]
0x48DADC: jmp     short loc_48DAE0
0x48DADE: mov     esi, eax
0x48DAE0: test    esi, esi
0x48DAE2: jle     loc_48DD0E
0x48DAE8: push    0; int
0x48DAEA: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x48DAEF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x48DAF4: push    0; int
0x48DAF6: push    edi; void *
0x48DAF7: call    OblivionDynamicCast
0x48DAFC: add     esp, 14h
0x48DAFF: test    eax, eax
0x48DB01: jz      loc_48DC58
0x48DB07: cmp     dword ptr [eax+4], 0
0x48DB0B: jz      loc_48DC58
0x48DB11: movzx   eax, byte ptr [edi+4]
0x48DB15: push    eax; a1
0x48DB16: call    TESForm_CreateDynamic
0x48DB1B: mov     esi, eax
0x48DB1D: mov     edx, [esi]
0x48DB1F: mov     eax, [edx+0B4h]
0x48DB25: add     esp, 4
0x48DB28: push    edi
0x48DB29: mov     ecx, esi
0x48DB2B: call    eax
0x48DB2D: push    0; int
0x48DB2F: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x48DB34: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x48DB39: push    0; int
0x48DB3B: push    esi; void *
0x48DB3C: call    OblivionDynamicCast
0x48DB41: add     esp, 14h
0x48DB44: test    eax, eax
0x48DB46: jz      short loc_48DB4F
0x48DB48: mov     dword ptr [eax+4], 0
0x48DB4F: mov     ecx, ds:0B33A98h
0x48DB55: push    esi
0x48DB56: call    TESDataHandler_AddForm
0x48DB5B: mov     ecx, ds:0B33B00h
0x48DB61: push    esi
0x48DB62: call    SaveLoad_AddCreatedObj
0x48DB67: test    ebx, ebx
0x48DB69: mov     eax, [ebp+0]
0x48DB6C: mov     edi, [eax]
0x48DB6E: jz      short loc_48DB73
0x48DB70: add     edi, [ebx+4]
0x48DB73: push    0Ch; Size
0x48DB75: call    FormHeapAlloc
0x48DB7A: add     esp, 4
0x48DB7D: mov     [esp+2Ch+arg_4], eax
0x48DB81: test    eax, eax
0x48DB83: mov     [esp+2Ch+var_4], 0
0x48DB8B: jz      short loc_48DB9A
0x48DB8D: push    edi
0x48DB8E: push    esi
0x48DB8F: mov     ecx, eax
0x48DB91: call    ContainerEntryExtraData_constr
0x48DB96: mov     ebp, eax
0x48DB98: jmp     short loc_48DB9C
0x48DB9A: xor     ebp, ebp
0x48DB9C: test    ebx, ebx
0x48DB9E: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x48DBA6: mov     [esp+2Ch+arg_4], ebp
0x48DBAA: jz      loc_48DCFA
0x48DBB0: mov     esi, [ebx]
0x48DBB2: test    esi, esi
0x48DBB4: jz      loc_48DCFA
0x48DBBA: mov     ecx, esi
0x48DBBC: call    BSSimpleList_Count
0x48DBC1: test    eax, eax
0x48DBC3: jz      loc_48DCFA
0x48DBC9: test    esi, esi
0x48DBCB: jz      loc_48DCFA
0x48DBD1: cmp     dword ptr [esi], 0
0x48DBD4: jz      loc_48DCFA
0x48DBDA: cmp     dword ptr [esi], 0
0x48DBDD: jz      loc_48DCFA
0x48DBE3: push    14h; Size
0x48DBE5: call    FormHeapAlloc
0x48DBEA: add     esp, 4
0x48DBED: mov     [esp+2Ch+var_10], eax
0x48DBF1: test    eax, eax
0x48DBF3: mov     [esp+2Ch+var_4], 1
0x48DBFB: jz      short loc_48DC08
0x48DBFD: mov     ecx, eax
0x48DBFF: call    ExtraDataList_constr
0x48DC04: mov     ebx, eax
0x48DC06: jmp     short loc_48DC0A
0x48DC08: xor     ebx, ebx
0x48DC0A: mov     ecx, [esi]; this
0x48DC0C: push    12h; a2
0x48DC0E: mov     [esp+30h+var_4], 0FFFFFFFFh
0x48DC16: call    BaseExtraList_GetExtraData
0x48DC1B: mov     edi, eax
0x48DC1D: test    edi, edi
0x48DC1F: jz      short loc_48DC2B
0x48DC21: mov     ecx, [esi]
0x48DC23: push    0
0x48DC25: push    edi
0x48DC26: call    BaseExtraList_RemoveExtraByPtr
0x48DC2B: mov     eax, [esi]
0x48DC2D: push    1
0x48DC2F: push    eax
0x48DC30: mov     ecx, ebx
0x48DC32: call    ExtraDataList_CopyListForContainer
0x48DC37: mov     ecx, [ebp+0]
0x48DC3A: push    ebx
0x48DC3B: call    BSSimpleList_PushBack
0x48DC40: test    edi, edi
0x48DC42: jz      short loc_48DC4C
0x48DC44: mov     ecx, [esi]; ExtraDataList *
0x48DC46: push    edi; BSExtraData *
0x48DC47: call    BaseExtraList_AddExtra
0x48DC4C: mov     esi, [esi+4]
0x48DC4F: test    esi, esi
0x48DC51: jnz     short loc_48DBDA
0x48DC53: jmp     loc_48DCFA
0x48DC58: push    0Ch; Size
0x48DC5A: call    FormHeapAlloc
0x48DC5F: add     esp, 4
0x48DC62: mov     [esp+2Ch+arg_4], eax
0x48DC66: test    eax, eax
0x48DC68: mov     [esp+2Ch+var_4], 2
0x48DC70: jz      short loc_48DC7F
0x48DC72: push    esi
0x48DC73: push    edi
0x48DC74: mov     ecx, eax
0x48DC76: call    ContainerEntryExtraData_constr
0x48DC7B: mov     ebp, eax
0x48DC7D: jmp     short loc_48DC81
0x48DC7F: xor     ebp, ebp
0x48DC81: test    ebx, ebx
0x48DC83: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x48DC8B: mov     [esp+2Ch+arg_4], ebp
0x48DC8F: jz      short loc_48DCFA
0x48DC91: mov     esi, [ebx]
0x48DC93: test    esi, esi
0x48DC95: jz      short loc_48DCFA
0x48DC97: mov     ecx, esi
0x48DC99: call    BSSimpleList_Count
0x48DC9E: test    eax, eax
0x48DCA0: jz      short loc_48DCFA
0x48DCA2: test    esi, esi
0x48DCA4: jz      short loc_48DCFA
0x48DCA6: cmp     dword ptr [esi], 0
0x48DCA9: jz      short loc_48DCFA
0x48DCAB: or      ebx, 0FFFFFFFFh
0x48DCAE: cmp     dword ptr [esi], 0
0x48DCB1: jz      short loc_48DCFA
0x48DCB3: push    14h; Size
0x48DCB5: call    FormHeapAlloc
0x48DCBA: add     esp, 4
0x48DCBD: mov     [esp+2Ch+var_10], eax
0x48DCC1: test    eax, eax
0x48DCC3: mov     [esp+2Ch+var_4], 3
0x48DCCB: jz      short loc_48DCD8
0x48DCCD: mov     ecx, eax
0x48DCCF: call    ExtraDataList_constr
0x48DCD4: mov     edi, eax
0x48DCD6: jmp     short loc_48DCDA
0x48DCD8: xor     edi, edi
0x48DCDA: mov     eax, [esi]
0x48DCDC: push    1
0x48DCDE: push    eax
0x48DCDF: mov     ecx, edi
0x48DCE1: mov     [esp+34h+var_4], ebx
0x48DCE5: call    ExtraDataList_CopyListForContainer
0x48DCEA: mov     ecx, [ebp+0]
0x48DCED: push    edi
0x48DCEE: call    BSSimpleList_PushBack
0x48DCF3: mov     esi, [esi+4]
0x48DCF6: test    esi, esi
0x48DCF8: jnz     short loc_48DCAE
0x48DCFA: mov     ecx, [esp+2Ch+arg_4]
0x48DCFE: push    1
0x48DD00: push    ecx
0x48DD01: mov     ecx, [esp+34h+var_14]
0x48DD05: call    ContainerExtraData_AddEntry
0x48DD0A: mov     ebp, [esp+2Ch+arg_0]
0x48DD0E: mov     ebp, [ebp+4]
0x48DD11: test    ebp, ebp
0x48DD13: mov     [esp+2Ch+arg_0], ebp
0x48DD17: jnz     loc_48DA80
0x48DD1D: mov     edx, [esp+2Ch+var_18]
0x48DD21: mov     eax, [edx]
0x48DD23: test    eax, eax
0x48DD25: mov     [esp+2Ch+arg_0], eax
0x48DD29: jz      loc_48DF67
0x48DD2F: nop
0x48DD30: cmp     dword ptr [eax+4], 0
0x48DD34: jnz     short loc_48DD3F
0x48DD36: cmp     dword ptr [eax], 0
0x48DD39: jz      loc_48DF67
0x48DD3F: mov     edi, [eax]
0x48DD41: test    edi, edi
0x48DD43: jz      loc_48DF58
0x48DD49: cmp     dword ptr [edi+4], 0
0x48DD4D: jle     loc_48DF58
0x48DD53: mov     ecx, edi
0x48DD55: call    sub_4847F0
0x48DD5A: mov     ecx, edi
0x48DD5C: call    sub_484F20
0x48DD61: test    eax, eax
0x48DD63: jz      loc_48DEA5
0x48DD69: mov     eax, [edi+8]
0x48DD6C: movzx   eax, byte ptr [eax+4]
0x48DD70: push    eax; a1
0x48DD71: call    TESForm_CreateDynamic
0x48DD76: mov     esi, eax
0x48DD78: mov     eax, [edi+8]
0x48DD7B: mov     edx, [esi]
0x48DD7D: add     esp, 4
0x48DD80: push    eax
0x48DD81: mov     eax, [edx+0B4h]
0x48DD87: mov     ecx, esi
0x48DD89: call    eax
0x48DD8B: push    0; int
0x48DD8D: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x48DD92: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x48DD97: push    0; int
0x48DD99: push    esi; void *
0x48DD9A: call    OblivionDynamicCast
0x48DD9F: add     esp, 14h
0x48DDA2: test    eax, eax
0x48DDA4: jz      short loc_48DDAD
0x48DDA6: mov     dword ptr [eax+4], 0
0x48DDAD: mov     ecx, ds:0B33A98h
0x48DDB3: push    esi
0x48DDB4: call    TESDataHandler_AddForm
0x48DDB9: mov     ecx, ds:0B33B00h
0x48DDBF: push    esi
0x48DDC0: call    SaveLoad_AddCreatedObj
0x48DDC5: push    0Ch; Size
0x48DDC7: call    FormHeapAlloc
0x48DDCC: add     esp, 4
0x48DDCF: mov     [esp+2Ch+arg_4], eax
0x48DDD3: test    eax, eax
0x48DDD5: mov     [esp+2Ch+var_4], 4
0x48DDDD: jz      short loc_48DDEF
0x48DDDF: mov     ecx, [edi+4]
0x48DDE2: push    ecx
0x48DDE3: push    esi
0x48DDE4: mov     ecx, eax
0x48DDE6: call    ContainerEntryExtraData_constr
0x48DDEB: mov     ebp, eax
0x48DDED: jmp     short loc_48DDF1
0x48DDEF: xor     ebp, ebp
0x48DDF1: mov     esi, [edi]
0x48DDF3: test    esi, esi
0x48DDF5: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x48DDFD: mov     [esp+2Ch+arg_4], ebp
0x48DE01: jz      loc_48DF44
0x48DE07: mov     ecx, esi
0x48DE09: call    BSSimpleList_Count
0x48DE0E: test    eax, eax
0x48DE10: jz      loc_48DF44
0x48DE16: test    esi, esi
0x48DE18: jz      loc_48DF44
0x48DE1E: cmp     dword ptr [esi], 0
0x48DE21: jz      loc_48DF44
0x48DE27: cmp     dword ptr [esi], 0
0x48DE2A: jz      loc_48DF44
0x48DE30: push    14h; Size
0x48DE32: call    FormHeapAlloc
0x48DE37: add     esp, 4
0x48DE3A: mov     [esp+2Ch+var_10], eax
0x48DE3E: test    eax, eax
0x48DE40: mov     [esp+2Ch+var_4], 5
0x48DE48: jz      short loc_48DE55
0x48DE4A: mov     ecx, eax
0x48DE4C: call    ExtraDataList_constr
0x48DE51: mov     ebx, eax
0x48DE53: jmp     short loc_48DE57
0x48DE55: xor     ebx, ebx
0x48DE57: mov     ecx, [esi]; this
0x48DE59: push    12h; a2
0x48DE5B: mov     [esp+30h+var_4], 0FFFFFFFFh
0x48DE63: call    BaseExtraList_GetExtraData
0x48DE68: mov     edi, eax
0x48DE6A: test    edi, edi
0x48DE6C: jz      short loc_48DE78
0x48DE6E: mov     ecx, [esi]
0x48DE70: push    0
0x48DE72: push    edi
0x48DE73: call    BaseExtraList_RemoveExtraByPtr
0x48DE78: mov     ecx, [esi]
0x48DE7A: push    1
0x48DE7C: push    ecx
0x48DE7D: mov     ecx, ebx
0x48DE7F: call    ExtraDataList_CopyListForContainer
0x48DE84: mov     ecx, [ebp+0]
0x48DE87: push    ebx
0x48DE88: call    BSSimpleList_PushBack
0x48DE8D: test    edi, edi
0x48DE8F: jz      short loc_48DE99
0x48DE91: mov     ecx, [esi]; ExtraDataList *
0x48DE93: push    edi; BSExtraData *
0x48DE94: call    BaseExtraList_AddExtra
0x48DE99: mov     esi, [esi+4]
0x48DE9C: test    esi, esi
0x48DE9E: jnz     short loc_48DE27
0x48DEA0: jmp     loc_48DF44
0x48DEA5: push    0Ch; Size
0x48DEA7: call    FormHeapAlloc
0x48DEAC: add     esp, 4
0x48DEAF: mov     [esp+2Ch+arg_4], eax
0x48DEB3: test    eax, eax
0x48DEB5: mov     [esp+2Ch+var_4], 6
0x48DEBD: jz      short loc_48DED2
0x48DEBF: mov     ecx, [edi+4]
0x48DEC2: mov     edx, [edi+8]
0x48DEC5: push    ecx
0x48DEC6: push    edx
0x48DEC7: mov     ecx, eax
0x48DEC9: call    ContainerEntryExtraData_constr
0x48DECE: mov     ebx, eax
0x48DED0: jmp     short loc_48DED4
0x48DED2: xor     ebx, ebx
0x48DED4: mov     esi, [edi]
0x48DED6: or      ebp, 0FFFFFFFFh
0x48DED9: test    esi, esi
0x48DEDB: mov     [esp+2Ch+var_4], ebp
0x48DEDF: mov     [esp+2Ch+arg_4], ebx
0x48DEE3: jz      short loc_48DF44
0x48DEE5: mov     ecx, esi
0x48DEE7: call    BSSimpleList_Count
0x48DEEC: test    eax, eax
0x48DEEE: jz      short loc_48DF44
0x48DEF0: test    esi, esi
0x48DEF2: jz      short loc_48DF44
0x48DEF4: cmp     dword ptr [esi], 0
0x48DEF7: jz      short loc_48DF44
0x48DEF9: cmp     dword ptr [esi], 0
0x48DEFC: jz      short loc_48DF44
0x48DEFE: push    14h; Size
0x48DF00: call    FormHeapAlloc
0x48DF05: add     esp, 4
0x48DF08: mov     [esp+2Ch+var_10], eax
0x48DF0C: test    eax, eax
0x48DF0E: mov     [esp+2Ch+var_4], 7
0x48DF16: jz      short loc_48DF23
0x48DF18: mov     ecx, eax
0x48DF1A: call    ExtraDataList_constr
0x48DF1F: mov     edi, eax
0x48DF21: jmp     short loc_48DF25
0x48DF23: xor     edi, edi
0x48DF25: mov     edx, [esi]
0x48DF27: push    1
0x48DF29: push    edx
0x48DF2A: mov     ecx, edi
0x48DF2C: mov     [esp+34h+var_4], ebp
0x48DF30: call    ExtraDataList_CopyListForContainer
0x48DF35: mov     ecx, [ebx]
0x48DF37: push    edi
0x48DF38: call    BSSimpleList_PushBack
0x48DF3D: mov     esi, [esi+4]
0x48DF40: test    esi, esi
0x48DF42: jnz     short loc_48DEF9
0x48DF44: mov     eax, [esp+2Ch+arg_4]
0x48DF48: mov     ecx, [esp+2Ch+var_14]
0x48DF4C: push    1
0x48DF4E: push    eax
0x48DF4F: call    ContainerExtraData_AddEntry
0x48DF54: mov     eax, [esp+2Ch+arg_0]
0x48DF58: mov     eax, [eax+4]
0x48DF5B: test    eax, eax
0x48DF5D: mov     [esp+2Ch+arg_0], eax
0x48DF61: jnz     loc_48DD30
0x48DF67: mov     ecx, [esp+2Ch+var_C]
0x48DF6B: mov     large fs:0, ecx
0x48DF72: pop     ecx
0x48DF73: pop     edi
0x48DF74: pop     esi
0x48DF75: pop     ebp
0x48DF76: pop     ebx
0x48DF77: add     esp, 18h
0x48DF7A: retn    8
