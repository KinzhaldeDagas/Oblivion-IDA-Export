0x7AF9C0: push    0FFFFFFFFh
0x7AF9C2: push    offset SEH_7AF9C0
0x7AF9C7: mov     eax, large fs:0
0x7AF9CD: push    eax
0x7AF9CE: sub     esp, 1Ch
0x7AF9D1: push    ebx
0x7AF9D2: push    ebp
0x7AF9D3: push    esi
0x7AF9D4: push    edi
0x7AF9D5: mov     eax, ds:0B30AACh
0x7AF9DA: xor     eax, esp
0x7AF9DC: push    eax
0x7AF9DD: lea     eax, [esp+3Ch+var_C]
0x7AF9E1: mov     large fs:0, eax
0x7AF9E7: mov     esi, ecx
0x7AF9E9: mov     eax, [esi]
0x7AF9EB: mov     edx, [eax+80h]
0x7AF9F1: call    edx
0x7AF9F3: xor     ebx, ebx
0x7AF9F5: xor     ebp, ebp
0x7AF9F7: mov     [esp+3Ch+value], ebx
0x7AF9FB: xor     edi, edi
0x7AF9FD: mov     [esp+3Ch+var_4], ebp
0x7AFA01: mov     [esp+3Ch+var_28], edi
0x7AFA05: cmp     [esi+90h], ebp
0x7AFA0B: mov     byte ptr [esp+3Ch+var_4], 1
0x7AFA10: jnz     loc_7AFB60
0x7AFA16: mov     eax, [esi+94h]
0x7AFA1C: cmp     eax, ebp
0x7AFA1E: jz      short loc_7AFA2A
0x7AFA20: mov     ebx, eax
0x7AFA22: add     dword ptr [ebx+60h], 1
0x7AFA26: mov     [esp+3Ch+value], ebx
0x7AFA2A: mov     eax, [ebx+24h]
0x7AFA2D: mov     eax, [eax]
0x7AFA2F: cmp     eax, ebp
0x7AFA31: jz      short loc_7AFA3D
0x7AFA33: add     dword ptr [eax+5Ch], 1
0x7AFA37: mov     edi, eax
0x7AFA39: mov     [esp+3Ch+var_28], edi
0x7AFA3D: mov     ecx, [esi+7Ch]; this
0x7AFA40: call    BSRenderedTexture__GetInnerTexture
0x7AFA45: push    eax; texture
0x7AFA46: mov     ecx, edi; this
0x7AFA48: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7AFA4D: mov     eax, [esi+7Ch]
0x7AFA50: mov     ecx, [eax+20h]
0x7AFA53: cmp     ecx, ebp
0x7AFA55: jz      short loc_7AFA60
0x7AFA57: mov     edx, [ecx]
0x7AFA59: mov     eax, [edx+50h]
0x7AFA5C: call    eax
0x7AFA5E: mov     ebp, eax
0x7AFA60: mov     eax, [esi+7Ch]
0x7AFA63: mov     ecx, [eax+20h]
0x7AFA66: test    ecx, ecx
0x7AFA68: jz      short loc_7AFA73
0x7AFA6A: mov     edx, [ecx]
0x7AFA6C: mov     eax, [edx+4Ch]
0x7AFA6F: call    eax
0x7AFA71: jmp     short loc_7AFA75
0x7AFA73: xor     eax, eax
0x7AFA75: test    eax, eax
0x7AFA77: mov     [esp+3Ch+var_20], eax
0x7AFA7B: fild    [esp+3Ch+var_20]
0x7AFA7F: jge     short loc_7AFA87
0x7AFA81: fadd    dword ptr ds:0A2FC78h
0x7AFA87: test    ebp, ebp
0x7AFA89: fld1
0x7AFA8B: fld     st
0x7AFA8D: mov     [esp+3Ch+var_20], ebp
0x7AFA91: fdivrp  st(2), st
0x7AFA93: fxch    st(1)
0x7AFA95: fstp    [esp+3Ch+var_1C]
0x7AFA99: fild    [esp+3Ch+var_20]
0x7AFA9D: jge     short loc_7AFAA5
0x7AFA9F: fadd    dword ptr ds:0A2FC78h
0x7AFAA5: fdivp   st(1), st
0x7AFAA7: mov     ecx, [esp+3Ch+var_1C]
0x7AFAAB: mov     [esi+0B0h], ecx
0x7AFAB1: fstp    [esp+3Ch+var_18]
0x7AFAB5: fldz
0x7AFAB7: mov     edx, [esp+3Ch+var_18]
0x7AFABB: fst     [esp+3Ch+var_14]
0x7AFABF: mov     [esi+0B4h], edx
0x7AFAC5: fstp    [esp+3Ch+var_10]
0x7AFAC9: mov     eax, [esp+3Ch+var_14]
0x7AFACD: mov     ecx, [esp+3Ch+var_10]
0x7AFAD1: mov     [esi+0B8h], eax
0x7AFAD7: mov     [esi+0BCh], ecx
0x7AFADD: mov     edx, [ebx+24h]
0x7AFAE0: mov     ebp, [edx+4]
0x7AFAE3: cmp     edi, ebp
0x7AFAE5: jz      short loc_7AFB06
0x7AFAE7: test    edi, edi
0x7AFAE9: jz      short loc_7AFAF8
0x7AFAEB: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x7AFAEF: jnz     short loc_7AFAF8
0x7AFAF1: mov     ecx, edi
0x7AFAF3: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7AFAF8: test    ebp, ebp
0x7AFAFA: mov     edi, ebp
0x7AFAFC: mov     [esp+3Ch+var_28], edi
0x7AFB00: jz      short loc_7AFB06
0x7AFB02: add     dword ptr [ebp+5Ch], 1
0x7AFB06: mov     eax, [esi+0C0h]
0x7AFB0C: push    eax; texture
0x7AFB0D: mov     ecx, edi; this
0x7AFB0F: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7AFB14: mov     eax, [ebx+24h]
0x7AFB17: mov     ebp, [eax+8]
0x7AFB1A: cmp     edi, ebp
0x7AFB1C: jz      short loc_7AFB3D
0x7AFB1E: test    edi, edi
0x7AFB20: jz      short loc_7AFB2F
0x7AFB22: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x7AFB26: jnz     short loc_7AFB2F
0x7AFB28: mov     ecx, edi
0x7AFB2A: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7AFB2F: test    ebp, ebp
0x7AFB31: mov     edi, ebp
0x7AFB33: mov     [esp+3Ch+var_28], edi
0x7AFB37: jz      short loc_7AFB3D
0x7AFB39: add     dword ptr [ebp+5Ch], 1
0x7AFB3D: mov     ecx, ds:0B42D44h
0x7AFB43: push    ecx; texture
0x7AFB44: mov     ecx, edi; this
0x7AFB46: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7AFB4B: mov     eax, [esi+38h]
0x7AFB4E: lea     edx, [esp+3Ch+value]
0x7AFB52: push    edx; value
0x7AFB53: push    eax; index
0x7AFB54: lea     ecx, [esi+40h]; this
0x7AFB57: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x7AFB5C: add     dword ptr [esi+38h], 1
0x7AFB60: or      esi, 0FFFFFFFFh
0x7AFB63: test    edi, edi
0x7AFB65: mov     byte ptr [esp+3Ch+var_4], 0
0x7AFB6A: jz      short loc_7AFB78
0x7AFB6C: add     [edi+5Ch], esi
0x7AFB6F: jnz     short loc_7AFB78
0x7AFB71: mov     ecx, edi
0x7AFB73: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7AFB78: test    ebx, ebx
0x7AFB7A: mov     [esp+3Ch+var_4], esi
0x7AFB7E: jz      short loc_7AFB8C
0x7AFB80: add     [ebx+60h], esi
0x7AFB83: jnz     short loc_7AFB8C
0x7AFB85: mov     ecx, ebx
0x7AFB87: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7AFB8C: xor     eax, eax
0x7AFB8E: mov     ecx, [esp+3Ch+var_C]
0x7AFB92: mov     large fs:0, ecx
0x7AFB99: pop     ecx
0x7AFB9A: pop     edi
0x7AFB9B: pop     esi
0x7AFB9C: pop     ebp
0x7AFB9D: pop     ebx
0x7AFB9E: add     esp, 28h
0x7AFBA1: retn    1Ch
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9CD5F0: lea     ecx, [ebp-24h]; void *
0x9CD5F3: jmp     sub_4027D0
0x9CD5F8: lea     ecx, [ebp-28h]
0x9CD5FB: jmp     loc_75FA70
0x9CD600: mov     edx, [esp+arg_4]
0x9CD604: lea     eax, [edx-2Ch]
0x9CD607: mov     ecx, [edx-30h]
0x9CD60A: xor     ecx, eax
0x9CD60C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD611: mov     eax, offset stru_AF68BC
0x9CD616: jmp     ___CxxFrameHandler3
