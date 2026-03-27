0x44EE00: push    0FFFFFFFFh
0x44EE02: push    offset SEH_44EE00
0x44EE07: mov     eax, large fs:0
0x44EE0D: push    eax
0x44EE0E: sub     esp, 14h
0x44EE11: push    ebx
0x44EE12: push    ebp
0x44EE13: push    esi
0x44EE14: push    edi
0x44EE15: mov     eax, ds:0B30AACh
0x44EE1A: xor     eax, esp
0x44EE1C: push    eax
0x44EE1D: lea     eax, [esp+34h+var_C]
0x44EE21: mov     large fs:0, eax
0x44EE27: mov     [esp+34h+var_18], ecx
0x44EE2B: test    byte ptr ds:0B33AD4h, 1
0x44EE32: jnz     short loc_44EE64
0x44EE34: or      dword ptr ds:0B33AD4h, 1
0x44EE3B: xor     ebx, ebx
0x44EE3D: push    25h ; '%'
0x44EE3F: mov     ecx, offset dword_B33AC4
0x44EE44: mov     [esp+38h+var_4], ebx
0x44EE48: call    ??0?$NiTPointerMap@PAVTESForm@@_N@@QAE@XZ; NiTPointerMap<TESForm *,bool>::NiTPointerMap<TESForm *,bool>(void)
0x44EE4D: push    offset sub_A18360; void (__cdecl *)()
0x44EE52: call    _atexit
0x44EE57: add     esp, 4
0x44EE5A: mov     [esp+34h+var_4], 0FFFFFFFFh
0x44EE62: jmp     short loc_44EE66
0x44EE64: xor     ebx, ebx
0x44EE66: cmp     ds:0B33AC0h, ebx
0x44EE6C: mov     ecx, ds:0B3F9A8h
0x44EE72: mov     eax, [esp+34h+arg_4]
0x44EE76: mov     [eax], ecx
0x44EE78: mov     edx, ds:0B3F9ACh
0x44EE7E: mov     [eax+4], edx
0x44EE81: mov     ecx, ds:0B3F9B0h
0x44EE87: mov     [esp+34h+var_20], ebx
0x44EE8B: mov     [eax+8], ecx
0x44EE8E: jnz     short loc_44EE9D
0x44EE90: mov     ecx, [esp+34h+arg_8]
0x44EE94: cmp     ecx, ebx
0x44EE96: jz      short loc_44EE9D
0x44EE98: call    BSSimpleList_Clear
0x44EE9D: mov     edi, [esp+34h+arg_0]
0x44EEA1: push    ebx; int
0x44EEA2: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x44EEA7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44EEAC: push    ebx; int
0x44EEAD: push    edi; void *
0x44EEAE: call    OblivionDynamicCast
0x44EEB3: push    ebx; int
0x44EEB4: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x44EEB9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44EEBE: push    ebx; int
0x44EEBF: push    edi; void *
0x44EEC0: mov     ebp, eax
0x44EEC2: call    OblivionDynamicCast
0x44EEC7: mov     esi, eax
0x44EEC9: add     esp, 28h
0x44EECC: cmp     esi, ebx
0x44EECE: jz      short loc_44EEDB
0x44EED0: mov     ecx, esi; this
0x44EED2: call    TESObjectCELL_IsInterior
0x44EED7: test    al, al
0x44EED9: jnz     short loc_44EEF2
0x44EEDB: cmp     ebp, ebx
0x44EEDD: jz      loc_44F0A0
0x44EEE3: mov     ecx, ebp
0x44EEE5: call    sub_4EF130
0x44EEEA: test    al, al
0x44EEEC: jz      loc_44F0A0
0x44EEF2: add     dword ptr ds:0B33AC0h, 1
0x44EEF9: push    1; a3
0x44EEFB: push    edi; a2
0x44EEFC: mov     ecx, offset dword_B33AC4; this
0x44EF01: call    NiTMap_SetAt
0x44EF06: cmp     esi, ebx
0x44EF08: mov     [esp+34h+var_14], ebx
0x44EF0C: mov     [esp+34h+var_10], ebx
0x44EF10: jz      short loc_44EF20
0x44EF12: lea     edx, [esp+34h+var_14]
0x44EF16: push    edx
0x44EF17: mov     ecx, esi
0x44EF19: call    sub_4CBD30
0x44EF1E: jmp     short loc_44EF2C
0x44EF20: lea     eax, [esp+34h+var_14]
0x44EF24: push    eax
0x44EF25: mov     ecx, ebp
0x44EF27: call    sub_4EF270
0x44EF2C: lea     ebx, [esp+34h+var_14]
0x44EF30: mov     ebp, [ebx]
0x44EF32: test    ebp, ebp
0x44EF34: mov     ebx, [ebx+4]
0x44EF37: jz      short loc_44EF6E
0x44EF39: mov     eax, [ebp+8]
0x44EF3C: mov     ecx, eax
0x44EF3E: shr     ecx, 5
0x44EF41: test    cl, 1
0x44EF44: jnz     short loc_44EF6E
0x44EF46: shr     eax, 0Bh
0x44EF49: test    al, 1
0x44EF4B: jnz     short loc_44EF6E
0x44EF4D: mov     ecx, ebp; this
0x44EF4F: call    GetTeleportExtraData
0x44EF54: mov     edi, eax
0x44EF56: mov     ecx, edi
0x44EF58: call    sub_42B470
0x44EF5D: mov     esi, eax
0x44EF5F: test    esi, esi
0x44EF61: jz      short loc_44EF6E
0x44EF63: mov     ecx, esi
0x44EF65: call    sub_4EF130
0x44EF6A: test    al, al
0x44EF6C: jz      short loc_44EF78
0x44EF6E: test    ebx, ebx
0x44EF70: jnz     short loc_44EF30
0x44EF72: lea     eax, [esp+34h+var_14]
0x44EF76: jmp     short loc_44EFB4
0x44EF78: mov     ecx, edi
0x44EF7A: mov     [esp+34h+var_20], esi
0x44EF7E: call    sub_6899C0
0x44EF83: mov     edx, [eax]
0x44EF85: mov     ecx, [esp+34h+arg_4]
0x44EF89: mov     [ecx], edx
0x44EF8B: mov     edx, [eax+4]
0x44EF8E: mov     [ecx+4], edx
0x44EF91: mov     eax, [eax+8]
0x44EF94: mov     [ecx+8], eax
0x44EF97: mov     ecx, [esp+34h+arg_8]
0x44EF9B: test    ecx, ecx
0x44EF9D: jz      loc_44F07E
0x44EFA3: push    ebp
0x44EFA4: jmp     loc_44F079
0x44EFA9: align 10h
0x44EFB0: mov     eax, [esp+34h+var_1C]
0x44EFB4: cmp     [esp+34h+var_20], 0
0x44EFB9: jnz     loc_44F07E
0x44EFBF: mov     ebx, [eax]
0x44EFC1: test    ebx, ebx
0x44EFC3: mov     ecx, [eax+4]
0x44EFC6: mov     [esp+34h+var_1C], ecx
0x44EFCA: jz      loc_44F065
0x44EFD0: mov     eax, [ebx+8]
0x44EFD3: mov     edx, eax
0x44EFD5: shr     edx, 5
0x44EFD8: test    dl, 1
0x44EFDB: jnz     loc_44F065
0x44EFE1: shr     eax, 0Bh
0x44EFE4: test    al, 1
0x44EFE6: jnz     short loc_44F065
0x44EFE8: mov     ecx, ebx; this
0x44EFEA: call    GetTeleportExtraData
0x44EFEF: mov     esi, eax
0x44EFF1: mov     ecx, esi
0x44EFF3: call    sub_42B460
0x44EFF8: mov     ecx, esi
0x44EFFA: mov     edi, eax
0x44EFFC: call    sub_42B470
0x44F001: xor     esi, esi
0x44F003: test    edi, edi
0x44F005: mov     ebp, eax
0x44F007: jz      short loc_44F018
0x44F009: mov     ecx, edi; this
0x44F00B: call    TESObjectCELL_IsInterior
0x44F010: test    al, al
0x44F012: jz      short loc_44F018
0x44F014: mov     esi, edi
0x44F016: jmp     short loc_44F029
0x44F018: test    ebp, ebp
0x44F01A: jz      short loc_44F029
0x44F01C: mov     ecx, ebp
0x44F01E: call    sub_4EF130
0x44F023: test    al, al
0x44F025: jz      short loc_44F029
0x44F027: mov     esi, ebp
0x44F029: lea     eax, [esp+34h+arg_0]
0x44F02D: push    eax
0x44F02E: push    esi
0x44F02F: mov     ecx, offset dword_B33AC4
0x44F034: mov     byte ptr [esp+3Ch+arg_0], 0
0x44F039: call    sub_4D6760
0x44F03E: test    al, al
0x44F040: jz      short loc_44F049
0x44F042: cmp     byte ptr [esp+34h+arg_0], 0
0x44F047: jnz     short loc_44F065
0x44F049: mov     edi, [esp+34h+arg_8]
0x44F04D: mov     ecx, [esp+34h+arg_4]
0x44F051: push    edi
0x44F052: push    ecx
0x44F053: mov     ecx, [esp+3Ch+var_18]
0x44F057: push    esi
0x44F058: call    sub_44EE00
0x44F05D: test    eax, eax
0x44F05F: mov     [esp+34h+var_20], eax
0x44F063: jnz     short loc_44F072
0x44F065: cmp     [esp+34h+var_1C], 0
0x44F06A: jnz     loc_44EFB0
0x44F070: jmp     short loc_44F07E
0x44F072: test    edi, edi
0x44F074: jz      short loc_44F07E
0x44F076: push    ebx
0x44F077: mov     ecx, edi
0x44F079: call    BSSimpleList_PushFront
0x44F07E: sub     dword ptr ds:0B33AC0h, 1
0x44F085: jnz     short loc_44F091
0x44F087: mov     ecx, offset dword_B33AC4
0x44F08C: call    NiTMap_Clear
0x44F091: lea     ecx, [esp+34h+var_14]
0x44F095: call    BSSimpleList_Clear
0x44F09A: mov     eax, [esp+34h+var_20]
0x44F09E: jmp     short loc_44F0A2
0x44F0A0: xor     eax, eax
0x44F0A2: mov     ecx, [esp+34h+var_C]
0x44F0A6: mov     large fs:0, ecx
0x44F0AD: pop     ecx
0x44F0AE: pop     edi
0x44F0AF: pop     esi
0x44F0B0: pop     ebp
0x44F0B1: pop     ebx
0x44F0B2: add     esp, 20h
0x44F0B5: retn    0Ch
