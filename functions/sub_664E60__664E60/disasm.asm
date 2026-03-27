0x664E60: push    ecx
0x664E61: push    esi
0x664E62: push    edi
0x664E63: push    1; arg1
0x664E65: push    0; canCreate
0x664E67: mov     esi, ecx
0x664E69: call    InterfaceManager_GetSingleton
0x664E6E: add     esp, 8
0x664E71: cmp     dword ptr [esi+5D8h], 0
0x664E78: mov     edi, eax
0x664E7A: jz      loc_664F63
0x664E80: cmp     dword ptr [esi+58h], 0
0x664E84: jz      loc_664F63
0x664E8A: test    edi, edi
0x664E8C: jz      loc_664F63
0x664E92: mov     eax, [edi+60h]
0x664E95: test    eax, eax
0x664E97: jz      loc_664F63
0x664E9D: test    byte ptr [eax+18h], 1
0x664EA1: jnz     loc_664F63
0x664EA7: mov     ecx, [esi+5DCh]
0x664EAD: push    ebx
0x664EAE: push    ebp
0x664EAF: push    0
0x664EB1: call    ActorAnimData_GetAnimGroupFromField8Value
0x664EB6: mov     ecx, [esi+5DCh]
0x664EBC: push    0
0x664EBE: movzx   ebx, ax
0x664EC1: call    ActorAnimData_GetSomethingFromField8Value
0x664EC6: mov     ecx, [esi+5DCh]
0x664ECC: push    0
0x664ECE: mov     ebp, eax
0x664ED0: call    sub_4706E0
0x664ED5: mov     ecx, [esi+5DCh]
0x664EDB: fld     dword ptr [ecx+94h]
0x664EE1: mov     ecx, edi
0x664EE3: fadd    dword ptr [eax+48h]
0x664EE6: fstp    [esp+14h+var_4]
0x664EEA: call    sub_57ECB0
0x664EEF: mov     ecx, edi
0x664EF1: call    sub_57D5B0
0x664EF6: mov     ecx, [esi+5DCh]
0x664EFC: push    0
0x664EFE: call    ActorAnimData_GetAnimGroupFromField8Value
0x664F03: cmp     bx, ax
0x664F06: jnz     short loc_664F21
0x664F08: fld     [esp+14h+var_4]
0x664F0C: push    0FFFFFFFFh
0x664F0E: push    ecx
0x664F0F: mov     ecx, [esi+5DCh]
0x664F15: fstp    [esp+1Ch+var_1C]
0x664F18: push    ebp
0x664F19: push    ebx
0x664F1A: push    0
0x664F1C: call    sub_474AB0
0x664F21: cmp     byte ptr [esi+588h], 0
0x664F28: mov     ecx, esi; this
0x664F2A: setz    dl
0x664F2D: push    edx; a2
0x664F2E: call    Player_GetAnimData
0x664F33: push    esi; a2
0x664F34: mov     ecx, eax; this
0x664F36: call    sub_474510
0x664F3B: mov     eax, [esi]
0x664F3D: mov     edx, [eax+154h]
0x664F43: mov     ecx, esi
0x664F45: call    edx
0x664F47: cmp     byte ptr [esi+588h], 0
0x664F4E: pop     ebp
0x664F4F: pop     ebx
0x664F50: jnz     short loc_664F5B
0x664F52: push    0
0x664F54: mov     ecx, eax
0x664F56: call    sub_405790
0x664F5B: push    eax
0x664F5C: mov     ecx, esi
0x664F5E: call    sub_5EA1A0
0x664F63: pop     edi
0x664F64: pop     esi
0x664F65: pop     ecx
0x664F66: retn
