0x5F5D10: sub     esp, 18h
0x5F5D13: push    ebx
0x5F5D14: push    ebp
0x5F5D15: push    esi
0x5F5D16: mov     esi, ecx
0x5F5D18: mov     ecx, [esi+58h]
0x5F5D1B: mov     eax, [ecx]
0x5F5D1D: mov     edx, [eax+0F8h]
0x5F5D23: push    edi
0x5F5D24: push    1
0x5F5D26: call    edx
0x5F5D28: mov     ebx, eax
0x5F5D2A: test    ebx, ebx
0x5F5D2C: jz      loc_5F5DE5
0x5F5D32: mov     eax, [ebx]
0x5F5D34: mov     ecx, [eax]
0x5F5D36: call    sub_41DF40
0x5F5D3B: test    al, al
0x5F5D3D: jnz     loc_5F5DE5
0x5F5D43: mov     ecx, [esi+58h]
0x5F5D46: mov     edx, [esi]
0x5F5D48: mov     edi, [ecx]
0x5F5D4A: mov     eax, [edx+168h]
0x5F5D50: mov     ecx, esi
0x5F5D52: call    eax
0x5F5D54: mov     ecx, [esi+58h]
0x5F5D57: mov     edx, [edi+120h]
0x5F5D5D: push    eax
0x5F5D5E: call    edx
0x5F5D60: mov     ecx, [eax+88h]
0x5F5D66: mov     [esp+28h+var_C], ecx
0x5F5D6A: mov     edx, [eax+8Ch]
0x5F5D70: mov     [esp+28h+var_8], edx
0x5F5D74: mov     ecx, [eax+90h]
0x5F5D7A: mov     [esp+28h+var_4], ecx
0x5F5D7E: lea     edx, [esp+28h+var_10]
0x5F5D82: push    edx
0x5F5D83: lea     ecx, [esp+2Ch+var_14]
0x5F5D87: push    ecx
0x5F5D88: lea     edx, [esp+30h+var_18]
0x5F5D8C: push    edx
0x5F5D8D: lea     ecx, [eax+64h]
0x5F5D90: call    sub_711300
0x5F5D95: lea     ecx, [esi+44h]; this
0x5F5D98: call    ExtraDataList_GetContainerChanges
0x5F5D9D: push    0
0x5F5D9F: push    0Dh
0x5F5DA1: mov     ecx, eax
0x5F5DA3: call    ContainerExtraData_GetEquippedInstance
0x5F5DA8: mov     ebx, [ebx+8]
0x5F5DAB: mov     edx, [esi]
0x5F5DAD: mov     edx, [edx+2C8h]
0x5F5DB3: lea     ecx, [esp+28h+var_18]
0x5F5DB7: push    ecx
0x5F5DB8: mov     edi, eax
0x5F5DBA: mov     eax, [edi]
0x5F5DBC: mov     eax, [eax]
0x5F5DBE: lea     ecx, [esp+2Ch+var_C]
0x5F5DC2: push    ecx
0x5F5DC3: push    1
0x5F5DC5: push    eax
0x5F5DC6: push    ebx
0x5F5DC7: mov     ecx, esi
0x5F5DC9: call    edx
0x5F5DCB: push    eax
0x5F5DCC: push    esi
0x5F5DCD: call    sub_4DC000
0x5F5DD2: add     esp, 8
0x5F5DD5: mov     ecx, edi
0x5F5DD7: call    ContainerEntryExtraData_DestroyDataTable
0x5F5DDC: push    edi
0x5F5DDD: call    FormHeapFree
0x5F5DE2: add     esp, 4
0x5F5DE5: mov     ecx, [esi+58h]
0x5F5DE8: mov     eax, [ecx]
0x5F5DEA: mov     edx, [eax+0F0h]
0x5F5DF0: push    1
0x5F5DF2: xor     bl, bl
0x5F5DF4: call    edx
0x5F5DF6: mov     edi, eax
0x5F5DF8: test    edi, edi
0x5F5DFA: jnz     short loc_5F5E16
0x5F5DFC: mov     ecx, [esi+58h]
0x5F5DFF: mov     eax, [ecx]
0x5F5E01: mov     edx, [eax+0F0h]
0x5F5E07: push    edi
0x5F5E08: call    edx
0x5F5E0A: mov     edi, eax
0x5F5E0C: test    edi, edi
0x5F5E0E: mov     bl, 1
0x5F5E10: jz      loc_5F5ED4
0x5F5E16: lea     ecx, [esi+44h]; this
0x5F5E19: call    ExtraDataList_GetContainerChanges
0x5F5E1E: push    0
0x5F5E20: push    0Eh
0x5F5E22: mov     ecx, eax
0x5F5E24: call    ContainerExtraData_GetEquippedInstance
0x5F5E29: test    bl, bl
0x5F5E2B: mov     ebp, eax
0x5F5E2D: jz      short loc_5F5E46
0x5F5E2F: mov     eax, [ebp+8]
0x5F5E32: push    0
0x5F5E34: push    0
0x5F5E36: push    0
0x5F5E38: push    0
0x5F5E3A: push    1
0x5F5E3C: push    eax
0x5F5E3D: mov     ecx, esi
0x5F5E3F: call    Actor_UnequipItem
0x5F5E44: jmp     short loc_5F5EC4
0x5F5E46: mov     ecx, [esi+58h]
0x5F5E49: mov     edx, [esi]
0x5F5E4B: mov     ebx, [ecx]
0x5F5E4D: mov     eax, [edx+168h]
0x5F5E53: mov     ecx, esi
0x5F5E55: call    eax
0x5F5E57: mov     ecx, [esi+58h]
0x5F5E5A: mov     edx, [ebx+11Ch]
0x5F5E60: push    eax
0x5F5E61: call    edx
0x5F5E63: mov     ecx, [eax+88h]
0x5F5E69: mov     [esp+28h+var_18], ecx
0x5F5E6D: mov     edx, [eax+8Ch]
0x5F5E73: mov     [esp+28h+var_14], edx
0x5F5E77: mov     ecx, [eax+90h]
0x5F5E7D: mov     [esp+28h+var_10], ecx
0x5F5E81: lea     edx, [esp+28h+var_4]
0x5F5E85: push    edx
0x5F5E86: lea     ecx, [esp+2Ch+var_8]
0x5F5E8A: push    ecx
0x5F5E8B: lea     edx, [esp+30h+var_C]
0x5F5E8F: push    edx
0x5F5E90: lea     ecx, [eax+64h]
0x5F5E93: call    sub_711300
0x5F5E98: mov     eax, [ebp+0]
0x5F5E9B: mov     eax, [eax]
0x5F5E9D: mov     edi, [edi+8]
0x5F5EA0: mov     edx, [esi]
0x5F5EA2: mov     edx, [edx+2C8h]
0x5F5EA8: lea     ecx, [esp+28h+var_C]
0x5F5EAC: push    ecx
0x5F5EAD: lea     ecx, [esp+2Ch+var_18]
0x5F5EB1: push    ecx
0x5F5EB2: push    1
0x5F5EB4: push    eax
0x5F5EB5: push    edi
0x5F5EB6: mov     ecx, esi
0x5F5EB8: call    edx
0x5F5EBA: push    eax
0x5F5EBB: push    esi
0x5F5EBC: call    sub_4DC000
0x5F5EC1: add     esp, 8
0x5F5EC4: mov     ecx, ebp
0x5F5EC6: call    ContainerEntryExtraData_DestroyDataTable
0x5F5ECB: push    ebp
0x5F5ECC: call    FormHeapFree
0x5F5ED1: add     esp, 4
0x5F5ED4: mov     ecx, [esi+58h]
0x5F5ED7: mov     eax, [ecx]
0x5F5ED9: mov     edx, [eax+0ECh]
0x5F5EDF: push    1
0x5F5EE1: call    edx
0x5F5EE3: mov     ecx, [esi+58h]
0x5F5EE6: mov     edi, eax
0x5F5EE8: mov     eax, [ecx]
0x5F5EEA: mov     edx, [eax+3D8h]
0x5F5EF0: call    edx
0x5F5EF2: test    edi, edi
0x5F5EF4: mov     ebx, eax
0x5F5EF6: jz      loc_5F600C
0x5F5EFC: cmp     dword ptr [esi+58h], 0
0x5F5F00: jz      loc_5F600C
0x5F5F06: mov     ecx, [esi+58h]
0x5F5F09: mov     eax, [ecx]
0x5F5F0B: mov     edx, [eax+304h]
0x5F5F11: call    edx
0x5F5F13: test    al, al
0x5F5F15: jz      loc_5F600C
0x5F5F1B: mov     eax, [edi]
0x5F5F1D: mov     ecx, [eax]
0x5F5F1F: call    sub_41DF40
0x5F5F24: test    al, al
0x5F5F26: jnz     loc_5F600C
0x5F5F2C: mov     eax, [edi+8]
0x5F5F2F: cmp     eax, ebx
0x5F5F31: jz      loc_5F600C
0x5F5F37: push    eax
0x5F5F38: xor     bl, bl
0x5F5F3A: call    TESEnchantableForm_GetFormEnchantment
0x5F5F3F: add     esp, 4
0x5F5F42: test    eax, eax
0x5F5F44: jz      short loc_5F5F48
0x5F5F46: mov     bl, 1
0x5F5F48: mov     ecx, [edi+8]
0x5F5F4B: cmp     byte ptr [ecx+90h], 5
0x5F5F52: jnz     short loc_5F5F73
0x5F5F54: mov     edx, [esi+58h]
0x5F5F57: mov     eax, [esi]
0x5F5F59: mov     ebp, [edx]
0x5F5F5B: mov     edx, [eax+168h]
0x5F5F61: mov     ecx, esi
0x5F5F63: call    edx
0x5F5F65: mov     ecx, [esi+58h]
0x5F5F68: push    eax
0x5F5F69: mov     eax, [ebp+11Ch]
0x5F5F6F: call    eax
0x5F5F71: jmp     short loc_5F5F90
0x5F5F73: mov     ecx, [esi+58h]
0x5F5F76: mov     edx, [esi]
0x5F5F78: mov     ebp, [ecx]
0x5F5F7A: mov     eax, [edx+168h]
0x5F5F80: mov     ecx, esi
0x5F5F82: call    eax
0x5F5F84: mov     ecx, [esi+58h]
0x5F5F87: mov     edx, [ebp+118h]
0x5F5F8D: push    eax
0x5F5F8E: call    edx
0x5F5F90: test    eax, eax
0x5F5F92: jz      short loc_5F600C
0x5F5F94: mov     ecx, [eax+88h]
0x5F5F9A: mov     edx, [eax+8Ch]
0x5F5FA0: mov     [esp+28h+var_18], ecx
0x5F5FA4: mov     ecx, [eax+90h]
0x5F5FAA: mov     [esp+28h+var_14], edx
0x5F5FAE: mov     [esp+28h+var_10], ecx
0x5F5FB2: lea     edx, [esp+28h+var_4]
0x5F5FB6: push    edx
0x5F5FB7: lea     ecx, [esp+2Ch+var_8]
0x5F5FBB: push    ecx
0x5F5FBC: lea     edx, [esp+30h+var_C]
0x5F5FC0: push    edx
0x5F5FC1: lea     ecx, [eax+64h]
0x5F5FC4: call    sub_711300
0x5F5FC9: mov     eax, [edi]
0x5F5FCB: mov     eax, [eax]
0x5F5FCD: mov     edi, [edi+8]
0x5F5FD0: mov     edx, [esi]
0x5F5FD2: mov     edx, [edx+2C8h]
0x5F5FD8: lea     ecx, [esp+28h+var_C]
0x5F5FDC: push    ecx
0x5F5FDD: lea     ecx, [esp+2Ch+var_18]
0x5F5FE1: push    ecx
0x5F5FE2: push    1
0x5F5FE4: push    eax
0x5F5FE5: push    edi
0x5F5FE6: mov     ecx, esi
0x5F5FE8: call    edx
0x5F5FEA: push    eax
0x5F5FEB: push    esi
0x5F5FEC: call    sub_4DC000
0x5F5FF1: add     esp, 8
0x5F5FF4: test    bl, bl
0x5F5FF6: jz      short loc_5F600C
0x5F5FF8: mov     ecx, [esi+58h]
0x5F5FFB: mov     eax, [ecx]
0x5F5FFD: mov     edx, [eax+42Ch]
0x5F6003: push    0
0x5F6005: push    0
0x5F6007: push    1
0x5F6009: push    esi
0x5F600A: call    edx
0x5F600C: pop     edi
0x5F600D: pop     esi
0x5F600E: pop     ebp
0x5F600F: pop     ebx
0x5F6010: add     esp, 18h
0x5F6013: retn
