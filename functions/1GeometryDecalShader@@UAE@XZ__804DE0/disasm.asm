0x804DE0: push    0FFFFFFFFh
0x804DE2: push    offset ??0GeometryDecalShader@@QAE@XZ_SEH
0x804DE7: mov     eax, large fs:0
0x804DED: push    eax
0x804DEE: push    ecx
0x804DEF: push    ebx
0x804DF0: push    ebp
0x804DF1: push    esi
0x804DF2: push    edi
0x804DF3: mov     eax, ds:0B30AACh
0x804DF8: xor     eax, esp
0x804DFA: push    eax
0x804DFB: lea     eax, [esp+24h+var_C]
0x804DFF: mov     large fs:0, eax
0x804E05: mov     ebp, ecx
0x804E07: mov     [esp+24h+var_10], ebp
0x804E0B: mov     dword ptr [ebp+0], offset ??_7GeometryDecalShader@@6B@; const GeometryDecalShader::`vftable'
0x804E12: mov     esi, [ebp+94h]
0x804E18: mov     edi, ds:0A2807Ch
0x804E1E: xor     ebx, ebx
0x804E20: cmp     esi, ebx
0x804E22: mov     [esp+24h+var_4], 6
0x804E2A: jz      short loc_804E4A
0x804E2C: lea     eax, [esi+4]
0x804E2F: push    eax; lpAddend
0x804E30: call    edi ; InterlockedDecrement
0x804E32: test    eax, eax
0x804E34: jnz     short loc_804E44
0x804E36: cmp     esi, ebx
0x804E38: jz      short loc_804E44
0x804E3A: mov     edx, [esi]
0x804E3C: mov     eax, [edx]
0x804E3E: push    1
0x804E40: mov     ecx, esi
0x804E42: call    eax
0x804E44: mov     [ebp+94h], ebx
0x804E4A: mov     esi, [ebp+98h]
0x804E50: cmp     esi, ebx
0x804E52: jz      short loc_804E72
0x804E54: lea     ecx, [esi+4]
0x804E57: push    ecx; lpAddend
0x804E58: call    edi ; InterlockedDecrement
0x804E5A: test    eax, eax
0x804E5C: jnz     short loc_804E6C
0x804E5E: cmp     esi, ebx
0x804E60: jz      short loc_804E6C
0x804E62: mov     edx, [esi]
0x804E64: mov     eax, [edx]
0x804E66: push    1
0x804E68: mov     ecx, esi
0x804E6A: call    eax
0x804E6C: mov     [ebp+98h], ebx
0x804E72: mov     esi, [ebp+9Ch]
0x804E78: cmp     esi, ebx
0x804E7A: jz      short loc_804E9A
0x804E7C: lea     ecx, [esi+4]
0x804E7F: push    ecx; lpAddend
0x804E80: call    edi ; InterlockedDecrement
0x804E82: test    eax, eax
0x804E84: jnz     short loc_804E94
0x804E86: cmp     esi, ebx
0x804E88: jz      short loc_804E94
0x804E8A: mov     edx, [esi]
0x804E8C: mov     eax, [edx]
0x804E8E: push    1
0x804E90: mov     ecx, esi
0x804E92: call    eax
0x804E94: mov     [ebp+9Ch], ebx
0x804E9A: lea     edi, [ebp+84h]
0x804EA0: mov     ebx, 2
0x804EA5: mov     ecx, [edi-8]
0x804EA8: test    ecx, ecx
0x804EAA: jz      short loc_804EBE
0x804EAC: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x804EB0: jnz     short loc_804EB7
0x804EB2: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x804EB7: mov     dword ptr [edi-8], 0
0x804EBE: mov     esi, [edi]
0x804EC0: test    esi, esi
0x804EC2: jz      short loc_804EE6
0x804EC4: lea     ecx, [esi+4]
0x804EC7: push    ecx; lpAddend
0x804EC8: call    dword ptr ds:0A2807Ch
0x804ECE: test    eax, eax
0x804ED0: jnz     short loc_804EE0
0x804ED2: test    esi, esi
0x804ED4: jz      short loc_804EE0
0x804ED6: mov     edx, [esi]
0x804ED8: mov     eax, [edx]
0x804EDA: push    1
0x804EDC: mov     ecx, esi
0x804EDE: call    eax
0x804EE0: mov     dword ptr [edi], 0
0x804EE6: mov     esi, [edi+8]
0x804EE9: test    esi, esi
0x804EEB: jz      short loc_804F10
0x804EED: lea     ecx, [esi+4]
0x804EF0: push    ecx; lpAddend
0x804EF1: call    dword ptr ds:0A2807Ch
0x804EF7: test    eax, eax
0x804EF9: jnz     short loc_804F09
0x804EFB: test    esi, esi
0x804EFD: jz      short loc_804F09
0x804EFF: mov     edx, [esi]
0x804F01: mov     eax, [edx]
0x804F03: push    1
0x804F05: mov     ecx, esi
0x804F07: call    eax
0x804F09: mov     dword ptr [edi+8], 0
0x804F10: add     edi, 4
0x804F13: sub     ebx, 1
0x804F16: jnz     short loc_804EA5
0x804F18: mov     esi, ds:0B47604h
0x804F1E: test    esi, esi
0x804F20: mov     edi, ds:0A2807Ch
0x804F26: jz      short loc_804F4A
0x804F28: lea     ecx, [esi+4]
0x804F2B: push    ecx; lpAddend
0x804F2C: call    edi ; InterlockedDecrement
0x804F2E: test    eax, eax
0x804F30: jnz     short loc_804F40
0x804F32: test    esi, esi
0x804F34: jz      short loc_804F40
0x804F36: mov     edx, [esi]
0x804F38: mov     eax, [edx]
0x804F3A: push    1
0x804F3C: mov     ecx, esi
0x804F3E: call    eax
0x804F40: mov     dword ptr ds:0B47604h, 0
0x804F4A: mov     esi, ds:0B47608h
0x804F50: test    esi, esi
0x804F52: jz      short loc_804F76
0x804F54: lea     ecx, [esi+4]
0x804F57: push    ecx; lpAddend
0x804F58: call    edi ; InterlockedDecrement
0x804F5A: test    eax, eax
0x804F5C: jnz     short loc_804F6C
0x804F5E: test    esi, esi
0x804F60: jz      short loc_804F6C
0x804F62: mov     edx, [esi]
0x804F64: mov     eax, [edx]
0x804F66: push    1
0x804F68: mov     ecx, esi
0x804F6A: call    eax
0x804F6C: mov     dword ptr ds:0B47608h, 0
0x804F76: mov     esi, [ebp+9Ch]
0x804F7C: test    esi, esi
0x804F7E: mov     byte ptr [esp+24h+var_4], 5
0x804F83: jz      short loc_804F9D
0x804F85: lea     ecx, [esi+4]
0x804F88: push    ecx; lpAddend
0x804F89: call    edi ; InterlockedDecrement
0x804F8B: test    eax, eax
0x804F8D: jnz     short loc_804F9D
0x804F8F: test    esi, esi
0x804F91: jz      short loc_804F9D
0x804F93: mov     edx, [esi]
0x804F95: mov     eax, [edx]
0x804F97: push    1
0x804F99: mov     ecx, esi
0x804F9B: call    eax
0x804F9D: mov     esi, [ebp+98h]
0x804FA3: test    esi, esi
0x804FA5: mov     byte ptr [esp+24h+var_4], 4
0x804FAA: jz      short loc_804FC4
0x804FAC: lea     ecx, [esi+4]
0x804FAF: push    ecx; lpAddend
0x804FB0: call    edi ; InterlockedDecrement
0x804FB2: test    eax, eax
0x804FB4: jnz     short loc_804FC4
0x804FB6: test    esi, esi
0x804FB8: jz      short loc_804FC4
0x804FBA: mov     edx, [esi]
0x804FBC: mov     eax, [edx]
0x804FBE: push    1
0x804FC0: mov     ecx, esi
0x804FC2: call    eax
0x804FC4: mov     esi, [ebp+94h]
0x804FCA: test    esi, esi
0x804FCC: mov     byte ptr [esp+24h+var_4], 3
0x804FD1: jz      short loc_804FEB
0x804FD3: lea     ecx, [esi+4]
0x804FD6: push    ecx; lpAddend
0x804FD7: call    edi ; InterlockedDecrement
0x804FD9: test    eax, eax
0x804FDB: jnz     short loc_804FEB
0x804FDD: test    esi, esi
0x804FDF: jz      short loc_804FEB
0x804FE1: mov     edx, [esi]
0x804FE3: mov     eax, [edx]
0x804FE5: push    1
0x804FE7: mov     ecx, esi
0x804FE9: call    eax
0x804FEB: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x804FF0: push    2; int
0x804FF2: push    4; unsigned int
0x804FF4: lea     ecx, [ebp+8Ch]
0x804FFA: push    ecx; void *
0x804FFB: mov     byte ptr [esp+34h+var_4], 2
0x805000: call    $LN21
0x805005: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x80500A: push    2; int
0x80500C: push    4; unsigned int
0x80500E: lea     eax, [ebp+84h]
0x805014: push    eax; void *
0x805015: mov     byte ptr [esp+34h+var_4], 1
0x80501A: call    $LN21
0x80501F: push    offset sub_4027D0; void (__thiscall *)(void *)
0x805024: push    2; int
0x805026: push    4; unsigned int
0x805028: lea     edx, [ebp+7Ch]
0x80502B: push    edx; void *
0x80502C: mov     byte ptr [esp+34h+var_4], 0
0x805031: call    $LN21
0x805036: mov     ecx, ebp; this
0x805038: mov     [esp+24h+var_4], 0FFFFFFFFh
0x805040: call    ??1BSShader@@UAE@XZ;
0x805045: mov     ecx, dword ptr [esp+24h+var_C]
0x805049: mov     large fs:0, ecx
0x805050: pop     ecx
0x805051: pop     edi
0x805052: pop     esi
0x805053: pop     ebp
0x805054: pop     ebx
0x805055: add     esp, 10h
0x805058: retn
0x9D0B40: mov     ecx, [ebp-10h]; this
0x9D0B43: jmp     ??1BSShader@@UAE@XZ;
0x9D0B48: push    offset sub_4027D0; void (__thiscall *)(void *)
0x9D0B4D: push    2; int
0x9D0B4F: push    4; unsigned int
0x9D0B51: mov     eax, [ebp-10h]
0x9D0B54: add     eax, 7Ch ; '|'
0x9D0B57: push    eax; void *
0x9D0B58: call    $LN21
0x9D0B5D: retn
0x9D0B5E: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D0B63: push    2; int
0x9D0B65: push    4; unsigned int
0x9D0B67: mov     eax, [ebp-10h]
0x9D0B6A: add     eax, 84h ; '„'
0x9D0B6F: push    eax; void *
0x9D0B70: call    $LN21
0x9D0B75: retn
0x9D0B76: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D0B7B: push    2; int
0x9D0B7D: push    4; unsigned int
0x9D0B7F: mov     eax, [ebp-10h]
0x9D0B82: add     eax, 8Ch ; 'Œ'
0x9D0B87: push    eax; void *
0x9D0B88: call    $LN21
0x9D0B8D: retn
0x9D0B8E: mov     ecx, [ebp-10h]
0x9D0B91: add     ecx, 94h ; '”'; slot
0x9D0B97: jmp     NiPointerSlot_Release
0x9D0B9C: mov     ecx, [ebp-10h]
0x9D0B9F: add     ecx, 98h ; '˜'; slot
0x9D0BA5: jmp     NiPointerSlot_Release
0x9D0BAA: mov     ecx, [ebp-10h]
0x9D0BAD: add     ecx, 9Ch ; 'œ'; slot
0x9D0BB3: jmp     NiPointerSlot_Release
0x9D0BB8: mov     edx, [esp+arg_4]
0x9D0BBC: lea     eax, [edx-14h]
0x9D0BBF: mov     ecx, [edx-18h]
0x9D0BC2: xor     ecx, eax
0x9D0BC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0BC9: mov     eax, offset stru_AF93E0
0x9D0BCE: jmp     ___CxxFrameHandler3
