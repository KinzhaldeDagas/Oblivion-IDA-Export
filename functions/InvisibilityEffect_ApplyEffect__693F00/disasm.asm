0x693F00: push    ecx
0x693F01: push    esi
0x693F02: push    edi
0x693F03: mov     edi, ecx
0x693F05: mov     ecx, [edi+20h]; this
0x693F08: test    ecx, ecx
0x693F0A: jz      short loc_693F15
0x693F0C: call    MagicTarget_GetParentActor
0x693F11: mov     esi, eax
0x693F13: jmp     short loc_693F17
0x693F15: xor     esi, esi
0x693F17: mov     ecx, edi
0x693F19: call    ValueModifierEffect_Apply
0x693F1E: test    esi, esi
0x693F20: jz      loc_693FDB
0x693F26: mov     eax, [esi]
0x693F28: mov     edx, [eax+284h]
0x693F2E: push    2Fh ; '/'
0x693F30: mov     ecx, esi
0x693F32: call    edx
0x693F34: mov     [esp+0Ch+var_4], eax
0x693F38: fild    [esp+0Ch+var_4]
0x693F3C: fcomp   dword ptr ds:0A2FAA8h
0x693F42: fnstsw  ax
0x693F44: test    ah, 41h
0x693F47: jnz     loc_693FDB
0x693F4D: cmp     byte ptr ds:0B42F3Eh, 0
0x693F54: jz      short loc_693F9E
0x693F56: cmp     byte ptr ds:0B42E84h, 0
0x693F5D: jz      short loc_693F9E
0x693F5F: cmp     dword ptr ds:0B42F48h, 2
0x693F66: jl      short loc_693F9E
0x693F68: cmp     esi, ds:0B333C4h
0x693F6E: jnz     short loc_693F9E
0x693F70: mov     eax, [esi]
0x693F72: fld1
0x693F74: mov     edx, [eax+324h]
0x693F7A: push    ecx
0x693F7B: mov     ecx, esi
0x693F7D: fstp    [esp+10h+var_10]
0x693F80: call    edx
0x693F82: fld     dword ptr ds:0A757CCh
0x693F88: mov     eax, [esi]
0x693F8A: mov     edx, [eax+270h]
0x693F90: push    ecx
0x693F91: fstp    [esp+10h+var_10]
0x693F94: push    1
0x693F96: mov     ecx, esi
0x693F98: call    edx
0x693F9A: pop     edi
0x693F9B: pop     esi
0x693F9C: pop     ecx
0x693F9D: retn
0x693F9E: mov     eax, [esi+58h]
0x693FA1: push    0; int
0x693FA3: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x693FA8: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x693FAD: push    0; int
0x693FAF: push    eax; void *
0x693FB0: call    OblivionDynamicCast
0x693FB5: mov     edi, eax
0x693FB7: add     esp, 14h
0x693FBA: test    edi, edi
0x693FBC: jz      short loc_693FDB
0x693FBE: mov     eax, [edi]
0x693FC0: mov     edx, [eax+47Ch]
0x693FC6: mov     ecx, edi
0x693FC8: call    edx
0x693FCA: cmp     eax, 4
0x693FCD: jz      short loc_693FDB
0x693FCF: push    0
0x693FD1: push    0
0x693FD3: push    esi
0x693FD4: mov     ecx, edi
0x693FD6: call    sub_633080
0x693FDB: pop     edi
0x693FDC: pop     esi
0x693FDD: pop     ecx
0x693FDE: retn
