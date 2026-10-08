0x814340: mov     eax, ds:0B43124h; BSCubeMapCamera virtual render dispatcher. Mode 0 calls the six-face shadow object-list renderer; mode 3 calls the alternate face renderer; afterward it releases +0x140 and all six +0x128 face references.
0x814345: push    ebx
0x814346: push    ebp
0x814347: mov     ebp, ds:0A2807Ch
0x81434D: push    esi
0x81434E: mov     esi, ecx
0x814350: cmp     eax, esi
0x814352: push    edi
0x814353: jz      short loc_814387
0x814355: test    eax, eax
0x814357: jz      short loc_814373
0x814359: mov     edi, eax
0x81435B: add     eax, 4
0x81435E: push    eax; lpAddend
0x81435F: call    ebp ; InterlockedDecrement
0x814361: test    eax, eax
0x814363: jnz     short loc_814373
0x814365: test    edi, edi
0x814367: jz      short loc_814373
0x814369: mov     eax, [edi]
0x81436B: mov     edx, [eax]
0x81436D: push    1
0x81436F: mov     ecx, edi
0x814371: call    edx
0x814373: test    esi, esi
0x814375: mov     ds:0B43124h, esi
0x81437B: jz      short loc_814387
0x81437D: lea     eax, [esi+4]
0x814380: push    eax; lpAddend
0x814381: call    dword ptr ds:0A28078h
0x814387: mov     eax, [esi+124h]; Dispatch by BSCubeMapCamera+0x124: mode 0 -> 0x00813510, mode 3 -> 0x00813960.
0x81438D: cmp     eax, 3; switch 4 cases
0x814390: ja      short def_814392; jumptable 00814392 default case, cases 1,2
0x814392: jmp     ds:jpt_814392[eax*4]; switch jump
0x814399: mov     ecx, esi; jumptable 00814392 case 0
0x81439B: call    BSCubeMapCamera_RenderMode0_ShadowObjectListFaces; Mode 0 is the six-face render-target loop used by ShadowSceneLight special/object-list dispatch.
0x8143A0: jmp     short def_814392; jumptable 00814392 default case, cases 1,2
0x8143A2: mov     ecx, [esp+10h+renderArg]; jumptable 00814392 case 3
0x8143A6: push    ecx
0x8143A7: mov     ecx, esi
0x8143A9: call    BSCubeMapCamera_RenderMode3Faces; Mode 3 uses the distinct image-space cube-face path; it is not the mode used by ShadowPass special-light rendering.
0x8143AE: mov     edi, [esi+140h]; Begin post-render ownership cleanup for BSCubeMapCamera+0x140 and six face texture references.
0x8143B4: test    edi, edi
0x8143B6: jz      short loc_8143DA
0x8143B8: lea     edx, [edi+4]
0x8143BB: push    edx; lpAddend
0x8143BC: call    ebp ; InterlockedDecrement
0x8143BE: test    eax, eax
0x8143C0: jnz     short loc_8143D0
0x8143C2: test    edi, edi
0x8143C4: jz      short loc_8143D0
0x8143C6: mov     eax, [edi]
0x8143C8: mov     edx, [eax]
0x8143CA: push    1
0x8143CC: mov     ecx, edi
0x8143CE: call    edx
0x8143D0: mov     dword ptr [esi+140h], 0
0x8143DA: lea     edi, [esi+128h]
0x8143E0: mov     ebx, 6
0x8143E5: mov     esi, [edi]
0x8143E7: test    esi, esi
0x8143E9: jz      short loc_814409
0x8143EB: lea     eax, [esi+4]
0x8143EE: push    eax; lpAddend
0x8143EF: call    ebp ; InterlockedDecrement
0x8143F1: test    eax, eax
0x8143F3: jnz     short loc_814403
0x8143F5: test    esi, esi
0x8143F7: jz      short loc_814403
0x8143F9: mov     edx, [esi]
0x8143FB: mov     eax, [edx]
0x8143FD: push    1
0x8143FF: mov     ecx, esi
0x814401: call    eax
0x814403: mov     dword ptr [edi], 0
0x814409: add     edi, 4
0x81440C: sub     ebx, 1
0x81440F: jnz     short loc_8143E5
0x814411: pop     edi
0x814412: pop     esi
0x814413: pop     ebp
0x814414: pop     ebx
0x814415: retn    4
