0x7FEC30: push    0FFFFFFFFh; Creates the 54-entry Oblivion Lighting30Shader pooled-pass table, preserving refcounts, then presets the SM3 stages.
0x7FEC32: push    offset SEH_87AC50
0x7FEC37: mov     eax, large fs:0
0x7FEC3D: push    eax
0x7FEC3E: sub     esp, 8
0x7FEC41: push    ebx
0x7FEC42: push    esi
0x7FEC43: push    edi
0x7FEC44: mov     eax, ds:0B30AACh
0x7FEC49: xor     eax, esp
0x7FEC4B: push    eax
0x7FEC4C: lea     eax, [esp+24h+var_C]
0x7FEC50: mov     large fs:0, eax
0x7FEC56: mov     [esp+24h+var_10], ecx
0x7FEC5A: xor     edi, edi
0x7FEC5C: or      ebx, 0FFFFFFFFh
0x7FEC5F: nop
0x7FEC60: lea     eax, [esp+24h+var_14]
0x7FEC64: push    eax
0x7FEC65: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x7FEC6A: add     esp, 4
0x7FEC6D: mov     esi, eax
0x7FEC6F: mov     ecx, dword ptr ds:unk_B473D0[edi]
0x7FEC75: cmp     ecx, [esi]
0x7FEC77: mov     [esp+24h+var_4], 0
0x7FEC7F: jz      short loc_7FEC9F
0x7FEC81: test    ecx, ecx
0x7FEC83: jz      short loc_7FEC8F
0x7FEC85: add     [ecx+60h], ebx
0x7FEC88: jnz     short loc_7FEC8F
0x7FEC8A: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7FEC8F: mov     eax, [esi]
0x7FEC91: test    eax, eax
0x7FEC93: mov     dword ptr ds:unk_B473D0[edi], eax
0x7FEC99: jz      short loc_7FEC9F
0x7FEC9B: add     dword ptr [eax+60h], 1
0x7FEC9F: mov     eax, [esp+24h+var_14]
0x7FECA3: test    eax, eax
0x7FECA5: mov     [esp+24h+var_4], ebx
0x7FECA9: jz      short loc_7FECBD
0x7FECAB: add     [eax+60h], ebx
0x7FECAE: mov     ecx, eax
0x7FECB0: add     eax, 60h ; '`'
0x7FECB3: cmp     dword ptr [eax], 0
0x7FECB6: jnz     short loc_7FECBD
0x7FECB8: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7FECBD: add     edi, 4
0x7FECC0: cmp     edi, 0D8h ; 'Ø'
0x7FECC6: jb      short loc_7FEC60
0x7FECC8: mov     ecx, [esp+24h+var_10]
0x7FECCC: call    Lighting30Shader_InitializePassPool; Oblivion Lighting30 pass-pool initializer. SimpleShadow pool rows 36..39/selectors 0x14E..0x151 use SM3013..SM3016 with SM3023, seven stages, Z test LESS_EQUAL with no Z write, alpha blend DESTCOLOR/ZERO, stencil disabled, and six clip planes enabled. Mode-5 pool rows 42/43/selectors 0x154/0x155 use SM3018/SM3019 with SM3026, one BaseMap stage, alpha blending and stencil disabled, and Z test/write LESS_EQUAL. Alpha-test state is supplied by Lighting30 geometry-state preparation, not these pass groups.
0x7FECD1: mov     al, 1
0x7FECD3: mov     ecx, [esp+24h+var_C]
0x7FECD7: mov     large fs:0, ecx
0x7FECDE: pop     ecx
0x7FECDF: pop     edi
0x7FECE0: pop     esi
0x7FECE1: pop     ebx
0x7FECE2: add     esp, 14h
0x7FECE5: retn
0x9D5850: lea     ecx, [ebp-14h]; void *
0x9D5853: jmp     sub_4027D0
0x9D5858: mov     edx, [esp+arg_4]
0x9D585C: lea     eax, [edx-14h]
0x9D585F: mov     ecx, [edx-18h]
0x9D5862: xor     ecx, eax
0x9D5864: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D5869: mov     eax, offset stru_AFD868
0x9D586E: jmp     ___CxxFrameHandler3
