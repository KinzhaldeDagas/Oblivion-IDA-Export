0x804790: push    0FFFFFFFFh; MoonSugarEffect decode: CopyShader ctor derives from BSImageSpaceShader, owns 2 vertex programs at +0x90, 3 pixel programs at +0x98, and mode/variant field +0xA4.
0x804792: push    offset ??0CopyShader@@QAE@XZ_SEH
0x804797: mov     eax, large fs:0
0x80479D: push    eax
0x80479E: sub     esp, 8
0x8047A1: push    ebx
0x8047A2: push    ebp
0x8047A3: push    esi
0x8047A4: push    edi
0x8047A5: mov     eax, ds:0B30AACh
0x8047AA: xor     eax, esp
0x8047AC: push    eax
0x8047AD: lea     eax, [esp+28h+var_C]
0x8047B1: mov     large fs:0, eax
0x8047B7: mov     esi, ecx
0x8047B9: mov     [esp+28h+var_10], esi
0x8047BD: call    ??0BSImageSpaceShader@@QAE@XZ; MoonSugarEffect decode: BSImageSpaceShader base ctor calls BSShader ctor, sets vtable, clears source texture +0x7C and scalar fields +0x80..+0x8C.
0x8047C2: push    offset NiPointerSlot_Release; a5
0x8047C7: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x8047CC: push    2; size
0x8047CE: push    4; a2
0x8047D0: lea     edi, [esi+90h]
0x8047D6: push    edi; a1
0x8047D7: mov     [esp+3Ch+var_4], 0
0x8047DF: mov     dword ptr [esi], offset ??_7CopyShader@@6B@; const CopyShader::`vftable'
0x8047E5: call    ArrayConstructor
0x8047EA: push    offset NiPointerSlot_Release; a5
0x8047EF: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x8047F4: push    3; size
0x8047F6: push    4; a2
0x8047F8: lea     ebx, [esi+98h]
0x8047FE: push    ebx; a1
0x8047FF: mov     byte ptr [esp+3Ch+var_4], 1
0x804804: call    ArrayConstructor
0x804809: mov     byte ptr [esp+28h+var_4], 2
0x80480E: mov     byte ptr [esi+20h], 1
0x804812: mov     [esp+28h+var_14], 2
0x80481A: lea     ebx, [ebx+0]
0x804820: mov     ebp, [edi]
0x804822: test    ebp, ebp
0x804824: jz      short loc_804849
0x804826: lea     eax, [ebp+4]
0x804829: push    eax; lpAddend
0x80482A: call    dword ptr ds:0A2807Ch
0x804830: test    eax, eax
0x804832: jnz     short loc_804843
0x804834: test    ebp, ebp
0x804836: jz      short loc_804843
0x804838: mov     edx, [ebp+0]
0x80483B: mov     eax, [edx]
0x80483D: push    1
0x80483F: mov     ecx, ebp
0x804841: call    eax
0x804843: mov     dword ptr [edi], 0
0x804849: add     edi, 4
0x80484C: sub     [esp+28h+var_14], 1
0x804851: jnz     short loc_804820
0x804853: mov     ebp, ebx
0x804855: mov     ebx, 3
0x80485A: lea     ebx, [ebx+0]
0x804860: mov     edi, [ebp+0]
0x804863: test    edi, edi
0x804865: jz      short loc_80488A
0x804867: lea     ecx, [edi+4]
0x80486A: push    ecx; lpAddend
0x80486B: call    dword ptr ds:0A2807Ch
0x804871: test    eax, eax
0x804873: jnz     short loc_804883
0x804875: test    edi, edi
0x804877: jz      short loc_804883
0x804879: mov     edx, [edi]
0x80487B: mov     eax, [edx]
0x80487D: push    1
0x80487F: mov     ecx, edi
0x804881: call    eax
0x804883: mov     dword ptr [ebp+0], 0
0x80488A: add     ebp, 4
0x80488D: sub     ebx, 1
0x804890: jnz     short loc_804860
0x804892: mov     dword ptr [esi+0A4h], 0
0x80489C: mov     eax, esi
0x80489E: mov     ecx, dword ptr [esp+28h+var_C]
0x8048A2: mov     large fs:0, ecx
0x8048A9: pop     ecx
0x8048AA: pop     edi
0x8048AB: pop     esi
0x8048AC: pop     ebp
0x8048AD: pop     ebx
0x8048AE: add     esp, 14h
0x8048B1: retn
0x9D0A30: mov     ecx, [ebp-10h]; this
0x9D0A33: jmp     ??1BSImageSpaceShader@@UAE@XZ; MoonSugarEffect decode: BSImageSpaceShader dtor releases source BSRenderedTexture at +0x7C, clears +0x80..+0x8C, then calls BSShader dtor.
0x9D0A38: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D0A3D: push    2; int
0x9D0A3F: push    4; unsigned int
0x9D0A41: mov     eax, [ebp-10h]
0x9D0A44: add     eax, 90h
0x9D0A49: push    eax; void *
0x9D0A4A: call    $LN21
0x9D0A4F: retn
0x9D0A50: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D0A55: push    3; int
0x9D0A57: push    4; unsigned int
0x9D0A59: mov     eax, [ebp-10h]
0x9D0A5C: add     eax, 98h ; '˜'
0x9D0A61: push    eax; void *
0x9D0A62: call    $LN21
0x9D0A67: retn
0x9D0A68: mov     edx, [esp+arg_4]
0x9D0A6C: lea     eax, [edx-18h]
0x9D0A6F: mov     ecx, [edx-1Ch]
0x9D0A72: xor     ecx, eax
0x9D0A74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0A79: mov     eax, offset stru_AF9308
0x9D0A7E: jmp     ___CxxFrameHandler3
