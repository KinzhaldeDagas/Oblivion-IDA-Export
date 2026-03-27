0x486240: push    ebp
0x486241: mov     ebp, ecx
0x486243: mov     ecx, [ebp+4]; this
0x486246: test    ecx, ecx
0x486248: push    esi
0x486249: push    edi
0x48624A: jz      short loc_486253
0x48624C: call    TESObjectREFR_GetContainer
0x486251: jmp     short loc_486255
0x486253: xor     eax, eax
0x486255: push    ebx
0x486256: lea     ebx, [eax+8]
0x486259: xor     edi, edi
0x48625B: test    ebx, ebx
0x48625D: jz      short loc_4862CF
0x48625F: nop
0x486260: test    edi, edi
0x486262: jnz     short loc_4862CF
0x486264: mov     esi, [ebx]
0x486266: test    esi, esi
0x486268: jz      short loc_4862CF
0x48626A: mov     edi, [esi+4]
0x48626D: test    edi, edi
0x48626F: jz      short loc_4862C6
0x486271: movzx   eax, byte ptr [edi+4]
0x486275: cmp     eax, [esp+10h+arg_0]
0x486279: jnz     short loc_4862C6
0x48627B: mov     eax, [ebp+0]
0x48627E: test    eax, eax
0x486280: mov     dl, 1
0x486282: jz      short loc_48629E
0x486284: test    dl, dl
0x486286: jz      short loc_4862A8
0x486288: mov     ecx, [eax]
0x48628A: test    ecx, ecx
0x48628C: jz      short loc_486297
0x48628E: cmp     [ecx+8], edi
0x486291: jnz     short loc_486297
0x486293: xor     dl, dl
0x486295: jmp     short loc_48629A
0x486297: mov     eax, [eax+4]
0x48629A: test    eax, eax
0x48629C: jnz     short loc_486284
0x48629E: mov     edx, [esi]
0x4862A0: mov     eax, [esp+10h+arg_4]
0x4862A4: mov     [eax], edx
0x4862A6: jmp     short loc_4862C8
0x4862A8: test    eax, eax
0x4862AA: jz      short loc_48629E
0x4862AC: mov     eax, [eax]
0x4862AE: test    eax, eax
0x4862B0: jz      short loc_48629E
0x4862B2: mov     ecx, [eax+4]
0x4862B5: mov     edx, [esi]
0x4862B7: lea     eax, [ecx+edx]
0x4862BA: test    eax, eax
0x4862BC: jz      short loc_4862C8
0x4862BE: mov     ecx, [esp+10h+arg_4]
0x4862C2: mov     [ecx], eax
0x4862C4: jmp     short loc_4862C8
0x4862C6: xor     edi, edi
0x4862C8: mov     ebx, [ebx+4]
0x4862CB: test    ebx, ebx
0x4862CD: jnz     short loc_486260
0x4862CF: mov     esi, [ebp+0]
0x4862D2: test    esi, esi
0x4862D4: pop     ebx
0x4862D5: jz      short loc_486328
0x4862D7: test    edi, edi
0x4862D9: jnz     short loc_486328
0x4862DB: mov     eax, [esi]
0x4862DD: test    eax, eax
0x4862DF: jz      short loc_486328
0x4862E1: mov     edi, [eax+8]
0x4862E4: test    edi, edi
0x4862E6: jz      short loc_48631F
0x4862E8: movzx   ecx, byte ptr [edi+4]
0x4862EC: cmp     ecx, [esp+0Ch+arg_0]
0x4862F0: jnz     short loc_48631F
0x4862F2: mov     ecx, [ebp+4]; this
0x4862F5: test    ecx, ecx
0x4862F7: jz      short loc_486300
0x4862F9: call    TESObjectREFR_GetContainer
0x4862FE: jmp     short loc_486302
0x486300: xor     eax, eax
0x486302: push    edi; a2
0x486303: mov     ecx, eax; this
0x486305: call    TESContainer_HasForm
0x48630A: test    al, al
0x48630C: jnz     short loc_486321
0x48630E: mov     edx, [esi]
0x486310: mov     eax, [edx+4]
0x486313: test    eax, eax
0x486315: jle     short loc_486321
0x486317: mov     ecx, [esp+0Ch+arg_4]
0x48631B: mov     [ecx], eax
0x48631D: jmp     short loc_486321
0x48631F: xor     edi, edi
0x486321: mov     esi, [esi+4]
0x486324: test    esi, esi
0x486326: jnz     short loc_4862D7
0x486328: mov     eax, edi
0x48632A: pop     edi
0x48632B: pop     esi
0x48632C: pop     ebp
0x48632D: retn    8
