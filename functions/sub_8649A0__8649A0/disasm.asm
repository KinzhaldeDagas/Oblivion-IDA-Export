0x8649A0: push    0FFFFFFFFh; MoonSugarEffect decode: ParallaxShader pooled-pass builder. Creates/refcounts 0x3C NiD3DPass entries in global table 0x00B47620, then calls vtable +0xC0 to populate pass stages/shaders.
0x8649A2: push    offset SEH_87AC50
0x8649A7: mov     eax, large fs:0
0x8649AD: push    eax
0x8649AE: sub     esp, 8
0x8649B1: push    ebx
0x8649B2: push    esi
0x8649B3: push    edi
0x8649B4: mov     eax, ds:0B30AACh
0x8649B9: xor     eax, esp
0x8649BB: push    eax
0x8649BC: lea     eax, [esp+24h+var_C]
0x8649C0: mov     large fs:0, eax
0x8649C6: mov     [esp+24h+var_10], ecx
0x8649CA: xor     edi, edi
0x8649CC: or      ebx, 0FFFFFFFFh
0x8649CF: nop
0x8649D0: lea     eax, [esp+24h+var_14]
0x8649D4: push    eax
0x8649D5: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x8649DA: add     esp, 4
0x8649DD: mov     esi, eax
0x8649DF: mov     ecx, dword ptr ds:unk_B47620[edi]
0x8649E5: cmp     ecx, [esi]
0x8649E7: mov     [esp+24h+var_4], 0
0x8649EF: jz      short loc_864A0F
0x8649F1: test    ecx, ecx
0x8649F3: jz      short loc_8649FF
0x8649F5: add     [ecx+60h], ebx
0x8649F8: jnz     short loc_8649FF
0x8649FA: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8649FF: mov     eax, [esi]
0x864A01: test    eax, eax
0x864A03: mov     dword ptr ds:unk_B47620[edi], eax
0x864A09: jz      short loc_864A0F
0x864A0B: add     dword ptr [eax+60h], 1
0x864A0F: mov     eax, [esp+24h+var_14]
0x864A13: test    eax, eax
0x864A15: mov     [esp+24h+var_4], ebx
0x864A19: jz      short loc_864A2D
0x864A1B: add     [eax+60h], ebx
0x864A1E: mov     ecx, eax
0x864A20: add     eax, 60h ; '`'
0x864A23: cmp     dword ptr [eax], 0
0x864A26: jnz     short loc_864A2D
0x864A28: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x864A2D: add     edi, 4
0x864A30: cmp     edi, 0F0h ; 'ð'
0x864A36: jb      short loc_8649D0
0x864A38: mov     ecx, [esp+24h+var_10]
0x864A3C: mov     edx, [ecx]
0x864A3E: mov     eax, [edx+0C0h]
0x864A44: call    eax
0x864A46: mov     al, 1
0x864A48: mov     ecx, [esp+24h+var_C]
0x864A4C: mov     large fs:0, ecx
0x864A53: pop     ecx
0x864A54: pop     edi
0x864A55: pop     esi
0x864A56: pop     ebx
0x864A57: add     esp, 14h
0x864A5A: retn
0x9D5850: lea     ecx, [ebp-14h]; void *
0x9D5853: jmp     sub_4027D0
0x9D5858: mov     edx, [esp+arg_4]
0x9D585C: lea     eax, [edx-14h]
0x9D585F: mov     ecx, [edx-18h]
0x9D5862: xor     ecx, eax
0x9D5864: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D5869: mov     eax, offset stru_AFD868
0x9D586E: jmp     ___CxxFrameHandler3
