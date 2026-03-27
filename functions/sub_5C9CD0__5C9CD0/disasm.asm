0x5C9CD0: push    0FFFFFFFFh
0x5C9CD2: push    offset SEH_5C9CD0
0x5C9CD7: mov     eax, large fs:0
0x5C9CDD: push    eax
0x5C9CDE: sub     esp, 74h
0x5C9CE1: push    ebx; a3
0x5C9CE2: push    ebp; a3
0x5C9CE3: push    esi; a3
0x5C9CE4: push    edi; a3
0x5C9CE5: mov     eax, ds:0B30AACh
0x5C9CEA: xor     eax, esp
0x5C9CEC: push    eax; a3
0x5C9CED: lea     eax, [esp+94h+var_C]
0x5C9CF4: mov     large fs:0, eax
0x5C9CFA: push    40Ch
0x5C9CFF: call    Menu_GetOpenMenuTile
0x5C9D04: xor     ebx, ebx
0x5C9D06: add     esp, 4
0x5C9D09: cmp     eax, ebx
0x5C9D0B: jz      loc_5C9F54
0x5C9D11: push    ebx; int
0x5C9D12: push    offset ??_R0?AVRaceSexMenu@@@8; struct TypeDescriptor *
0x5C9D17: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C9D1C: push    ebx; int
0x5C9D1D: mov     ecx, eax
0x5C9D1F: call    Tile_GetParentMenu
0x5C9D24: push    eax; void *
0x5C9D25: call    OblivionDynamicCast
0x5C9D2A: mov     esi, eax
0x5C9D2C: add     esp, 14h
0x5C9D2F: cmp     esi, ebx
0x5C9D31: jz      loc_5C9F54
0x5C9D37: mov     ecx, ds:0B333C4h
0x5C9D3D: mov     eax, [ecx]
0x5C9D3F: mov     edx, [eax+170h]
0x5C9D45: call    edx
0x5C9D47: push    ebx
0x5C9D48: mov     edi, eax
0x5C9D4A: push    ebx
0x5C9D4B: push    ebx
0x5C9D4C: mov     ecx, edi
0x5C9D4E: call    sub_5273A0
0x5C9D53: mov     ecx, esi
0x5C9D55: call    sub_5C91E0
0x5C9D5A: push    offset sub_43ACE0; a5
0x5C9D5F: push    offset sub_43EB30; a4
0x5C9D64: push    4; size
0x5C9D66: push    18h; a2
0x5C9D68: lea     eax, [esp+0A4h+a1]
0x5C9D6C: push    eax; a1
0x5C9D6D: call    ArrayConstructor
0x5C9D72: lea     ecx, [esp+94h+a1]
0x5C9D76: push    ecx
0x5C9D77: mov     ecx, edi
0x5C9D79: mov     [esp+98h+var_4], ebx
0x5C9D80: call    sub_5221C0
0x5C9D85: push    ebx; int
0x5C9D86: lea     edx, [esp+98h+a1]
0x5C9D8A: push    ebx; unsigned __int8 *
0x5C9D8B: push    edx
0x5C9D8C: call    BSFaceGen_GetAge
0x5C9D91: fstp    [esp+0A0h+a3]
0x5C9D95: fld1
0x5C9D97: add     esp, 4
0x5C9D9A: fldz
0x5C9D9C: mov     ecx, esp; this
0x5C9D9E: fsub    st(1), st
0x5C9DA0: fxch    st(1)
0x5C9DA2: fst     [esp+9Ch+var_74]
0x5C9DA6: fld     [esp+9Ch+a3]
0x5C9DAA: mov     [esp+9Ch+a3], esp
0x5C9DAE: fsub    qword ptr ds:0A492F0h
0x5C9DB4: push    ebx; a3
0x5C9DB5: fdiv    qword ptr ds:0A3F3D0h
0x5C9DBB: fmulp   st(1), st
0x5C9DBD: faddp   st(1), st
0x5C9DBF: fstp    dword ptr [esi+880h]
0x5C9DC5: mov     eax, ds:0B38F98h
0x5C9DCA: push    eax; a2
0x5C9DCB: mov     [ecx], ebx
0x5C9DCD: mov     [ecx+4], bx
0x5C9DD1: mov     [ecx+6], bx
0x5C9DD5: call    BSStringT_Set
0x5C9DDA: mov     eax, ds:0B38F70h
0x5C9DDF: sub     esp, 8
0x5C9DE2: mov     ecx, esp; this
0x5C9DE4: mov     dword ptr [esp+0A4h+var_7C], esp
0x5C9DE8: push    ebx; a3
0x5C9DE9: push    eax; a2
0x5C9DEA: mov     byte ptr [esp+0ACh+var_4], 1
0x5C9DF2: mov     [ecx], ebx
0x5C9DF4: mov     [ecx+4], bx
0x5C9DF8: mov     [ecx+6], bx
0x5C9DFC: call    BSStringT_Set
0x5C9E01: mov     ecx, esi
0x5C9E03: mov     byte ptr [esp+0A4h+var_4], bl
0x5C9E0A: call    sub_5C3440
0x5C9E0F: fld     dword ptr [esi+880h]
0x5C9E15: push    ecx
0x5C9E16: fstp    [esp+98h+a3]; a3
0x5C9E1A: fld     dword ptr ds:0A6D2D8h
0x5C9E20: mov     ebp, eax
0x5C9E22: fstp    [esp+98h+a2]; a3
0x5C9E25: push    0FB1h; a2
0x5C9E2A: mov     ecx, ebp; this
0x5C9E2C: call    Tile_SetFloat
0x5C9E31: fld     [esp+94h+a3]
0x5C9E35: push    ecx
0x5C9E36: fstp    [esp+98h+a2]; a3
0x5C9E39: push    0FB1h; a2
0x5C9E3E: mov     ecx, ebp; this
0x5C9E40: call    Tile_SetFloat
0x5C9E45: fldz
0x5C9E47: push    ecx
0x5C9E48: fstp    [esp+98h+a2]; a3
0x5C9E4B: push    0FB1h; a2
0x5C9E50: mov     ecx, ebp; this
0x5C9E52: call    Tile_SetFloat
0x5C9E57: push    ebx; int
0x5C9E58: lea     eax, [esp+98h+a1]
0x5C9E5C: push    1; unsigned __int8 *
0x5C9E5E: push    eax
0x5C9E5F: call    BSFaceGen_GetAge
0x5C9E64: fstp    [esp+0A0h+var_7C]
0x5C9E68: add     esp, 0Ch
0x5C9E6B: mov     ecx, edi
0x5C9E6D: call    sub_522230
0x5C9E72: fsubr   [esp+94h+var_7C]
0x5C9E76: sub     esp, 8
0x5C9E79: mov     ecx, esp; this
0x5C9E7B: fstp    [esp+9Ch+a3]
0x5C9E7F: mov     dword ptr [esp+9Ch+var_7C], esp
0x5C9E83: fld     [esp+9Ch+a3]
0x5C9E87: push    ebx; a3
0x5C9E88: fsub    qword ptr ds:0A3F400h
0x5C9E8E: fmul    qword ptr ds:0A3C770h
0x5C9E94: fmul    [esp+0A0h+var_74]
0x5C9E98: fadd    qword ptr ds:0A2FC68h
0x5C9E9E: fstp    dword ptr [esi+884h]
0x5C9EA4: mov     eax, ds:0B38FA0h
0x5C9EA9: push    eax; a2
0x5C9EAA: mov     [ecx], ebx
0x5C9EAC: mov     [ecx+4], bx
0x5C9EB0: mov     [ecx+6], bx
0x5C9EB4: call    BSStringT_Set
0x5C9EB9: mov     eax, ds:0B38F70h
0x5C9EBE: sub     esp, 8
0x5C9EC1: mov     ecx, esp; this
0x5C9EC3: mov     [esp+0A4h+a3], esp
0x5C9EC7: push    ebx; a3
0x5C9EC8: push    eax; a2
0x5C9EC9: mov     byte ptr [esp+0ACh+var_4], 2
0x5C9ED1: mov     [ecx], ebx
0x5C9ED3: mov     [ecx+4], bx
0x5C9ED7: mov     [ecx+6], bx
0x5C9EDB: call    BSStringT_Set
0x5C9EE0: mov     ecx, esi
0x5C9EE2: mov     byte ptr [esp+0A4h+var_4], bl
0x5C9EE9: call    sub_5C3440
0x5C9EEE: fld     dword ptr [esi+884h]
0x5C9EF4: push    ecx
0x5C9EF5: fstp    [esp+98h+a3]
0x5C9EF9: fld     dword ptr ds:0A6D2D8h
0x5C9EFF: mov     edi, eax
0x5C9F01: fstp    [esp+98h+a2]; a3
0x5C9F04: push    0FB1h; a2
0x5C9F09: mov     ecx, edi; this
0x5C9F0B: call    Tile_SetFloat
0x5C9F10: fld     [esp+94h+a3]
0x5C9F14: push    ecx
0x5C9F15: fstp    [esp+98h+a2]; a3
0x5C9F18: push    0FB1h; a2
0x5C9F1D: mov     ecx, edi; this
0x5C9F1F: call    Tile_SetFloat
0x5C9F24: fldz
0x5C9F26: push    ecx
0x5C9F27: fstp    [esp+98h+a2]; a3
0x5C9F2A: push    0FB1h; a2
0x5C9F2F: mov     ecx, edi; this
0x5C9F31: call    Tile_SetFloat
0x5C9F36: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C9F3B: push    4; int
0x5C9F3D: push    18h; unsigned int
0x5C9F3F: lea     ecx, [esp+0A0h+a1]
0x5C9F43: push    ecx; void *
0x5C9F44: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x5C9F4F: call    $LN21
0x5C9F54: mov     ecx, [esp+94h+var_C]
0x5C9F5B: mov     large fs:0, ecx
0x5C9F62: pop     ecx
0x5C9F63: pop     edi
0x5C9F64: pop     esi
0x5C9F65: pop     ebp
0x5C9F66: pop     ebx
0x5C9F67: add     esp, 80h
0x5C9F6D: retn
