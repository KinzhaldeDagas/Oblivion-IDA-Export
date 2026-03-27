0x6C1CA0: push    0FFFFFFFFh
0x6C1CA2: push    offset SEH_6CED50
0x6C1CA7: mov     eax, large fs:0
0x6C1CAD: push    eax
0x6C1CAE: sub     esp, 8
0x6C1CB1: push    ebx
0x6C1CB2: push    ebp
0x6C1CB3: push    esi
0x6C1CB4: push    edi
0x6C1CB5: mov     eax, ds:0B30AACh
0x6C1CBA: xor     eax, esp
0x6C1CBC: push    eax
0x6C1CBD: lea     eax, [esp+28h+var_C]
0x6C1CC1: mov     large fs:0, eax
0x6C1CC7: mov     edi, [esp+28h+arg_8]
0x6C1CCB: fld     [esp+28h+arg_0]
0x6C1CCF: mov     eax, [esp+28h+arg_4]
0x6C1CD3: mov     edx, [edi]
0x6C1CD5: mov     ebp, [eax]
0x6C1CD7: push    8; char
0x6C1CD9: lea     ecx, [esp+2Ch+var_14]
0x6C1CDD: push    ecx; int
0x6C1CDE: push    edx; int
0x6C1CDF: push    ebp; int
0x6C1CE0: push    ecx
0x6C1CE1: fstp    [esp+3Ch+var_3C]; float
0x6C1CE4: call    sub_6D31B0
0x6C1CE9: add     esp, 14h
0x6C1CEC: test    al, al
0x6C1CEE: jz      loc_6C1DF9
0x6C1CF4: mov     esi, [edi]
0x6C1CF6: add     esi, 1
0x6C1CF9: xor     ecx, ecx
0x6C1CFB: mov     eax, esi
0x6C1CFD: mov     edx, 8
0x6C1D02: mul     edx
0x6C1D04: seto    cl
0x6C1D07: neg     ecx
0x6C1D09: or      ecx, eax
0x6C1D0B: xor     eax, eax
0x6C1D0D: add     ecx, 4
0x6C1D10: setb    al
0x6C1D13: neg     eax
0x6C1D15: or      eax, ecx
0x6C1D17: push    eax; Size
0x6C1D18: call    FormHeapAlloc
0x6C1D1D: add     esp, 4
0x6C1D20: mov     [esp+28h+var_10], eax
0x6C1D24: test    eax, eax
0x6C1D26: mov     [esp+28h+var_4], 0
0x6C1D2E: jz      short loc_6C1D4C
0x6C1D30: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C1D35: push    offset sub_7616D0; a4
0x6C1D3A: push    esi; size
0x6C1D3B: lea     ebx, [eax+4]
0x6C1D3E: push    8; a2
0x6C1D40: push    ebx; a1
0x6C1D41: mov     [eax], esi
0x6C1D43: call    ArrayConstructor
0x6C1D48: mov     esi, ebx
0x6C1D4A: jmp     short loc_6C1D4E
0x6C1D4C: xor     esi, esi
0x6C1D4E: mov     ecx, [esp+28h+var_14]
0x6C1D52: lea     edx, ds:0[ecx*8]
0x6C1D59: push    edx; Size
0x6C1D5A: push    ebp; Src
0x6C1D5B: push    esi; Dst
0x6C1D5C: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6C1D64: call    _memcpy
0x6C1D69: mov     eax, [edi]
0x6C1D6B: mov     ecx, [esp+34h+var_14]
0x6C1D6F: add     esp, 0Ch
0x6C1D72: cmp     eax, ecx
0x6C1D74: jbe     short loc_6C1D91
0x6C1D76: sub     eax, ecx
0x6C1D78: add     eax, eax
0x6C1D7A: add     eax, eax
0x6C1D7C: add     eax, eax
0x6C1D7E: push    eax; Size
0x6C1D7F: lea     eax, [ebp+ecx*8+0]
0x6C1D83: push    eax; Src
0x6C1D84: lea     ecx, [esi+ecx*8+8]
0x6C1D88: push    ecx; Dst
0x6C1D89: call    _memcpy
0x6C1D8E: add     esp, 0Ch
0x6C1D91: mov     edx, [edi]
0x6C1D93: fld     [esp+28h+arg_0]
0x6C1D97: push    8; char
0x6C1D99: push    edx; int
0x6C1D9A: push    5; int
0x6C1D9C: push    ebp; int
0x6C1D9D: push    ecx
0x6C1D9E: fstp    [esp+3Ch+var_3C]; float
0x6C1DA1: call    sub_6BDDC0
0x6C1DA6: mov     ecx, [esp+3Ch+var_14]
0x6C1DAA: fld     [esp+3Ch+arg_0]
0x6C1DAE: lea     ecx, [esi+ecx*8]
0x6C1DB1: fstp    dword ptr [ecx]
0x6C1DB3: mov     [ecx+4], al
0x6C1DB6: add     dword ptr [edi], 1
0x6C1DB9: add     esp, 14h
0x6C1DBC: test    ebp, ebp
0x6C1DBE: jz      short loc_6C1DDD
0x6C1DC0: mov     edx, [ebp-4]
0x6C1DC3: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C1DC8: lea     edi, [ebp-4]
0x6C1DCB: push    edx; int
0x6C1DCC: push    8; unsigned int
0x6C1DCE: push    ebp; void *
0x6C1DCF: call    $LN21
0x6C1DD4: push    edi
0x6C1DD5: call    FormHeapFree
0x6C1DDA: add     esp, 4
0x6C1DDD: mov     eax, [esp+28h+arg_4]
0x6C1DE1: mov     [eax], esi
0x6C1DE3: mov     al, 1
0x6C1DE5: mov     ecx, [esp+28h+var_C]
0x6C1DE9: mov     large fs:0, ecx
0x6C1DF0: pop     ecx
0x6C1DF1: pop     edi
0x6C1DF2: pop     esi
0x6C1DF3: pop     ebp
0x6C1DF4: pop     ebx
0x6C1DF5: add     esp, 14h
0x6C1DF8: retn
0x6C1DF9: xor     al, al
0x6C1DFB: mov     ecx, [esp+28h+var_C]
0x6C1DFF: mov     large fs:0, ecx
0x6C1E06: pop     ecx
0x6C1E07: pop     edi
0x6C1E08: pop     esi
0x6C1E09: pop     ebp
0x6C1E0A: pop     ebx
0x6C1E0B: add     esp, 14h
0x6C1E0E: retn
