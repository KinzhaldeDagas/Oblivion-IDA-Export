0x689DC0: sub     esp, 10h
0x689DC3: push    ebx
0x689DC4: push    edi
0x689DC5: mov     edi, [esp+18h+arg_0]
0x689DC9: test    edi, edi
0x689DCB: mov     ebx, ecx
0x689DCD: jz      loc_689EED
0x689DD3: mov     ecx, edi; this
0x689DD5: call    Actor_IsCreature
0x689DDA: test    al, al
0x689DDC: jnz     loc_689EED
0x689DE2: push    esi
0x689DE3: push    0; int
0x689DE5: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x689DEA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x689DEF: push    0; int
0x689DF1: mov     ecx, edi
0x689DF3: call    sub_4D8AF0
0x689DF8: push    eax; void *
0x689DF9: call    OblivionDynamicCast
0x689DFE: mov     esi, eax
0x689E00: mov     eax, [edi]
0x689E02: mov     edx, [eax+174h]
0x689E08: add     esp, 14h
0x689E0B: mov     ecx, edi
0x689E0D: call    edx
0x689E0F: mov     ecx, [eax]
0x689E11: mov     [esp+1Ch+var_C], ecx
0x689E15: mov     edx, [eax+4]
0x689E18: lea     edi, [ebx+4]
0x689E1B: mov     [esp+1Ch+var_8], edx
0x689E1F: mov     eax, [eax+8]
0x689E22: xor     ebx, ebx
0x689E24: test    edi, edi
0x689E26: mov     [esp+1Ch+var_4], eax
0x689E2A: mov     [esp+1Ch+var_10], edi
0x689E2E: jz      loc_689EEC
0x689E34: push    ebp
0x689E35: cmp     dword ptr [edi+4], 0
0x689E39: jnz     short loc_689E44
0x689E3B: cmp     dword ptr [edi], 0
0x689E3E: jz      loc_689EEB
0x689E44: test    ebx, ebx
0x689E46: mov     ecx, [edi]
0x689E48: mov     [esp+20h+arg_0], ecx
0x689E4C: jz      short loc_689E52
0x689E4E: mov     ebp, [ebx]
0x689E50: jmp     short loc_689E54
0x689E52: xor     ebp, ebp
0x689E54: test    ebp, ebp
0x689E56: jz      short loc_689EAA
0x689E58: mov     ecx, ebp
0x689E5A: call    sub_68B0F0
0x689E5F: test    eax, eax
0x689E61: jz      short loc_689EAA
0x689E63: mov     ecx, eax; this
0x689E65: call    GetTeleportExtraData
0x689E6A: mov     ebx, eax
0x689E6C: test    ebx, ebx
0x689E6E: jz      short loc_689EAA
0x689E70: mov     ecx, ebx
0x689E72: call    sub_42B470
0x689E77: mov     ecx, ebx
0x689E79: mov     esi, eax
0x689E7B: call    sub_6899C0
0x689E80: test    esi, esi
0x689E82: mov     edx, [eax]
0x689E84: mov     [esp+20h+var_C], edx
0x689E88: mov     ecx, [eax+4]
0x689E8B: mov     [esp+20h+var_8], ecx
0x689E8F: mov     edx, [eax+8]
0x689E92: mov     [esp+20h+var_4], edx
0x689E96: jz      short loc_689EAA
0x689E98: lea     eax, [esp+20h+var_C]
0x689E9C: push    eax
0x689E9D: mov     ecx, esi
0x689E9F: call    sub_4F0600
0x689EA4: test    eax, eax
0x689EA6: jz      short loc_689EAA
0x689EA8: xor     esi, esi
0x689EAA: test    esi, esi
0x689EAC: mov     ebx, edi
0x689EAE: mov     edi, [edi+4]
0x689EB1: jz      short loc_689EE3
0x689EB3: mov     ecx, esi; this
0x689EB5: call    TESObjectCELL_GetNiNode?
0x689EBA: test    eax, eax
0x689EBC: jz      short loc_689EE3
0x689EBE: mov     ecx, [esp+20h+arg_0]
0x689EC2: call    sub_68B110
0x689EC7: mov     edx, [esp+20h+var_10]
0x689ECB: push    eax
0x689ECC: lea     ecx, [esp+24h+var_C]
0x689ED0: push    ecx
0x689ED1: push    ebp
0x689ED2: push    edx
0x689ED3: mov     ecx, esi; this
0x689ED5: call    TESObjectCELL_GetNiNode?
0x689EDA: mov     ecx, eax
0x689EDC: call    sub_4E97F0
0x689EE1: xor     esi, esi
0x689EE3: test    edi, edi
0x689EE5: jnz     loc_689E35
0x689EEB: pop     ebp
0x689EEC: pop     esi
0x689EED: pop     edi
0x689EEE: pop     ebx
0x689EEF: add     esp, 10h
0x689EF2: retn    4
