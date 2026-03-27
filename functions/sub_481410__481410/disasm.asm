0x481410: push    esi
0x481411: mov     esi, [esp+4+arg_0]
0x481415: test    esi, esi
0x481417: jz      loc_4814BD
0x48141D: mov     eax, [esi]
0x48141F: mov     edx, [eax+0Ch]
0x481422: mov     ecx, esi
0x481424: call    edx
0x481426: test    eax, eax
0x481428: mov     ecx, esi
0x48142A: jz      short loc_481472
0x48142C: push    4
0x48142E: call    NiNode_GetNiPropertyByID
0x481433: mov     esi, eax
0x481435: test    esi, esi
0x481437: jz      short loc_48145C
0x481439: mov     eax, [esi]
0x48143B: mov     edx, [eax+54h]
0x48143E: mov     ecx, esi
0x481440: call    edx
0x481442: cmp     eax, 1
0x481445: jl      short loc_48145C
0x481447: mov     eax, [esi]
0x481449: mov     edx, [eax+54h]
0x48144C: mov     ecx, esi
0x48144E: call    edx
0x481450: cmp     eax, 0Ah
0x481453: jg      short loc_48145C
0x481455: mov     eax, 1
0x48145A: jmp     short loc_48145E
0x48145C: xor     eax, eax
0x48145E: neg     eax
0x481460: sbb     eax, eax
0x481462: and     eax, esi
0x481464: jz      short loc_4814BD
0x481466: mov     ecx, [esp+4+arg_4]
0x48146A: mov     [eax+98h], ecx
0x481470: pop     esi
0x481471: retn
0x481472: mov     edx, [esi]
0x481474: mov     eax, [edx+8]
0x481477: push    edi
0x481478: call    eax
0x48147A: mov     edi, eax
0x48147C: test    edi, edi
0x48147E: jz      short loc_4814BC
0x481480: movzx   eax, word ptr [edi+0B6h]
0x481487: xor     esi, esi
0x481489: test    eax, eax
0x48148B: jbe     short loc_4814BC
0x48148D: cmp     eax, esi
0x48148F: push    ebx
0x481490: mov     ebx, [esp+0Ch+arg_4]
0x481494: ja      short loc_48149A
0x481496: xor     eax, eax
0x481498: jmp     short loc_4814A3
0x48149A: mov     ecx, [edi+0B0h]
0x4814A0: mov     eax, [ecx+esi*4]
0x4814A3: push    ebx
0x4814A4: push    eax
0x4814A5: call    sub_481410
0x4814AA: movzx   eax, word ptr [edi+0B6h]
0x4814B1: add     esi, 1
0x4814B4: add     esp, 8
0x4814B7: cmp     eax, esi
0x4814B9: ja      short loc_48149A
0x4814BB: pop     ebx
0x4814BC: pop     edi
0x4814BD: pop     esi
0x4814BE: retn
