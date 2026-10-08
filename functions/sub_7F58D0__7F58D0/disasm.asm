0x7F58D0: push    0FFFFFFFFh
0x7F58D2: push    offset SEH_7EF6B0
0x7F58D7: mov     eax, large fs:0
0x7F58DD: push    eax
0x7F58DE: sub     esp, 8
0x7F58E1: push    ebx
0x7F58E2: push    ebp
0x7F58E3: push    esi
0x7F58E4: push    edi
0x7F58E5: mov     eax, ds:0B30AACh
0x7F58EA: xor     eax, esp
0x7F58EC: push    eax
0x7F58ED: lea     eax, [esp+28h+var_C]
0x7F58F1: mov     large fs:0, eax
0x7F58F7: mov     esi, ecx
0x7F58F9: mov     eax, [esi]
0x7F58FB: mov     edx, [eax+80h]
0x7F5901: call    edx
0x7F5903: xor     edi, edi
0x7F5905: xor     ebp, ebp
0x7F5907: mov     [esp+28h+value], edi
0x7F590B: mov     [esp+28h+var_4], ebp
0x7F590F: mov     [esp+28h+var_10], ebp
0x7F5913: cmp     [esi+98h], ebp
0x7F5919: mov     ebx, 1
0x7F591E: mov     byte ptr [esp+28h+var_4], bl
0x7F5922: jnz     short loc_7F596D
0x7F5924: mov     eax, [esi+9Ch]
0x7F592A: cmp     eax, ebp
0x7F592C: jz      short loc_7F5937
0x7F592E: mov     edi, eax
0x7F5930: add     [edi+60h], ebx
0x7F5933: mov     [esp+28h+value], edi
0x7F5937: mov     eax, [edi+24h]
0x7F593A: mov     eax, [eax]
0x7F593C: cmp     eax, ebp
0x7F593E: jz      short loc_7F5949
0x7F5940: add     [eax+5Ch], ebx
0x7F5943: mov     ebp, eax
0x7F5945: mov     [esp+28h+var_10], ebp
0x7F5949: mov     ecx, [esi+7Ch]; this
0x7F594C: call    BSRenderedTexture__GetInnerTexture
0x7F5951: push    eax; texture
0x7F5952: mov     ecx, ebp; this
0x7F5954: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7F5959: mov     edx, [esi+38h]
0x7F595C: lea     ecx, [esp+28h+value]
0x7F5960: push    ecx; value
0x7F5961: push    edx; index
0x7F5962: lea     ecx, [esi+40h]; this
0x7F5965: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x7F596A: add     [esi+38h], ebx
0x7F596D: or      esi, 0FFFFFFFFh
0x7F5970: test    ebp, ebp
0x7F5972: mov     byte ptr [esp+28h+var_4], 0
0x7F5977: jz      short loc_7F5985
0x7F5979: add     [ebp+5Ch], esi
0x7F597C: jnz     short loc_7F5985
0x7F597E: mov     ecx, ebp
0x7F5980: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7F5985: test    edi, edi
0x7F5987: mov     [esp+28h+var_4], esi
0x7F598B: jz      short loc_7F5999
0x7F598D: add     [edi+60h], esi
0x7F5990: jnz     short loc_7F5999
0x7F5992: mov     ecx, edi
0x7F5994: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7F5999: xor     eax, eax
0x7F599B: mov     ecx, [esp+28h+var_C]
0x7F599F: mov     large fs:0, ecx
0x7F59A6: pop     ecx
0x7F59A7: pop     edi
0x7F59A8: pop     esi
0x7F59A9: pop     ebp
0x7F59AA: pop     ebx
0x7F59AB: add     esp, 14h
0x7F59AE: retn    1Ch
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
