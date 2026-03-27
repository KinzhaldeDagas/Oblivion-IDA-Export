0x603320: push    ebx
0x603321: push    esi
0x603322: mov     esi, ecx
0x603324: mov     eax, [esi]
0x603326: mov     edx, [eax+164h]
0x60332C: call    edx
0x60332E: test    eax, eax
0x603330: jz      short loc_603354
0x603332: mov     eax, [esi]
0x603334: mov     edx, [eax+164h]
0x60333A: push    1
0x60333C: mov     ecx, esi
0x60333E: call    edx
0x603340: mov     ecx, eax
0x603342: call    ActorAnimData_GetAnimGroupFromField8Value
0x603347: push    eax
0x603348: call    sub_51AC80
0x60334D: add     esp, 4
0x603350: mov     bl, al
0x603352: jmp     short loc_603356
0x603354: xor     bl, bl
0x603356: mov     eax, [esi]
0x603358: mov     edx, [eax+334h]
0x60335E: push    1
0x603360: mov     ecx, esi
0x603362: call    edx
0x603364: test    al, al
0x603366: jnz     loc_6034A6
0x60336C: mov     eax, [esi+0B0h]
0x603372: cmp     eax, 5
0x603375: jz      loc_6034A6
0x60337B: cmp     eax, 3
0x60337E: jz      loc_6034A6
0x603384: cmp     dword ptr [esi+58h], 0
0x603388: jz      loc_6034A6
0x60338E: test    bl, bl
0x603390: jnz     loc_6034A6
0x603396: mov     eax, [esi]
0x603398: mov     edx, [eax+284h]
0x60339E: push    edi
0x60339F: push    8
0x6033A1: mov     ecx, esi
0x6033A3: call    edx
0x6033A5: push    8
0x6033A7: mov     ecx, esi
0x6033A9: mov     edi, eax
0x6033AB: call    Actor_GetBaseCalcAVi
0x6033B0: cmp     edi, eax
0x6033B2: pop     edi
0x6033B3: jge     loc_6034A6
0x6033B9: mov     ecx, [esi+58h]
0x6033BC: mov     eax, [ecx]
0x6033BE: mov     edx, [eax+45Ch]
0x6033C4: call    edx
0x6033C6: test    eax, eax
0x6033C8: jz      short loc_603426
0x6033CA: push    0
0x6033CC: push    45484552h
0x6033D1: push    1Dh
0x6033D3: mov     ecx, esi
0x6033D5: call    sub_5E91E0
0x6033DA: mov     ecx, [esi+58h]
0x6033DD: mov     eax, [ecx]
0x6033DF: mov     edx, [eax+50h]
0x6033E2: call    edx
0x6033E4: test    eax, eax
0x6033E6: push    0
0x6033E8: jz      short loc_603419
0x6033EA: lea     ecx, [esi+68h]
0x6033ED: push    ecx
0x6033EE: push    eax
0x6033EF: lea     ecx, [esi+5Ch]
0x6033F2: call    MagicCaster_CastMagicItem
0x6033F7: test    al, al
0x6033F9: jz      short loc_60340A
0x6033FB: mov     ecx, [esi+58h]
0x6033FE: mov     edx, [ecx]
0x603400: mov     eax, [edx+458h]
0x603406: push    1
0x603408: call    eax
0x60340A: mov     ecx, [esi+58h]
0x60340D: mov     edx, [ecx]
0x60340F: mov     eax, [edx+54h]
0x603412: push    0
0x603414: call    eax
0x603416: pop     esi
0x603417: pop     ebx
0x603418: retn
0x603419: mov     ecx, [esi+58h]
0x60341C: mov     edx, [ecx]
0x60341E: mov     eax, [edx+458h]
0x603424: call    eax
0x603426: mov     ecx, [esi+58h]
0x603429: mov     edx, [ecx]
0x60342B: mov     eax, [edx+464h]
0x603431: call    eax
0x603433: test    eax, eax
0x603435: jz      short loc_6034A6
0x603437: push    0; a2
0x603439: mov     ecx, esi; this
0x60343B: call    Actor_GetActorBaseForm
0x603440: test    eax, eax
0x603442: jz      short loc_603449
0x603444: add     eax, 44h ; 'D'
0x603447: jmp     short loc_60344B
0x603449: xor     eax, eax
0x60344B: push    eax
0x60344C: push    esi; a1
0x60344D: call    ContainerExtraData_GetContainerExtraDataForRef
0x603452: add     esp, 8
0x603455: test    eax, eax
0x603457: jz      short loc_603497
0x603459: push    45484552h
0x60345E: mov     ecx, eax
0x603460: call    sub_4865F0
0x603465: test    eax, eax
0x603467: jz      short loc_603497
0x603469: mov     edx, [eax]
0x60346B: xor     ecx, ecx
0x60346D: test    edx, edx
0x60346F: jz      short loc_603473
0x603471: mov     ecx, [edx]
0x603473: push    0
0x603475: push    1
0x603477: push    ecx
0x603478: mov     ecx, [eax+8]
0x60347B: push    1
0x60347D: push    ecx
0x60347E: mov     ecx, esi
0x603480: call    Actor_EquipItem
0x603485: mov     ecx, [esi+58h]
0x603488: mov     edx, [ecx]
0x60348A: mov     eax, [edx+460h]
0x603490: push    1
0x603492: call    eax
0x603494: pop     esi
0x603495: pop     ebx
0x603496: retn
0x603497: mov     ecx, [esi+58h]
0x60349A: mov     edx, [ecx]
0x60349C: mov     eax, [edx+460h]
0x6034A2: push    0
0x6034A4: call    eax
0x6034A6: pop     esi
0x6034A7: pop     ebx
0x6034A8: retn
