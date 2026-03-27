0x481350: push    esi
0x481351: mov     esi, [esp+4+arg_0]
0x481355: test    esi, esi
0x481357: jz      loc_481407
0x48135D: mov     eax, [esi]
0x48135F: mov     edx, [eax+10h]
0x481362: push    edi
0x481363: mov     ecx, esi
0x481365: call    edx
0x481367: test    eax, eax
0x481369: mov     ecx, esi
0x48136B: jz      short loc_4813C4
0x48136D: push    4
0x48136F: call    NiNode_GetNiPropertyByID
0x481374: mov     esi, eax
0x481376: test    esi, esi
0x481378: jz      loc_481406
0x48137E: mov     eax, [esi]
0x481380: mov     edx, [eax+54h]
0x481383: mov     ecx, esi
0x481385: call    edx
0x481387: cmp     eax, 1
0x48138A: jl      short loc_4813A1
0x48138C: mov     eax, [esi]
0x48138E: mov     edx, [eax+54h]
0x481391: mov     ecx, esi
0x481393: call    edx
0x481395: cmp     eax, 0Ah
0x481398: jg      short loc_4813A1
0x48139A: mov     eax, 1
0x48139F: jmp     short loc_4813A3
0x4813A1: xor     eax, eax
0x4813A3: neg     eax
0x4813A5: sbb     eax, eax
0x4813A7: and     eax, esi
0x4813A9: mov     edi, eax
0x4813AB: jz      short loc_481406
0x4813AD: mov     eax, [esi]
0x4813AF: mov     edx, [eax+54h]
0x4813B2: mov     ecx, esi
0x4813B4: call    edx
0x4813B6: push    edi
0x4813B7: mov     ecx, offset ActorProcessManager_ptr
0x4813BC: call    sub_67AB40
0x4813C1: pop     edi
0x4813C2: pop     esi
0x4813C3: retn
0x4813C4: mov     eax, [esi]
0x4813C6: mov     edx, [eax+8]
0x4813C9: call    edx
0x4813CB: mov     edi, eax
0x4813CD: test    edi, edi
0x4813CF: jz      short loc_481406
0x4813D1: movzx   eax, word ptr [edi+0B6h]
0x4813D8: xor     esi, esi
0x4813DA: test    eax, eax
0x4813DC: jbe     short loc_481406
0x4813DE: cmp     eax, esi
0x4813E0: ja      short loc_4813E6
0x4813E2: xor     eax, eax
0x4813E4: jmp     short loc_4813EF
0x4813E6: mov     eax, [edi+0B0h]
0x4813EC: mov     eax, [eax+esi*4]
0x4813EF: push    eax
0x4813F0: call    sub_481350
0x4813F5: movzx   eax, word ptr [edi+0B6h]
0x4813FC: add     esi, 1
0x4813FF: add     esp, 4
0x481402: cmp     eax, esi
0x481404: ja      short loc_4813E6
0x481406: pop     edi
0x481407: pop     esi
0x481408: retn
