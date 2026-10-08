0x8048E0: push    0FFFFFFFFh; MoonSugarEffect decode: Copy/image-space begin pass. Clones texture stage and binds BSImageSpaceShader +0x7C inner texture for primary sampler.
0x8048E2: push    offset SEH_8048E0
0x8048E7: mov     eax, large fs:0
0x8048ED: push    eax
0x8048EE: sub     esp, 10h
0x8048F1: push    ebx
0x8048F2: push    ebp
0x8048F3: push    esi
0x8048F4: push    edi
0x8048F5: mov     eax, ds:0B30AACh
0x8048FA: xor     eax, esp
0x8048FC: push    eax
0x8048FD: lea     eax, [esp+30h+var_C]
0x804901: mov     large fs:0, eax
0x804907: mov     ebx, ecx
0x804909: mov     eax, [ebx]
0x80490B: mov     edx, [eax+80h]
0x804911: call    edx
0x804913: xor     ebp, ebp
0x804915: xor     edi, edi
0x804917: mov     [esp+30h+var_14], ebp
0x80491B: mov     [esp+30h+var_4], edi
0x80491F: mov     [esp+30h+var_1C], edi
0x804923: mov     eax, [ebx+70h]
0x804926: cmp     eax, edi
0x804928: mov     byte ptr [esp+30h+var_4], 1
0x80492D: jz      loc_804BD9
0x804933: mov     ebp, eax
0x804935: add     dword ptr [ebp+60h], 1
0x804939: mov     eax, [ebx+0A4h]
0x80493F: cmp     eax, 4; switch 5 cases
0x804942: mov     [esp+30h+var_14], ebp
0x804946: ja      def_80494C
0x80494C: jmp     ds:jpt_80494C[eax*4]; switch jump
0x804953: mov     eax, [ebp+24h]; jumptable 0080494C case 0
0x804956: mov     eax, [eax]
0x804958: push    eax
0x804959: lea     ecx, [esp+34h+var_1C]
0x80495D: call    sub_7AEC20
0x804962: mov     ecx, [ebx+7Ch]; this
0x804965: call    BSRenderedTexture__GetInnerTexture
0x80496A: push    eax; texture
0x80496B: mov     ecx, [esp+34h+var_1C]; this
0x80496F: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x804974: push    edi; restore
0x804975: push    edi; value
0x804976: push    1Bh; state
0x804978: mov     ecx, ebp; this
0x80497A: call    NiD3DPass_SetRenderState; Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
0x80497F: jmp     def_80494C
0x804984: mov     ecx, [ebp+24h]; jumptable 0080494C case 1
0x804987: mov     eax, [ecx]
0x804989: push    eax
0x80498A: lea     ecx, [esp+34h+var_1C]
0x80498E: call    sub_7AEC20
0x804993: mov     edx, ds:0B474F0h
0x804999: push    edx
0x80499A: jmp     short loc_80496B
0x80499C: mov     eax, [ebp+24h]; jumptable 0080494C case 2
0x80499F: mov     eax, [eax]
0x8049A1: push    eax
0x8049A2: lea     ecx, [esp+34h+var_1C]
0x8049A6: call    sub_7AEC20
0x8049AB: mov     ecx, ds:0B474ECh
0x8049B1: push    ecx; texture
0x8049B2: mov     ecx, [esp+34h+var_1C]; this
0x8049B6: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x8049BB: push    edi; restore
0x8049BC: push    1; value
0x8049BE: push    1Bh; state
0x8049C0: mov     ecx, ebp; this
0x8049C2: call    NiD3DPass_SetRenderState; Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
0x8049C7: push    edi; restore
0x8049C8: push    9; value
0x8049CA: push    13h; state
0x8049CC: mov     ecx, ebp; this
0x8049CE: call    NiD3DPass_SetRenderState; Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
0x8049D3: push    edi; restore
0x8049D4: push    1; value
0x8049D6: push    14h; state
0x8049D8: mov     ecx, ebp; this
0x8049DA: call    NiD3DPass_SetRenderState; Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
0x8049DF: jmp     def_80494C
0x8049E4: push    edi; jumptable 0080494C case 3
0x8049E5: push    edi; value
0x8049E6: push    1Bh; state
0x8049E8: mov     ecx, ebp; this
0x8049EA: call    NiD3DPass_SetRenderState; Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
0x8049EF: movzx   eax, word ptr ds:0B474C8h
0x8049F6: add     eax, 0FFFFFFFFh
0x8049F9: cmp     eax, 6
0x8049FC: jg      short loc_804A0D
0x8049FE: cmp     eax, edi
0x804A00: jge     short loc_804A08
0x804A02: mov     [esp+30h+var_18], edi
0x804A06: jmp     short loc_804A1B
0x804A08: cmp     eax, 6
0x804A0B: jle     short loc_804A17
0x804A0D: mov     [esp+30h+var_18], 6
0x804A15: jmp     short loc_804A1B
0x804A17: mov     [esp+30h+var_18], eax
0x804A1B: mov     edx, [ebp+24h]
0x804A1E: mov     eax, [edx]
0x804A20: push    eax
0x804A21: lea     ecx, [esp+34h+var_1C]
0x804A25: call    sub_7AEC20
0x804A2A: mov     ecx, [ebx+7Ch]; this
0x804A2D: call    BSRenderedTexture__GetInnerTexture
0x804A32: mov     ecx, [esp+30h+var_1C]; this
0x804A36: push    eax; texture
0x804A37: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x804A3C: mov     eax, [ebx+7Ch]
0x804A3F: mov     ecx, [eax+20h]
0x804A42: cmp     ecx, edi
0x804A44: jz      short loc_804A4F
0x804A46: mov     eax, [ecx]
0x804A48: mov     edx, [eax+4Ch]
0x804A4B: call    edx
0x804A4D: jmp     short loc_804A51
0x804A4F: xor     eax, eax
0x804A51: test    eax, eax
0x804A53: mov     [esp+30h+var_10], eax
0x804A57: fild    [esp+30h+var_10]
0x804A5B: jge     short loc_804A63
0x804A5D: fadd    dword ptr ds:0A2FC78h
0x804A63: fld1
0x804A65: mov     esi, [esp+30h+var_18]
0x804A69: fdivrp  st(1), st
0x804A6B: mov     eax, [esp+30h+var_18]
0x804A6F: imul    esi, 0F0h ; 'ð'
0x804A75: add     esi, offset unk_A93780
0x804A7B: mov     ecx, 3Ch ; '<'
0x804A80: mov     edi, (offset flt_B474CC+2Ch)
0x804A85: rep movsd
0x804A87: fstp    dword ptr ds:0B2E03Ch
0x804A8D: fldz
0x804A8F: fstp    dword ptr ds:0B2E040h
0x804A95: fld     dword ptr ds:0A93760h[eax*4]
0x804A9C: mov     eax, (offset flt_B474CC+44h)
0x804AA1: fld     dword ptr [eax-10h]
0x804AA4: add     eax, 50h ; 'P'
0x804AA7: cmp     eax, offset stru_B475FC.parent
0x804AAC: fdiv    st, st(1)
0x804AAE: fstp    dword ptr [eax-60h]
0x804AB1: fld     dword ptr [eax-50h]
0x804AB4: fdiv    st, st(1)
0x804AB6: fstp    dword ptr [eax-50h]
0x804AB9: fld     dword ptr [eax-40h]
0x804ABC: fdiv    st, st(1)
0x804ABE: fstp    dword ptr [eax-40h]
0x804AC1: fld     dword ptr [eax-30h]
0x804AC4: fdiv    st, st(1)
0x804AC6: fstp    dword ptr [eax-30h]
0x804AC9: fld     dword ptr [eax-20h]
0x804ACC: fdiv    st, st(1)
0x804ACE: fstp    dword ptr [eax-20h]
0x804AD1: jl      short loc_804AA1
0x804AD3: jmp     loc_804BC7
0x804AD8: push    edi; jumptable 0080494C case 4
0x804AD9: push    edi; value
0x804ADA: push    1Bh; state
0x804ADC: mov     ecx, ebp; this
0x804ADE: call    NiD3DPass_SetRenderState; Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
0x804AE3: movzx   eax, word ptr ds:0B474C8h
0x804AEA: add     eax, 0FFFFFFFFh
0x804AED: cmp     eax, 6
0x804AF0: jg      short loc_804B01
0x804AF2: cmp     eax, edi
0x804AF4: jge     short loc_804AFC
0x804AF6: mov     [esp+30h+var_18], edi
0x804AFA: jmp     short loc_804B0F
0x804AFC: cmp     eax, 6
0x804AFF: jle     short loc_804B0B
0x804B01: mov     [esp+30h+var_18], 6
0x804B09: jmp     short loc_804B0F
0x804B0B: mov     [esp+30h+var_18], eax
0x804B0F: mov     ecx, [ebp+24h]
0x804B12: mov     eax, [ecx]
0x804B14: push    eax
0x804B15: lea     ecx, [esp+34h+var_1C]
0x804B19: call    sub_7AEC20
0x804B1E: mov     ecx, [ebx+7Ch]; this
0x804B21: call    BSRenderedTexture__GetInnerTexture
0x804B26: mov     ecx, [esp+30h+var_1C]; this
0x804B2A: push    eax; texture
0x804B2B: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x804B30: fldz
0x804B32: fstp    dword ptr ds:0B2E03Ch
0x804B38: mov     eax, [ebx+7Ch]
0x804B3B: mov     ecx, [eax+20h]
0x804B3E: cmp     ecx, edi
0x804B40: jz      short loc_804B4B
0x804B42: mov     edx, [ecx]
0x804B44: mov     eax, [edx+4Ch]
0x804B47: call    eax
0x804B49: jmp     short loc_804B4D
0x804B4B: xor     eax, eax
0x804B4D: test    eax, eax
0x804B4F: mov     [esp+30h+var_10], eax
0x804B53: fild    [esp+30h+var_10]
0x804B57: jge     short loc_804B5F
0x804B59: fadd    dword ptr ds:0A2FC78h
0x804B5F: fld1
0x804B61: mov     esi, [esp+30h+var_18]
0x804B65: fdivrp  st(1), st
0x804B67: imul    esi, 0F0h ; 'ð'
0x804B6D: add     esi, offset unk_A93780
0x804B73: mov     ecx, 3Ch ; '<'
0x804B78: mov     edi, (offset flt_B474CC+2Ch)
0x804B7D: rep movsd
0x804B7F: mov     ecx, [esp+30h+var_18]
0x804B83: mov     eax, (offset flt_B474CC+44h)
0x804B88: fstp    dword ptr ds:0B2E040h
0x804B8E: fld     dword ptr ds:0A93760h[ecx*4]
0x804B95: fld     dword ptr [eax-10h]
0x804B98: add     eax, 50h ; 'P'
0x804B9B: cmp     eax, offset stru_B475FC.parent
0x804BA0: fdiv    st, st(1)
0x804BA2: fstp    dword ptr [eax-60h]
0x804BA5: fld     dword ptr [eax-50h]
0x804BA8: fdiv    st, st(1)
0x804BAA: fstp    dword ptr [eax-50h]
0x804BAD: fld     dword ptr [eax-40h]
0x804BB0: fdiv    st, st(1)
0x804BB2: fstp    dword ptr [eax-40h]
0x804BB5: fld     dword ptr [eax-30h]
0x804BB8: fdiv    st, st(1)
0x804BBA: fstp    dword ptr [eax-30h]
0x804BBD: fld     dword ptr [eax-20h]
0x804BC0: fdiv    st, st(1)
0x804BC2: fstp    dword ptr [eax-20h]
0x804BC5: jl      short loc_804B95
0x804BC7: fstp    st
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9D0A90: lea     ecx, [ebp-14h]; void *
0x9D0A93: jmp     sub_4027D0
0x9D0A98: lea     ecx, [ebp-1Ch]
0x9D0A9B: jmp     loc_75FA70
0x9D0AA0: mov     edx, [esp+arg_4]
0x9D0AA4: lea     eax, [edx-20h]
0x9D0AA7: mov     ecx, [edx-24h]
0x9D0AAA: xor     ecx, eax
0x9D0AAC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0AB1: mov     eax, offset stru_AF933C
0x9D0AB6: jmp     ___CxxFrameHandler3
