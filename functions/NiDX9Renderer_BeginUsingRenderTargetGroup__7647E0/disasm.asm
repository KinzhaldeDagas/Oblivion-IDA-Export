0x7647E0: push    ebx
0x7647E1: push    ebp
0x7647E2: mov     ebp, ecx
0x7647E4: cmp     byte ptr [ebp+6F0h], 0
0x7647EB: push    esi
0x7647EC: push    edi
0x7647ED: jnz     loc_764A12
0x7647F3: mov     eax, [ebp+280h]
0x7647F9: push    1; a2
0x7647FB: push    eax; a1
0x7647FC: call    UnsetRenderTarget
0x764801: mov     ecx, [ebp+280h]
0x764807: push    2; a2
0x764809: push    ecx; a1
0x76480A: call    UnsetRenderTarget
0x76480F: mov     edx, [ebp+280h]
0x764815: push    3; a2
0x764817: push    edx; a1
0x764818: call    UnsetRenderTarget
0x76481D: mov     edi, [esp+28h+arg_0]
0x764821: mov     eax, [edi]
0x764823: mov     edx, [eax+64h]
0x764826: add     esp, 18h
0x764829: mov     ecx, edi
0x76482B: xor     ebx, ebx
0x76482D: call    edx
0x76482F: test    eax, eax
0x764831: jbe     short loc_764898
0x764833: mov     eax, [edi]
0x764835: mov     edx, [eax+80h]
0x76483B: push    ebx
0x76483C: mov     ecx, edi
0x76483E: call    edx
0x764840: mov     esi, eax
0x764842: test    esi, esi
0x764844: jz      short loc_764888
0x764846: mov     eax, [esi]
0x764848: mov     edx, [eax+10h]
0x76484B: mov     ecx, esi
0x76484D: call    edx
0x76484F: test    eax, eax
0x764851: jz      short loc_764865
0x764853: cmp     eax, offset unk_B42654
0x764858: jz      loc_76492C
0x76485E: mov     eax, [eax+4]
0x764861: test    eax, eax
0x764863: jnz     short loc_764853
0x764865: xor     al, al
0x764867: neg     al
0x764869: sbb     eax, eax
0x76486B: and     eax, esi
0x76486D: jz      short loc_764888
0x76486F: mov     ecx, [ebp+280h]
0x764875: mov     edx, [eax]
0x764877: mov     edx, [edx+34h]
0x76487A: push    ebx
0x76487B: push    ecx
0x76487C: mov     ecx, eax
0x76487E: call    edx
0x764880: test    al, al
0x764882: jz      loc_764933
0x764888: mov     eax, [edi]
0x76488A: mov     edx, [eax+64h]
0x76488D: mov     ecx, edi
0x76488F: add     ebx, 1
0x764892: call    edx
0x764894: cmp     ebx, eax
0x764896: jb      short loc_764833
0x764898: mov     edx, [edi]
0x76489A: mov     eax, [edx+84h]
0x7648A0: mov     ecx, edi
0x7648A2: call    eax
0x7648A4: mov     esi, eax
0x7648A6: test    esi, esi
0x7648A8: jz      loc_76496E
0x7648AE: mov     edx, [esi]
0x7648B0: mov     eax, [edx+10h]
0x7648B3: mov     ecx, esi
0x7648B5: call    eax
0x7648B7: test    eax, eax
0x7648B9: jz      short loc_7648D2
0x7648BB: jmp     short loc_7648C0
0x7648BD: align 10h
0x7648C0: cmp     eax, offset unk_B4263C
0x7648C5: jz      loc_764967
0x7648CB: mov     eax, [eax+4]
0x7648CE: test    eax, eax
0x7648D0: jnz     short loc_7648C0
0x7648D2: xor     al, al
0x7648D4: neg     al
0x7648D6: sbb     eax, eax
0x7648D8: and     eax, esi
0x7648DA: jz      loc_76496E
0x7648E0: mov     ecx, [ebp+280h]
0x7648E6: mov     edx, [eax]
0x7648E8: mov     edx, [edx+38h]
0x7648EB: push    ecx
0x7648EC: mov     ecx, eax
0x7648EE: call    edx
0x7648F0: test    al, al
0x7648F2: jnz     loc_7649B5
0x7648F8: mov     ecx, [esp+10h+arg_4]
0x7648FC: mov     eax, [ebp+0]
0x7648FF: mov     edx, [ebp+87Ch]
0x764905: mov     eax, [eax+148h]
0x76490B: push    ecx
0x76490C: push    edx
0x76490D: mov     ecx, ebp
0x76490F: call    eax
0x764911: push    offset aSettingTheDept; "Setting the depth/stencil buffer failed"...
0x764916: push    offset aNidx9rendererB; "NiDX9Renderer::BeginUsingRenderTargetGr"...
0x76491B: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x764920: add     esp, 8
0x764923: pop     edi
0x764924: pop     esi
0x764925: pop     ebp
0x764926: xor     al, al
0x764928: pop     ebx
0x764929: retn    8
0x76492C: mov     al, 1
0x76492E: jmp     loc_764867
0x764933: mov     ecx, [esp+10h+arg_4]
0x764937: mov     eax, [ebp+0]
0x76493A: mov     edx, [ebp+87Ch]
0x764940: mov     eax, [eax+148h]
0x764946: push    ecx
0x764947: push    edx
0x764948: mov     ecx, ebp
0x76494A: call    eax
0x76494C: push    offset aSettingAnOutpu; "Setting an output target failed. Resett"...
0x764951: push    offset aNidx9rendererB; "NiDX9Renderer::BeginUsingRenderTargetGr"...
0x764956: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76495B: add     esp, 8
0x76495E: pop     edi
0x76495F: pop     esi
0x764960: pop     ebp
0x764961: xor     al, al
0x764963: pop     ebx
0x764964: retn    8
0x764967: mov     al, 1
0x764969: jmp     loc_7648D4
0x76496E: mov     ecx, [ebp+280h]
0x764974: push    ecx
0x764975: call    sub_76D4C0
0x76497A: add     esp, 4
0x76497D: test    al, al
0x76497F: jnz     short loc_7649B5
0x764981: mov     eax, [esp+10h+arg_4]
0x764985: mov     ecx, [ebp+87Ch]
0x76498B: mov     edx, [ebp+0]
0x76498E: mov     edx, [edx+148h]
0x764994: push    eax
0x764995: push    ecx
0x764996: mov     ecx, ebp
0x764998: call    edx
0x76499A: push    offset aSettingTheDe_0; "Setting the depth/stencil buffer to NUL"...
0x76499F: push    offset aNidx9rendererB; "NiDX9Renderer::BeginUsingRenderTargetGr"...
0x7649A4: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7649A9: add     esp, 8
0x7649AC: pop     edi
0x7649AD: pop     esi
0x7649AE: pop     ebp
0x7649AF: xor     al, al
0x7649B1: pop     ebx
0x7649B2: retn    8
0x7649B5: mov     [ebp+87Ch], edi
0x7649BB: mov     eax, [edi]
0x7649BD: mov     edx, [eax+80h]
0x7649C3: push    0
0x7649C5: mov     ecx, edi
0x7649C7: call    edx
0x7649C9: mov     esi, eax
0x7649CB: test    esi, esi
0x7649CD: jz      short loc_7649FE
0x7649CF: mov     eax, [esi]
0x7649D1: mov     edx, [eax+10h]
0x7649D4: mov     ecx, esi
0x7649D6: call    edx
0x7649D8: test    eax, eax
0x7649DA: jz      short loc_7649EE
0x7649DC: lea     esp, [esp+0]
0x7649E0: cmp     eax, offset unk_B4265C
0x7649E5: jz      short loc_764A1B
0x7649E7: mov     eax, [eax+4]
0x7649EA: test    eax, eax
0x7649EC: jnz     short loc_7649E0
0x7649EE: xor     al, al
0x7649F0: neg     al
0x7649F2: sbb     eax, eax
0x7649F4: and     eax, esi
0x7649F6: jz      short loc_7649FE
0x7649F8: mov     [ebp+880h], edi
0x7649FE: mov     ecx, [esp+10h+arg_4]
0x764A02: mov     eax, [ebp+0]
0x764A05: mov     edx, [eax+13Ch]
0x764A0B: push    ecx
0x764A0C: push    0
0x764A0E: mov     ecx, ebp
0x764A10: call    edx
0x764A12: pop     edi
0x764A13: pop     esi
0x764A14: pop     ebp
0x764A15: mov     al, 1
0x764A17: pop     ebx
0x764A18: retn    8
0x764A1B: mov     al, 1
0x764A1D: jmp     short loc_7649F0
