0x7B84E0: push    esi; MoonSugarEffect decode: walks ShaderDefinition cache B42EC0..B42F30; for shaders with type != -1 calls vtable +0x90 to detach pass texture-stage refs before texture-manager rebuild. Does not walk arbitrary plugin-owned shader wrappers or call vertex wrapper +0x5C.
0x7B84E1: mov     esi, (offset OB_RendererGlobalState_010201A0.pad_00D+1Ah)
0x7B84E6: mov     eax, [esi]
0x7B84E8: test    eax, eax
0x7B84EA: jz      short loc_7B8516
0x7B84EC: mov     ecx, [eax+4]
0x7B84EF: test    ecx, ecx
0x7B84F1: jz      short loc_7B8516
0x7B84F3: mov     eax, [ecx]
0x7B84F5: mov     edx, [eax+1Ch]
0x7B84F8: call    edx
0x7B84FA: cmp     eax, 0FFFFFFFFh
0x7B84FD: jnz     short loc_7B8503
0x7B84FF: xor     ecx, ecx
0x7B8501: jmp     short loc_7B8508
0x7B8503: mov     eax, [esi]
0x7B8505: mov     ecx, [eax+4]
0x7B8508: test    ecx, ecx
0x7B850A: jz      short loc_7B8516
0x7B850C: mov     edx, [ecx]
0x7B850E: mov     eax, [edx+90h]
0x7B8514: call    eax
0x7B8516: add     esi, 4
0x7B8519: cmp     esi, (offset OB_RendererGlobalState_010201A0.pad_00D+8Ah)
0x7B851F: jl      short loc_7B84E6
0x7B8521: pop     esi
0x7B8522: retn
