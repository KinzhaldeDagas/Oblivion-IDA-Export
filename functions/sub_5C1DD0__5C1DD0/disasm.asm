0x5C1DD0: push    ecx
0x5C1DD1: mov     eax, [esp+4+arg_0]
0x5C1DD5: push    esi
0x5C1DD6: mov     esi, ecx
0x5C1DD8: movzx   ecx, byte ptr [eax+4]
0x5C1DDC: lea     edx, [ecx-10h]; switch 23 cases
0x5C1DDF: cmp     edx, 16h
0x5C1DE2: ja      def_5C1DEF; jumptable 005C1DEF default case, cases 17,18,23-37
0x5C1DE8: movzx   edx, ds:byte_5C1F50[edx]
0x5C1DEF: jmp     ds:jpt_5C1DEF[edx*4]; switch jump
0x5C1DF6: push    0; jumptable 005C1DEF case 21
0x5C1DF8: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x5C1DFD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C1E02: push    0; int
0x5C1E04: push    eax; void *
0x5C1E05: call    OblivionDynamicCast
0x5C1E0A: add     esp, 14h
0x5C1E0D: test    eax, eax
0x5C1E0F: jz      loc_5C1F28
0x5C1E15: test    byte ptr [eax+88h], 1
0x5C1E1C: jz      short loc_5C1E24; jumptable 005C1DEF cases 19,38
0x5C1E1E: cmp     dword ptr [eax+64h], 0
0x5C1E22: jnz     short loc_5C1E4A; jumptable 005C1DEF case 16
0x5C1E24: push    0; jumptable 005C1DEF cases 19,38
0x5C1E26: push    13h
0x5C1E28: mov     ecx, esi
0x5C1E2A: call    sub_5C1A70
0x5C1E2F: push    0
0x5C1E31: push    26h ; '&'
0x5C1E33: mov     ecx, esi
0x5C1E35: call    sub_5C1A70
0x5C1E3A: push    0
0x5C1E3C: push    15h
0x5C1E3E: mov     ecx, esi
0x5C1E40: call    sub_5C1A70
0x5C1E45: pop     esi
0x5C1E46: pop     ecx
0x5C1E47: retn    4
0x5C1E4A: push    1; jumptable 005C1DEF case 16
0x5C1E4C: push    15h
0x5C1E4E: mov     ecx, esi
0x5C1E50: call    sub_5C1A70
0x5C1E55: push    0
0x5C1E57: push    10h
0x5C1E59: mov     ecx, esi
0x5C1E5B: call    sub_5C1A70
0x5C1E60: pop     esi
0x5C1E61: pop     ecx
0x5C1E62: retn    4
0x5C1E65: push    ebp; jumptable 005C1DEF cases 20,22
0x5C1E66: push    0; int
0x5C1E68: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x5C1E6D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C1E72: push    0; int
0x5C1E74: push    eax; void *
0x5C1E75: call    OblivionDynamicCast
0x5C1E7A: mov     ebp, eax
0x5C1E7C: add     esp, 14h
0x5C1E7F: test    ebp, ebp
0x5C1E81: jz      loc_5C1F27
0x5C1E87: push    ebx
0x5C1E88: call    sub_5C1100
0x5C1E8D: shl     eax, 4
0x5C1E90: mov     esi, ds:dword_B3B44C[eax]
0x5C1E96: call    sub_5C1100
0x5C1E9B: shl     eax, 4
0x5C1E9E: test    esi, esi
0x5C1EA0: mov     ebx, ds:dword_B3B444[eax]
0x5C1EA6: jbe     short loc_5C1F26
0x5C1EA8: mov     [esp+10h+arg_0], esi
0x5C1EAC: push    edi
0x5C1EAD: lea     ecx, [ecx+0]
0x5C1EB0: push    0; int
0x5C1EB2: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x5C1EB7: lea     eax, [ebx+8]
0x5C1EBA: mov     eax, [eax]
0x5C1EBC: mov     ebx, [ebx]
0x5C1EBE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C1EC3: push    0; int
0x5C1EC5: push    eax; void *
0x5C1EC6: mov     [esp+28h+var_4], eax
0x5C1ECA: call    OblivionDynamicCast
0x5C1ECF: mov     edi, eax
0x5C1ED1: add     esp, 14h
0x5C1ED4: test    edi, edi
0x5C1ED6: jz      short loc_5C1F1E
0x5C1ED8: xor     esi, esi
0x5C1EDA: lea     ebx, [ebx+0]
0x5C1EE0: push    0
0x5C1EE2: push    esi
0x5C1EE3: mov     ecx, ebp
0x5C1EE5: call    TESBipedModelForm_CoversSlot
0x5C1EEA: test    al, al
0x5C1EEC: jz      short loc_5C1F16
0x5C1EEE: push    0
0x5C1EF0: push    esi
0x5C1EF1: mov     ecx, edi
0x5C1EF3: call    TESBipedModelForm_CoversSlot
0x5C1EF8: test    al, al
0x5C1EFA: jz      short loc_5C1F16
0x5C1EFC: lea     eax, [esp+14h+var_4]
0x5C1F00: push    eax
0x5C1F01: call    sub_5C1100
0x5C1F06: mov     ecx, eax
0x5C1F08: shl     ecx, 4
0x5C1F0B: add     ecx, offset quickKeyList_ptr
0x5C1F11: call    sub_776690
0x5C1F16: add     esi, 1
0x5C1F19: cmp     esi, 10h
0x5C1F1C: jl      short loc_5C1EE0
0x5C1F1E: sub     [esp+14h+arg_0], 1
0x5C1F23: jnz     short loc_5C1EB0
0x5C1F25: pop     edi
0x5C1F26: pop     ebx
0x5C1F27: pop     ebp
0x5C1F28: pop     esi
0x5C1F29: pop     ecx
0x5C1F2A: retn    4
0x5C1F2D: push    0; jumptable 005C1DEF default case, cases 17,18,23-37
0x5C1F2F: push    ecx
0x5C1F30: mov     ecx, esi
0x5C1F32: call    sub_5C1A70
0x5C1F37: pop     esi
0x5C1F38: pop     ecx
0x5C1F39: retn    4
