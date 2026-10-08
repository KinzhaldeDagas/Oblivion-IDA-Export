0x80E730: push    0FFFFFFFFh; SpeedTreeFrondShader pass builder. Creates renderer-owned pass at +0x94, creates one texture stage with 0x801110(stage,0,3,2), assigns default VS +0x7C and PS +0x8C.
0x80E732: push    offset SEH_7B09A0
0x80E737: mov     eax, large fs:0
0x80E73D: push    eax
0x80E73E: sub     esp, 8; CRASH CORRECTION: SUB ESP,8 spans80E73E..80E740. 80E740 is NOT an entry point; old plugin call into its immediate bypassed the preceding SEH prologue.
0x80E741: push    ebx
0x80E742: push    ebp
0x80E743: push    esi
0x80E744: push    edi
0x80E745: mov     eax, ds:0B30AACh
0x80E74A: xor     eax, esp
0x80E74C: push    eax
0x80E74D: lea     eax, [esp+28h+var_C]
0x80E751: mov     large fs:0, eax
0x80E757: mov     esi, ecx
0x80E759: lea     eax, [esp+28h+var_10]
0x80E75D: push    eax
0x80E75E: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x80E763: add     esp, 4
0x80E766: mov     edi, eax
0x80E768: mov     ecx, [esi+94h]
0x80E76E: cmp     ecx, [edi]
0x80E770: mov     [esp+28h+var_4], 0
0x80E778: jz      short loc_80E799
0x80E77A: test    ecx, ecx
0x80E77C: jz      short loc_80E789
0x80E77E: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x80E782: jnz     short loc_80E789
0x80E784: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x80E789: mov     eax, [edi]
0x80E78B: test    eax, eax
0x80E78D: mov     [esi+94h], eax
0x80E793: jz      short loc_80E799
0x80E795: add     dword ptr [eax+60h], 1
0x80E799: mov     eax, [esp+28h+var_10]
0x80E79D: test    eax, eax
0x80E79F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x80E7A7: jz      short loc_80E7BC
0x80E7A9: add     dword ptr [eax+60h], 0FFFFFFFFh
0x80E7AD: mov     ecx, eax
0x80E7AF: add     eax, 60h ; '`'
0x80E7B2: cmp     dword ptr [eax], 0
0x80E7B5: jnz     short loc_80E7BC
0x80E7B7: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x80E7BC: lea     ecx, [esp+28h+a3]
0x80E7C0: push    ecx
0x80E7C1: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x80E7C6: mov     edx, [esp+2Ch+a3]
0x80E7CA: push    2
0x80E7CC: push    3
0x80E7CE: push    0
0x80E7D0: push    edx
0x80E7D1: mov     [esp+3Ch+var_4], 1
0x80E7D9: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x80E7DE: mov     ecx, [esi+94h]; this
0x80E7E4: mov     eax, [esp+3Ch+a3]
0x80E7E8: mov     edx, [ecx+14h]
0x80E7EB: add     esp, 14h
0x80E7EE: push    eax; a3
0x80E7EF: push    edx; a2
0x80E7F0: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x80E7F5: mov     ebp, [esi+94h]
0x80E7FB: mov     ebx, [esi+7Ch]
0x80E7FE: mov     edi, [ebp+58h]
0x80E801: cmp     edi, ebx
0x80E803: jz      short loc_80E836
0x80E805: test    edi, edi
0x80E807: jz      short loc_80E825
0x80E809: lea     eax, [edi+4]
0x80E80C: push    eax; lpAddend
0x80E80D: call    dword ptr ds:0A2807Ch
0x80E813: test    eax, eax
0x80E815: jnz     short loc_80E825
0x80E817: test    edi, edi
0x80E819: jz      short loc_80E825
0x80E81B: mov     edx, [edi]
0x80E81D: mov     eax, [edx]
0x80E81F: push    1
0x80E821: mov     ecx, edi
0x80E823: call    eax
0x80E825: test    ebx, ebx
0x80E827: mov     [ebp+58h], ebx
0x80E82A: jz      short loc_80E836
0x80E82C: add     ebx, 4
0x80E82F: push    ebx; lpAddend
0x80E830: call    dword ptr ds:0A28078h
0x80E836: mov     ebx, [esi+8Ch]
0x80E83C: mov     esi, [esi+94h]
0x80E842: mov     edi, [esi+44h]
0x80E845: cmp     edi, ebx
0x80E847: jz      short loc_80E87A
0x80E849: test    edi, edi
0x80E84B: jz      short loc_80E869
0x80E84D: lea     ecx, [edi+4]
0x80E850: push    ecx; lpAddend
0x80E851: call    dword ptr ds:0A2807Ch
0x80E857: test    eax, eax
0x80E859: jnz     short loc_80E869
0x80E85B: test    edi, edi
0x80E85D: jz      short loc_80E869
0x80E85F: mov     edx, [edi]
0x80E861: mov     eax, [edx]
0x80E863: push    1
0x80E865: mov     ecx, edi
0x80E867: call    eax
0x80E869: test    ebx, ebx
0x80E86B: mov     [esi+44h], ebx
0x80E86E: jz      short loc_80E87A
0x80E870: add     ebx, 4
0x80E873: push    ebx; lpAddend
0x80E874: call    dword ptr ds:0A28078h
0x80E87A: mov     eax, [esp+28h+a3]
0x80E87E: test    eax, eax
0x80E880: mov     [esp+28h+var_4], 0FFFFFFFFh
0x80E888: jz      short loc_80E89D
0x80E88A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80E88E: mov     ecx, eax
0x80E890: add     eax, 5Ch ; '\'
0x80E893: cmp     dword ptr [eax], 0
0x80E896: jnz     short loc_80E89D
0x80E898: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x80E89D: mov     ecx, [esp+28h+var_C]
0x80E8A1: mov     large fs:0, ecx
0x80E8A8: pop     ecx
0x80E8A9: pop     edi
0x80E8AA: pop     esi
0x80E8AB: pop     ebp
0x80E8AC: pop     ebx
0x80E8AD: add     esp, 14h
0x80E8B0: retn
0x9CD690: lea     ecx, [ebp-10h]; void *
0x9CD693: jmp     sub_4027D0
0x9CD698: lea     ecx, [ebp-14h]
0x9CD69B: jmp     loc_75FA70
0x9CD6A0: mov     edx, [esp+arg_4]
0x9CD6A4: lea     eax, [edx-18h]
0x9CD6A7: mov     ecx, [edx-1Ch]
0x9CD6AA: xor     ecx, eax
0x9CD6AC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD6B1: mov     eax, offset stru_AF6934
0x9CD6B6: jmp     ___CxxFrameHandler3
