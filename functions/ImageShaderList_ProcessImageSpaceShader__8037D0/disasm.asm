0x8037D0: push    0FFFFFFFFh
0x8037D2: push    offset SEH_8037D0
0x8037D7: mov     eax, large fs:0
0x8037DD: push    eax
0x8037DE: sub     esp, 1Ch
0x8037E1: push    ebx
0x8037E2: push    ebp
0x8037E3: push    esi
0x8037E4: push    edi
0x8037E5: mov     eax, ds:0B30AACh
0x8037EA: xor     eax, esp
0x8037EC: push    eax
0x8037ED: lea     eax, [esp+3Ch+var_1C.unk10]
0x8037F1: mov     large fs:0, eax
0x8037F7: mov     edi, ecx
0x8037F9: xor     ebp, ebp
0x8037FB: cmp     [edi+10h], ebp
0x8037FE: jnz     short loc_803805
0x803800: call    ImageSpaceShaderList__AssignScreenElements
0x803805: mov     eax, [edi+4]
0x803808: mov     ebx, [eax]
0x80380A: mov     esi, [eax+8]
0x80380D: lea     ecx, [eax+8]
0x803810: mov     [esp+3Ch+var_1C.numItems], ebp
0x803814: mov     [esp+3Ch+var_1C.start], ebp
0x803818: mov     [esp+3Ch+var_1C.end], ebp
0x80381C: mov     [esp+3Ch+var_1C.__vftable], offset ??_7?$NiTPointerList@PAVBSImageSpaceShader@@@@6B@; const NiTPointerList<BSImageSpaceShader *>::`vftable' ...
0x803824: cmp     esi, ebp
0x803826: mov     [esp+3Ch+var_1C.unk18], ebp
0x80382A: jz      short loc_803882
0x80382C: lea     esp, [esp+0]
0x803830: mov     eax, [esi]
0x803832: mov     edx, [eax+0ACh]
0x803838: mov     ecx, esi
0x80383A: call    edx
0x80383C: test    al, al
0x80383E: jz      short loc_803872
0x803840: mov     eax, [esp+3Ch+var_1C.__vftable]
0x803844: mov     edx, [eax+4]
0x803847: lea     ecx, [esp+3Ch+var_1C]
0x80384B: call    edx
0x80384D: mov     [eax+8], esi
0x803850: mov     [eax], ebp
0x803852: mov     ecx, [esp+3Ch+var_1C.end]
0x803856: mov     [eax+4], ecx
0x803859: mov     ecx, [esp+3Ch+var_1C.end]
0x80385D: cmp     ecx, ebp
0x80385F: jz      short loc_803865
0x803861: mov     [ecx], eax
0x803863: jmp     short loc_803869
0x803865: mov     [esp+3Ch+var_1C.start], eax
0x803869: add     [esp+3Ch+var_1C.numItems], 1
0x80386E: mov     [esp+3Ch+var_1C.end], eax
0x803872: cmp     ebx, ebp
0x803874: jz      short loc_803882
0x803876: mov     esi, [ebx+8]
0x803879: cmp     esi, ebp
0x80387B: lea     eax, [ebx+8]
0x80387E: mov     ebx, [ebx]
0x803880: jnz     short loc_803830
0x803882: mov     ebx, [esp+3Ch+var_1C.start]
0x803886: cmp     ebx, ebp
0x803888: jnz     short loc_8038CE
0x80388A: mov     eax, [edi+18h]
0x80388D: cmp     eax, ebp
0x80388F: jz      loc_8039CF
0x803895: mov     ecx, [edi+10h]; this
0x803898: push    eax; a2
0x803899: call    sub_4EC910
0x80389E: mov     eax, [edi+10h]
0x8038A1: mov     ecx, [edi+18h]
0x8038A4: mov     edx, [ecx]
0x8038A6: push    eax
0x8038A7: mov     eax, [edx+18h]
0x8038AA: call    eax
0x8038AC: mov     eax, [edi+10h]
0x8038AF: mov     ecx, [edi+18h]
0x8038B2: mov     edx, [ecx]
0x8038B4: push    1
0x8038B6: lea     esi, [esp+40h+arg_8]
0x8038BA: push    esi
0x8038BB: lea     esi, [esp+44h+arg_4]
0x8038BF: push    esi
0x8038C0: push    eax
0x8038C1: mov     eax, [edx+0A8h]
0x8038C7: call    eax
0x8038C9: jmp     loc_8039CF
0x8038CE: mov     ecx, [esp+3Ch+a2]
0x8038D2: push    3; a3
0x8038D4: push    ecx; a2
0x8038D5: mov     ecx, ds:0B42F50h; this
0x8038DB: lea     esi, [edi+14h]
0x8038DE: call    BSTextureManager_GetDefaultRenderTarget
0x8038E3: push    eax; a2
0x8038E4: mov     ecx, esi; this
0x8038E6: call    NiSmartPointer_Set??
0x8038EB: mov     eax, [esi]
0x8038ED: mov     esi, [ebx+8]
0x8038F0: cmp     esi, ebp
0x8038F2: mov     edx, [esp+3Ch+arg_4]
0x8038F6: mov     [esp+3Ch+var_28], eax
0x8038FA: lea     eax, [ebx+8]
0x8038FD: mov     ebx, [ebx]
0x8038FF: mov     [esp+3Ch+a2], edx
0x803903: jz      loc_8039C0
0x803909: lea     esp, [esp+0]
0x803910: mov     eax, [edi+10h]
0x803913: mov     ebp, [eax+0BCh]
0x803919: cmp     ebp, esi
0x80391B: mov     [esp+3Ch+var_24], eax
0x80391F: jz      short loc_803956
0x803921: test    ebp, ebp
0x803923: jz      short loc_803942
0x803925: lea     ecx, [ebp+4]
0x803928: push    ecx; lpAddend
0x803929: call    dword ptr ds:0A2807Ch
0x80392F: test    eax, eax
0x803931: jnz     short loc_803942
0x803933: test    ebp, ebp
0x803935: jz      short loc_803942
0x803937: mov     edx, [ebp+0]
0x80393A: mov     eax, [edx]
0x80393C: push    1
0x80393E: mov     ecx, ebp
0x803940: call    eax
0x803942: mov     ecx, [esp+3Ch+var_24]
0x803946: lea     edx, [esi+4]
0x803949: push    edx; lpAddend
0x80394A: mov     [ecx+0BCh], esi
0x803950: call    dword ptr ds:0A28078h
0x803956: mov     eax, [edi+10h]
0x803959: mov     edx, [esi]
0x80395B: push    eax
0x80395C: mov     eax, [edx+18h]
0x80395F: mov     ecx, esi
0x803961: call    eax
0x803963: test    ebx, ebx
0x803965: setz    al
0x803968: cmp     [esp+3Ch+a2], 0
0x80396D: mov     byte ptr [esp+3Ch+var_20], al
0x803971: jz      short loc_80399A
0x803973: test    al, al
0x803975: lea     ecx, [esp+3Ch+arg_8]
0x803979: jnz     short loc_80397F
0x80397B: lea     ecx, [esp+3Ch+var_28]
0x80397F: mov     ebp, [esp+3Ch+var_20]
0x803983: mov     eax, [edi+10h]
0x803986: mov     edx, [esi]
0x803988: mov     edx, [edx+0A8h]
0x80398E: push    ebp
0x80398F: push    ecx
0x803990: lea     ecx, [esp+44h+a2]
0x803994: push    ecx
0x803995: push    eax
0x803996: mov     ecx, esi
0x803998: call    edx
0x80399A: test    ebx, ebx
0x80399C: mov     eax, [esp+3Ch+a2]
0x8039A0: mov     ecx, [esp+3Ch+var_28]
0x8039A4: mov     [esp+3Ch+a2], ecx
0x8039A8: mov     [esp+3Ch+var_28], eax
0x8039AC: jz      short loc_8039BE
0x8039AE: mov     esi, [ebx+8]
0x8039B1: test    esi, esi
0x8039B3: lea     eax, [ebx+8]
0x8039B6: mov     ebx, [ebx]
0x8039B8: jnz     loc_803910
0x8039BE: xor     ebp, ebp
0x8039C0: mov     eax, [edi+14h]
0x8039C3: mov     ecx, ds:0B42F50h; this
0x8039C9: push    eax; a2
0x8039CA: call    sub_7C1EE0
0x8039CF: mov     edi, [edi+10h]
0x8039D2: mov     esi, [edi+0BCh]
0x8039D8: cmp     esi, ebp
0x8039DA: jz      short loc_8039FE
0x8039DC: lea     edx, [esi+4]
0x8039DF: push    edx; lpAddend
0x8039E0: call    dword ptr ds:0A2807Ch
0x8039E6: test    eax, eax
0x8039E8: jnz     short loc_8039F8
0x8039EA: cmp     esi, ebp
0x8039EC: jz      short loc_8039F8
0x8039EE: mov     eax, [esi]
0x8039F0: mov     edx, [eax]
0x8039F2: push    1
0x8039F4: mov     ecx, esi
0x8039F6: call    edx
0x8039F8: mov     [edi+0BCh], ebp
0x8039FE: lea     ecx, [esp+3Ch+var_1C]; this
0x803A02: mov     [esp+3Ch+var_1C.unk18], 0FFFFFFFFh
0x803A0A: call    ??1?$NiTPointerList@PAVBSImageSpaceShader@@@@UAE@XZ; NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(void)
0x803A0F: mov     ecx, [esp+3Ch+var_1C.unk10]
0x803A13: mov     large fs:0, ecx
0x803A1A: pop     ecx
0x803A1B: pop     edi
0x803A1C: pop     esi
0x803A1D: pop     ebp
0x803A1E: pop     ebx
0x803A1F: add     esp, 28h
0x803A22: retn    0Ch
