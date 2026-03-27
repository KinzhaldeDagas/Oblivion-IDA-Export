0x9481E0: push    esi
0x9481E1: mov     esi, ecx
0x9481E3: mov     eax, [esi+4]
0x9481E6: test    eax, eax
0x9481E8: jz      loc_948278
0x9481EE: push    ebx
0x9481EF: mov     ebx, [esp+8+arg_18]
0x9481F3: push    edi
0x9481F4: push    ebx
0x9481F5: call    sub_8B1860
0x9481FA: mov     ecx, [esi+4]
0x9481FD: mov     edi, eax
0x9481FF: add     esp, 4
0x948202: lea     eax, [edi+33h]
0x948205: push    eax
0x948206: call    sub_918440
0x94820B: mov     ecx, [esi+4]
0x94820E: push    0Dh
0x948210: call    sub_9181B0
0x948215: mov     ecx, [esp+0Ch+arg_0]
0x948219: push    ecx
0x94821A: mov     ecx, [esi+4]
0x94821D: call    sub_948800
0x948222: mov     edx, [esp+0Ch+arg_4]
0x948226: mov     ecx, [esi+4]
0x948229: push    edx
0x94822A: call    sub_948800
0x94822F: mov     eax, [esp+0Ch+arg_8]
0x948233: mov     ecx, [esi+4]
0x948236: push    eax
0x948237: call    sub_948800
0x94823C: mov     ecx, [esp+0Ch+arg_C]
0x948240: push    ecx
0x948241: mov     ecx, [esi+4]
0x948244: call    sub_918440
0x948249: mov     edx, [esp+0Ch+arg_10]
0x94824D: mov     ecx, [esi+4]
0x948250: push    edx
0x948251: call    sub_918440
0x948256: mov     eax, [esp+0Ch+arg_14]
0x94825A: mov     ecx, [esi+4]
0x94825D: push    eax
0x94825E: call    sub_918440
0x948263: mov     ecx, [esi+4]
0x948266: push    edi
0x948267: call    sub_918420
0x94826C: mov     ecx, [esi+4]
0x94826F: push    edi
0x948270: push    ebx
0x948271: call    sub_918390
0x948276: pop     edi
0x948277: pop     ebx
0x948278: mov     ecx, [esi+4]
0x94827B: test    ecx, ecx
0x94827D: pop     esi
0x94827E: jz      short loc_948294
0x948280: lea     edx, [esp+arg_18]
0x948284: push    edx
0x948285: call    sub_918060
0x94828A: cmp     byte ptr [eax], 0
0x94828D: jz      short loc_948294
0x94828F: xor     eax, eax
0x948291: retn    1Ch
0x948294: mov     eax, 1
0x948299: retn    1Ch
