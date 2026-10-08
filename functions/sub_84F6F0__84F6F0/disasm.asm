0x84F6F0: push    0FFFFFFFFh
0x84F6F2: push    offset SEH_851CA0
0x84F6F7: mov     eax, large fs:0
0x84F6FD: push    eax
0x84F6FE: push    ecx
0x84F6FF: push    ebx
0x84F700: push    ebp
0x84F701: push    esi
0x84F702: push    edi
0x84F703: mov     eax, ds:0B30AACh
0x84F708: xor     eax, esp
0x84F70A: push    eax
0x84F70B: lea     eax, [esp+24h+var_C]
0x84F70F: mov     large fs:0, eax
0x84F715: mov     ebx, ecx
0x84F717: mov     esi, ds:0B459C4h
0x84F71D: mov     eax, [esi+24h]
0x84F720: mov     ecx, [esp+24h+value]
0x84F724: mov     edi, [eax]
0x84F726: mov     edx, [ecx]
0x84F728: mov     eax, [edx+88h]
0x84F72E: push    0
0x84F730: mov     [esp+28h+var_10], edi
0x84F734: call    eax
0x84F736: mov     edi, [edi+4]
0x84F739: mov     ebp, eax
0x84F73B: cmp     edi, ebp
0x84F73D: jz      short loc_84F776
0x84F73F: test    edi, edi
0x84F741: jz      short loc_84F75F
0x84F743: lea     ecx, [edi+4]
0x84F746: push    ecx; lpAddend
0x84F747: call    dword ptr ds:0A2807Ch
0x84F74D: test    eax, eax
0x84F74F: jnz     short loc_84F75F
0x84F751: test    edi, edi
0x84F753: jz      short loc_84F75F
0x84F755: mov     edx, [edi]
0x84F757: mov     eax, [edx]
0x84F759: push    1
0x84F75B: mov     ecx, edi
0x84F75D: call    eax
0x84F75F: test    ebp, ebp
0x84F761: mov     edi, [esp+24h+var_10]
0x84F765: mov     [edi+4], ebp
0x84F768: jz      short loc_84F77A
0x84F76A: add     ebp, 4
0x84F76D: push    ebp; lpAddend
0x84F76E: call    dword ptr ds:0A28078h
0x84F774: jmp     short loc_84F77A
0x84F776: mov     edi, [esp+24h+var_10]
0x84F77A: test    edi, edi
0x84F77C: jz      short loc_84F79A
0x84F77E: cmp     byte ptr ds:0B42CDDh, 0
0x84F785: jz      short loc_84F79A
0x84F787: mov     ecx, [esp+24h+value]
0x84F78B: mov     edx, [ecx]
0x84F78D: mov     eax, [edx+78h]
0x84F790: call    eax
0x84F792: push    eax; preset
0x84F793: mov     ecx, edi; this
0x84F795: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x84F79A: mov     edi, 1
0x84F79F: add     [esi+60h], edi
0x84F7A2: mov     [esp+24h+value], esi
0x84F7A6: mov     edx, [ebx+38h]
0x84F7A9: lea     ecx, [esp+24h+value]
0x84F7AD: push    ecx; value
0x84F7AE: push    edx; index
0x84F7AF: lea     ecx, [ebx+40h]; this
0x84F7B2: mov     [esp+2Ch+var_4], 0
0x84F7BA: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x84F7BF: or      eax, 0FFFFFFFFh
0x84F7C2: add     [esi+60h], eax
0x84F7C5: mov     [esp+24h+var_4], eax
0x84F7C9: jnz     short loc_84F7D2
0x84F7CB: mov     ecx, esi
0x84F7CD: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84F7D2: add     [ebx+38h], edi
0x84F7D5: mov     ecx, dword ptr [esp+24h+var_C]
0x84F7D9: mov     large fs:0, ecx
0x84F7E0: pop     ecx
0x84F7E1: pop     edi
0x84F7E2: pop     esi
0x84F7E3: pop     ebp
0x84F7E4: pop     ebx
0x84F7E5: add     esp, 10h
0x84F7E8: retn    10h
0x9D3360: lea     ecx, [ebp+10h]; void *
0x9D3363: jmp     sub_4027D0
0x9D3368: mov     edx, [esp+arg_4]
0x9D336C: lea     eax, [edx-14h]
0x9D336F: mov     ecx, [edx-18h]
0x9D3372: xor     ecx, eax
0x9D3374: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3379: mov     eax, offset stru_AFB794
0x9D337E: jmp     ___CxxFrameHandler3
