0x7F5780: push    0FFFFFFFFh; MoonSugarEffect decode: NighteyeShader ctor owns one vertex program, one pixel program, one pass, and uses base source texture +0x7C.
0x7F5782: push    offset ??0NighteyeShader@@QAE@XZ_SEH
0x7F5787: mov     eax, large fs:0
0x7F578D: push    eax
0x7F578E: push    ecx
0x7F578F: push    ebx
0x7F5790: push    ebp
0x7F5791: push    esi
0x7F5792: push    edi
0x7F5793: mov     eax, ds:0B30AACh
0x7F5798: xor     eax, esp
0x7F579A: push    eax
0x7F579B: lea     eax, [esp+24h+var_C]
0x7F579F: mov     large fs:0, eax
0x7F57A5: mov     esi, ecx
0x7F57A7: mov     [esp+24h+var_10], esi
0x7F57AB: call    ??0BSImageSpaceShader@@QAE@XZ; MoonSugarEffect decode: BSImageSpaceShader base ctor calls BSShader ctor, sets vtable, clears source texture +0x7C and scalar fields +0x80..+0x8C.
0x7F57B0: push    offset NiPointerSlot_Release; a5
0x7F57B5: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F57BA: push    1; size
0x7F57BC: push    4; a2
0x7F57BE: lea     edi, [esi+90h]
0x7F57C4: xor     ebp, ebp
0x7F57C6: push    edi; a1
0x7F57C7: mov     [esp+38h+var_4], ebp
0x7F57CB: mov     dword ptr [esi], offset ??_7NighteyeShader@@6B@; const NighteyeShader::`vftable'
0x7F57D1: call    ArrayConstructor
0x7F57D6: push    offset NiPointerSlot_Release; a5
0x7F57DB: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F57E0: push    1; size
0x7F57E2: push    4; a2
0x7F57E4: lea     ebx, [esi+94h]
0x7F57EA: push    ebx; a1
0x7F57EB: mov     byte ptr [esp+38h+var_4], 1
0x7F57F0: call    ArrayConstructor
0x7F57F5: push    offset sub_4027D0; a5
0x7F57FA: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F57FF: push    1; size
0x7F5801: lea     eax, [esi+9Ch]
0x7F5807: push    4; a2
0x7F5809: push    eax; a1
0x7F580A: mov     byte ptr [esp+38h+var_4], 2
0x7F580F: call    ArrayConstructor
0x7F5814: mov     [esi+98h], ebp
0x7F581A: mov     ebp, [edi]
0x7F581C: test    ebp, ebp
0x7F581E: mov     byte ptr [esp+24h+var_4], 3
0x7F5823: jz      short loc_7F5848
0x7F5825: lea     eax, [ebp+4]
0x7F5828: push    eax; lpAddend
0x7F5829: call    dword ptr ds:0A2807Ch
0x7F582F: test    eax, eax
0x7F5831: jnz     short loc_7F5842
0x7F5833: test    ebp, ebp
0x7F5835: jz      short loc_7F5842
0x7F5837: mov     edx, [ebp+0]
0x7F583A: mov     eax, [edx]
0x7F583C: push    1
0x7F583E: mov     ecx, ebp
0x7F5840: call    eax
0x7F5842: mov     dword ptr [edi], 0
0x7F5848: mov     edi, [ebx]
0x7F584A: test    edi, edi
0x7F584C: jz      short loc_7F5870
0x7F584E: lea     ecx, [edi+4]
0x7F5851: push    ecx; lpAddend
0x7F5852: call    dword ptr ds:0A2807Ch
0x7F5858: test    eax, eax
0x7F585A: jnz     short loc_7F586A
0x7F585C: test    edi, edi
0x7F585E: jz      short loc_7F586A
0x7F5860: mov     edx, [edi]
0x7F5862: mov     eax, [edx]
0x7F5864: push    1
0x7F5866: mov     ecx, edi
0x7F5868: call    eax
0x7F586A: mov     dword ptr [ebx], 0
0x7F5870: mov     ecx, [esi+9Ch]
0x7F5876: test    ecx, ecx
0x7F5878: jz      short loc_7F588F
0x7F587A: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F587E: jnz     short loc_7F5885
0x7F5880: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7F5885: mov     dword ptr [esi+9Ch], 0
0x7F588F: mov     eax, esi
0x7F5891: mov     byte ptr [esi+20h], 1
0x7F5895: mov     ecx, dword ptr [esp+24h+var_C]
0x7F5899: mov     large fs:0, ecx
0x7F58A0: pop     ecx
0x7F58A1: pop     edi
0x7F58A2: pop     esi
0x7F58A3: pop     ebp
0x7F58A4: pop     ebx
0x7F58A5: add     esp, 10h
0x7F58A8: retn
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
