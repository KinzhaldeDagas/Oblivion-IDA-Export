0x7B1E00: push    0FFFFFFFFh
0x7B1E02: push    offset SEH_7B1E00
0x7B1E07: mov     eax, large fs:0
0x7B1E0D: push    eax
0x7B1E0E: sub     esp, 8
0x7B1E11: push    ebx
0x7B1E12: push    ebp
0x7B1E13: push    esi
0x7B1E14: push    edi
0x7B1E15: mov     eax, ds:0B30AACh
0x7B1E1A: xor     eax, esp
0x7B1E1C: push    eax
0x7B1E1D: lea     eax, [esp+28h+var_C]
0x7B1E21: mov     large fs:0, eax
0x7B1E27: mov     esi, ecx
0x7B1E29: mov     eax, [esi]
0x7B1E2B: mov     edx, [eax+80h]
0x7B1E31: call    edx
0x7B1E33: xor     ebp, ebp
0x7B1E35: xor     edi, edi
0x7B1E37: mov     [esp+28h+value], ebp
0x7B1E3B: mov     [esp+28h+var_4], edi
0x7B1E3F: mov     [esp+28h+var_14], edi
0x7B1E43: cmp     [esi+90h], edi
0x7B1E49: mov     byte ptr [esp+28h+var_4], 1
0x7B1E4E: jnz     loc_7B1ED7
0x7B1E54: mov     eax, [esi+94h]
0x7B1E5A: cmp     eax, edi
0x7B1E5C: jz      short loc_7B1E68
0x7B1E5E: mov     ebp, eax
0x7B1E60: add     dword ptr [ebp+60h], 1
0x7B1E64: mov     [esp+28h+value], ebp
0x7B1E68: mov     eax, [ebp+24h]
0x7B1E6B: mov     eax, [eax]
0x7B1E6D: cmp     eax, edi
0x7B1E6F: jz      short loc_7B1E7B
0x7B1E71: add     dword ptr [eax+5Ch], 1
0x7B1E75: mov     edi, eax
0x7B1E77: mov     [esp+28h+var_14], edi
0x7B1E7B: mov     ecx, [esi+7Ch]; this
0x7B1E7E: call    BSRenderedTexture__GetInnerTexture
0x7B1E83: push    eax; texture
0x7B1E84: mov     ecx, edi; this
0x7B1E86: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7B1E8B: mov     ecx, [ebp+24h]
0x7B1E8E: mov     ebx, [ecx+4]
0x7B1E91: cmp     edi, ebx
0x7B1E93: jz      short loc_7B1EB4
0x7B1E95: test    edi, edi
0x7B1E97: jz      short loc_7B1EA6
0x7B1E99: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x7B1E9D: jnz     short loc_7B1EA6
0x7B1E9F: mov     ecx, edi
0x7B1EA1: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7B1EA6: test    ebx, ebx
0x7B1EA8: mov     edi, ebx
0x7B1EAA: mov     [esp+28h+var_14], edi
0x7B1EAE: jz      short loc_7B1EB4
0x7B1EB0: add     dword ptr [ebx+5Ch], 1
0x7B1EB4: mov     eax, [esi+0B4h]
0x7B1EBA: push    eax; texture
0x7B1EBB: mov     ecx, edi; this
0x7B1EBD: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7B1EC2: mov     eax, [esi+38h]
0x7B1EC5: lea     edx, [esp+28h+value]
0x7B1EC9: push    edx; value
0x7B1ECA: push    eax; index
0x7B1ECB: lea     ecx, [esi+40h]; this
0x7B1ECE: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x7B1ED3: add     dword ptr [esi+38h], 1
0x7B1ED7: or      esi, 0FFFFFFFFh
0x7B1EDA: test    edi, edi
0x7B1EDC: mov     byte ptr [esp+28h+var_4], 0
0x7B1EE1: jz      short loc_7B1EEF
0x7B1EE3: add     [edi+5Ch], esi
0x7B1EE6: jnz     short loc_7B1EEF
0x7B1EE8: mov     ecx, edi
0x7B1EEA: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7B1EEF: test    ebp, ebp
0x7B1EF1: mov     [esp+28h+var_4], esi
0x7B1EF5: jz      short loc_7B1F03
0x7B1EF7: add     [ebp+60h], esi
0x7B1EFA: jnz     short loc_7B1F03
0x7B1EFC: mov     ecx, ebp
0x7B1EFE: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7B1F03: xor     eax, eax
0x7B1F05: mov     ecx, [esp+28h+var_C]
0x7B1F09: mov     large fs:0, ecx
0x7B1F10: pop     ecx
0x7B1F11: pop     edi
0x7B1F12: pop     esi
0x7B1F13: pop     ebp
0x7B1F14: pop     ebx
0x7B1F15: add     esp, 14h
0x7B1F18: retn    1Ch
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9CD850: lea     ecx, [ebp-10h]; void *
0x9CD853: jmp     sub_4027D0
0x9CD858: lea     ecx, [ebp-14h]
0x9CD85B: jmp     loc_75FA70
0x9CD860: mov     edx, [esp+arg_4]
0x9CD864: lea     eax, [edx-18h]
0x9CD867: mov     ecx, [edx-1Ch]
0x9CD86A: xor     ecx, eax
0x9CD86C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD871: mov     eax, offset stru_AF6A94
0x9CD876: jmp     ___CxxFrameHandler3
