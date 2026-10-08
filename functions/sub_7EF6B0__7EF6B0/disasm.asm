0x7EF6B0: push    0FFFFFFFFh
0x7EF6B2: push    offset SEH_7EF6B0
0x7EF6B7: mov     eax, large fs:0
0x7EF6BD: push    eax
0x7EF6BE: sub     esp, 8
0x7EF6C1: push    ebx
0x7EF6C2: push    ebp
0x7EF6C3: push    esi
0x7EF6C4: push    edi
0x7EF6C5: mov     eax, ds:0B30AACh
0x7EF6CA: xor     eax, esp
0x7EF6CC: push    eax
0x7EF6CD: lea     eax, [esp+28h+var_C]
0x7EF6D1: mov     large fs:0, eax
0x7EF6D7: mov     ebp, ecx
0x7EF6D9: mov     eax, [ebp+0]
0x7EF6DC: mov     edx, [eax+80h]
0x7EF6E2: call    edx
0x7EF6E4: xor     edi, edi
0x7EF6E6: xor     ebx, ebx
0x7EF6E8: mov     [esp+28h+value], edi
0x7EF6EC: mov     [esp+28h+var_4], ebx
0x7EF6F0: mov     [esp+28h+var_10], ebx
0x7EF6F4: cmp     dword ptr ds:0B42E90h, 19Bh
0x7EF6FE: mov     byte ptr [esp+28h+var_4], 1
0x7EF703: jnz     loc_7EF818
0x7EF709: mov     eax, ds:0B46704h
0x7EF70E: cmp     eax, ebx
0x7EF710: jz      loc_7EF818
0x7EF716: mov     edi, eax
0x7EF718: cmp     edi, ebx
0x7EF71A: mov     [esp+28h+value], edi
0x7EF71E: jz      loc_7EF818
0x7EF724: mov     eax, [esp+28h+arg_C]
0x7EF728: mov     ecx, 1
0x7EF72D: add     [edi+60h], ecx
0x7EF730: mov     esi, [eax+18h]
0x7EF733: cmp     [esi+0A8h], ecx
0x7EF739: mov     edx, [edi+24h]
0x7EF73C: mov     eax, [edx]
0x7EF73E: setz    byte ptr [esp+28h+arg_C]
0x7EF743: cmp     eax, ebx
0x7EF745: jz      short loc_7EF750
0x7EF747: add     [eax+5Ch], ecx
0x7EF74A: mov     ebx, eax
0x7EF74C: mov     [esp+28h+var_10], ebx
0x7EF750: mov     eax, [esi+9Ch]
0x7EF756: push    eax; texture
0x7EF757: mov     ecx, ebx; this
0x7EF759: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7EF75E: mov     eax, [esi]
0x7EF760: mov     edx, [eax+68h]
0x7EF763: mov     ecx, esi
0x7EF765: call    edx
0x7EF767: push    eax
0x7EF768: push    ebx
0x7EF769: call    sub_8011E0
0x7EF76E: add     esp, 8
0x7EF771: cmp     byte ptr [esp+28h+arg_C], 0
0x7EF776: jz      short loc_7EF7AE
0x7EF778: cmp     dword ptr [esi+0A4h], 1
0x7EF77F: jnz     short loc_7EF797
0x7EF781: mov     eax, ds:0B466E8h
0x7EF786: push    eax; a2
0x7EF787: mov     ecx, edi; this
0x7EF789: call    NiD3DPass_SetVertexShader; Reference-counted NiD3DPass vertex-shader setter. Replaces pass+0x58 and AddRefs the new NiD3DVertexShader.
0x7EF78E: mov     ecx, ds:0B4670Ch
0x7EF794: push    ecx
0x7EF795: jmp     short loc_7EF7D0
0x7EF797: mov     ecx, ds:0B466ECh
0x7EF79D: push    ecx; a2
0x7EF79E: mov     ecx, edi; this
0x7EF7A0: call    NiD3DPass_SetVertexShader; Reference-counted NiD3DPass vertex-shader setter. Replaces pass+0x58 and AddRefs the new NiD3DVertexShader.
0x7EF7A5: mov     ecx, ds:0B4670Ch
0x7EF7AB: push    ecx
0x7EF7AC: jmp     short loc_7EF7D0
0x7EF7AE: cmp     dword ptr [esi+0A4h], 1
0x7EF7B5: mov     ecx, edi; this
0x7EF7B7: jnz     loc_7EF85C
0x7EF7BD: mov     edx, ds:0B466E0h
0x7EF7C3: push    edx; a2
0x7EF7C4: call    NiD3DPass_SetVertexShader; Reference-counted NiD3DPass vertex-shader setter. Replaces pass+0x58 and AddRefs the new NiD3DVertexShader.
0x7EF7C9: mov     edx, ds:0B46708h
0x7EF7CF: push    edx; shader
0x7EF7D0: mov     ecx, edi; this
0x7EF7D2: call    NiD3DPass_SetPixelShader; Reference-counted NiD3DPass pixel-shader setter. Replaces pass+0x44 and AddRefs the new NiD3DPixelShader.
0x7EF7D7: fld     dword ptr ds:0B2DAECh
0x7EF7DD: lea     eax, [ebp+0A8h]
0x7EF7E3: fstp    dword ptr [ebp+0A0h]
0x7EF7E9: push    eax
0x7EF7EA: lea     ecx, [ebp+94h]
0x7EF7F0: push    ecx
0x7EF7F1: lea     edx, [ebp+88h]
0x7EF7F7: push    edx
0x7EF7F8: lea     eax, [ebp+7Ch]
0x7EF7FB: push    eax
0x7EF7FC: mov     ecx, esi
0x7EF7FE: call    sub_7EF980
0x7EF803: mov     edx, [ebp+38h]
0x7EF806: lea     ecx, [esp+28h+value]
0x7EF80A: push    ecx; value
0x7EF80B: push    edx; index
0x7EF80C: lea     ecx, [ebp+40h]; this
0x7EF80F: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x7EF814: add     dword ptr [ebp+38h], 1
0x7EF818: or      esi, 0FFFFFFFFh
0x7EF81B: test    ebx, ebx
0x7EF81D: mov     byte ptr [esp+28h+var_4], 0
0x7EF822: jz      short loc_7EF830
0x7EF824: add     [ebx+5Ch], esi
0x7EF827: jnz     short loc_7EF830
0x7EF829: mov     ecx, ebx
0x7EF82B: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7EF830: test    edi, edi
0x7EF832: mov     [esp+28h+var_4], esi
0x7EF836: jz      short loc_7EF844
0x7EF838: add     [edi+60h], esi
0x7EF83B: jnz     short loc_7EF844
0x7EF83D: mov     ecx, edi
0x7EF83F: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7EF844: xor     eax, eax
0x7EF846: mov     ecx, [esp+28h+var_C]
0x7EF84A: mov     large fs:0, ecx
0x7EF851: pop     ecx
0x7EF852: pop     edi
0x7EF853: pop     esi
0x7EF854: pop     ebp
0x7EF855: pop     ebx
0x7EF856: add     esp, 14h
0x7EF859: retn    1Ch
0x7EF85C: mov     eax, ds:0B466E4h
0x7EF861: push    eax
0x7EF862: jmp     loc_7EF7C4
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9D31B0: lea     ecx, [ebp-14h]; void *
0x9D31B3: jmp     sub_4027D0
0x9D31B8: lea     ecx, [ebp-10h]
0x9D31BB: jmp     loc_75FA70
0x9D31C0: mov     edx, [esp+arg_4]
0x9D31C4: lea     eax, [edx-18h]
0x9D31C7: mov     ecx, [edx-1Ch]
0x9D31CA: xor     ecx, eax
0x9D31CC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D31D1: mov     eax, offset stru_AFB608
0x9D31D6: jmp     ___CxxFrameHandler3
