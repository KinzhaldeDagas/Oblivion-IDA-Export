0x5E3DE0: push    ecx
0x5E3DE1: push    ebx
0x5E3DE2: push    esi
0x5E3DE3: mov     esi, [esp+0Ch+arg_0]
0x5E3DE7: push    edi
0x5E3DE8: mov     edi, ecx
0x5E3DEA: lea     ecx, [edi+68h]
0x5E3DED: push    esi
0x5E3DEE: mov     [esp+14h+var_4], edi
0x5E3DF2: mov     bl, 1
0x5E3DF4: call    sub_6A1E20
0x5E3DF9: test    al, al
0x5E3DFB: jz      short loc_5E3E06
0x5E3DFD: pop     edi
0x5E3DFE: pop     esi
0x5E3DFF: xor     al, al
0x5E3E01: pop     ebx
0x5E3E02: pop     ecx
0x5E3E03: retn    8
0x5E3E06: push    0; int
0x5E3E08: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5E3E0D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5E3E12: push    0; int
0x5E3E14: push    esi; void *
0x5E3E15: call    OblivionDynamicCast
0x5E3E1A: add     esp, 14h
0x5E3E1D: test    eax, eax
0x5E3E1F: jz      short loc_5E3E26
0x5E3E21: mov     eax, [eax+4]
0x5E3E24: jmp     short loc_5E3E28
0x5E3E26: xor     eax, eax
0x5E3E28: test    eax, eax
0x5E3E2A: jz      loc_5E3FB1
0x5E3E30: cmp     dword ptr [eax+34h], 3
0x5E3E34: jnz     loc_5E3FB1
0x5E3E3A: lea     esi, [eax+24h]
0x5E3E3D: push    20000h
0x5E3E42: mov     ecx, esi
0x5E3E44: call    EffectItemList_HasEffectWithFlags
0x5E3E49: test    al, al
0x5E3E4B: jnz     short loc_5E3E61
0x5E3E4D: push    10000h
0x5E3E52: mov     ecx, esi
0x5E3E54: call    EffectItemList_HasEffectWithFlags
0x5E3E59: test    al, al
0x5E3E5B: jz      loc_5E3FB1
0x5E3E61: test    esi, esi
0x5E3E63: jz      loc_5E3FB1
0x5E3E69: push    ebp
0x5E3E6A: jmp     short loc_5E3E78
0x5E3E6C: align 10h
0x5E3E70: mov     esi, [esp+14h+arg_0]
0x5E3E74: mov     edi, [esp+14h+var_4]
0x5E3E78: cmp     dword ptr [esi+8], 0
0x5E3E7C: jnz     short loc_5E3E88
0x5E3E7E: cmp     dword ptr [esi+4], 0
0x5E3E82: jz      loc_5E3FB0
0x5E3E88: test    bl, bl
0x5E3E8A: jz      loc_5E3FB0
0x5E3E90: mov     eax, [esi+8]
0x5E3E93: test    eax, eax
0x5E3E95: mov     ebp, [esi+4]
0x5E3E98: jz      short loc_5E3EA3
0x5E3E9A: add     eax, 0FFFFFFFCh
0x5E3E9D: mov     [esp+14h+arg_0], eax
0x5E3EA1: jmp     short loc_5E3EAB
0x5E3EA3: mov     [esp+14h+arg_0], 0
0x5E3EAB: test    ebp, ebp
0x5E3EAD: jz      loc_5E3FA5
0x5E3EB3: mov     eax, [edi+68h]
0x5E3EB6: mov     edx, [eax+8]
0x5E3EB9: lea     ecx, [edi+68h]
0x5E3EBC: call    edx
0x5E3EBE: mov     esi, eax
0x5E3EC0: test    esi, esi
0x5E3EC2: jz      short loc_5E3F01
0x5E3EC4: cmp     dword ptr [esi+4], 0
0x5E3EC8: jnz     short loc_5E3ECF
0x5E3ECA: cmp     dword ptr [esi], 0
0x5E3ECD: jz      short loc_5E3F01
0x5E3ECF: test    bl, bl
0x5E3ED1: jz      loc_5E3FA5
0x5E3ED7: mov     edi, [esi]
0x5E3ED9: test    edi, edi
0x5E3EDB: jz      short loc_5E3EFA
0x5E3EDD: mov     ecx, edi
0x5E3EDF: call    ActiveEffect_Base_IsBoundObjWearable
0x5E3EE4: test    al, al
0x5E3EE6: jz      short loc_5E3EFA
0x5E3EE8: mov     edi, [edi+0Ch]
0x5E3EEB: push    edi
0x5E3EEC: push    ebp
0x5E3EED: call    Magic_BoundItemSlotOverlap
0x5E3EF2: add     esp, 8
0x5E3EF5: test    al, al
0x5E3EF7: setz    bl
0x5E3EFA: mov     esi, [esi+4]
0x5E3EFD: test    esi, esi
0x5E3EFF: jnz     short loc_5E3EC4
0x5E3F01: test    bl, bl
0x5E3F03: jz      loc_5E3FA5
0x5E3F09: mov     eax, ds:0B333C4h
0x5E3F0E: cmp     [esp+14h+var_4], eax
0x5E3F12: jnz     loc_5E3FA5
0x5E3F18: mov     edi, [eax+1FCh]
0x5E3F1E: test    edi, edi
0x5E3F20: jz      loc_5E3FA5
0x5E3F26: cmp     dword ptr [edi+4], 0
0x5E3F2A: jnz     short loc_5E3F31
0x5E3F2C: cmp     dword ptr [edi], 0
0x5E3F2F: jz      short loc_5E3FA5
0x5E3F31: test    bl, bl
0x5E3F33: jz      short loc_5E3FA5
0x5E3F35: mov     eax, [edi]
0x5E3F37: test    eax, eax
0x5E3F39: jz      short loc_5E3F5B
0x5E3F3B: push    0; int
0x5E3F3D: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5E3F42: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5E3F47: push    0; int
0x5E3F49: push    eax; void *
0x5E3F4A: call    OblivionDynamicCast
0x5E3F4F: add     esp, 14h
0x5E3F52: test    eax, eax
0x5E3F54: jz      short loc_5E3F5B
0x5E3F56: mov     eax, [eax+4]
0x5E3F59: jmp     short loc_5E3F5D
0x5E3F5B: xor     eax, eax
0x5E3F5D: test    eax, eax
0x5E3F5F: jz      short loc_5E3F9E
0x5E3F61: cmp     dword ptr [eax+34h], 3
0x5E3F65: jnz     short loc_5E3F9E
0x5E3F67: lea     esi, [eax+24h]
0x5E3F6A: test    esi, esi
0x5E3F6C: jz      short loc_5E3F9E
0x5E3F6E: mov     edi, edi
0x5E3F70: cmp     dword ptr [esi+8], 0
0x5E3F74: jnz     short loc_5E3F7C
0x5E3F76: cmp     dword ptr [esi+4], 0
0x5E3F7A: jz      short loc_5E3F9E
0x5E3F7C: test    bl, bl
0x5E3F7E: jz      short loc_5E3F9E
0x5E3F80: mov     eax, [esi+4]
0x5E3F83: push    eax
0x5E3F84: push    ebp
0x5E3F85: call    Magic_BoundItemSlotOverlap
0x5E3F8A: mov     esi, [esi+8]
0x5E3F8D: add     esp, 8
0x5E3F90: test    al, al
0x5E3F92: setz    bl
0x5E3F95: test    esi, esi
0x5E3F97: jz      short loc_5E3F9E
0x5E3F99: add     esi, 0FFFFFFFCh
0x5E3F9C: jnz     short loc_5E3F70
0x5E3F9E: mov     edi, [edi+4]
0x5E3FA1: test    edi, edi
0x5E3FA3: jnz     short loc_5E3F26
0x5E3FA5: cmp     [esp+14h+arg_0], 0
0x5E3FAA: jnz     loc_5E3E70
0x5E3FB0: pop     ebp
0x5E3FB1: pop     edi
0x5E3FB2: pop     esi
0x5E3FB3: mov     al, bl
0x5E3FB5: pop     ebx
0x5E3FB6: pop     ecx
0x5E3FB7: retn    8
