0x85E570: push    0FFFFFFFFh; Attach seven stages initialized WRAP/WRAP and trilinear; SimpleShadow setup later overrides stage 2 to bilinear/no-mip and CLAMP/CLAMP.
0x85E572: push    offset SEH_85E570
0x85E577: mov     eax, large fs:0
0x85E57D: push    eax
0x85E57E: push    ecx
0x85E57F: push    ebx
0x85E580: push    ebp
0x85E581: push    esi
0x85E582: push    edi
0x85E583: mov     eax, ds:0B30AACh
0x85E588: xor     eax, esp
0x85E58A: push    eax
0x85E58B: lea     eax, [esp+24h+var_C]
0x85E58F: mov     large fs:0, eax
0x85E595: xor     esi, esi
0x85E597: xor     edi, edi
0x85E599: mov     [esp+24h+var_10], esi
0x85E59D: mov     ebx, [esp+24h+pass]
0x85E5A1: mov     eax, [ebx+18h]
0x85E5A4: cmp     eax, 7
0x85E5A7: mov     [esp+24h+var_4], edi
0x85E5AB: jnb     short loc_85E62B
0x85E5AD: lea     ecx, [ecx+0]
0x85E5B0: lea     eax, [esp+24h+pass]
0x85E5B4: push    eax
0x85E5B5: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x85E5BA: add     esp, 4
0x85E5BD: mov     ebp, eax
0x85E5BF: cmp     esi, [ebp+0]
0x85E5C2: mov     byte ptr [esp+24h+var_4], 1
0x85E5C7: jz      short loc_85E5E9
0x85E5C9: test    esi, esi
0x85E5CB: jz      short loc_85E5DA
0x85E5CD: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x85E5D1: jnz     short loc_85E5DA
0x85E5D3: mov     ecx, esi
0x85E5D5: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x85E5DA: mov     esi, [ebp+0]
0x85E5DD: test    esi, esi
0x85E5DF: mov     [esp+24h+var_10], esi
0x85E5E3: jz      short loc_85E5E9
0x85E5E5: add     dword ptr [esi+5Ch], 1
0x85E5E9: mov     eax, [esp+24h+pass]
0x85E5ED: test    eax, eax
0x85E5EF: mov     byte ptr [esp+24h+var_4], 0
0x85E5F4: jz      short loc_85E609
0x85E5F6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x85E5FA: mov     ecx, eax
0x85E5FC: add     eax, 5Ch ; '\'
0x85E5FF: cmp     dword ptr [eax], 0
0x85E602: jnz     short loc_85E609
0x85E604: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x85E609: push    2
0x85E60B: push    1
0x85E60D: push    edi
0x85E60E: push    esi
0x85E60F: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x85E614: mov     ecx, [ebx+14h]
0x85E617: add     esp, 10h
0x85E61A: push    esi; a3
0x85E61B: push    ecx; a2
0x85E61C: mov     ecx, ebx; this
0x85E61E: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x85E623: add     edi, 1
0x85E626: cmp     edi, 7
0x85E629: jb      short loc_85E5B0
0x85E62B: or      eax, 0FFFFFFFFh
0x85E62E: test    esi, esi
0x85E630: mov     [esp+24h+var_4], eax
0x85E634: jz      short loc_85E642
0x85E636: add     [esi+5Ch], eax
0x85E639: jnz     short loc_85E642
0x85E63B: mov     ecx, esi
0x85E63D: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x85E642: mov     ecx, [esp+24h+var_C]
0x85E646: mov     large fs:0, ecx
0x85E64D: pop     ecx
0x85E64E: pop     edi
0x85E64F: pop     esi
0x85E650: pop     ebp
0x85E651: pop     ebx
0x85E652: add     esp, 10h
0x85E655: retn
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9D4640: lea     ecx, [ebp-10h]
0x9D4643: jmp     loc_75FA70
0x9D4648: lea     ecx, [ebp+4]
0x9D464B: jmp     loc_75FA70
0x9D4650: mov     edx, [esp+arg_4]
0x9D4654: lea     eax, [edx-14h]
0x9D4657: mov     ecx, [edx-18h]
0x9D465A: xor     ecx, eax
0x9D465C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D4661: mov     eax, offset stru_AFC6CC
0x9D4666: jmp     ___CxxFrameHandler3
