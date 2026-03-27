0x633DF0: sub     esp, 20h
0x633DF3: push    esi
0x633DF4: push    edi
0x633DF5: mov     edi, [esp+28h+arg_0]
0x633DF9: mov     esi, ecx
0x633DFB: push    12h
0x633DFD: mov     ecx, edi
0x633DFF: mov     [esp+2Ch+var_20], esi
0x633E03: call    Actor_GetSkillMasteryLevel
0x633E08: test    eax, eax
0x633E0A: jge     loc_633ED5
0x633E10: push    ebx
0x633E11: push    ebp
0x633E12: xor     ebx, ebx
0x633E14: push    1
0x633E16: mov     ecx, edi
0x633E18: mov     [esp+34h+var_1C], 0Dh
0x633E20: mov     [esp+34h+var_18], 1
0x633E28: mov     [esp+34h+var_14], ebx
0x633E2C: mov     [esp+34h+var_10], 4
0x633E34: mov     [esp+34h+var_C], 2
0x633E3C: mov     [esp+34h+var_8], 5
0x633E44: mov     [esp+34h+var_4], 3
0x633E4C: call    Actor_GetArmorCoverage
0x633E51: cmp     eax, ds:0B374C8h
0x633E57: jl      short loc_633EC0
0x633E59: cmp     ebx, 7
0x633E5C: jge     short loc_633EC0
0x633E5E: mov     eax, [esp+ebx*4+30h+var_1C]
0x633E62: push    eax
0x633E63: mov     ecx, edi
0x633E65: call    sub_5E4330
0x633E6A: mov     ebp, eax
0x633E6C: test    ebp, ebp
0x633E6E: jz      short loc_633EB2
0x633E70: mov     eax, [ebp+8]
0x633E73: xor     esi, esi
0x633E75: test    eax, eax
0x633E77: jz      short loc_633E81
0x633E79: cmp     byte ptr [eax+4], 14h
0x633E7D: jnz     short loc_633E81
0x633E7F: mov     esi, eax
0x633E81: mov     ecx, esi
0x633E83: call    TESObjectARMO_ISHeavyArmor
0x633E88: cmp     al, 1
0x633E8A: jnz     short loc_633E9E
0x633E8C: push    0
0x633E8E: push    0
0x633E90: push    0
0x633E92: push    0
0x633E94: push    1
0x633E96: push    esi
0x633E97: mov     ecx, edi
0x633E99: call    Actor_UnequipItem
0x633E9E: mov     ecx, ebp
0x633EA0: call    ContainerEntryExtraData_DestroyDataTable
0x633EA5: push    ebp
0x633EA6: call    FormHeapFree
0x633EAB: mov     esi, [esp+34h+var_20]
0x633EAF: add     esp, 4
0x633EB2: push    1
0x633EB4: mov     ecx, edi
0x633EB6: call    Actor_GetArmorCoverage
0x633EBB: add     ebx, 1
0x633EBE: jmp     short loc_633E51
0x633EC0: mov     byte ptr [esi+290h], 1
0x633EC7: fld     dword ptr ds:0B36C88h
0x633ECD: pop     ebp
0x633ECE: fstp    dword ptr [esi+28Ch]
0x633ED4: pop     ebx
0x633ED5: mov     edx, [esi]
0x633ED7: mov     eax, [edx+188h]
0x633EDD: push    1
0x633EDF: push    edi
0x633EE0: mov     ecx, esi
0x633EE2: call    eax
0x633EE4: pop     edi
0x633EE5: pop     esi
0x633EE6: add     esp, 20h
0x633EE9: retn    4
