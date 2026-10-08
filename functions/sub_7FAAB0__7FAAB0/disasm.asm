0x7FAAB0: push    esi; Reloads Oblivion Lighting30Shader by invoking the shared vertex/pixel loader and then rebuilding/presetting the SM3 stage configuration.
0x7FAAB1: mov     esi, ecx
0x7FAAB3: mov     eax, [esi]
0x7FAAB5: mov     edx, [eax+0A8h]
0x7FAABB: call    edx
0x7FAABD: mov     ecx, esi
0x7FAABF: pop     esi
0x7FAAC0: jmp     Lighting30Shader_InitializePassPool; Oblivion Lighting30 pass-pool initializer. SimpleShadow pool rows 36..39/selectors 0x14E..0x151 use SM3013..SM3016 with SM3023, seven stages, Z test LESS_EQUAL with no Z write, alpha blend DESTCOLOR/ZERO, stencil disabled, and six clip planes enabled. Mode-5 pool rows 42/43/selectors 0x154/0x155 use SM3018/SM3019 with SM3026, one BaseMap stage, alpha blending and stencil disabled, and Z test/write LESS_EQUAL. Alpha-test state is supplied by Lighting30 geometry-state preparation, not these pass groups.
