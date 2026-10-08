0x805D90: push    0FFFFFFFFh
0x805D92: push    offset ??0GeometryDecalShader@@QAE@XZ_SEH
0x805D97: mov     eax, large fs:0
0x805D9D: push    eax
0x805D9E: push    ecx
0x805D9F: push    ebx
0x805DA0: push    ebp
0x805DA1: push    esi
0x805DA2: push    edi
0x805DA3: mov     eax, ds:0B30AACh
0x805DA8: xor     eax, esp
0x805DAA: push    eax
0x805DAB: lea     eax, [esp+24h+var_C]
0x805DAF: mov     large fs:0, eax
0x805DB5: mov     esi, ecx
0x805DB7: mov     [esp+24h+var_10], esi
0x805DBB: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x805DC0: push    offset sub_4027D0; a5
0x805DC5: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x805DCA: push    2; size
0x805DCC: push    4; a2
0x805DCE: lea     ebp, [esi+7Ch]
0x805DD1: xor     ebx, ebx
0x805DD3: push    ebp; a1
0x805DD4: mov     [esp+38h+var_4], ebx
0x805DD8: mov     dword ptr [esi], offset ??_7GeometryDecalShader@@6B@; const GeometryDecalShader::`vftable'
0x805DDE: call    ArrayConstructor
0x805DE3: push    offset NiPointerSlot_Release; a5
0x805DE8: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x805DED: push    2; size
0x805DEF: push    4; a2
0x805DF1: lea     eax, [esi+84h]
0x805DF7: push    eax; a1
0x805DF8: mov     byte ptr [esp+38h+var_4], 1
0x805DFD: call    ArrayConstructor
0x805E02: push    offset NiPointerSlot_Release; a5
0x805E07: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x805E0C: push    2; size
0x805E0E: push    4; a2
0x805E10: lea     ecx, [esi+8Ch]
0x805E16: push    ecx; a1
0x805E17: mov     byte ptr [esp+38h+var_4], 2
0x805E1C: call    ArrayConstructor
0x805E21: mov     [esi+94h], ebx
0x805E27: mov     [esi+98h], ebx
0x805E2D: mov     [esi+9Ch], ebx
0x805E33: mov     byte ptr [esi+20h], 1
0x805E37: mov     edi, [esi+94h]
0x805E3D: cmp     edi, ebx
0x805E3F: mov     byte ptr [esp+24h+var_4], 6
0x805E44: jz      short loc_805E68
0x805E46: lea     edx, [edi+4]
0x805E49: push    edx; lpAddend
0x805E4A: call    dword ptr ds:0A2807Ch
0x805E50: test    eax, eax
0x805E52: jnz     short loc_805E62
0x805E54: cmp     edi, ebx
0x805E56: jz      short loc_805E62
0x805E58: mov     eax, [edi]
0x805E5A: mov     edx, [eax]
0x805E5C: push    1
0x805E5E: mov     ecx, edi
0x805E60: call    edx
0x805E62: mov     [esi+94h], ebx
0x805E68: mov     edi, [esi+98h]
0x805E6E: cmp     edi, ebx
0x805E70: jz      short loc_805E94
0x805E72: lea     eax, [edi+4]
0x805E75: push    eax; lpAddend
0x805E76: call    dword ptr ds:0A2807Ch
0x805E7C: test    eax, eax
0x805E7E: jnz     short loc_805E8E
0x805E80: cmp     edi, ebx
0x805E82: jz      short loc_805E8E
0x805E84: mov     edx, [edi]
0x805E86: mov     eax, [edx]
0x805E88: push    1
0x805E8A: mov     ecx, edi
0x805E8C: call    eax
0x805E8E: mov     [esi+98h], ebx
0x805E94: mov     edi, [esi+9Ch]
0x805E9A: cmp     edi, ebx
0x805E9C: jz      short loc_805EC0
0x805E9E: lea     ecx, [edi+4]
0x805EA1: push    ecx; lpAddend
0x805EA2: call    dword ptr ds:0A2807Ch
0x805EA8: test    eax, eax
0x805EAA: jnz     short loc_805EBA
0x805EAC: cmp     edi, ebx
0x805EAE: jz      short loc_805EBA
0x805EB0: mov     edx, [edi]
0x805EB2: mov     eax, [edx]
0x805EB4: push    1
0x805EB6: mov     ecx, edi
0x805EB8: call    eax
0x805EBA: mov     [esi+9Ch], ebx
0x805EC0: mov     edi, ebp
0x805EC2: mov     ebp, 2
0x805EC7: mov     ecx, [edi]
0x805EC9: cmp     ecx, ebx
0x805ECB: jz      short loc_805EDA
0x805ECD: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x805ED1: jnz     short loc_805ED8
0x805ED3: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x805ED8: mov     [edi], ebx
0x805EDA: add     edi, 4
0x805EDD: sub     ebp, 1
0x805EE0: jnz     short loc_805EC7
0x805EE2: mov     eax, esi
0x805EE4: mov     ecx, dword ptr [esp+24h+var_C]
0x805EE8: mov     large fs:0, ecx
0x805EEF: pop     ecx
0x805EF0: pop     edi
0x805EF1: pop     esi
0x805EF2: pop     ebp
0x805EF3: pop     ebx
0x805EF4: add     esp, 10h
0x805EF7: retn
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
