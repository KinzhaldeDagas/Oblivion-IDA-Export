0x85E410: push    0FFFFFFFFh; SpeedTreeBranchShader-only selector-0x17A helper: sole code xref is SpeedTreeBranchShader setup at 0x0080F7FE. It is not a Lighting30 consumer.
0x85E412: push    offset SEH_85E410
0x85E417: mov     eax, large fs:0
0x85E41D: push    eax
0x85E41E: sub     esp, 8
0x85E421: push    ebx
0x85E422: push    ebp
0x85E423: push    esi
0x85E424: push    edi
0x85E425: mov     eax, ds:0B30AACh
0x85E42A: xor     eax, esp
0x85E42C: push    eax
0x85E42D: lea     eax, [esp+28h+var_C]
0x85E431: mov     large fs:0, eax
0x85E437: mov     [esp+28h+var_14], ecx
0x85E43B: mov     eax, ds:0B42EB8h
0x85E440: mov     ecx, [eax+0Ch]
0x85E443: mov     edx, [ecx]
0x85E445: mov     esi, ds:0B477FCh
0x85E44B: mov     eax, [esi+24h]
0x85E44E: mov     ecx, [esp+28h+arg_C]
0x85E452: mov     ebx, [eax]
0x85E454: mov     [esp+28h+var_10], edx
0x85E458: mov     edx, [ecx]
0x85E45A: mov     eax, [edx+88h]
0x85E460: push    0
0x85E462: call    eax
0x85E464: mov     edi, [ebx+4]
0x85E467: mov     ebp, eax
0x85E469: cmp     edi, ebp
0x85E46B: jz      short loc_85E49E
0x85E46D: test    edi, edi
0x85E46F: jz      short loc_85E48D
0x85E471: lea     ecx, [edi+4]
0x85E474: push    ecx; lpAddend
0x85E475: call    dword ptr ds:0A2807Ch
0x85E47B: test    eax, eax
0x85E47D: jnz     short loc_85E48D
0x85E47F: test    edi, edi
0x85E481: jz      short loc_85E48D
0x85E483: mov     edx, [edi]
0x85E485: mov     eax, [edx]
0x85E487: push    1
0x85E489: mov     ecx, edi
0x85E48B: call    eax
0x85E48D: test    ebp, ebp
0x85E48F: mov     [ebx+4], ebp
0x85E492: jz      short loc_85E49E
0x85E494: add     ebp, 4
0x85E497: push    ebp; lpAddend
0x85E498: call    dword ptr ds:0A28078h
0x85E49E: mov     ecx, [esp+28h+arg_C]
0x85E4A2: push    ecx
0x85E4A3: mov     ecx, [esp+2Ch+var_14]
0x85E4A7: push    ebx
0x85E4A8: call    sub_848FA0
0x85E4AD: mov     eax, [esp+28h+var_10]
0x85E4B1: mov     edx, [esi+24h]
0x85E4B4: mov     ecx, [eax+114h]; this
0x85E4BA: mov     ebp, [edx+18h]
0x85E4BD: call    BSRenderedTexture__GetInnerTexture
0x85E4C2: mov     edi, [ebp+4]
0x85E4C5: mov     ebx, eax
0x85E4C7: cmp     edi, ebx
0x85E4C9: jz      short loc_85E4FC
0x85E4CB: test    edi, edi
0x85E4CD: jz      short loc_85E4EB
0x85E4CF: lea     ecx, [edi+4]
0x85E4D2: push    ecx; lpAddend
0x85E4D3: call    dword ptr ds:0A2807Ch
0x85E4D9: test    eax, eax
0x85E4DB: jnz     short loc_85E4EB
0x85E4DD: test    edi, edi
0x85E4DF: jz      short loc_85E4EB
0x85E4E1: mov     edx, [edi]
0x85E4E3: mov     eax, [edx]
0x85E4E5: push    1
0x85E4E7: mov     ecx, edi
0x85E4E9: call    eax
0x85E4EB: test    ebx, ebx
0x85E4ED: mov     [ebp+4], ebx
0x85E4F0: jz      short loc_85E4FC
0x85E4F2: add     ebx, 4
0x85E4F5: push    ebx; lpAddend
0x85E4F6: call    dword ptr ds:0A28078h
0x85E4FC: push    0; preset
0x85E4FE: mov     ecx, ebp; this
0x85E500: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x85E505: cmp     byte ptr [esp+28h+value], 0
0x85E50A: jnz     short loc_85E54B
0x85E50C: mov     ebx, 1
0x85E511: add     [esi+60h], ebx
0x85E514: mov     [esp+28h+value], esi
0x85E518: mov     edi, [esp+28h+var_14]
0x85E51C: mov     edx, [edi+38h]
0x85E51F: lea     ecx, [esp+28h+value]
0x85E523: push    ecx; value
0x85E524: push    edx; index
0x85E525: lea     ecx, [edi+40h]; this
0x85E528: mov     [esp+30h+var_4], 0
0x85E530: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x85E535: or      eax, 0FFFFFFFFh
0x85E538: add     [esi+60h], eax
0x85E53B: mov     [esp+28h+var_4], eax
0x85E53F: jnz     short loc_85E548
0x85E541: mov     ecx, esi
0x85E543: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x85E548: add     [edi+38h], ebx
0x85E54B: mov     ecx, dword ptr [esp+28h+var_C]
0x85E54F: mov     large fs:0, ecx
0x85E556: pop     ecx
0x85E557: pop     edi
0x85E558: pop     esi
0x85E559: pop     ebp
0x85E55A: pop     ebx
0x85E55B: add     esp, 14h
0x85E55E: retn    14h
0x9D4580: lea     ecx, [ebp+14h]; void *
0x9D4583: jmp     sub_4027D0
0x9D4588: mov     edx, [esp+arg_4]
0x9D458C: lea     eax, [edx-18h]
0x9D458F: mov     ecx, [edx-1Ch]
0x9D4592: xor     ecx, eax
0x9D4594: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D4599: mov     eax, offset stru_AFC614
0x9D459E: jmp     ___CxxFrameHandler3
