0x49CBF0: push    ebx
0x49CBF1: mov     ebx, [esp+4+a2]
0x49CBF5: push    ebp
0x49CBF6: push    esi
0x49CBF7: push    edi
0x49CBF8: movzx   edi, word ptr [ebx+14h]
0x49CBFC: test    edi, edi
0x49CBFE: mov     ebp, ecx
0x49CC00: jz      NiRenderer_ReflectionCull___def_49CC69; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CC06: mov     ecx, [ebx+10h]
0x49CC09: sub     edi, 1
0x49CC0C: movzx   eax, di
0x49CC0F: mov     esi, [ecx+eax*4]
0x49CC12: test    esi, esi
0x49CC14: jz      short loc_49CC3B
0x49CC16: mov     edx, [esi]
0x49CC18: mov     eax, [edx+4]
0x49CC1B: mov     ecx, esi
0x49CC1D: call    eax
0x49CC1F: test    eax, eax
0x49CC21: jz      short loc_49CC31
0x49CC23: cmp     eax, offset dword_B35ACC
0x49CC28: jz      short loc_49CC41
0x49CC2A: mov     eax, [eax+4]
0x49CC2D: test    eax, eax
0x49CC2F: jnz     short loc_49CC23
0x49CC31: xor     al, al
0x49CC33: neg     al
0x49CC35: sbb     eax, eax
0x49CC37: and     eax, esi
0x49CC39: jnz     short loc_49CC45
0x49CC3B: test    edi, edi
0x49CC3D: jnz     short loc_49CC06
0x49CC3F: jmp     short NiRenderer_ReflectionCull___def_49CC69; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CC41: mov     al, 1
0x49CC43: jmp     short loc_49CC33
0x49CC45: mov     ecx, [eax+0Ch]
0x49CC48: test    ecx, ecx
0x49CC4A: jz      short NiRenderer_ReflectionCull___def_49CC69; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CC4C: mov     edx, [ecx]
0x49CC4E: mov     eax, [edx+170h]
0x49CC54: call    eax
0x49CC56: movzx   eax, byte ptr [eax+4]
0x49CC5A: add     eax, 0FFFFFFEEh; switch 25 cases
0x49CC5D: cmp     eax, 18h
0x49CC60: ja      short NiRenderer_ReflectionCull___def_49CC69; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CC62: movzx   ecx, ds:byte_49CCEC[eax]
0x49CC69: jmp     ds:jpt_49CC69[ecx*4]; switch jump
0x49CC70: cmp     byte ptr ds:0B07068h, 0; jumptable 0049CC69 cases 35,36
0x49CC77: jnz     short NiRenderer_ReflectionCull___def_49CC69; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CC79: pop     edi
0x49CC7A: pop     esi
0x49CC7B: pop     ebp
0x49CC7C: pop     ebx
0x49CC7D: retn    4
0x49CC80: cmp     byte ptr ds:0B07070h, 0; jumptable 0049CC69 cases 30,31
0x49CC87: jnz     short NiRenderer_ReflectionCull___def_49CC69; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CC89: pop     edi
0x49CC8A: pop     esi
0x49CC8B: pop     ebp
0x49CC8C: pop     ebx
0x49CC8D: retn    4
0x49CC90: cmp     byte ptr ds:0B07078h, 0; jumptable 0049CC69 cases 18,23,24,28
0x49CC97: jnz     short NiRenderer_ReflectionCull___def_49CC69; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CC99: pop     edi
0x49CC9A: pop     esi
0x49CC9B: pop     ebp
0x49CC9C: pop     ebx
0x49CC9D: retn    4
0x49CCA0: cmp     byte ptr ds:0B07080h, 0; jumptable 0049CC69 cases 19-22,25,27,33,34,38-40,42
0x49CCA7: jz      short loc_49CCCE
0x49CCA9: cmp     byte ptr ds:0B3521Ch, 0; jumptable 0049CC69 default case, cases 26,29,32,37,41
0x49CCB0: jnz     short loc_49CCC6
0x49CCB2: lea     edx, [ebp+90h]
0x49CCB8: push    edx; a2
0x49CCB9: lea     ecx, [ebx+20h]; this
0x49CCBC: call    sub_47DA70
0x49CCC1: cmp     eax, 2
0x49CCC4: jz      short loc_49CCCE
0x49CCC6: push    ebx; a2
0x49CCC7: mov     ecx, ebp; this
0x49CCC9: call    NiCullingProcess_Culling?
0x49CCCE: pop     edi
0x49CCCF: pop     esi
0x49CCD0: pop     ebp
0x49CCD1: pop     ebx
0x49CCD2: retn    4
