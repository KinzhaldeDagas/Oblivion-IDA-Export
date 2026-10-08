0x803B80: push    0FFFFFFFFh; MoonSugarEffect decode: CopyShader dtor releases program arrays, destructs array slots, then calls BSImageSpaceShader dtor.
0x803B82: push    offset ??1CopyShader@@UAE@XZ_SEH
0x803B87: mov     eax, large fs:0
0x803B8D: push    eax
0x803B8E: push    ecx
0x803B8F: push    ebx
0x803B90: push    ebp
0x803B91: push    esi
0x803B92: push    edi
0x803B93: mov     eax, ds:0B30AACh
0x803B98: xor     eax, esp
0x803B9A: push    eax
0x803B9B: lea     eax, [esp+24h+var_C]
0x803B9F: mov     large fs:0, eax
0x803BA5: mov     ebx, ecx
0x803BA7: mov     [esp+24h+var_10], ebx
0x803BAB: mov     dword ptr [ebx], offset ??_7CopyShader@@6B@; const CopyShader::`vftable'
0x803BB1: mov     [esp+24h+var_4], 2
0x803BB9: lea     edi, [ebx+90h]
0x803BBF: mov     ebp, 3
0x803BC4: mov     esi, [edi]
0x803BC6: test    esi, esi
0x803BC8: jz      short loc_803BEC
0x803BCA: lea     eax, [esi+4]
0x803BCD: push    eax; lpAddend
0x803BCE: call    dword ptr ds:0A2807Ch
0x803BD4: test    eax, eax
0x803BD6: jnz     short loc_803BE6
0x803BD8: test    esi, esi
0x803BDA: jz      short loc_803BE6
0x803BDC: mov     edx, [esi]
0x803BDE: mov     eax, [edx]
0x803BE0: push    1
0x803BE2: mov     ecx, esi
0x803BE4: call    eax
0x803BE6: mov     dword ptr [edi], 0
0x803BEC: add     edi, 4
0x803BEF: sub     ebp, 1
0x803BF2: jnz     short loc_803BC4
0x803BF4: add     ebx, 98h ; '˜'
0x803BFA: mov     edi, ebx
0x803BFC: mov     ebp, 3
0x803C01: mov     esi, [edi]
0x803C03: test    esi, esi
0x803C05: jz      short loc_803C29
0x803C07: lea     ecx, [esi+4]
0x803C0A: push    ecx; lpAddend
0x803C0B: call    dword ptr ds:0A2807Ch
0x803C11: test    eax, eax
0x803C13: jnz     short loc_803C23
0x803C15: test    esi, esi
0x803C17: jz      short loc_803C23
0x803C19: mov     edx, [esi]
0x803C1B: mov     eax, [edx]
0x803C1D: push    1
0x803C1F: mov     ecx, esi
0x803C21: call    eax
0x803C23: mov     dword ptr [edi], 0
0x803C29: add     edi, 4
0x803C2C: sub     ebp, 1
0x803C2F: jnz     short loc_803C01
0x803C31: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x803C36: push    3; int
0x803C38: push    4; unsigned int
0x803C3A: push    ebx; void *
0x803C3B: mov     byte ptr [esp+34h+var_4], 1
0x803C40: call    $LN21
0x803C45: mov     eax, [esp+24h+var_10]
0x803C49: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x803C4E: push    2; int
0x803C50: push    4; unsigned int
0x803C52: add     eax, 90h
0x803C57: push    eax; void *
0x803C58: mov     byte ptr [esp+34h+var_4], 0
0x803C5D: call    $LN21
0x803C62: mov     ecx, [esp+24h+var_10]; this
0x803C66: mov     [esp+24h+var_4], 0FFFFFFFFh
0x803C6E: call    ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x803C73: mov     ecx, [esp+24h+var_C]
0x803C77: mov     large fs:0, ecx
0x803C7E: pop     ecx
0x803C7F: pop     edi
0x803C80: pop     esi
0x803C81: pop     ebp
0x803C82: pop     ebx
0x803C83: add     esp, 10h
0x803C86: retn
0x9D09A0: mov     ecx, [ebp-10h]; this
0x9D09A3: jmp     ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x9D09A8: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D09AD: push    2; int
0x9D09AF: push    4; unsigned int
0x9D09B1: mov     eax, [ebp-10h]
0x9D09B4: add     eax, 90h
0x9D09B9: push    eax; void *
0x9D09BA: call    $LN21
0x9D09BF: retn
0x9D09C0: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D09C5: push    3; int
0x9D09C7: push    4; unsigned int
0x9D09C9: mov     eax, [ebp-10h]
0x9D09CC: add     eax, 98h ; '˜'
0x9D09D1: push    eax; void *
0x9D09D2: call    $LN21
0x9D09D7: retn
0x9D09D8: mov     edx, [esp+arg_4]
0x9D09DC: lea     eax, [edx-14h]
0x9D09DF: mov     ecx, [edx-18h]
0x9D09E2: xor     ecx, eax
0x9D09E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D09E9: mov     eax, offset stru_AF9298
0x9D09EE: jmp     ___CxxFrameHandler3
