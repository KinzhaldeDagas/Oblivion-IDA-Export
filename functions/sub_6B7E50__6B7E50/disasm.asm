0x6B7E50: push    0FFFFFFFFh
0x6B7E52: push    offset SEH_6B7E50
0x6B7E57: mov     eax, large fs:0
0x6B7E5D: push    eax
0x6B7E5E: sub     esp, 1Ch
0x6B7E61: push    ebx
0x6B7E62: push    ebp
0x6B7E63: push    esi
0x6B7E64: push    edi
0x6B7E65: mov     eax, ds:0B30AACh
0x6B7E6A: xor     eax, esp
0x6B7E6C: push    eax
0x6B7E6D: lea     eax, [esp+3Ch+var_C]
0x6B7E71: mov     large fs:0, eax
0x6B7E77: mov     ebp, ecx
0x6B7E79: mov     ecx, ds:0B33B00h
0x6B7E7F: push    1; Size
0x6B7E81: lea     eax, [esp+40h+a1+2]
0x6B7E85: push    eax; Dst
0x6B7E86: call    SaveLoad_LoadData
0x6B7E8B: xor     ebx, ebx
0x6B7E8D: cmp     byte ptr [esp+3Ch+a1+2], bl
0x6B7E91: mov     [esp+3Ch+var_24], ebx
0x6B7E95: jbe     loc_6B7F27
0x6B7E9B: jmp     short loc_6B7EA0
0x6B7E9D: align 10h
0x6B7EA0: push    18h; Size
0x6B7EA2: call    FormHeapAlloc
0x6B7EA7: add     esp, 4
0x6B7EAA: mov     [esp+3Ch+var_10], eax
0x6B7EAE: cmp     eax, ebx
0x6B7EB0: mov     [esp+3Ch+var_4], ebx
0x6B7EB4: jz      short loc_6B7EC1
0x6B7EB6: mov     ecx, eax
0x6B7EB8: call    sub_6B8390
0x6B7EBD: mov     edi, eax
0x6B7EBF: jmp     short loc_6B7EC3
0x6B7EC1: xor     edi, edi
0x6B7EC3: mov     ecx, edi
0x6B7EC5: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x6B7ECD: call    sub_6B8280
0x6B7ED2: cmp     edi, ebx
0x6B7ED4: jz      short loc_6B7F0F
0x6B7ED6: cmp     [ebp+4], ebx
0x6B7ED9: lea     eax, [ebp+4]
0x6B7EDC: mov     esi, ebp
0x6B7EDE: jz      short loc_6B7EEA
0x6B7EE0: mov     esi, [eax]
0x6B7EE2: cmp     [esi+4], ebx
0x6B7EE5: lea     eax, [esi+4]
0x6B7EE8: jnz     short loc_6B7EE0
0x6B7EEA: cmp     [esi], ebx
0x6B7EEC: jz      short loc_6B7F0D
0x6B7EEE: push    8; Size
0x6B7EF0: call    FormHeapAlloc
0x6B7EF5: add     esp, 4
0x6B7EF8: cmp     eax, ebx
0x6B7EFA: jz      short loc_6B7F06
0x6B7EFC: mov     [eax], edi
0x6B7EFE: mov     [eax+4], ebx
0x6B7F01: mov     [esi+4], eax
0x6B7F04: jmp     short loc_6B7F0F
0x6B7F06: xor     eax, eax
0x6B7F08: mov     [esi+4], eax
0x6B7F0B: jmp     short loc_6B7F0F
0x6B7F0D: mov     [esi], edi
0x6B7F0F: mov     eax, [esp+3Ch+var_24]
0x6B7F13: movzx   ecx, byte ptr [esp+3Ch+a1+2]
0x6B7F18: add     eax, 1
0x6B7F1B: cmp     eax, ecx
0x6B7F1D: mov     [esp+3Ch+var_24], eax
0x6B7F21: jb      loc_6B7EA0
0x6B7F27: mov     ecx, ds:0B33B00h
0x6B7F2D: push    1; Size
0x6B7F2F: lea     edx, [esp+40h+a1+3]
0x6B7F33: push    edx; Dst
0x6B7F34: call    SaveLoad_LoadData
0x6B7F39: mov     al, byte ptr [esp+3Ch+a1+3]
0x6B7F3D: cmp     al, 0FFh
0x6B7F3F: jz      short loc_6B7F6F
0x6B7F41: movsx   ax, al
0x6B7F45: mov     ecx, ebp
0x6B7F47: push    eax
0x6B7F48: call    sub_6B7CA0
0x6B7F4D: cmp     ebp, ebx
0x6B7F4F: mov     ecx, ebp
0x6B7F51: jz      short loc_6B7F72
0x6B7F53: mov     edx, [ecx+4]
0x6B7F56: cmp     edx, ebx
0x6B7F58: jnz     short loc_6B7F5E
0x6B7F5A: cmp     [ecx], ebx
0x6B7F5C: jz      short loc_6B7F72
0x6B7F5E: cmp     eax, [ecx]
0x6B7F60: jz      short loc_6B7F6A
0x6B7F62: mov     ecx, edx
0x6B7F64: cmp     ecx, ebx
0x6B7F66: jnz     short loc_6B7F53
0x6B7F68: jmp     short loc_6B7F72
0x6B7F6A: mov     [ebp+8], ecx
0x6B7F6D: jmp     short loc_6B7F72
0x6B7F6F: mov     [ebp+8], ebx
0x6B7F72: push    4; Size
0x6B7F74: lea     ecx, [esp+40h+Dst]
0x6B7F78: push    ecx; Dst
0x6B7F79: mov     ecx, ds:0B33B00h
0x6B7F7F: call    SaveLoad_LoadFormID
0x6B7F84: mov     eax, [esp+44h+a1]
0x6B7F88: cmp     eax, ebx
0x6B7F8A: jz      short loc_6B7FAD
0x6B7F8C: push    ebx; int
0x6B7F8D: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x6B7F92: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6B7F97: push    ebx; int
0x6B7F98: push    eax; a1
0x6B7F99: call    TESForm_LookupByFormID
0x6B7F9E: add     esp, 4
0x6B7FA1: push    eax; void *
0x6B7FA2: call    OblivionDynamicCast
0x6B7FA7: add     esp, 14h
0x6B7FAA: mov     [ebp+0Ch], eax
0x6B7FAD: mov     ecx, ds:0B33B00h
0x6B7FB3: push    4; Size
0x6B7FB5: lea     edx, [esp+48h+var_24]
0x6B7FB9: push    edx; Dst
0x6B7FBA: call    SaveLoad_LoadFormID
0x6B7FBF: mov     eax, [esp+4Ch+var_2C]
0x6B7FC3: cmp     eax, ebx
0x6B7FC5: jz      short loc_6B7FE8
0x6B7FC7: push    ebx; int
0x6B7FC8: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x6B7FCD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6B7FD2: push    ebx; int
0x6B7FD3: push    eax; a1
0x6B7FD4: call    TESForm_LookupByFormID
0x6B7FD9: add     esp, 4
0x6B7FDC: push    eax; void *
0x6B7FDD: call    OblivionDynamicCast
0x6B7FE2: add     esp, 14h
0x6B7FE5: mov     [ebp+10h], eax
0x6B7FE8: mov     ecx, ds:0B33B00h
0x6B7FEE: push    4; Size
0x6B7FF0: lea     eax, [esp+50h+a1]
0x6B7FF4: push    eax; Dst
0x6B7FF5: call    SaveLoad_LoadFormID
0x6B7FFA: mov     eax, [esp+24h]
0x6B7FFE: cmp     eax, ebx
0x6B8000: jz      short loc_6B8023
0x6B8002: push    ebx; int
0x6B8003: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x6B8008: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6B800D: push    ebx; int
0x6B800E: push    eax; a1
0x6B800F: call    TESForm_LookupByFormID
0x6B8014: add     esp, 4
0x6B8017: push    eax; void *
0x6B8018: call    OblivionDynamicCast
0x6B801D: add     esp, 14h
0x6B8020: mov     [ebp+14h], eax
0x6B8023: push    4; Size
0x6B8025: lea     ecx, [esp+58h+var_2C]
0x6B8029: push    ecx; Dst
0x6B802A: mov     ecx, ds:0B33B00h
0x6B8030: call    SaveLoad_LoadFormID
0x6B8035: mov     edx, [esp+28h]
0x6B8039: mov     [ebp+18h], edx
0x6B803C: mov     ecx, [esp+5Ch+var_2C]
0x6B8040: mov     large fs:0, ecx
0x6B8047: pop     ecx
0x6B8048: pop     edi
0x6B8049: pop     esi
0x6B804A: pop     ebp
0x6B804B: pop     ebx
0x6B804C: add     esp, 28h
0x6B804F: retn
