0x7C6770: push    0FFFFFFFFh; Own mode-5 shadow-map rendering: consume active lights, publish current light, dispatch render, release transient camera state, clear current light, and restore prior render mode.
0x7C6772: push    offset SEH_7C6770
0x7C6777: mov     eax, large fs:0
0x7C677D: push    eax
0x7C677E: sub     esp, 18h
0x7C6781: push    ebx
0x7C6782: push    ebp
0x7C6783: push    esi
0x7C6784: push    edi
0x7C6785: mov     eax, ds:0B30AACh
0x7C678A: xor     eax, esp
0x7C678C: push    eax
0x7C678D: lea     eax, [esp+38h+var_C]
0x7C6791: mov     large fs:0, eax
0x7C6797: mov     esi, ecx
0x7C6799: xor     ebx, ebx
0x7C679B: mov     [esp+38h+var_24], ebx
0x7C679F: call    BSShaderAccumulator_GetOrCreateGlobal
0x7C67A4: cmp     ds:0B42CDAh, bl; FreezeRenderAccumulation debug replay state suppresses the complete render-mode-5 active-shadow-light presentation loop.
0x7C67AA: jnz     loc_7C69A2
0x7C67B0: mov     eax, [esi+124h]
0x7C67B6: cmp     eax, ebx
0x7C67B8: lea     edi, [esi+124h]
0x7C67BE: mov     [esp+38h+var_20], edi
0x7C67C2: jnz     short loc_7C67F9
0x7C67C4: push    150h; Size
0x7C67C9: call    FormHeapAlloc
0x7C67CE: add     esp, 4
0x7C67D1: mov     [esp+38h+var_10], eax
0x7C67D5: cmp     eax, ebx
0x7C67D7: mov     [esp+38h+var_4], ebx
0x7C67DB: jz      short loc_7C67E7
0x7C67DD: push    ebx
0x7C67DE: mov     ecx, eax; this
0x7C67E0: call    ??0BSCubeMapCamera@@QAE@XZ; BSCubeMapCamera constructor: initializes mode +0x124, six face references +0x128..+0x13C, render/scene fields, cube frustum, and image-space shader list +0x14C.
0x7C67E5: jmp     short loc_7C67E9
0x7C67E7: xor     eax, eax
0x7C67E9: push    eax; a2
0x7C67EA: mov     ecx, edi; this
0x7C67EC: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x7C67F4: call    NiSmartPointer_Set??
0x7C67F9: mov     eax, [edi]
0x7C67FB: mov     [eax+124h], ebx
0x7C6801: movzx   eax, word ptr ds:0B42EACh
0x7C6808: push    5
0x7C680A: mov     [esp+3Ch+var_10], eax
0x7C680E: call    BSShader_SetRenderMode; Enter global render mode 5 for native shadow-map production; the prior mode is saved.
0x7C6813: add     esp, 4
0x7C6816: cmp     [esi+100h], ebx
0x7C681C: jz      loc_7C6965
0x7C6822: mov     ebp, [esi+0F8h]
0x7C6828: cmp     ebp, ebx
0x7C682A: jz      loc_7C695D
0x7C6830: mov     esi, [ebp+8]
0x7C6833: test    esi, esi
0x7C6835: lea     eax, [ebp+8]
0x7C6838: mov     ebp, [ebp+0]
0x7C683B: jz      short loc_7C6857
0x7C683D: lea     ecx, [esp+38h+var_1C]
0x7C6841: push    ecx
0x7C6842: mov     ecx, esi
0x7C6844: call    ShadowSceneLight_GetLightRef
0x7C6849: or      [esp+38h+var_24], 1
0x7C684E: cmp     dword ptr [eax], 0
0x7C6851: jz      short loc_7C6857
0x7C6853: mov     bl, 1
0x7C6855: jmp     short loc_7C6859
0x7C6857: xor     bl, bl
0x7C6859: test    byte ptr [esp+38h+var_24], 1
0x7C685E: jz      short loc_7C6889
0x7C6860: mov     edi, [esp+38h+var_1C]
0x7C6864: and     [esp+38h+var_24], 0FFFFFFFEh
0x7C6869: test    edi, edi
0x7C686B: jz      short loc_7C6889
0x7C686D: lea     edx, [edi+4]
0x7C6870: push    edx; lpAddend
0x7C6871: call    dword ptr ds:0A2807Ch
0x7C6877: test    eax, eax
0x7C6879: jnz     short loc_7C6889
0x7C687B: test    edi, edi
0x7C687D: jz      short loc_7C6889
0x7C687F: mov     eax, [edi]
0x7C6881: mov     edx, [eax]
0x7C6883: push    1
0x7C6885: mov     ecx, edi
0x7C6887: call    edx
0x7C6889: test    bl, bl
0x7C688B: jz      loc_7C6951
0x7C6891: lea     eax, [esp+38h+var_18]
0x7C6895: push    eax
0x7C6896: mov     ecx, esi
0x7C6898: call    ShadowSceneLight_GetLightRef
0x7C689D: mov     eax, [eax]
0x7C689F: mov     bl, [eax+18h]
0x7C68A2: mov     eax, [esp+38h+var_18]
0x7C68A6: not     bl
0x7C68A8: and     bl, 1
0x7C68AB: test    eax, eax
0x7C68AD: jz      short loc_7C68CD
0x7C68AF: mov     edi, eax
0x7C68B1: add     eax, 4
0x7C68B4: push    eax; lpAddend
0x7C68B5: call    dword ptr ds:0A2807Ch
0x7C68BB: test    eax, eax
0x7C68BD: jnz     short loc_7C68CD
0x7C68BF: test    edi, edi
0x7C68C1: jz      short loc_7C68CD
0x7C68C3: mov     edx, [edi]
0x7C68C5: mov     eax, [edx]
0x7C68C7: push    1
0x7C68C9: mov     ecx, edi
0x7C68CB: call    eax
0x7C68CD: test    bl, bl
0x7C68CF: jz      short loc_7C694A
0x7C68D1: lea     ecx, [esp+38h+var_14]
0x7C68D5: push    ecx
0x7C68D6: mov     ecx, esi
0x7C68D8: call    ShadowSceneLight_GetLightRef
0x7C68DD: fldz
0x7C68DF: mov     eax, [eax]
0x7C68E1: push    1; a3
0x7C68E3: push    ecx
0x7C68E4: mov     ecx, eax; this
0x7C68E6: fstp    [esp+40h+a2]; a2
0x7C68E9: mov     [esp+40h+var_4], 1
0x7C68F1: call    NiAVObject_UpdateNiAVObject; Update the backing NiLight immediately before render dispatch; the loop has no second branch update after the renderer returns.
0x7C68F6: mov     eax, [esp+38h+var_14]
0x7C68FA: test    eax, eax
0x7C68FC: mov     [esp+38h+var_4], 0FFFFFFFFh
0x7C6904: jz      short loc_7C6924
0x7C6906: mov     edi, eax
0x7C6908: add     eax, 4
0x7C690B: push    eax; lpAddend
0x7C690C: call    dword ptr ds:0A2807Ch
0x7C6912: test    eax, eax
0x7C6914: jnz     short loc_7C6924
0x7C6916: test    edi, edi
0x7C6918: jz      short loc_7C6924
0x7C691A: mov     edx, [edi]
0x7C691C: mov     eax, [edx]
0x7C691E: push    1
0x7C6920: mov     ecx, edi
0x7C6922: call    eax
0x7C6924: cmp     word ptr [esi+118h], 0FFh
0x7C692D: jz      short loc_7C6951
0x7C692F: mov     ecx, [esp+38h+arg_0]
0x7C6933: mov     edx, [esp+38h+var_20]
0x7C6937: mov     ds:0B42EB0h, esi; Publish this ShadowSceneLight as the current mode-5 light before rendering its map.
0x7C693D: mov     eax, [edx]
0x7C693F: push    ecx
0x7C6940: push    eax
0x7C6941: mov     ecx, esi
0x7C6943: call    ShadowSceneLight_DispatchRender; Dispatch the current light to the normal per-source or special cube/object-list shadow producer.
0x7C6948: jmp     short loc_7C6951
0x7C694A: mov     ecx, esi
0x7C694C: call    ShadowSceneLight_ClearReceiverAssociations; Remove property-side shadow-light links, reset shader-side state, and free this light's object/receiver list associations.
0x7C6951: test    ebp, ebp
0x7C6953: jnz     loc_7C6830; Post-render active-loop edge; advance without another projector-transform consumer.
0x7C6959: mov     edi, [esp+38h+var_20]
0x7C695D: xor     ebx, ebx
0x7C695F: mov     ds:0B42EB0h, ebx; Clear the current ShadowSceneLight pointer after the active-light loop.
0x7C6965: mov     edi, [edi]
0x7C6967: mov     esi, [edi+140h]
0x7C696D: add     edi, 140h
0x7C6973: cmp     esi, ebx
0x7C6975: jz      short loc_7C6995
0x7C6977: lea     ecx, [esi+4]
0x7C697A: push    ecx; lpAddend
0x7C697B: call    dword ptr ds:0A2807Ch
0x7C6981: test    eax, eax
0x7C6983: jnz     short loc_7C6993
0x7C6985: cmp     esi, ebx
0x7C6987: jz      short loc_7C6993
0x7C6989: mov     edx, [esi]
0x7C698B: mov     eax, [edx]
0x7C698D: push    1
0x7C698F: mov     ecx, esi
0x7C6991: call    eax
0x7C6993: mov     [edi], ebx
0x7C6995: mov     ecx, [esp+38h+var_10]
0x7C6999: push    ecx
0x7C699A: call    BSShader_SetRenderMode; Restore the render mode saved before the mode-5 shadow-light loop.
0x7C699F: add     esp, 4
0x7C69A2: mov     ecx, [esp+38h+var_C]
0x7C69A6: mov     large fs:0, ecx
0x7C69AD: pop     ecx
0x7C69AE: pop     edi
0x7C69AF: pop     esi
0x7C69B0: pop     ebp
0x7C69B1: pop     ebx
0x7C69B2: add     esp, 24h
0x7C69B5: retn    4
0x9CE6A0: mov     eax, [ebp-10h]
0x9CE6A3: push    eax
0x9CE6A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CE6A9: pop     ecx
0x9CE6AA: retn
0x9CE6AB: lea     ecx, [ebp-14h]; slot
0x9CE6AE: jmp     NiPointerSlot_Release
0x9CE6B3: mov     edx, [esp+arg_4]
0x9CE6B7: lea     eax, [edx-28h]
0x9CE6BA: mov     ecx, [edx-2Ch]
0x9CE6BD: xor     ecx, eax
0x9CE6BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE6C4: mov     eax, offset stru_AF7644
0x9CE6C9: jmp     ___CxxFrameHandler3
