0x4B7DB0: push    esi
0x4B7DB1: mov     esi, [esp+4+arg_0]
0x4B7DB5: test    esi, esi
0x4B7DB7: jz      loc_4B7F66
0x4B7DBD: mov     eax, [esi]
0x4B7DBF: mov     edx, [eax+170h]
0x4B7DC5: push    ebx
0x4B7DC6: push    edi
0x4B7DC7: push    0; int
0x4B7DC9: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x4B7DCE: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4B7DD3: push    0; int
0x4B7DD5: mov     ecx, esi
0x4B7DD7: call    edx
0x4B7DD9: push    eax; void *
0x4B7DDA: call    OblivionDynamicCast
0x4B7DDF: add     esp, 14h
0x4B7DE2: test    eax, eax
0x4B7DE4: jz      loc_4B7F5B
0x4B7DEA: test    byte ptr [eax+64h], 1
0x4B7DEE: jz      loc_4B7F5B
0x4B7DF4: push    1
0x4B7DF6: mov     ecx, esi
0x4B7DF8: call    sub_46AA50
0x4B7DFD: mov     eax, [esi]
0x4B7DFF: mov     edx, [eax+154h]
0x4B7E05: mov     ecx, esi
0x4B7E07: call    edx
0x4B7E09: test    eax, eax
0x4B7E0B: jz      loc_4B7F4F
0x4B7E11: mov     eax, [esi]
0x4B7E13: mov     edx, [eax+154h]
0x4B7E19: push    0
0x4B7E1B: mov     ecx, esi
0x4B7E1D: call    edx
0x4B7E1F: mov     ecx, eax
0x4B7E21: call    sub_405790
0x4B7E26: test    eax, eax
0x4B7E28: jz      loc_4B7F4F
0x4B7E2E: mov     eax, [esi]
0x4B7E30: mov     edx, [eax+154h]
0x4B7E36: push    0
0x4B7E38: mov     ecx, esi
0x4B7E3A: call    edx
0x4B7E3C: mov     ecx, eax
0x4B7E3E: call    sub_405790
0x4B7E43: cmp     dword ptr [eax+0Ch], 0
0x4B7E47: jz      loc_4B7F4F
0x4B7E4D: mov     eax, [esi]
0x4B7E4F: mov     edx, [eax+154h]
0x4B7E55: push    0
0x4B7E57: mov     ecx, esi
0x4B7E59: call    edx
0x4B7E5B: mov     ecx, eax
0x4B7E5D: call    sub_405790
0x4B7E62: mov     eax, [eax+0Ch]
0x4B7E65: push    eax
0x4B7E66: push    offset stru_B3CAC0
0x4B7E6B: call    NiRTTI_Cast
0x4B7E70: mov     edi, eax
0x4B7E72: add     esp, 8
0x4B7E75: test    edi, edi
0x4B7E77: jz      loc_4B7F5B
0x4B7E7D: push    offset aUnequip; "Unequip"
0x4B7E82: mov     ecx, edi
0x4B7E84: call    sub_4715A0
0x4B7E89: mov     ebx, eax
0x4B7E8B: test    ebx, ebx
0x4B7E8D: jz      loc_4B7F5B
0x4B7E93: fldz
0x4B7E95: push    ecx
0x4B7E96: mov     ecx, edi
0x4B7E98: fstp    [esp+10h+var_10]; float
0x4B7E9B: call    sub_4715C0
0x4B7EA0: fldz
0x4B7EA2: or      word ptr [edi+8], 8
0x4B7EA7: push    0; int
0x4B7EA9: sub     esp, 8
0x4B7EAC: fstp    [esp+18h+a2]; float
0x4B7EB0: mov     ecx, edi
0x4B7EB2: fld1
0x4B7EB4: fstp    [esp+18h+var_18]; float
0x4B7EB7: push    1; int
0x4B7EB9: push    0; int
0x4B7EBB: push    ebx; int
0x4B7EBC: call    sub_470B20
0x4B7EC1: cmp     [esp+0Ch+arg_4], 0
0x4B7EC6: jz      loc_4B7F5B
0x4B7ECC: mov     eax, [esi]
0x4B7ECE: fldz
0x4B7ED0: mov     edx, [eax+154h]
0x4B7ED6: push    1; a3
0x4B7ED8: push    ecx
0x4B7ED9: mov     ecx, esi
0x4B7EDB: fstp    [esp+14h+a2]; a2
0x4B7EDE: call    edx
0x4B7EE0: mov     ecx, eax; this
0x4B7EE2: call    NiAVObject_UpdateNiAVObject
0x4B7EE7: fld     dword ptr [ebx+30h]
0x4B7EEA: mov     eax, [esi]
0x4B7EEC: fstp    [esp+0Ch+arg_0]
0x4B7EF0: fld     [esp+0Ch+arg_0]
0x4B7EF4: mov     edx, [eax+154h]
0x4B7EFA: push    1; a3
0x4B7EFC: push    ecx
0x4B7EFD: mov     ecx, esi
0x4B7EFF: fstp    [esp+14h+a2]; a2
0x4B7F02: call    edx
0x4B7F04: mov     ecx, eax; this
0x4B7F06: call    NiAVObject_UpdateNiAVObject
0x4B7F0B: fldz
0x4B7F0D: push    0; char
0x4B7F0F: push    ecx
0x4B7F10: mov     ecx, ebx
0x4B7F12: fstp    [esp+14h+a2]; float
0x4B7F15: call    sub_6C9CB0
0x4B7F1A: mov     eax, [ebx+8]
0x4B7F1D: push    eax
0x4B7F1E: mov     ecx, esi
0x4B7F20: call    sub_4D90D0
0x4B7F25: and     word ptr [edi+8], 0FFF7h
0x4B7F2B: mov     edx, [esi]
0x4B7F2D: mov     eax, [edx+154h]
0x4B7F33: push    1
0x4B7F35: mov     ecx, esi
0x4B7F37: call    eax
0x4B7F39: push    eax
0x4B7F3A: call    sub_897A20
0x4B7F3F: add     esp, 8
0x4B7F42: push    0
0x4B7F44: mov     ecx, esi
0x4B7F46: call    sub_4D9310
0x4B7F4B: pop     edi
0x4B7F4C: pop     ebx
0x4B7F4D: pop     esi
0x4B7F4E: retn
0x4B7F4F: push    offset aUnequip; "Unequip"
0x4B7F54: mov     ecx, esi
0x4B7F56: call    sub_4D90D0
0x4B7F5B: push    0
0x4B7F5D: mov     ecx, esi
0x4B7F5F: call    sub_4D9310
0x4B7F64: pop     edi
0x4B7F65: pop     ebx
0x4B7F66: pop     esi
0x4B7F67: retn
