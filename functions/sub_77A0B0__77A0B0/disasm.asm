0x77A0B0: push    esi; MoonSugarEffect decode: NiD3DShader vtable +0x48 pass-loop begin. Selects pass 0, refcounts CurrentPass, and returns pass count.
0x77A0B1: mov     esi, ecx
0x77A0B3: mov     dword ptr [esi+34h], 0; Begin pass loop at index zero and synchronize CurrentPass from Passes[0]. ResetPassQueue leaves both null on selector failure.
0x77A0BA: mov     ecx, [esi+3Ch]; this
0x77A0BD: push    edi
0x77A0BE: mov     edi, [esi+44h]
0x77A0C1: cmp     ecx, [edi]
0x77A0C3: jz      short loc_77A0E1
0x77A0C5: test    ecx, ecx
0x77A0C7: jz      short loc_77A0D4
0x77A0C9: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x77A0CD: jnz     short loc_77A0D4
0x77A0CF: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x77A0D4: mov     eax, [edi]
0x77A0D6: test    eax, eax
0x77A0D8: mov     [esi+3Ch], eax
0x77A0DB: jz      short loc_77A0E1
0x77A0DD: add     dword ptr [eax+60h], 1
0x77A0E1: mov     eax, [esi+38h]
0x77A0E4: pop     edi; Return PassCount. Zero is the rigid and skinned renderer guard that bypasses all pass work and D3D draw calls.
0x77A0E5: pop     esi
0x77A0E6: retn
