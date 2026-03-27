0x5A2D30: sub     esp, 0Ch
0x5A2D33: push    ebx
0x5A2D34: push    ebp
0x5A2D35: push    esi
0x5A2D36: mov     esi, ecx
0x5A2D38: mov     ecx, ds:0B333C4h
0x5A2D3E: push    edi
0x5A2D3F: call    sub_5E4420
0x5A2D44: mov     ecx, [esi+28h]
0x5A2D47: sub     eax, [esi+38h]
0x5A2D4A: xor     ebx, ebx
0x5A2D4C: cmp     ecx, ebx
0x5A2D4E: jz      short loc_5A2D55
0x5A2D50: lea     edi, [ecx+28h]
0x5A2D53: jmp     short loc_5A2D57
0x5A2D55: xor     edi, edi
0x5A2D57: mov     edx, [esi+30h]
0x5A2D5A: cmp     edx, ebx
0x5A2D5C: jnz     short loc_5A2D8C
0x5A2D5E: mov     eax, ds:0B389B0h
0x5A2D63: sub     esp, 8
0x5A2D66: mov     ecx, esp; this
0x5A2D68: mov     [esp+24h+var_C+4], esp
0x5A2D6C: push    ebx; a3
0x5A2D6D: push    eax; a2
0x5A2D6E: mov     [ecx], ebx
0x5A2D70: mov     [ecx+4], bx
0x5A2D74: mov     [ecx+6], bx
0x5A2D78: call    BSStringT_Set
0x5A2D7D: mov     ecx, esi
0x5A2D7F: call    ShowMessageBox??
0x5A2D84: pop     edi
0x5A2D85: pop     esi
0x5A2D86: pop     ebp
0x5A2D87: pop     ebx
0x5A2D88: add     esp, 0Ch
0x5A2D8B: retn
0x5A2D8C: cmp     [esi+2Ch], ebx
0x5A2D8F: jnz     short loc_5A2DBF
0x5A2D91: mov     eax, ds:0B389B8h
0x5A2D96: sub     esp, 8
0x5A2D99: mov     ecx, esp; this
0x5A2D9B: mov     [esp+24h+var_C+4], esp
0x5A2D9F: push    ebx; a3
0x5A2DA0: push    eax; a2
0x5A2DA1: mov     [ecx], ebx
0x5A2DA3: mov     [ecx+4], bx
0x5A2DA7: mov     [ecx+6], bx
0x5A2DAB: call    BSStringT_Set
0x5A2DB0: mov     ecx, esi
0x5A2DB2: call    ShowMessageBox??
0x5A2DB7: pop     edi
0x5A2DB8: pop     esi
0x5A2DB9: pop     ebp
0x5A2DBA: pop     ebx
0x5A2DBB: add     esp, 0Ch
0x5A2DBE: retn
0x5A2DBF: cmp     [edi+4], ebx
0x5A2DC2: jnz     short loc_5A2DF6
0x5A2DC4: cmp     [edi], ebx
0x5A2DC6: jnz     short loc_5A2DF6
0x5A2DC8: mov     eax, ds:0B389C0h
0x5A2DCD: sub     esp, 8
0x5A2DD0: mov     ecx, esp; this
0x5A2DD2: mov     [esp+24h+var_C+4], esp
0x5A2DD6: push    ebx; a3
0x5A2DD7: push    eax; a2
0x5A2DD8: mov     [ecx], ebx
0x5A2DDA: mov     [ecx+4], bx
0x5A2DDE: mov     [ecx+6], bx
0x5A2DE2: call    BSStringT_Set
0x5A2DE7: mov     ecx, esi
0x5A2DE9: call    ShowMessageBox??
0x5A2DEE: pop     edi
0x5A2DEF: pop     esi
0x5A2DF0: pop     ebp
0x5A2DF1: pop     ebx
0x5A2DF2: add     esp, 0Ch
0x5A2DF5: retn
0x5A2DF6: cmp     eax, ebx
0x5A2DF8: jge     short loc_5A2E1D
0x5A2DFA: mov     eax, ds:0B38DB0h
0x5A2DFF: sub     esp, 8
0x5A2E02: mov     ecx, esp
0x5A2E04: mov     [esp+24h+var_C+4], esp
0x5A2E08: push    eax
0x5A2E09: call    BSStringT_constr_str
0x5A2E0E: mov     ecx, esi
0x5A2E10: call    ShowMessageBox??
0x5A2E15: pop     edi
0x5A2E16: pop     esi
0x5A2E17: pop     ebp
0x5A2E18: pop     ebx
0x5A2E19: add     esp, 0Ch
0x5A2E1C: retn
0x5A2E1D: cmp     [esi+9Dh], bl
0x5A2E23: jz      short loc_5A2E30
0x5A2E25: mov     edx, ds:0B389C8h
0x5A2E2B: jmp     sub_5A2FFD
0x5A2E30: mov     ecx, [ecx+1Ch]
0x5A2E33: cmp     ecx, ebx
0x5A2E35: jz      loc_5A2FF7
0x5A2E3B: cmp     [ecx], bl
0x5A2E3D: jz      loc_5A2FF7
0x5A2E43: mov     ecx, [edx+8]
0x5A2E46: movzx   eax, byte ptr [ecx+4]
0x5A2E4A: push    eax; a1
0x5A2E4B: call    TESForm_CreateDynamic
0x5A2E50: mov     edi, eax
0x5A2E52: mov     eax, [esi+30h]
0x5A2E55: mov     ecx, [eax+8]
0x5A2E58: mov     edx, [edi]
0x5A2E5A: mov     edx, [edx+0B4h]
0x5A2E60: add     esp, 4
0x5A2E63: push    ecx
0x5A2E64: mov     ecx, edi
0x5A2E66: call    edx
0x5A2E68: mov     eax, [esi+28h]
0x5A2E6B: mov     ecx, ds:0B33A98h
0x5A2E71: push    eax
0x5A2E72: call    TESDataHandler_AddForm
0x5A2E77: mov     ecx, [esi+98h]
0x5A2E7D: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5A2E82: push    ebx; int
0x5A2E83: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x5A2E88: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5A2E8D: push    ebx; int
0x5A2E8E: push    edi; void *
0x5A2E8F: mov     ebp, eax
0x5A2E91: call    OblivionDynamicCast
0x5A2E96: add     esp, 14h
0x5A2E99: push    ebx; a3
0x5A2E9A: push    ebp; a2
0x5A2E9B: lea     ecx, [eax+4]; this
0x5A2E9E: call    BSStringT_Set
0x5A2EA3: push    ebx; int
0x5A2EA4: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5A2EA9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5A2EAE: push    ebx; int
0x5A2EAF: push    edi; void *
0x5A2EB0: call    OblivionDynamicCast
0x5A2EB5: mov     ebp, eax
0x5A2EB7: add     esp, 14h
0x5A2EBA: cmp     ebp, ebx
0x5A2EBC: jz      short loc_5A2F0F
0x5A2EBE: mov     ecx, [esi+28h]
0x5A2EC1: mov     [ebp+4], ecx
0x5A2EC4: mov     ecx, [esi+2Ch]
0x5A2EC7: call    sub_484D70
0x5A2ECC: mov     [esp+20h+var_10], eax
0x5A2ED0: fild    [esp+20h+var_10]
0x5A2ED4: mov     ecx, offset unk_B3B2CC
0x5A2ED9: fstp    qword ptr [esp+20h+var_C]
0x5A2EDD: call    GameSetting_GetSafeFloatPointer
0x5A2EE2: fld     dword ptr [eax]
0x5A2EE4: fmul    qword ptr [esp+20h+var_C]
0x5A2EE8: fnstcw  word ptr [esp+20h+var_10]
0x5A2EEC: movzx   eax, word ptr [esp+20h+var_10]
0x5A2EF1: or      eax, 0C00h
0x5A2EF6: mov     [esp+20h+var_C], eax
0x5A2EFA: fldcw   word ptr [esp+20h+var_C]
0x5A2EFE: fistp   [esp+20h+var_C]
0x5A2F02: mov     dx, word ptr [esp+20h+var_C]
0x5A2F07: mov     [ebp+8], dx
0x5A2F0B: fldcw   word ptr [esp+20h+var_10]
0x5A2F0F: mov     ecx, ds:0B33A98h
0x5A2F15: push    edi
0x5A2F16: call    TESDataHandler_AddForm
