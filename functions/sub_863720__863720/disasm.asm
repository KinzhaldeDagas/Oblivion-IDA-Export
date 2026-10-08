0x863720: push    0FFFFFFFFh; Allocates a 0x108-byte Lighting30ShaderProperty, initializes its BSShaderPPLightingProperty base and derived fields, then copies clone state from the source property.
0x863722: push    offset SEH_8C8970
0x863727: mov     eax, large fs:0
0x86372D: push    eax
0x86372E: push    ecx
0x86372F: push    ebx
0x863730: push    esi
0x863731: mov     eax, ds:0B30AACh
0x863736: xor     eax, esp
0x863738: push    eax
0x863739: lea     eax, [esp+1Ch+var_C]
0x86373D: mov     large fs:0, eax
0x863743: mov     ebx, ecx
0x863745: push    108h; Size
0x86374A: call    FormHeapAlloc
0x86374F: mov     esi, eax
0x863751: add     esp, 4
0x863754: mov     [esp+1Ch+var_10], esi
0x863758: test    esi, esi
0x86375A: mov     [esp+1Ch+var_4], 0
0x863762: jz      short loc_863797
0x863764: mov     ecx, esi; this
0x863766: call    ??0BSShaderPPLightingProperty@@QAE@XZ; Verified (Oblivion): BSShaderPPLightingProperty constructor initializes the reference-counted TextureEffectData slot at this+0xE0 (DWORD index 0x38) to null. TextureEffectProperty_SetData replaces that same offset; BSShaderPPLightingProperty destructor releases and clears it before chaining to BSShaderLightingProperty. Fallout's typed property layout calls the member spTexEffectData at the same +0xE0 offset.
0x86376B: fldz
0x86376D: mov     dword ptr [esi], offset Lighting30ShaderProperty_vftable; Clone creation route: store exact Lighting30ShaderProperty vptr A9576C after base construction.
0x863773: fst     dword ptr [esi+0F0h]
0x863779: fst     dword ptr [esi+0F4h]
0x86377F: fst     dword ptr [esi+0F8h]
0x863785: fstp    dword ptr [esi+0FCh]
0x86378B: mov     dword ptr [esi+104h], 0
0x863795: jmp     short loc_863799
0x863797: xor     esi, esi
0x863799: mov     eax, [esp+1Ch+cloningProcess]
0x86379D: push    eax; cloningProcess
0x86379E: push    esi; destination
0x86379F: mov     ecx, ebx; this
0x8637A1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8637A9: call    Lighting30ShaderProperty__CopyToMembers; Copies the inherited BSShaderPPLightingProperty state into the clone destination, then copies Lighting30's four floats at +0xF0..+0xFC and refcount-assigns the derived texture/object at +0x104.
0x8637AE: mov     eax, esi
0x8637B0: mov     ecx, [esp+1Ch+var_C]
0x8637B4: mov     large fs:0, ecx
0x8637BB: pop     ecx
0x8637BC: pop     esi
0x8637BD: pop     ebx
0x8637BE: add     esp, 10h
0x8637C1: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
