0x5A4980: push    0FFFFFFFFh
0x5A4982: push    offset SEH_5A4980
0x5A4987: mov     eax, large fs:0
0x5A498D: push    eax
0x5A498E: sub     esp, 38h
0x5A4991: push    ebx
0x5A4992: push    ebp; a3
0x5A4993: push    esi; a3
0x5A4994: push    edi; a3
0x5A4995: mov     eax, ds:0B30AACh
0x5A499A: xor     eax, esp
0x5A499C: push    eax; a3
0x5A499D: lea     eax, [esp+58h+var_C]
0x5A49A1: mov     large fs:0, eax
0x5A49A7: xor     ebp, ebp
0x5A49A9: cmp     ds:0B3B33Ch, ebp
0x5A49AF: jz      loc_5A54F7
0x5A49B5: xor     esi, esi
0x5A49B7: mov     dword ptr [esp+58h+ArgList], esi
0x5A49BB: mov     word ptr [esp+58h+var_2C.m_data], bp
0x5A49C0: mov     word ptr [esp+58h+var_2C.m_data+2], bp
0x5A49C5: mov     edi, [esp+58h+arg_0]
0x5A49C9: cmp     edi, ebp
0x5A49CB: mov     dword ptr [esp+58h+var_8+4], ebp
0x5A49CF: jz      short loc_5A4A2B
0x5A49D1: mov     ecx, edi; this
0x5A49D3: call    TESObjectREFR_GetName
0x5A49D8: push    ebp; a3
0x5A49D9: push    eax; a2
0x5A49DA: lea     ecx, [esp+60h+ArgList]; this
0x5A49DE: call    BSStringT_Set
0x5A49E3: mov     esi, dword ptr [esp+58h+ArgList]
0x5A49E7: cmp     esi, ebp
0x5A49E9: jz      short loc_5A4A2B
0x5A49EB: mov     ax, word ptr [esp+58h+var_2C.m_data]
0x5A49F0: cmp     ax, 0FFFFh
0x5A49F4: jnz     short loc_5A4A0D
0x5A49F6: mov     eax, esi
0x5A49F8: lea     edx, [eax+1]
0x5A49FB: jmp     short loc_5A4A00
0x5A49FD: align 10h
0x5A4A00: mov     cl, [eax]
0x5A4A02: add     eax, 1
0x5A4A05: test    cl, cl
0x5A4A07: jnz     short loc_5A4A00
0x5A4A09: sub     eax, edx
0x5A4A0B: jmp     short loc_5A4A10
0x5A4A0D: movzx   eax, ax
0x5A4A10: cmp     eax, ebp
0x5A4A12: jz      short loc_5A4A2B
0x5A4A14: lea     ecx, [esp+58h+ArgList]
0x5A4A18: call    BSStringT_GetLen
0x5A4A1D: cmp     byte ptr [eax+esi-1], 20h ; ' '
0x5A4A22: lea     eax, [eax+esi-1]
0x5A4A26: jnz     short loc_5A4A2B
0x5A4A28: mov     byte ptr [eax], 0
0x5A4A2B: mov     eax, ds:0B333C4h
0x5A4A30: cmp     eax, ebp
0x5A4A32: jz      loc_5A54EE
0x5A4A38: cmp     byte ptr [eax+5C0h], 0
0x5A4A3F: jnz     loc_5A54EE
0x5A4A45: cmp     edi, eax
0x5A4A47: jnz     short loc_5A4A4B
0x5A4A49: xor     edi, edi
0x5A4A4B: mov     ecx, ds:0B3B33Ch; int
0x5A4A51: mov     eax, [ecx+4]
0x5A4A54: cmp     eax, ebp
0x5A4A56: mov     [esp+58h+var_3C], eax
0x5A4A5A: jz      loc_5A54EE
0x5A4A60: mov     bl, [esp+58h+arg_8]
0x5A4A64: test    bl, bl
0x5A4A66: mov     esi, ecx
0x5A4A68: jnz     short loc_5A4A84
0x5A4A6A: cmp     edi, [esi+54h]
0x5A4A6D: jnz     short loc_5A4A84
0x5A4A6F: mov     eax, [esi+24h]
0x5A4A72: cmp     eax, 8
0x5A4A75: jz      loc_5A4BD3
0x5A4A7B: cmp     eax, 1
0x5A4A7E: jz      loc_5A4BD3
0x5A4A84: cmp     edi, ebp
0x5A4A86: jnz     short loc_5A4A8B
0x5A4A88: mov     [esi+54h], ebp
0x5A4A8B: test    bl, bl
0x5A4A8D: jnz     short loc_5A4AD9
0x5A4A8F: mov     eax, [esi+24h]
0x5A4A92: cmp     eax, 4
0x5A4A95: jnz     short loc_5A4A9B
0x5A4A97: cmp     edi, ebp
0x5A4A99: jnz     short loc_5A4AD9
0x5A4A9B: cmp     eax, 8
0x5A4A9E: jz      short loc_5A4AA5
0x5A4AA0: cmp     eax, 1
0x5A4AA3: jnz     short loc_5A4AAA
0x5A4AA5: call    sub_584740
0x5A4AAA: lea     ecx, [esp+58h+ArgList]; void *
0x5A4AAE: mov     dword ptr [esp+58h+var_8+4], 0FFFFFFFFh
0x5A4AB6: call    BSStringT_Clear
0x5A4ABB: cmp     edi, ebp
0x5A4ABD: jnz     loc_5A54F7
0x5A4AC3: mov     al, 1
0x5A4AC5: mov     ecx, [esp+58h+var_C]
0x5A4AC9: mov     large fs:0, ecx
0x5A4AD0: pop     ecx
0x5A4AD1: pop     edi
0x5A4AD2: pop     esi
0x5A4AD3: pop     ebp
0x5A4AD4: pop     ebx
0x5A4AD5: add     esp, 44h
0x5A4AD8: retn
0x5A4AD9: mov     ecx, edi
0x5A4ADB: call    sub_4DE980
0x5A4AE0: cmp     edi, ebp
0x5A4AE2: jz      short loc_5A4AE9
0x5A4AE4: cmp     eax, 5
0x5A4AE7: jz      short loc_5A4AEE
0x5A4AE9: cmp     eax, 3
0x5A4AEC: jnz     short loc_5A4B3C
0x5A4AEE: lea     eax, [esp+58h+var_44]
0x5A4AF2: push    eax
0x5A4AF3: lea     ecx, [esp+5Ch+var_2C.m_dataLen]
0x5A4AF7: push    ecx
0x5A4AF8: mov     ecx, ds:0B333C4h
0x5A4AFE: mov     [esp+60h+var_44], ebp
0x5A4B02: mov     word ptr [esp+60h+var_1C], bp
0x5A4B07: mov     byte ptr [esp+60h+var_1C+2], 0FFh
0x5A4B0C: mov     edx, [ecx]
0x5A4B0E: mov     eax, [edx+174h]
0x5A4B14: push    1
0x5A4B16: push    1
0x5A4B18: call    eax
0x5A4B1A: push    eax
0x5A4B1B: mov     ecx, edi
0x5A4B1D: call    sub_4DBAE0
0x5A4B22: test    al, al
0x5A4B24: jnz     short loc_5A4B3C
0x5A4B26: lea     ecx, [esp+58h+ArgList]; void *
0x5A4B2A: mov     dword ptr [esp+58h+var_8+4], 0FFFFFFFFh
0x5A4B32: call    BSStringT_Clear
0x5A4B37: jmp     loc_5A54F7
0x5A4B3C: test    bl, bl
0x5A4B3E: jnz     short loc_5A4B43
0x5A4B40: mov     [esi+54h], edi
0x5A4B43: mov     ecx, edi
0x5A4B45: call    sub_4D74D0
0x5A4B4A: test    al, al
0x5A4B4C: jz      short loc_5A4B93
0x5A4B4E: mov     edx, [edi]
0x5A4B50: mov     eax, [edx+388h]
0x5A4B56: mov     ecx, edi
0x5A4B58: call    eax
0x5A4B5A: mov     ebp, eax
0x5A4B5C: test    ebp, ebp
0x5A4B5E: jz      short loc_5A4B93
0x5A4B60: cmp     ebp, ds:0B333C4h
0x5A4B66: jz      short loc_5A4B93
0x5A4B68: mov     edx, [ebp+0]
0x5A4B6B: mov     eax, [edx+198h]
0x5A4B71: push    0; a3
0x5A4B73: mov     ecx, ebp
0x5A4B75: call    eax
0x5A4B77: test    al, al
0x5A4B79: jnz     short loc_5A4B93
0x5A4B7B: mov     ecx, [ebp+58h]
0x5A4B7E: test    ecx, ecx
0x5A4B80: jz      short loc_5A4B93
0x5A4B82: mov     edx, [ecx]
0x5A4B84: mov     eax, [edx+36Ch]
0x5A4B8A: call    eax
0x5A4B8C: cmp     eax, 4
0x5A4B8F: jnz     short loc_5A4B93
0x5A4B91: mov     edi, ebp
0x5A4B93: mov     ecx, [edi+8]
0x5A4B96: shr     ecx, 0Dh
0x5A4B99: test    cl, 1
0x5A4B9C: jnz     short loc_5A4BCC; jumptable 005A4BC5 cases 28,30
0x5A4B9E: mov     edx, [edi]
0x5A4BA0: mov     eax, [edx+170h]
0x5A4BA6: mov     ecx, edi
0x5A4BA8: call    eax
0x5A4BAA: movzx   eax, byte ptr [eax+4]
0x5A4BAE: mov     bl, byte ptr [esp+58h+arg_4]
0x5A4BB2: mov     [esp+58h+var_40], eax; a3
0x5A4BB6: add     eax, 0FFFFFFEEh; switch 19 cases
0x5A4BB9: cmp     eax, 12h
0x5A4BBC: ja      short def_5A4BC5; jumptable 005A4BC5 default case, cases 19-22,25,27,29,31-34
0x5A4BBE: movzx   ecx, ds:byte_5A5520[eax]
0x5A4BC5: jmp     ds:jpt_5A4BC5[ecx*4]; switch jump
0x5A4BCC: mov     ecx, esi; jumptable 005A4BC5 cases 28,30
0x5A4BCE: call    sub_584740
0x5A4BD3: lea     ecx, [esp+58h+ArgList]; void *
0x5A4BD7: mov     dword ptr [esp+58h+var_8+4], 0FFFFFFFFh
0x5A4BDF: call    BSStringT_Clear
0x5A4BE4: mov     al, 1
0x5A4BE6: mov     ecx, [esp+58h+var_C]
0x5A4BEA: mov     large fs:0, ecx
0x5A4BF1: pop     ecx
0x5A4BF2: pop     edi
0x5A4BF3: pop     esi
0x5A4BF4: pop     ebp
0x5A4BF5: pop     ebx
0x5A4BF6: add     esp, 44h
0x5A4BF9: retn
0x5A4BFA: test    bl, bl; jumptable 005A4BC5 cases 18,23,24,35,36
0x5A4BFC: jz      short def_5A4BC5; jumptable 005A4BC5 default case, cases 19-22,25,27,29,31-34
0x5A4BFE: jmp     short loc_5A4BCC; jumptable 005A4BC5 cases 28,30
0x5A4C00: mov     edx, [edi]; jumptable 005A4BC5 case 26
0x5A4C02: mov     eax, [edx+170h]
0x5A4C08: mov     ecx, edi
0x5A4C0A: call    eax
0x5A4C0C: mov     ecx, [eax+7Ch]
0x5A4C0F: shr     ecx, 1
0x5A4C11: test    cl, 1
0x5A4C14: jz      short loc_5A4BCC; jumptable 005A4BC5 cases 28,30
0x5A4C16: xor     ebp, ebp; jumptable 005A4BC5 default case, cases 19-22,25,27,29,31-34
0x5A4C18: mov     [esp+58h+var_38.m_data], ebp; a3
0x5A4C1C: mov     [esp+58h+var_38.m_dataLen], bp; a3
0x5A4C21: mov     [esp+58h+var_38.m_bufLen], bp
0x5A4C26: mov     ecx, edi
0x5A4C28: mov     byte ptr [esp+58h+var_8+4], 1
0x5A4C2D: call    sub_4D7740
0x5A4C32: cmp     esi, ebp
0x5A4C34: mov     [esp+58h+var_44], eax; a3
0x5A4C38: jz      loc_5A4E45
0x5A4C3E: lea     ecx, [esp+58h+ArgList]
0x5A4C42: call    BSStringT_GetLen
0x5A4C47: test    eax, eax
0x5A4C49: jz      loc_5A4E45
0x5A4C4F: test    bl, bl
0x5A4C51: mov     ecx, [esi+4]; this
0x5A4C54: push    ecx
0x5A4C55: jz      short loc_5A4C5F
0x5A4C57: fld     dword ptr ds:0A379B4h
0x5A4C5D: jmp     short loc_5A4C61
0x5A4C5F: fld1
0x5A4C61: fstp    [esp+5Ch+var_5C]; a3
0x5A4C64: push    0FB2h; a2
0x5A4C69: call    Tile_SetFloat
0x5A4C6E: mov     ecx, edi; this
0x5A4C70: call    GetTeleportExtraData
0x5A4C75: mov     ebp, eax
0x5A4C77: xor     ebx, ebx
0x5A4C79: cmp     ebp, ebx
0x5A4C7B: jz      loc_5A4D02
0x5A4C81: mov     edx, ds:0B38D18h
0x5A4C87: mov     eax, dword ptr [esp+58h+ArgList]
0x5A4C8B: push    edx
0x5A4C8C: push    eax; ArgList
0x5A4C8D: lea     ecx, [esp+60h+var_38]
0x5A4C91: push    offset aSS; "%s %s"
0x5A4C96: push    ecx; int
0x5A4C97: call    BSStringT_Static_Format
0x5A4C9C: mov     edx, [esp+68h+var_38.m_data]
0x5A4CA0: mov     ecx, [esi+28h]
0x5A4CA3: add     esp, 10h
0x5A4CA6: push    edx
0x5A4CA7: push    0FDEh
0x5A4CAC: call    Tile_SetString
0x5A4CB1: fld     dword ptr ds:0A379B4h
0x5A4CB7: mov     ecx, [esi+28h]; this
0x5A4CBA: push    ecx
0x5A4CBB: fstp    [esp+5Ch+var_5C]; a3
0x5A4CBE: push    0FA1h; a2
0x5A4CC3: call    Tile_SetFloat
0x5A4CC8: lea     eax, [esp+58h+var_38]
0x5A4CCC: push    eax
0x5A4CCD: mov     ecx, ebp
0x5A4CCF: call    sub_42B650
0x5A4CD4: mov     ecx, [esp+58h+var_38.m_data]
0x5A4CD8: push    ecx
0x5A4CD9: mov     ecx, [esi+48h]
0x5A4CDC: push    0FDEh
0x5A4CE1: call    Tile_SetString
0x5A4CE6: fld     dword ptr ds:0A379B4h
0x5A4CEC: mov     ecx, [esi+48h]; this
0x5A4CEF: push    ecx
0x5A4CF0: fstp    [esp+5Ch+var_5C]; a3
0x5A4CF3: push    0FA1h; a2
0x5A4CF8: call    Tile_SetFloat
0x5A4CFD: jmp     loc_5A4E91
0x5A4D02: lea     ebp, [edi+44h]
0x5A4D05: mov     ecx, ebp
0x5A4D07: call    ExtraDataList_GetExtraCount
0x5A4D0C: cmp     ax, 1
0x5A4D10: jnz     loc_5A4DB2
0x5A4D16: mov     edx, [edi]
0x5A4D18: mov     eax, [edx+190h]
0x5A4D1E: mov     ecx, edi
0x5A4D20: call    eax
0x5A4D22: test    al, al
0x5A4D24: jz      short loc_5A4D9E
0x5A4D26: push    ebx; int
0x5A4D27: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5A4D2C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5A4D31: push    ebx; int
0x5A4D32: push    edi; void *
0x5A4D33: call    OblivionDynamicCast
0x5A4D38: mov     ebp, eax
0x5A4D3A: add     esp, 14h
0x5A4D3D: cmp     ebp, ebx
0x5A4D3F: jz      short loc_5A4D8A
0x5A4D41: mov     ecx, [ebp+58h]
0x5A4D44: cmp     ecx, ebx
0x5A4D46: jz      short loc_5A4D8A
0x5A4D48: mov     edx, [ecx]
0x5A4D4A: mov     eax, [edx+3D0h]
0x5A4D50: call    eax
0x5A4D52: test    eax, eax
0x5A4D54: jz      short loc_5A4D8A
0x5A4D56: mov     ecx, [ebp+58h]
0x5A4D59: mov     edx, [ecx]
0x5A4D5B: mov     eax, [edx+3D0h]
0x5A4D61: call    eax
0x5A4D63: mov     dword ptr [esp+58h+var_2C.m_dataLen], ebx
0x5A4D67: mov     [esp+58h+var_24], bx
0x5A4D6C: mov     [esp+58h+var_22], bx
0x5A4D71: mov     ecx, dword ptr [esp+58h+ArgList]
0x5A4D75: push    ecx
0x5A4D76: mov     ecx, eax; this
0x5A4D78: mov     byte ptr [esp+5Ch+var_8+4], 2
0x5A4D7D: call    TESObjectREFR_GetName
0x5A4D82: push    eax
0x5A4D83: push    offset aSSS_0; "%s's %s"
0x5A4D88: jmp     short loc_5A4DDA
0x5A4D8A: mov     ecx, dword ptr [esp+58h+ArgList]
0x5A4D8E: push    ecx
0x5A4D8F: mov     ecx, [esi+28h]
0x5A4D92: push    0FDEh
0x5A4D97: call    Tile_SetString
0x5A4D9C: jmp     short loc_5A4E07
0x5A4D9E: mov     edx, dword ptr [esp+58h+ArgList]
0x5A4DA2: mov     ecx, [esi+28h]
0x5A4DA5: push    edx
0x5A4DA6: push    0FDEh
0x5A4DAB: call    Tile_SetString
0x5A4DB0: jmp     short loc_5A4E07
0x5A4DB2: mov     dword ptr [esp+58h+var_2C.m_dataLen], ebx
0x5A4DB6: mov     [esp+58h+var_24], bx
0x5A4DBB: mov     [esp+58h+var_22], bx
0x5A4DC0: mov     ecx, ebp
0x5A4DC2: mov     byte ptr [esp+58h+var_8+4], 3
0x5A4DC7: call    ExtraDataList_GetExtraCount
0x5A4DCC: mov     ecx, dword ptr [esp+58h+ArgList]
0x5A4DD0: movsx   eax, ax
0x5A4DD3: push    eax
0x5A4DD4: push    ecx; ArgList
0x5A4DD5: push    offset aSD_1; "%s (%d)"
0x5A4DDA: lea     edx, [esp+64h+var_2C.m_dataLen]
0x5A4DDE: push    edx; int
0x5A4DDF: call    BSStringT_Static_Format
0x5A4DE4: mov     eax, dword ptr [esp+68h+var_2C.m_dataLen]
0x5A4DE8: mov     ecx, [esi+28h]
0x5A4DEB: add     esp, 10h
0x5A4DEE: push    eax
0x5A4DEF: push    0FDEh
0x5A4DF4: call    Tile_SetString
0x5A4DF9: lea     ecx, [esp+58h+var_2C.m_dataLen]; void *
0x5A4DFD: mov     byte ptr [esp+58h+var_8+4], 1
0x5A4E02: call    BSStringT_Clear
0x5A4E07: mov     ecx, [esi+28h]; this
0x5A4E0A: fld     dword ptr ds:0A379B4h
0x5A4E10: push    ecx
0x5A4E11: fstp    [esp+5Ch+var_5C]; a3
0x5A4E14: push    0FA1h; a2
0x5A4E19: call    Tile_SetFloat
0x5A4E1E: mov     ecx, [esi+48h]
0x5A4E21: push    offset word_A36430
0x5A4E26: push    0FDEh
0x5A4E2B: call    Tile_SetString
0x5A4E30: fld1
0x5A4E32: mov     ecx, [esi+48h]; this
0x5A4E35: push    ecx
0x5A4E36: fstp    [esp+5Ch+var_5C]; a3
0x5A4E39: push    0FA1h; a2
0x5A4E3E: call    Tile_SetFloat
0x5A4E43: jmp     short loc_5A4E91
0x5A4E45: mov     ecx, [esi+28h]
0x5A4E48: push    offset word_A36430
0x5A4E4D: push    0FDEh
0x5A4E52: call    Tile_SetString
0x5A4E57: fld1
0x5A4E59: mov     ecx, [esi+28h]; this
0x5A4E5C: push    ecx
0x5A4E5D: fstp    [esp+5Ch+var_5C]; a3
0x5A4E60: push    0FA1h; a2
0x5A4E65: call    Tile_SetFloat
0x5A4E6A: mov     ecx, [esi+48h]
0x5A4E6D: push    offset word_A36430
0x5A4E72: push    0FDEh
0x5A4E77: call    Tile_SetString
0x5A4E7C: fld1
0x5A4E7E: mov     ecx, [esi+48h]; this
0x5A4E81: push    ecx
0x5A4E82: fstp    [esp+5Ch+var_5C]; a3
0x5A4E85: push    0FA1h; a2
0x5A4E8A: call    Tile_SetFloat
0x5A4E8F: xor     ebx, ebx
0x5A4E91: mov     ebp, [esi+4Ch]
0x5A4E94: cmp     ebp, ebx
0x5A4E96: jz      loc_5A4FA8
0x5A4E9C: mov     edx, [edi]
0x5A4E9E: mov     eax, [edx+170h]
0x5A4EA4: push    0; int
0x5A4EA6: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x5A4EAB: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5A4EB0: push    0; int
0x5A4EB2: mov     ecx, edi
0x5A4EB4: call    eax
0x5A4EB6: push    eax; void *
0x5A4EB7: call    OblivionDynamicCast
0x5A4EBC: add     esp, 14h
0x5A4EBF: cmp     [esp+58h+var_44], 0
0x5A4EC4: mov     ebx, eax
0x5A4EC6: jz      loc_5A4F96
0x5A4ECC: mov     ecx, [esp+58h+var_44]
0x5A4ED0: call    sub_428E70
0x5A4ED5: test    al, al
0x5A4ED7: jz      loc_5A4F96
0x5A4EDD: mov     ecx, ds:0B333C4h
0x5A4EE3: push    1
0x5A4EE5: push    ecx
0x5A4EE6: mov     ecx, edi
0x5A4EE8: call    TESOBjectREFR_IsOwnedBy
0x5A4EED: test    al, al
0x5A4EEF: jnz     loc_5A4F96
0x5A4EF5: test    ebx, ebx
0x5A4EF7: jz      short loc_5A4F15
0x5A4EF9: mov     edx, ds:0B333C4h
0x5A4EFF: push    1
0x5A4F01: push    0
0x5A4F03: push    edx
0x5A4F04: push    edi
0x5A4F05: call    sub_4B72C0
0x5A4F0A: add     esp, 10h
0x5A4F0D: test    al, al
0x5A4F0F: jnz     loc_5A4F96
0x5A4F15: mov     ecx, edi
0x5A4F17: call    sub_4D7780
0x5A4F1C: push    eax
0x5A4F1D: call    GetLockLevel
0x5A4F22: mov     eax, ds:0B03E1Ch[eax*4]
0x5A4F29: add     esp, 4
0x5A4F2C: test    eax, eax
0x5A4F2E: jz      short loc_5A4F34
0x5A4F30: mov     eax, [eax]
0x5A4F32: jmp     short loc_5A4F36
0x5A4F34: xor     eax, eax
0x5A4F36: push    eax; ArgList
0x5A4F37: lea     eax, [esp+5Ch+var_38]
0x5A4F3B: push    offset aS; "%s"
0x5A4F40: push    eax; int
0x5A4F41: call    BSStringT_Static_Format
0x5A4F46: mov     ecx, [esp+64h+var_38.m_data]
0x5A4F4A: add     esp, 0Ch
0x5A4F4D: push    ecx
0x5A4F4E: push    0FDEh
0x5A4F53: mov     ecx, ebp
0x5A4F55: call    Tile_SetString
0x5A4F5A: mov     ecx, edi
0x5A4F5C: call    sub_4D7780
0x5A4F61: test    eax, eax
0x5A4F63: jnz     short loc_5A4F6F
0x5A4F65: mov     [esp+58h+var_44], 0FFFFFFFFh
0x5A4F6D: jmp     short loc_5A4F7A
0x5A4F6F: mov     ecx, edi
0x5A4F71: call    sub_4D7780
0x5A4F76: mov     [esp+58h+var_44], eax
0x5A4F7A: fild    [esp+58h+var_44]
0x5A4F7E: push    ecx
0x5A4F7F: mov     ecx, ebp; this
0x5A4F81: fstp    [esp+5Ch+var_5C]; a3
0x5A4F84: push    0FAFh; a2
0x5A4F89: call    Tile_SetFloat
0x5A4F8E: fld     dword ptr ds:0A379B4h
0x5A4F94: jmp     short loc_5A4F98
0x5A4F96: fld1
0x5A4F98: push    ecx
0x5A4F99: fstp    [esp+5Ch+var_5C]; a3
0x5A4F9C: push    0FA1h; a2
0x5A4FA1: mov     ecx, ebp; this
0x5A4FA3: call    Tile_SetFloat
0x5A4FA8: mov     edx, [edi]
0x5A4FAA: mov     eax, [edx+170h]
0x5A4FB0: push    0
0x5A4FB2: mov     ecx, edi
0x5A4FB4: call    eax
0x5A4FB6: push    eax
0x5A4FB7: lea     ecx, [esp+60h+var_18]
0x5A4FBB: call    ContainerEntryExtraData_constr
0x5A4FC0: mov     ecx, [esp+58h+var_18]
0x5A4FC4: test    ecx, ecx
0x5A4FC6: mov     byte ptr [esp+58h+var_8+4], 4
0x5A4FCB: jnz     short loc_5A4FF2
0x5A4FCD: push    8; Size
0x5A4FCF: call    FormHeapAlloc
0x5A4FD4: add     esp, 4
0x5A4FD7: test    eax, eax
0x5A4FD9: jz      short loc_5A4FEA
0x5A4FDB: mov     dword ptr [eax], 0
0x5A4FE1: mov     dword ptr [eax+4], 0
0x5A4FE8: jmp     short loc_5A4FEC
0x5A4FEA: xor     eax, eax
0x5A4FEC: mov     ecx, eax
0x5A4FEE: mov     [esp+58h+var_18], ecx
0x5A4FF2: lea     edx, [edi+44h]
0x5A4FF5: push    edx
0x5A4FF6: call    BSSimpleList_PushFront
0x5A4FFB: mov     ebp, [esi+2Ch]
0x5A4FFE: push    0
0x5A5000: push    0
0x5A5002: push    0
0x5A5004: push    1
0x5A5006: push    1
0x5A5008: lea     ecx, [esp+6Ch+var_18]
0x5A500C: call    sub_48F450
0x5A5011: push    0; a3
0x5A5013: push    eax; a2
0x5A5014: lea     ecx, [esp+60h+var_38]; this
0x5A5018: call    BSStringT_Set
0x5A501D: mov     eax, [esp+58h+var_38.m_data]
0x5A5021: push    eax
0x5A5022: push    0FDEh
0x5A5027: mov     ecx, ebp
0x5A5029: call    Tile_SetString
0x5A502E: mov     ecx, ds:0B333C4h
0x5A5034: push    0
0x5A5036: push    ecx
0x5A5037: push    0
0x5A5039: lea     ecx, [esp+64h+var_18]
0x5A503D: call    sub_488E50
0x5A5042: push    ecx
0x5A5043: fstp    [esp+5Ch+var_5C]; a3
0x5A5046: push    0FAFh; a2
0x5A504B: mov     ecx, ebp; this
0x5A504D: call    Tile_SetFloat
0x5A5052: mov     ebx, [esp+58h+var_40]
0x5A5056: cmp     ebx, 21h ; '!'
0x5A5059: mov     ebp, [esi+34h]
0x5A505C: jnz     short loc_5A5074
0x5A505E: mov     edx, ds:0B333C4h
0x5A5064: push    0
0x5A5066: push    edx
0x5A5067: push    0
0x5A5069: lea     ecx, [esp+64h+var_18]
0x5A506D: call    sub_4891C0
0x5A5072: jmp     short loc_5A507A
0x5A5074: fld     dword ptr ds:0A30634h
0x5A507A: fstp    [esp+58h+var_44]
0x5A507E: fld     [esp+58h+var_44]
0x5A5082: call    Double_To_SInt32
0x5A5087: push    eax; ArgList
0x5A5088: mov     [esp+5Ch+var_44], eax; a3
0x5A508C: lea     eax, [esp+5Ch+var_38]
0x5A5090: push    offset aI; "%i"
0x5A5095: push    eax; int
0x5A5096: call    BSStringT_Static_Format
0x5A509B: mov     ecx, [esp+64h+var_38.m_data]
0x5A509F: add     esp, 0Ch
0x5A50A2: push    ecx
0x5A50A3: push    0FDEh
0x5A50A8: mov     ecx, ebp
0x5A50AA: call    Tile_SetString
0x5A50AF: fild    [esp+58h+var_44]
0x5A50B3: push    ecx
0x5A50B4: mov     ecx, ebp; this
0x5A50B6: fstp    [esp+5Ch+var_5C]; a3
0x5A50B9: push    0FAFh; a2
0x5A50BE: call    Tile_SetFloat
0x5A50C3: cmp     ebx, 14h
0x5A50C6: mov     ebp, [esi+38h]
0x5A50C9: jnz     short loc_5A50E1
0x5A50CB: mov     edx, ds:0B333C4h
0x5A50D1: push    0
0x5A50D3: push    edx
0x5A50D4: push    0
0x5A50D6: lea     ecx, [esp+64h+var_18]
0x5A50DA: call    sub_4891C0
0x5A50DF: jmp     short loc_5A50E7
0x5A50E1: fld     dword ptr ds:0A30634h
0x5A50E7: fstp    [esp+58h+var_44]
0x5A50EB: fld     [esp+58h+var_44]
0x5A50EF: call    Double_To_SInt32
0x5A50F4: mov     ecx, eax
0x5A50F6: cmp     ecx, 3E8h
0x5A50FC: mov     [esp+58h+var_44], ecx; a3
0x5A5100: jge     short loc_5A510F
0x5A5102: push    ecx
0x5A5103: push    offset aI; "%i"
0x5A5108: lea     eax, [esp+60h+var_38]
0x5A510C: push    eax
0x5A510D: jmp     short loc_5A5159
0x5A510F: cmp     ecx, 0F4240h
0x5A5115: jge     short loc_5A5135
0x5A5117: mov     eax, 10624DD3h
0x5A511C: imul    ecx
0x5A511E: sar     edx, 6
0x5A5121: mov     ecx, edx
0x5A5123: shr     ecx, 1Fh
0x5A5126: add     ecx, edx
0x5A5128: push    ecx
0x5A5129: push    offset off_A6BE80
0x5A512E: lea     edx, [esp+60h+var_38]
0x5A5132: push    edx
0x5A5133: jmp     short loc_5A5159
0x5A5135: cmp     ecx, 3B9ACA00h
0x5A513B: jge     short loc_5A5161
0x5A513D: mov     eax, 431BDE83h
0x5A5142: imul    ecx
0x5A5144: sar     edx, 12h
0x5A5147: mov     eax, edx
0x5A5149: shr     eax, 1Fh
0x5A514C: add     eax, edx
0x5A514E: push    eax; ArgList
0x5A514F: push    offset off_A3D904; Format
0x5A5154: lea     ecx, [esp+60h+var_38]
0x5A5158: push    ecx; int
0x5A5159: call    BSStringT_Static_Format
0x5A515E: add     esp, 0Ch
0x5A5161: mov     edx, [esp+58h+var_38.m_data]
0x5A5165: push    edx
0x5A5166: push    0FDEh
0x5A516B: mov     ecx, ebp
0x5A516D: call    Tile_SetString
0x5A5172: fild    [esp+58h+var_44]
0x5A5176: push    ecx
0x5A5177: mov     ecx, ebp; this
0x5A5179: fstp    [esp+5Ch+var_5C]; a3
0x5A517C: push    0FAFh; a2
0x5A5181: call    Tile_SetFloat
0x5A5186: mov     ebp, [esi+30h]
0x5A5189: push    0
0x5A518B: push    0
0x5A518D: push    0
0x5A518F: lea     ecx, [esp+64h+var_18]
0x5A5193: call    sub_485260
0x5A5198: call    Double_To_SInt32
0x5A519D: mov     [esp+58h+var_44], eax
0x5A51A1: mov     eax, [edi]
0x5A51A3: mov     edx, [eax+170h]
0x5A51A9: mov     ecx, edi
0x5A51AB: call    edx
0x5A51AD: cmp     byte ptr [eax+4], 17h
0x5A51B1: jnz     short loc_5A51BB
0x5A51B3: mov     [esp+58h+var_44], 0FFFFFFFFh
0x5A51BB: mov     eax, [edi]
0x5A51BD: mov     edx, [eax+170h]
0x5A51C3: mov     ecx, edi
0x5A51C5: call    edx
0x5A51C7: mov     edx, [eax]
0x5A51C9: mov     ecx, eax
0x5A51CB: mov     eax, [edx+78h]
0x5A51CE: call    eax
0x5A51D0: test    al, al
0x5A51D2: jz      short loc_5A51DC
0x5A51D4: mov     [esp+58h+var_44], 0FFFFFFFFh
0x5A51DC: mov     ecx, ds:0B333C4h
0x5A51E2: push    0
0x5A51E4: push    ecx
0x5A51E5: push    0
0x5A51E7: push    1
0x5A51E9: push    2
0x5A51EB: lea     ecx, [esp+6Ch+var_18]
0x5A51EF: call    sub_48F450
0x5A51F4: push    eax
0x5A51F5: push    0FDEh
0x5A51FA: mov     ecx, ebp
0x5A51FC: call    Tile_SetString
0x5A5201: fild    [esp+58h+var_44]
0x5A5205: push    ecx
0x5A5206: mov     ecx, ebp; this
0x5A5208: fstp    [esp+5Ch+var_5C]; a3
0x5A520B: push    0FAFh; a2
0x5A5210: call    Tile_SetFloat
0x5A5215: mov     ecx, edi; this
0x5A5217: call    TESObjectREFR_GetHealth
0x5A521C: fstp    qword ptr [esp+58h+var_2C.m_dataLen]
0x5A5220: mov     edx, [edi]
0x5A5222: mov     eax, [edx+170h]
0x5A5228: mov     ecx, edi
0x5A522A: call    eax
0x5A522C: push    eax
0x5A522D: call    TESHealthForm_GetHealthForForm
0x5A5232: add     esp, 4
0x5A5235: test    eax, eax
0x5A5237: mov     [esp+58h+var_40], eax
0x5A523B: fild    [esp+58h+var_40]
0x5A523F: jge     short loc_5A5247
0x5A5241: fadd    dword ptr ds:0A2FC78h
0x5A5247: fdivr   qword ptr [esp+58h+var_2C.m_dataLen]
0x5A524B: fmul    qword ptr ds:0A309F0h
0x5A5251: call    Double_To_SInt32
0x5A5256: mov     [esp+58h+var_40], eax
0x5A525A: fild    [esp+58h+var_40]
0x5A525E: mov     ecx, edi; this
0x5A5260: fstp    [esp+58h+var_44]
0x5A5264: call    TESObjectREFR_GetHealth
0x5A5269: fcomp   dword ptr ds:0A2FAA8h
0x5A526F: fnstsw  ax
0x5A5271: test    ah, 5
0x5A5274: jnp     short loc_5A5286
0x5A5276: mov     edx, [edi]
0x5A5278: mov     eax, [edx+190h]
0x5A527E: mov     ecx, edi
0x5A5280: call    eax
0x5A5282: test    al, al
0x5A5284: jz      short loc_5A5290
0x5A5286: fld     dword ptr ds:0A30634h
0x5A528C: fstp    [esp+58h+var_44]
0x5A5290: fldz
0x5A5292: mov     ebp, [esi+40h]
0x5A5295: fld     [esp+58h+var_44]
0x5A5299: fcom    st(1)
0x5A529B: fnstsw  ax
0x5A529D: fstp    st(1)
0x5A529F: test    ah, 1
0x5A52A2: jnz     short loc_5A530F
0x5A52A4: call    Double_To_SInt32
0x5A52A9: mov     ecx, eax
0x5A52AB: cmp     ecx, 3E8h
0x5A52B1: jge     short loc_5A52BB
0x5A52B3: push    ecx
0x5A52B4: push    offset aI; "%i"
0x5A52B9: jmp     short loc_5A52FB
0x5A52BB: cmp     ecx, 0F4240h
0x5A52C1: jge     short loc_5A52DC
0x5A52C3: mov     eax, 10624DD3h
0x5A52C8: imul    ecx
0x5A52CA: sar     edx, 6
0x5A52CD: mov     eax, edx
0x5A52CF: shr     eax, 1Fh
0x5A52D2: add     eax, edx
0x5A52D4: push    eax
0x5A52D5: push    offset off_A6BE80
0x5A52DA: jmp     short loc_5A52FB
0x5A52DC: cmp     ecx, 3B9ACA00h
0x5A52E2: jge     short loc_5A5308
0x5A52E4: mov     eax, 431BDE83h
0x5A52E9: imul    ecx
0x5A52EB: sar     edx, 12h
0x5A52EE: mov     eax, edx
0x5A52F0: shr     eax, 1Fh
0x5A52F3: add     eax, edx
0x5A52F5: push    eax; ArgList
0x5A52F6: push    offset off_A3D904; Format
0x5A52FB: lea     ecx, [esp+60h+var_38]
0x5A52FF: push    ecx; int
0x5A5300: call    BSStringT_Static_Format
0x5A5305: add     esp, 0Ch
0x5A5308: mov     edx, [esp+58h+var_38.m_data]
0x5A530C: push    edx
0x5A530D: jmp     short loc_5A5316
0x5A530F: fstp    st
0x5A5311: push    offset word_A36430
0x5A5316: push    0FDEh
0x5A531B: mov     ecx, ebp
0x5A531D: call    Tile_SetString
0x5A5322: fld     [esp+58h+var_44]
0x5A5326: push    ecx
0x5A5327: fstp    [esp+5Ch+var_5C]; a3
0x5A532A: push    0FAFh; a2
0x5A532F: mov     ecx, ebp; this
0x5A5331: call    Tile_SetFloat
0x5A5336: cmp     ebx, 13h
0x5A5339: mov     ebp, [esi+3Ch]
0x5A533C: jnz     short loc_5A5353
0x5A533E: mov     eax, ds:0B333C4h
0x5A5343: push    0
0x5A5345: push    eax
0x5A5346: push    0
0x5A5348: lea     ecx, [esp+64h+var_18]
0x5A534C: call    sub_4891C0
0x5A5351: jmp     short loc_5A5359
0x5A5353: fld     dword ptr ds:0A30634h
0x5A5359: fstp    [esp+58h+var_44]
0x5A535D: fld     [esp+58h+var_44]
0x5A5361: call    Double_To_SInt32
0x5A5366: mov     ecx, eax
0x5A5368: cmp     ecx, 3E8h
0x5A536E: jge     short loc_5A5378
0x5A5370: push    ecx
0x5A5371: push    offset aI; "%i"
0x5A5376: jmp     short loc_5A53B8
0x5A5378: cmp     ecx, 0F4240h
0x5A537E: jge     short loc_5A5399
0x5A5380: mov     eax, 10624DD3h
0x5A5385: imul    ecx
0x5A5387: sar     edx, 6
0x5A538A: mov     eax, edx
0x5A538C: shr     eax, 1Fh
0x5A538F: add     eax, edx
0x5A5391: push    eax
0x5A5392: push    offset off_A6BE80
0x5A5397: jmp     short loc_5A53B8
0x5A5399: cmp     ecx, 3B9ACA00h
0x5A539F: jge     short loc_5A53C5
0x5A53A1: mov     eax, 431BDE83h
0x5A53A6: imul    ecx
0x5A53A8: sar     edx, 12h
0x5A53AB: mov     eax, edx
0x5A53AD: shr     eax, 1Fh
0x5A53B0: add     eax, edx
0x5A53B2: push    eax; ArgList
0x5A53B3: push    offset off_A3D904; Format
0x5A53B8: lea     ecx, [esp+60h+var_38]
0x5A53BC: push    ecx; int
0x5A53BD: call    BSStringT_Static_Format
0x5A53C2: add     esp, 0Ch
0x5A53C5: mov     edx, [esp+58h+var_38.m_data]
0x5A53C9: push    edx
0x5A53CA: push    0FDEh
0x5A53CF: mov     ecx, ebp
0x5A53D1: call    Tile_SetString
0x5A53D6: mov     ecx, edi; int
0x5A53D8: call    sub_4D6600
0x5A53DD: mov     [esp+58h+var_40], eax
0x5A53E1: fild    [esp+58h+var_40]
0x5A53E5: push    ecx
0x5A53E6: mov     ecx, ebp; this
0x5A53E8: fstp    [esp+5Ch+var_5C]; a3
0x5A53EB: push    0FAFh; a2
0x5A53F0: call    Tile_SetFloat
0x5A53F5: mov     ebp, [esi+44h]
0x5A53F8: mov     ecx, edi
0x5A53FA: call    sub_4D7510
0x5A53FF: movsx   ecx, al
0x5A5402: cmp     ecx, 3E8h
0x5A5408: jge     short loc_5A5417
0x5A540A: push    ecx
0x5A540B: push    offset aI; "%i"
0x5A5410: lea     eax, [esp+60h+var_38]
0x5A5414: push    eax
0x5A5415: jmp     short loc_5A5461
0x5A5417: cmp     ecx, 0F4240h
0x5A541D: jge     short loc_5A543D
0x5A541F: mov     eax, 10624DD3h
0x5A5424: imul    ecx
0x5A5426: sar     edx, 6
0x5A5429: mov     ecx, edx
0x5A542B: shr     ecx, 1Fh
0x5A542E: add     ecx, edx
0x5A5430: push    ecx
0x5A5431: push    offset off_A6BE80
0x5A5436: lea     edx, [esp+60h+var_38]
0x5A543A: push    edx
0x5A543B: jmp     short loc_5A5461
0x5A543D: cmp     ecx, 3B9ACA00h
0x5A5443: jge     short loc_5A5469
0x5A5445: mov     eax, 431BDE83h
0x5A544A: imul    ecx
0x5A544C: sar     edx, 12h
0x5A544F: mov     eax, edx
0x5A5451: shr     eax, 1Fh
0x5A5454: add     eax, edx
0x5A5456: push    eax; ArgList
0x5A5457: push    offset off_A3D904; Format
0x5A545C: lea     ecx, [esp+60h+var_38]
0x5A5460: push    ecx; int
0x5A5461: call    BSStringT_Static_Format
0x5A5466: add     esp, 0Ch
0x5A5469: mov     edx, [esp+58h+var_38.m_data]
0x5A546D: push    edx
0x5A546E: push    0FDEh
0x5A5473: mov     ecx, ebp
0x5A5475: call    Tile_SetString
0x5A547A: mov     ecx, edi
0x5A547C: call    sub_4D7510
0x5A5481: movsx   eax, al
0x5A5484: mov     [esp+58h+var_40], eax
0x5A5488: push    ecx
0x5A5489: mov     ecx, ebp; this
0x5A548B: fild    [esp+5Ch+var_40]
0x5A548F: fstp    [esp+5Ch+var_5C]; a3
0x5A5492: push    0FAFh; a2
0x5A5497: call    Tile_SetFloat
0x5A549C: fld     dword ptr ds:0A379B4h
0x5A54A2: mov     edi, [esp+58h+var_3C]
0x5A54A6: push    ecx
0x5A54A7: fstp    [esp+5Ch+var_5C]; a3
0x5A54AA: push    0FA1h; a2
0x5A54AF: mov     ecx, edi; this
0x5A54B1: call    Tile_SetFloat
0x5A54B6: push    0; float
0x5A54B8: mov     ecx, edi
0x5A54BA: call    sub_58FBA0
0x5A54BF: cmp     [esp+58h+arg_8], 0
0x5A54C4: jnz     short loc_5A54CD
0x5A54C6: mov     ecx, esi; int
0x5A54C8: call    sub_584390
0x5A54CD: lea     ecx, [esp+58h+var_18]
0x5A54D1: mov     byte ptr [esp+58h+var_8+4], 1
0x5A54D6: call    ContainerEntryExtraData_DestroyDataTable
0x5A54DB: lea     ecx, [esp+58h+var_38]; void *
0x5A54DF: mov     byte ptr [esp+58h+var_8+4], 0
0x5A54E4: call    BSStringT_Clear
0x5A54E9: jmp     loc_5A4BD3
0x5A54EE: push    esi
0x5A54EF: call    FormHeapFree
0x5A54F4: add     esp, 4
0x5A54F7: xor     al, al
0x5A54F9: mov     ecx, [esp+58h+var_C]
0x5A54FD: mov     large fs:0, ecx
0x5A5504: pop     ecx
0x5A5505: pop     edi
0x5A5506: pop     esi
0x5A5507: pop     ebp
0x5A5508: pop     ebx
0x5A5509: add     esp, 44h
0x5A550C: retn
