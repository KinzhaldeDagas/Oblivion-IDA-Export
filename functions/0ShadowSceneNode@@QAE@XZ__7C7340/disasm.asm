0x7C7340: push    0FFFFFFFFh
0x7C7342: push    offset ??0ShadowSceneNode@@QAE@XZ_SEH
0x7C7347: mov     eax, large fs:0
0x7C734D: push    eax
0x7C734E: sub     esp, 8
0x7C7351: push    ebx
0x7C7352: push    ebp
0x7C7353: push    esi
0x7C7354: push    edi
0x7C7355: mov     eax, ds:0B30AACh
0x7C735A: xor     eax, esp
0x7C735C: push    eax
0x7C735D: lea     eax, [esp+28h+var_C]
0x7C7361: mov     large fs:0, eax
0x7C7367: mov     esi, ecx
0x7C7369: mov     [esp+28h+var_14], esi
0x7C736D: xor     ebx, ebx
0x7C736F: push    ebx
0x7C7370: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7C7375: mov     dword ptr [esi], offset ??_7ShadowSceneNode@@6B@; const ShadowSceneNode::`vftable'
0x7C737B: mov     [esp+28h+var_4], ebx
0x7C737F: mov     [esi+0DCh], ebx
0x7C7385: lea     edi, [esi+0E4h]
0x7C738B: mov     [edi+0Ch], ebx
0x7C738E: mov     [edi+4], ebx
0x7C7391: mov     [edi+8], ebx
0x7C7394: mov     dword ptr [edi], offset ??_7?$NiTPointerList@V?$NiPointer@VShadowSceneLight@@@@@@6B@; const NiTPointerList<NiPointer<ShadowSceneLight>>::`vftable'
0x7C739A: lea     ebp, [esi+0F4h]
0x7C73A0: mov     [ebp+0Ch], ebx
0x7C73A3: mov     [ebp+4], ebx
0x7C73A6: mov     [ebp+8], ebx
0x7C73A9: mov     dword ptr [ebp+0], offset ??_7?$NiTPointerList@V?$NiPointer@VShadowSceneLight@@@@@@6B@; const NiTPointerList<NiPointer<ShadowSceneLight>>::`vftable'
0x7C73B0: mov     [esi+110h], ebx
0x7C73B6: mov     [esi+114h], ebx
0x7C73BC: mov     [esi+120h], ebx
0x7C73C2: mov     [esi+124h], ebx
0x7C73C8: push    offset aShadowSceneNod; "shadow scene node"
0x7C73CD: mov     ecx, esi
0x7C73CF: mov     byte ptr [esp+2Ch+var_4], 7
0x7C73D4: call    NiObjectNET_SetName
0x7C73D9: mov     ecx, edi
0x7C73DB: call    NiTPointerList__FreeAllNodes
0x7C73E0: mov     ecx, ebp
0x7C73E2: call    NiTPointerList__FreeAllNodes
0x7C73E7: mov     [esi+118h], ebx
0x7C73ED: mov     edi, [esi+120h]
0x7C73F3: cmp     edi, ebx
0x7C73F5: jz      short loc_7C7419
0x7C73F7: lea     eax, [edi+4]
0x7C73FA: push    eax; lpAddend
0x7C73FB: call    dword ptr ds:0A2807Ch
0x7C7401: test    eax, eax
0x7C7403: jnz     short loc_7C7413
0x7C7405: cmp     edi, ebx
0x7C7407: jz      short loc_7C7413
0x7C7409: mov     edx, [edi]
0x7C740B: mov     eax, [edx]
0x7C740D: push    1
0x7C740F: mov     ecx, edi
0x7C7411: call    eax
0x7C7413: mov     [esi+120h], ebx
0x7C7419: mov     edi, [esi+0DCh]
0x7C741F: cmp     edi, ebx
0x7C7421: jz      short loc_7C7445
0x7C7423: lea     ecx, [edi+4]
0x7C7426: push    ecx; lpAddend
0x7C7427: call    dword ptr ds:0A2807Ch
0x7C742D: test    eax, eax
0x7C742F: jnz     short loc_7C743F
0x7C7431: cmp     edi, ebx
0x7C7433: jz      short loc_7C743F
0x7C7435: mov     edx, [edi]
0x7C7437: mov     eax, [edx]
0x7C7439: push    1
0x7C743B: mov     ecx, edi
0x7C743D: call    eax
0x7C743F: mov     [esi+0DCh], ebx
0x7C7445: push    220h; Size
0x7C744A: mov     word ptr [esi+0E0h], 0FFFFh
0x7C7453: mov     [esi+128h], ebx
0x7C7459: mov     [esi+12Ch], bl
0x7C745F: call    FormHeapAlloc
0x7C7464: add     esp, 4
0x7C7467: mov     dword ptr [esp+28h+var_10], eax
0x7C746B: cmp     eax, ebx
0x7C746D: mov     byte ptr [esp+28h+var_4], 8
0x7C7472: jz      short loc_7C747F
0x7C7474: mov     ecx, eax; this
0x7C7476: call    ??0ShadowSceneLight@@QAE@XZ; ShadowSceneLight::ShadowSceneLight(void)
0x7C747B: mov     ebp, eax
0x7C747D: jmp     short loc_7C7481
0x7C747F: xor     ebp, ebp
0x7C7481: mov     edi, [esi+110h]
0x7C7487: cmp     edi, ebp
0x7C7489: mov     byte ptr [esp+28h+var_4], 7
0x7C748E: jz      short loc_7C74C4
0x7C7490: cmp     edi, ebx
0x7C7492: jz      short loc_7C74B0
0x7C7494: lea     ecx, [edi+4]
0x7C7497: push    ecx; lpAddend
0x7C7498: call    dword ptr ds:0A2807Ch
0x7C749E: test    eax, eax
0x7C74A0: jnz     short loc_7C74B0
0x7C74A2: cmp     edi, ebx
0x7C74A4: jz      short loc_7C74B0
0x7C74A6: mov     edx, [edi]
0x7C74A8: mov     eax, [edx]
0x7C74AA: push    1
0x7C74AC: mov     ecx, edi
0x7C74AE: call    eax
0x7C74B0: cmp     ebp, ebx
0x7C74B2: mov     [esi+110h], ebp
0x7C74B8: jz      short loc_7C74C4
0x7C74BA: add     ebp, 4
0x7C74BD: push    ebp; lpAddend
0x7C74BE: call    dword ptr ds:0A28078h
0x7C74C4: push    220h; Size
0x7C74C9: call    FormHeapAlloc
0x7C74CE: add     esp, 4
0x7C74D1: mov     dword ptr [esp+28h+var_10], eax
0x7C74D5: cmp     eax, ebx
0x7C74D7: mov     byte ptr [esp+28h+var_4], 9
0x7C74DC: jz      short loc_7C74E9
0x7C74DE: mov     ecx, eax; this
0x7C74E0: call    ??0ShadowSceneLight@@QAE@XZ; ShadowSceneLight::ShadowSceneLight(void)
0x7C74E5: mov     ebp, eax
0x7C74E7: jmp     short loc_7C74EB
0x7C74E9: xor     ebp, ebp
0x7C74EB: mov     edi, [esi+114h]
0x7C74F1: cmp     edi, ebp
0x7C74F3: mov     byte ptr [esp+28h+var_4], 7
0x7C74F8: jz      short loc_7C752E
0x7C74FA: cmp     edi, ebx
0x7C74FC: jz      short loc_7C751A
0x7C74FE: lea     ecx, [edi+4]
0x7C7501: push    ecx; lpAddend
0x7C7502: call    dword ptr ds:0A2807Ch
0x7C7508: test    eax, eax
0x7C750A: jnz     short loc_7C751A
0x7C750C: cmp     edi, ebx
0x7C750E: jz      short loc_7C751A
0x7C7510: mov     edx, [edi]
0x7C7512: mov     eax, [edx]
0x7C7514: push    1
0x7C7516: mov     ecx, edi
0x7C7518: call    eax
0x7C751A: cmp     ebp, ebx
0x7C751C: mov     [esi+114h], ebp
0x7C7522: jz      short loc_7C752E
0x7C7524: add     ebp, 4
0x7C7527: push    ebp; lpAddend
0x7C7528: call    dword ptr ds:0A28078h
0x7C752E: mov     [esi+108h], ebx
0x7C7534: mov     [esi+10Ch], ebx
0x7C753A: mov     eax, esi
0x7C753C: mov     ecx, dword ptr [esp+28h+var_C]
0x7C7540: mov     large fs:0, ecx
0x7C7547: pop     ecx
0x7C7548: pop     edi
0x7C7549: pop     esi
0x7C754A: pop     ebp
0x7C754B: pop     ebx
0x7C754C: add     esp, 14h
0x7C754F: retn
