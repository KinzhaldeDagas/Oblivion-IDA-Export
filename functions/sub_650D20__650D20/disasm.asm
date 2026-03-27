0x650D20: push    ebp
0x650D21: push    esi
0x650D22: push    edi
0x650D23: mov     edi, [esp+0Ch+arg_0]
0x650D27: push    0; int
0x650D29: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x650D2E: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x650D33: push    0; int
0x650D35: push    edi; void *
0x650D36: mov     esi, ecx
0x650D38: call    OblivionDynamicCast
0x650D3D: mov     ebp, eax
0x650D3F: add     esp, 14h
0x650D42: test    ebp, ebp
0x650D44: jz      loc_650F3E
0x650D4A: mov     ecx, ebp
0x650D4C: call    sub_5E1CF0
0x650D51: test    al, al
0x650D53: jz      loc_650F3E
0x650D59: push    ebx
0x650D5A: lea     ecx, [edi+44h]; this
0x650D5D: call    ExtraDataList_GetContainerChanges
0x650D62: mov     ebx, eax
0x650D64: test    ebx, ebx
0x650D66: jz      loc_650F3D
0x650D6C: mov     eax, [esi]
0x650D6E: mov     edx, [eax+138h]
0x650D74: mov     ecx, esi
0x650D76: call    edx
0x650D78: test    al, al
0x650D7A: jz      short loc_650D85
0x650D7C: push    0
0x650D7E: mov     ecx, ebp
0x650D80: call    sub_5E13D0
0x650D85: mov     ebp, [esi]
0x650D87: push    0
0x650D89: push    0
0x650D8B: push    9
0x650D8D: mov     ecx, ebx
0x650D8F: call    ContainerExtraData_GetEquippedInstance
0x650D94: push    eax
0x650D95: mov     eax, [ebp+104h]
0x650D9B: mov     ecx, esi
0x650D9D: call    eax
0x650D9F: mov     ebp, [esi]
0x650DA1: push    0
0x650DA3: push    0Ch
0x650DA5: mov     ecx, ebx
0x650DA7: call    ContainerExtraData_GetEquippedInstance
0x650DAC: mov     edx, [ebp+10Ch]
0x650DB2: push    eax
0x650DB3: mov     ecx, esi
0x650DB5: call    edx
0x650DB7: mov     ebp, [esi]
0x650DB9: push    0
0x650DBB: push    0Dh
0x650DBD: mov     ecx, ebx
0x650DBF: call    ContainerExtraData_GetEquippedInstance
0x650DC4: push    eax
0x650DC5: mov     eax, [ebp+110h]
0x650DCB: mov     ecx, esi
0x650DCD: call    eax
0x650DCF: mov     ebp, [esi]
0x650DD1: push    0
0x650DD3: push    0Eh
0x650DD5: mov     ecx, ebx
0x650DD7: call    ContainerExtraData_GetEquippedInstance
0x650DDC: mov     edx, [ebp+108h]
0x650DE2: push    eax
0x650DE3: mov     ecx, esi
0x650DE5: call    edx
0x650DE7: mov     ecx, edi
0x650DE9: call    UnequipWeapon
0x650DEE: mov     eax, [esi+0E4h]
0x650DF4: test    eax, eax
0x650DF6: jz      short loc_650E03
0x650DF8: mov     eax, [eax+8]
0x650DFB: push    eax
0x650DFC: mov     ecx, edi
0x650DFE: call    EquipWeapon
0x650E03: mov     ecx, edi
0x650E05: call    sub_4DCCF0
0x650E0A: mov     eax, [esi+0ECh]
0x650E10: test    eax, eax
0x650E12: jz      short loc_650E1F
0x650E14: mov     ecx, [eax+8]
0x650E17: push    ecx
0x650E18: mov     ecx, edi
0x650E1A: call    sub_4E1DF0
0x650E1F: push    0
0x650E21: mov     ecx, edi
0x650E23: call    sub_4DC8F0
0x650E28: mov     eax, [esi+0F0h]
0x650E2E: test    eax, eax
0x650E30: jz      short loc_650E3D
0x650E32: mov     edx, [eax+8]
0x650E35: push    edx
0x650E36: mov     ecx, edi
0x650E38: call    EquipShield
0x650E3D: mov     ecx, edi
0x650E3F: call    UnequipLight
0x650E44: mov     eax, [esi+0E8h]
0x650E4A: test    eax, eax
0x650E4C: jz      short loc_650E59
0x650E4E: mov     eax, [eax+8]
0x650E51: push    eax
0x650E52: mov     ecx, edi
0x650E54: call    EquipLight
0x650E59: push    0; int
0x650E5B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x650E60: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x650E65: push    0; int
0x650E67: push    edi; void *
0x650E68: call    OblivionDynamicCast
0x650E6D: add     esp, 14h
0x650E70: test    eax, eax
0x650E72: jz      short loc_650E9C
0x650E74: mov     edx, [esi+0F0h]
0x650E7A: xor     ebp, ebp
0x650E7C: test    edx, edx
0x650E7E: jz      short loc_650E85
0x650E80: mov     ebp, [edx+8]
0x650E83: jmp     short loc_650E92
0x650E85: mov     esi, [esi+0E8h]
0x650E8B: test    esi, esi
0x650E8D: jz      short loc_650E92
0x650E8F: mov     ebp, [esi+8]
0x650E92: push    1
0x650E94: push    ebp
0x650E95: mov     ecx, eax
0x650E97: call    HideEquipment
0x650E9C: push    0
0x650E9E: push    7
0x650EA0: mov     ecx, ebx
0x650EA2: call    ContainerExtraData_GetEquippedInstance
0x650EA7: push    0
0x650EA9: push    6
0x650EAB: mov     ecx, ebx
0x650EAD: mov     esi, eax
0x650EAF: call    ContainerExtraData_GetEquippedInstance
0x650EB4: push    0
0x650EB6: push    8
0x650EB8: mov     ecx, ebx
0x650EBA: mov     ebp, eax
0x650EBC: call    ContainerExtraData_GetEquippedInstance
0x650EC1: push    1
0x650EC3: mov     ecx, edi
0x650EC5: mov     ebx, eax
0x650EC7: call    sub_4DCF10
0x650ECC: test    esi, esi
0x650ECE: jz      short loc_650EED
0x650ED0: mov     ecx, [esi+8]
0x650ED3: push    1
0x650ED5: push    ecx
0x650ED6: mov     ecx, edi
0x650ED8: call    sub_4DCE60
0x650EDD: mov     ecx, esi
0x650EDF: call    ContainerEntryExtraData_DestroyDataTable
0x650EE4: push    esi
0x650EE5: call    FormHeapFree
0x650EEA: add     esp, 4
0x650EED: push    0
0x650EEF: mov     ecx, edi
0x650EF1: call    sub_4DCF10
0x650EF6: test    ebp, ebp
0x650EF8: jz      short loc_650F17
0x650EFA: mov     edx, [ebp+8]
0x650EFD: push    0
0x650EFF: push    edx
0x650F00: mov     ecx, edi
0x650F02: call    sub_4DCE60
0x650F07: mov     ecx, ebp
0x650F09: call    ContainerEntryExtraData_DestroyDataTable
0x650F0E: push    ebp
0x650F0F: call    FormHeapFree
0x650F14: add     esp, 4
0x650F17: mov     ecx, edi
0x650F19: call    sub_4DD000
0x650F1E: test    ebx, ebx
0x650F20: jz      short loc_650F3D
0x650F22: mov     eax, [ebx+8]
0x650F25: push    eax
0x650F26: mov     ecx, edi
0x650F28: call    sub_4DCF90
0x650F2D: mov     ecx, ebx
0x650F2F: call    ContainerEntryExtraData_DestroyDataTable
0x650F34: push    ebx
0x650F35: call    FormHeapFree
0x650F3A: add     esp, 4
0x650F3D: pop     ebx
0x650F3E: pop     edi
0x650F3F: pop     esi
0x650F40: pop     ebp
0x650F41: retn    4
