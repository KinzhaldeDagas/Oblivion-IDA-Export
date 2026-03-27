0x4E1C70: push    0FFFFFFFFh
0x4E1C72: push    offset SEH_5ACE20
0x4E1C77: mov     eax, large fs:0
0x4E1C7D: push    eax
0x4E1C7E: sub     esp, 8
0x4E1C81: push    ebx
0x4E1C82: push    ebp
0x4E1C83: push    esi
0x4E1C84: push    edi
0x4E1C85: mov     eax, ds:0B30AACh
0x4E1C8A: xor     eax, esp
0x4E1C8C: push    eax
0x4E1C8D: lea     eax, [esp+28h+var_C]
0x4E1C91: mov     large fs:0, eax
0x4E1C97: mov     esi, ecx
0x4E1C99: mov     eax, [esi+3Ch]
0x4E1C9C: xor     ebp, ebp
0x4E1C9E: cmp     eax, ebp
0x4E1CA0: jz      loc_4E1DD0
0x4E1CA6: mov     eax, [esi]
0x4E1CA8: mov     edx, [eax+168h]
0x4E1CAE: call    edx
0x4E1CB0: mov     edi, eax
0x4E1CB2: mov     eax, [esi]
0x4E1CB4: mov     edx, [eax+190h]
0x4E1CBA: mov     ecx, esi
0x4E1CBC: call    edx
0x4E1CBE: test    al, al
0x4E1CC0: jz      loc_4E1DD0
0x4E1CC6: mov     ecx, [esi+58h]
0x4E1CC9: cmp     ecx, ebp
0x4E1CCB: jz      loc_4E1DD0
0x4E1CD1: mov     eax, [ecx]
0x4E1CD3: mov     edx, [eax+33Ch]
0x4E1CD9: push    1
0x4E1CDB: call    edx
0x4E1CDD: test    eax, eax
0x4E1CDF: jnz     loc_4E1DD0
0x4E1CE5: mov     ecx, ds:0B333C4h
0x4E1CEB: cmp     esi, ecx
0x4E1CED: mov     ebx, [esp+28h+arg_0]
0x4E1CF1: jnz     short loc_4E1D1B
0x4E1CF3: cmp     edi, ebp
0x4E1CF5: jz      short loc_4E1D05
0x4E1CF7: push    ebx
0x4E1CF8: mov     ecx, edi
0x4E1CFA: call    sub_47A2C0
0x4E1CFF: mov     ecx, ds:0B333C4h
0x4E1D05: mov     al, [ecx+588h]
0x4E1D0B: mov     byte ptr [esp+28h+arg_0], al
0x4E1D0F: mov     edx, [esp+28h+arg_0]
0x4E1D13: push    edx
0x4E1D14: call    sub_6600D0
0x4E1D19: mov     edi, eax
0x4E1D1B: cmp     edi, ebp
0x4E1D1D: jz      short loc_4E1D29
0x4E1D1F: push    ebx
0x4E1D20: mov     ecx, edi
0x4E1D22: call    sub_47A2C0
0x4E1D27: jmp     short loc_4E1DA1
0x4E1D29: push    ebp; int
0x4E1D2A: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4E1D2F: push    offset ??_R0?AVTESObjectLIGH@@@8; struct _s_RTTICompleteObjectLocator *
0x4E1D34: push    ebp; int
0x4E1D35: push    ebx; void *
0x4E1D36: call    OblivionDynamicCast
0x4E1D3B: add     esp, 14h
0x4E1D3E: cmp     eax, ebp
0x4E1D40: jz      short loc_4E1DA1
0x4E1D42: push    ebp
0x4E1D43: push    esi
0x4E1D44: push    0Eh
0x4E1D46: push    ebp
0x4E1D47: mov     ecx, eax
0x4E1D49: call    TESBipedModelForm_GetModelPath
0x4E1D4E: push    eax
0x4E1D4F: call    sub_479450
0x4E1D54: mov     edi, eax
0x4E1D56: mov     [esp+38h+Src], ebp
0x4E1D5A: mov     [esp+38h+var_10], bp
0x4E1D5F: mov     [esp+38h+var_E], bp
0x4E1D64: mov     eax, [ebx+0Ch]
0x4E1D67: push    eax
0x4E1D68: mov     eax, ds:0B065C0h
0x4E1D6D: push    eax; ArgList
0x4E1D6E: lea     ecx, [esp+40h+Src]
0x4E1D72: push    offset aS08x; "%s (%08X)"
0x4E1D77: push    ecx; int
0x4E1D78: mov     [esp+48h+var_4], ebp
0x4E1D7C: call    BSStringT_Static_Format
0x4E1D81: mov     edx, [esp+48h+Src]
0x4E1D85: add     esp, 20h
0x4E1D88: push    edx; Src
0x4E1D89: mov     ecx, edi
0x4E1D8B: call    NiObjectNET_SetName
0x4E1D90: lea     ecx, [esp+28h+Src]; void *
0x4E1D94: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4E1D9C: call    BSStringT_Clear
0x4E1DA1: mov     ecx, [esi+58h]
0x4E1DA4: mov     eax, [ecx]
0x4E1DA6: mov     edx, [eax+348h]
0x4E1DAC: push    esi
0x4E1DAD: call    edx
0x4E1DAF: mov     eax, [esi+3Ch]
0x4E1DB2: push    eax
0x4E1DB3: mov     ecx, esi
0x4E1DB5: call    sub_5EA1A0
0x4E1DBA: mov     ecx, esi; a1
0x4E1DBC: call    sub_5EE1B0
0x4E1DC1: mov     ecx, ds:0B333C4h; this
0x4E1DC7: cmp     esi, ecx
0x4E1DC9: jnz     short loc_4E1DD0
0x4E1DCB: call    sub_6637C0
0x4E1DD0: mov     ecx, dword ptr [esp+28h+var_C]
0x4E1DD4: mov     large fs:0, ecx
0x4E1DDB: pop     ecx
0x4E1DDC: pop     edi
0x4E1DDD: pop     esi
0x4E1DDE: pop     ebp
0x4E1DDF: pop     ebx
0x4E1DE0: add     esp, 14h
0x4E1DE3: retn    4
