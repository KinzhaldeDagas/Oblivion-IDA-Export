0x84B5C0: push    0FFFFFFFFh
0x84B5C2: push    offset SEH_879360
0x84B5C7: mov     eax, large fs:0
0x84B5CD: push    eax
0x84B5CE: push    ecx
0x84B5CF: push    ebx
0x84B5D0: push    ebp
0x84B5D1: push    esi
0x84B5D2: push    edi
0x84B5D3: mov     eax, ds:0B30AACh
0x84B5D8: xor     eax, esp
0x84B5DA: push    eax
0x84B5DB: lea     eax, [esp+24h+var_C]
0x84B5DF: mov     large fs:0, eax
0x84B5E5: mov     [esp+24h+var_10], ecx
0x84B5E9: mov     eax, [esp+24h+arg_8]
0x84B5ED: mov     eax, [eax+10h]
0x84B5F0: mov     ebx, ds:0B45620h
0x84B5F6: push    eax
0x84B5F7: call    sub_848DA0
0x84B5FC: mov     ecx, [ebx+24h]
0x84B5FF: mov     esi, [esp+24h+arg_C]
0x84B603: mov     edi, [ecx]
0x84B605: mov     edx, [esi]
0x84B607: mov     eax, [edx+88h]
0x84B60D: push    0
0x84B60F: mov     ecx, esi
0x84B611: mov     [esp+28h+arg_8], edi
0x84B615: call    eax
0x84B617: mov     edi, [edi+4]
0x84B61A: mov     ebp, eax
0x84B61C: cmp     edi, ebp
0x84B61E: jz      short loc_84B657
0x84B620: test    edi, edi
0x84B622: jz      short loc_84B640
0x84B624: lea     ecx, [edi+4]
0x84B627: push    ecx; lpAddend
0x84B628: call    dword ptr ds:0A2807Ch
0x84B62E: test    eax, eax
0x84B630: jnz     short loc_84B640
0x84B632: test    edi, edi
0x84B634: jz      short loc_84B640
0x84B636: mov     edx, [edi]
0x84B638: mov     eax, [edx]
0x84B63A: push    1
0x84B63C: mov     ecx, edi
0x84B63E: call    eax
0x84B640: test    ebp, ebp
0x84B642: mov     edi, [esp+24h+arg_8]
0x84B646: mov     [edi+4], ebp
0x84B649: jz      short loc_84B65B
0x84B64B: add     ebp, 4
0x84B64E: push    ebp; lpAddend
0x84B64F: call    dword ptr ds:0A28078h
0x84B655: jmp     short loc_84B65B
0x84B657: mov     edi, [esp+24h+arg_8]
0x84B65B: test    edi, edi
0x84B65D: jz      short loc_84B679
0x84B65F: cmp     byte ptr ds:0B42CDDh, 0
0x84B666: jz      short loc_84B679
0x84B668: mov     edx, [esi]
0x84B66A: mov     eax, [edx+78h]
0x84B66D: mov     ecx, esi
0x84B66F: call    eax
0x84B671: push    eax; preset
0x84B672: mov     ecx, edi; this
0x84B674: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x84B679: mov     ecx, [ebx+24h]
0x84B67C: mov     edi, [ecx+4]
0x84B67F: mov     edx, [esi]
0x84B681: mov     eax, [edx+8Ch]
0x84B687: push    0
0x84B689: mov     ecx, esi
0x84B68B: mov     [esp+28h+arg_8], edi
0x84B68F: call    eax
0x84B691: test    eax, eax
0x84B693: jz      short loc_84B6A7
0x84B695: mov     edx, [esi]
0x84B697: mov     eax, [edx+8Ch]
0x84B69D: push    0
0x84B69F: mov     ecx, esi
0x84B6A1: call    eax
0x84B6A3: mov     ebp, eax
0x84B6A5: jmp     short loc_84B6BC
0x84B6A7: test    dword ptr [esi+1Ch], 80h
0x84B6AE: mov     ebp, ds:0B430F0h
0x84B6B4: ja      short loc_84B6BC
0x84B6B6: mov     ebp, ds:0B430DCh
0x84B6BC: mov     edi, [edi+4]
0x84B6BF: cmp     edi, ebp
0x84B6C1: jz      short loc_84B6FA
0x84B6C3: test    edi, edi
0x84B6C5: jz      short loc_84B6E3
0x84B6C7: lea     ecx, [edi+4]
0x84B6CA: push    ecx; lpAddend
0x84B6CB: call    dword ptr ds:0A2807Ch
0x84B6D1: test    eax, eax
0x84B6D3: jnz     short loc_84B6E3
0x84B6D5: test    edi, edi
0x84B6D7: jz      short loc_84B6E3
0x84B6D9: mov     edx, [edi]
0x84B6DB: mov     eax, [edx]
0x84B6DD: push    1
0x84B6DF: mov     ecx, edi
0x84B6E1: call    eax
0x84B6E3: test    ebp, ebp
0x84B6E5: mov     edi, [esp+24h+arg_8]
0x84B6E9: mov     [edi+4], ebp
0x84B6EC: jz      short loc_84B6FE
0x84B6EE: add     ebp, 4
0x84B6F1: push    ebp; lpAddend
0x84B6F2: call    dword ptr ds:0A28078h
0x84B6F8: jmp     short loc_84B6FE
0x84B6FA: mov     edi, [esp+24h+arg_8]
0x84B6FE: test    edi, edi
0x84B700: jz      short loc_84B71C
0x84B702: cmp     byte ptr ds:0B42CDDh, 0
0x84B709: jz      short loc_84B71C
0x84B70B: mov     edx, [esi]
0x84B70D: mov     eax, [edx+78h]
0x84B710: mov     ecx, esi
0x84B712: call    eax
0x84B714: push    eax; preset
0x84B715: mov     ecx, edi; this
0x84B717: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x84B71C: mov     ecx, [ebx+24h]
0x84B71F: mov     edi, [ecx+8]
0x84B722: mov     edx, [esi]
0x84B724: mov     eax, [edx+90h]
0x84B72A: push    0
0x84B72C: mov     ecx, esi
0x84B72E: mov     [esp+28h+arg_8], edi
0x84B732: call    eax
0x84B734: mov     edi, [edi+4]
0x84B737: mov     ebp, eax
0x84B739: cmp     edi, ebp
0x84B73B: jz      short loc_84B774
0x84B73D: test    edi, edi
0x84B73F: jz      short loc_84B75D
0x84B741: lea     ecx, [edi+4]
0x84B744: push    ecx; lpAddend
0x84B745: call    dword ptr ds:0A2807Ch
0x84B74B: test    eax, eax
0x84B74D: jnz     short loc_84B75D
0x84B74F: test    edi, edi
0x84B751: jz      short loc_84B75D
0x84B753: mov     edx, [edi]
0x84B755: mov     eax, [edx]
0x84B757: push    1
0x84B759: mov     ecx, edi
0x84B75B: call    eax
0x84B75D: test    ebp, ebp
0x84B75F: mov     edi, [esp+24h+arg_8]
0x84B763: mov     [edi+4], ebp
0x84B766: jz      short loc_84B778
0x84B768: add     ebp, 4
0x84B76B: push    ebp; lpAddend
0x84B76C: call    dword ptr ds:0A28078h
0x84B772: jmp     short loc_84B778
0x84B774: mov     edi, [esp+24h+arg_8]
0x84B778: test    edi, edi
0x84B77A: jz      short loc_84B796
0x84B77C: cmp     byte ptr ds:0B42CDDh, 0
0x84B783: jz      short loc_84B796
0x84B785: mov     edx, [esi]
0x84B787: mov     eax, [edx+78h]
0x84B78A: mov     ecx, esi
0x84B78C: call    eax
0x84B78E: push    eax; preset
0x84B78F: mov     ecx, edi; this
0x84B791: call    NiD3DTextureStage_ApplyAddressModePreset; Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
0x84B796: mov     edi, 1
0x84B79B: add     [ebx+60h], edi
0x84B79E: mov     [esp+24h+arg_8], ebx
0x84B7A2: mov     esi, [esp+24h+var_10]
0x84B7A6: mov     edx, [esi+38h]
0x84B7A9: lea     ecx, [esp+24h+arg_8]
0x84B7AD: push    ecx; value
0x84B7AE: push    edx; index
0x84B7AF: lea     ecx, [esi+40h]; this
0x84B7B2: mov     [esp+2Ch+var_4], 0
0x84B7BA: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x84B7BF: or      eax, 0FFFFFFFFh
0x84B7C2: add     [ebx+60h], eax
0x84B7C5: mov     [esp+24h+var_4], eax
0x84B7C9: jnz     short loc_84B7D2
0x84B7CB: mov     ecx, ebx
0x84B7CD: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x84B7D2: add     [esi+38h], edi
0x84B7D5: mov     ecx, dword ptr [esp+24h+var_C]
0x84B7D9: mov     large fs:0, ecx
0x84B7E0: pop     ecx
0x84B7E1: pop     edi
0x84B7E2: pop     esi
0x84B7E3: pop     ebp
0x84B7E4: pop     ebx
0x84B7E5: add     esp, 10h
0x84B7E8: retn    10h
0x9D33F0: lea     ecx, [ebp+0Ch]; void *
0x9D33F3: jmp     sub_4027D0
0x9D33F8: mov     edx, [esp+arg_4]
0x9D33FC: lea     eax, [edx-14h]
0x9D33FF: mov     ecx, [edx-18h]
0x9D3402: xor     ecx, eax
0x9D3404: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3409: mov     eax, offset stru_AFB818
0x9D340E: jmp     ___CxxFrameHandler3
