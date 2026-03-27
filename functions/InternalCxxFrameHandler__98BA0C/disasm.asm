0x98BA0C: push    ebp
0x98BA0D: mov     ebp, esp
0x98BA0F: push    ebx
0x98BA10: push    esi
0x98BA11: push    edi
0x98BA12: call    __getptd
0x98BA17: cmp     dword ptr [eax+20Ch], 0
0x98BA1E: mov     eax, [ebp+arg_10]
0x98BA21: mov     ecx, [ebp+arg_0]
0x98BA24: mov     edi, 0E06D7363h
0x98BA29: mov     esi, 1FFFFFFFh
0x98BA2E: mov     ebx, 19930522h
0x98BA33: jnz     short loc_98BA55
0x98BA35: mov     edx, [ecx]
0x98BA37: cmp     edx, edi
0x98BA39: jz      short loc_98BA55
0x98BA3B: cmp     edx, 80000026h
0x98BA41: jz      short loc_98BA55
0x98BA43: mov     edx, [eax]
0x98BA45: and     edx, esi
0x98BA47: cmp     edx, ebx
0x98BA49: jb      short loc_98BA55
0x98BA4B: test    byte ptr [eax+20h], 1
0x98BA4F: jnz     loc_98BAE8
0x98BA55: test    byte ptr [ecx+4], 66h
0x98BA59: jz      short loc_98BA7E
0x98BA5B: cmp     dword ptr [eax+4], 0
0x98BA5F: jz      loc_98BAE8
0x98BA65: cmp     [ebp+arg_14], 0
0x98BA69: jnz     short loc_98BAE8
0x98BA6B: push    0FFFFFFFFh
0x98BA6D: push    eax
0x98BA6E: push    [ebp+arg_C]
0x98BA71: push    [ebp+arg_4]
0x98BA74: call    ___FrameUnwindToState
0x98BA79: add     esp, 10h
0x98BA7C: jmp     short loc_98BAE8
0x98BA7E: cmp     dword ptr [eax+0Ch], 0
0x98BA82: jnz     short loc_98BA96
0x98BA84: mov     edx, [eax]
0x98BA86: and     edx, esi
0x98BA88: cmp     edx, 19930521h
0x98BA8E: jb      short loc_98BAE8
0x98BA90: cmp     dword ptr [eax+1Ch], 0
0x98BA94: jz      short loc_98BAE8
0x98BA96: cmp     [ecx], edi
0x98BA98: jnz     short loc_98BACC
0x98BA9A: cmp     dword ptr [ecx+10h], 3
0x98BA9E: jb      short loc_98BACC
0x98BAA0: cmp     [ecx+14h], ebx
0x98BAA3: jbe     short loc_98BACC
0x98BAA5: mov     edx, [ecx+1Ch]
0x98BAA8: mov     edx, [edx+8]
0x98BAAB: test    edx, edx
0x98BAAD: jz      short loc_98BACC
0x98BAAF: movzx   esi, byte ptr [ebp+arg_1C]
0x98BAB3: push    esi
0x98BAB4: push    [ebp+arg_18]
0x98BAB7: push    [ebp+arg_14]
0x98BABA: push    eax
0x98BABB: push    [ebp+arg_C]
0x98BABE: push    [ebp+arg_8]
0x98BAC1: push    [ebp+arg_4]
0x98BAC4: push    ecx
0x98BAC5: call    edx
0x98BAC7: add     esp, 20h
0x98BACA: jmp     short loc_98BAEB
0x98BACC: push    [ebp+arg_18]
0x98BACF: push    [ebp+arg_14]
0x98BAD2: push    [ebp+arg_1C]
0x98BAD5: push    eax
0x98BAD6: push    [ebp+arg_C]
0x98BAD9: push    [ebp+arg_8]
0x98BADC: push    [ebp+arg_4]
0x98BADF: push    ecx
0x98BAE0: call    unknown_libname_83
0x98BAE5: add     esp, 20h
0x98BAE8: xor     eax, eax
0x98BAEA: inc     eax
0x98BAEB: pop     edi
0x98BAEC: pop     esi
0x98BAED: pop     ebx
0x98BAEE: pop     ebp
0x98BAEF: retn
