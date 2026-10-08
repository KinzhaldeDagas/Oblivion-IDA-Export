0x7F4E50: push    0FFFFFFFFh
0x7F4E52: push    offset ??0NighteyeShader@@QAE@XZ_SEH
0x7F4E57: mov     eax, large fs:0
0x7F4E5D: push    eax
0x7F4E5E: push    ecx
0x7F4E5F: push    ebx
0x7F4E60: push    ebp
0x7F4E61: push    esi
0x7F4E62: push    edi
0x7F4E63: mov     eax, ds:0B30AACh
0x7F4E68: xor     eax, esp
0x7F4E6A: push    eax
0x7F4E6B: lea     eax, [esp+24h+var_C]
0x7F4E6F: mov     large fs:0, eax
0x7F4E75: mov     esi, ecx
0x7F4E77: mov     [esp+24h+var_10], esi
0x7F4E7B: mov     dword ptr [esi], offset ??_7NighteyeShader@@6B@; const NighteyeShader::`vftable'
0x7F4E81: mov     edi, [esi+90h]
0x7F4E87: test    edi, edi
0x7F4E89: lea     ebp, [esi+90h]
0x7F4E8F: mov     [esp+24h+var_4], 3
0x7F4E97: jz      short loc_7F4EBC
0x7F4E99: lea     eax, [edi+4]
0x7F4E9C: push    eax; lpAddend
0x7F4E9D: call    dword ptr ds:0A2807Ch
0x7F4EA3: test    eax, eax
0x7F4EA5: jnz     short loc_7F4EB5
0x7F4EA7: test    edi, edi
0x7F4EA9: jz      short loc_7F4EB5
0x7F4EAB: mov     edx, [edi]
0x7F4EAD: mov     eax, [edx]
0x7F4EAF: push    1
0x7F4EB1: mov     ecx, edi
0x7F4EB3: call    eax
0x7F4EB5: mov     dword ptr [ebp+0], 0
0x7F4EBC: mov     edi, [esi+94h]
0x7F4EC2: test    edi, edi
0x7F4EC4: lea     ebx, [esi+94h]
0x7F4ECA: jz      short loc_7F4EEE
0x7F4ECC: lea     ecx, [edi+4]
0x7F4ECF: push    ecx; lpAddend
0x7F4ED0: call    dword ptr ds:0A2807Ch
0x7F4ED6: test    eax, eax
0x7F4ED8: jnz     short loc_7F4EE8
0x7F4EDA: test    edi, edi
0x7F4EDC: jz      short loc_7F4EE8
0x7F4EDE: mov     edx, [edi]
0x7F4EE0: mov     eax, [edx]
0x7F4EE2: push    1
0x7F4EE4: mov     ecx, edi
0x7F4EE6: call    eax
0x7F4EE8: mov     dword ptr [ebx], 0
0x7F4EEE: mov     ecx, [esi+9Ch]
0x7F4EF4: test    ecx, ecx
0x7F4EF6: lea     edi, [esi+9Ch]
0x7F4EFC: jz      short loc_7F4F0F
0x7F4EFE: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F4F02: jnz     short loc_7F4F09
0x7F4F04: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7F4F09: mov     dword ptr [edi], 0
0x7F4F0F: push    offset sub_4027D0; void (__thiscall *)(void *)
0x7F4F14: push    1; int
0x7F4F16: push    4; unsigned int
0x7F4F18: push    edi; void *
0x7F4F19: mov     byte ptr [esp+34h+var_4], 2
0x7F4F1E: call    $LN21
0x7F4F23: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7F4F28: push    1; int
0x7F4F2A: push    4; unsigned int
0x7F4F2C: push    ebx; void *
0x7F4F2D: mov     byte ptr [esp+34h+var_4], 1
0x7F4F32: call    $LN21
0x7F4F37: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7F4F3C: push    1; int
0x7F4F3E: push    4; unsigned int
0x7F4F40: push    ebp; void *
0x7F4F41: mov     byte ptr [esp+34h+var_4], 0
0x7F4F46: call    $LN21
0x7F4F4B: mov     ecx, esi; this
0x7F4F4D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F4F55: call    ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x7F4F5A: mov     ecx, [esp+24h+var_C]
0x7F4F5E: mov     large fs:0, ecx
0x7F4F65: pop     ecx
0x7F4F66: pop     edi
0x7F4F67: pop     esi
0x7F4F68: pop     ebp
0x7F4F69: pop     ebx
0x7F4F6A: add     esp, 10h
0x7F4F6D: retn
0x9D0040: mov     ecx, [ebp-10h]; this
0x9D0043: jmp     ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x9D0048: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D004D: push    1; int
0x9D004F: push    4; unsigned int
0x9D0051: mov     eax, [ebp-10h]
0x9D0054: add     eax, 90h
0x9D0059: push    eax; void *
0x9D005A: call    $LN21
0x9D005F: retn
0x9D0060: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D0065: push    1; int
0x9D0067: push    4; unsigned int
0x9D0069: mov     eax, [ebp-10h]
0x9D006C: add     eax, 94h ; '”'
0x9D0071: push    eax; void *
0x9D0072: call    $LN21
0x9D0077: retn
0x9D0078: push    offset sub_4027D0; void (__thiscall *)(void *)
0x9D007D: push    1; int
0x9D007F: push    4; unsigned int
0x9D0081: mov     eax, [ebp-10h]
0x9D0084: add     eax, 9Ch ; 'œ'
0x9D0089: push    eax; void *
0x9D008A: call    $LN21
0x9D008F: retn
0x9D0090: mov     edx, [esp+arg_4]
0x9D0094: lea     eax, [edx-14h]
0x9D0097: mov     ecx, [edx-18h]
0x9D009A: xor     ecx, eax
0x9D009C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D00A1: mov     eax, offset stru_AF8B0C
0x9D00A6: jmp     ___CxxFrameHandler3
