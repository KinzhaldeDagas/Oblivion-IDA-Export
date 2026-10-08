0x7EB110: push    0FFFFFFFFh
0x7EB112: push    offset ??1GethitShader@@UAE@XZ_SEH
0x7EB117: mov     eax, large fs:0
0x7EB11D: push    eax
0x7EB11E: push    ecx
0x7EB11F: push    ebx
0x7EB120: push    ebp
0x7EB121: push    esi
0x7EB122: push    edi
0x7EB123: mov     eax, ds:0B30AACh
0x7EB128: xor     eax, esp
0x7EB12A: push    eax
0x7EB12B: lea     eax, [esp+24h+var_C]
0x7EB12F: mov     large fs:0, eax
0x7EB135: mov     ebp, ecx
0x7EB137: mov     [esp+24h+var_10], ebp
0x7EB13B: mov     dword ptr [ebp+0], offset ??_7GethitShader@@6B@; const GethitShader::`vftable'
0x7EB142: mov     [esp+24h+var_4], 4
0x7EB14A: lea     edi, [ebp+0A0h]
0x7EB150: mov     ebx, 3
0x7EB155: mov     esi, [edi-0Ch]
0x7EB158: test    esi, esi
0x7EB15A: jz      short loc_7EB17F
0x7EB15C: lea     eax, [esi+4]
0x7EB15F: push    eax; lpAddend
0x7EB160: call    dword ptr ds:0A2807Ch
0x7EB166: test    eax, eax
0x7EB168: jnz     short loc_7EB178
0x7EB16A: test    esi, esi
0x7EB16C: jz      short loc_7EB178
0x7EB16E: mov     edx, [esi]
0x7EB170: mov     eax, [edx]
0x7EB172: push    1
0x7EB174: mov     ecx, esi
0x7EB176: call    eax
0x7EB178: mov     dword ptr [edi-0Ch], 0
0x7EB17F: mov     esi, [edi]
0x7EB181: test    esi, esi
0x7EB183: jz      short loc_7EB1A7
0x7EB185: lea     ecx, [esi+4]
0x7EB188: push    ecx; lpAddend
0x7EB189: call    dword ptr ds:0A2807Ch
0x7EB18F: test    eax, eax
0x7EB191: jnz     short loc_7EB1A1
0x7EB193: test    esi, esi
0x7EB195: jz      short loc_7EB1A1
0x7EB197: mov     edx, [esi]
0x7EB199: mov     eax, [edx]
0x7EB19B: push    1
0x7EB19D: mov     ecx, esi
0x7EB19F: call    eax
0x7EB1A1: mov     dword ptr [edi], 0
0x7EB1A7: add     edi, 4
0x7EB1AA: sub     ebx, 1
0x7EB1AD: jnz     short loc_7EB155
0x7EB1AF: mov     ecx, [ebp+0B0h]
0x7EB1B5: or      esi, 0FFFFFFFFh
0x7EB1B8: test    ecx, ecx
0x7EB1BA: mov     byte ptr [esp+24h+var_4], 3
0x7EB1BF: jz      short loc_7EB1CB
0x7EB1C1: add     [ecx+60h], esi
0x7EB1C4: jnz     short loc_7EB1CB
0x7EB1C6: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7EB1CB: mov     ecx, [ebp+0ACh]
0x7EB1D1: test    ecx, ecx
0x7EB1D3: mov     byte ptr [esp+24h+var_4], 2
0x7EB1D8: jz      short loc_7EB1E4
0x7EB1DA: add     [ecx+60h], esi
0x7EB1DD: jnz     short loc_7EB1E4
0x7EB1DF: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7EB1E4: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7EB1E9: push    3; int
0x7EB1EB: push    4; unsigned int
0x7EB1ED: lea     eax, [ebp+0A0h]
0x7EB1F3: push    eax; void *
0x7EB1F4: mov     byte ptr [esp+34h+var_4], 1
0x7EB1F9: call    $LN21
0x7EB1FE: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7EB203: push    3; int
0x7EB205: push    4; unsigned int
0x7EB207: lea     ecx, [ebp+94h]
0x7EB20D: push    ecx; void *
0x7EB20E: mov     byte ptr [esp+34h+var_4], 0
0x7EB213: call    $LN21
0x7EB218: mov     ecx, ebp; this
0x7EB21A: mov     [esp+24h+var_4], esi
0x7EB21E: call    ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x7EB223: mov     ecx, [esp+24h+var_C]
0x7EB227: mov     large fs:0, ecx
0x7EB22E: pop     ecx
0x7EB22F: pop     edi
0x7EB230: pop     esi
0x7EB231: pop     ebp
0x7EB232: pop     ebx
0x7EB233: add     esp, 10h
0x7EB236: retn
0x9CFA40: mov     ecx, [ebp-10h]; this
0x9CFA43: jmp     ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x9CFA48: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9CFA4D: push    3; int
0x9CFA4F: push    4; unsigned int
0x9CFA51: mov     eax, [ebp-10h]
0x9CFA54: add     eax, 94h ; '”'
0x9CFA59: push    eax; void *
0x9CFA5A: call    $LN21
0x9CFA5F: retn
0x9CFA60: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9CFA65: push    3; int
0x9CFA67: push    4; unsigned int
0x9CFA69: mov     eax, [ebp-10h]
0x9CFA6C: add     eax, 0A0h ; ' '
0x9CFA71: push    eax; void *
0x9CFA72: call    $LN21
0x9CFA77: retn
0x9CFA78: mov     ecx, [ebp-10h]
0x9CFA7B: add     ecx, 0ACh ; '¬'; void *
0x9CFA81: jmp     sub_4027D0
0x9CFA86: mov     ecx, [ebp-10h]
0x9CFA89: add     ecx, 0B0h ; '°'; void *
0x9CFA8F: jmp     sub_4027D0
0x9CFA94: mov     edx, [esp+arg_4]
0x9CFA98: lea     eax, [edx-14h]
0x9CFA9B: mov     ecx, [edx-18h]
0x9CFA9E: xor     ecx, eax
0x9CFAA0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFAA5: mov     eax, offset stru_AF85D0
0x9CFAAA: jmp     ___CxxFrameHandler3
