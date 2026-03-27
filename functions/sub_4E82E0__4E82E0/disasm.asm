0x4E82E0: push    0FFFFFFFFh
0x4E82E2: push    offset SEH_4E82E0
0x4E82E7: mov     eax, large fs:0
0x4E82ED: push    eax
0x4E82EE: sub     esp, 50h
0x4E82F1: push    ebx
0x4E82F2: push    ebp
0x4E82F3: push    esi
0x4E82F4: push    edi
0x4E82F5: mov     eax, ds:0B30AACh
0x4E82FA: xor     eax, esp
0x4E82FC: push    eax
0x4E82FD: lea     eax, [esp+70h+var_C]
0x4E8301: mov     large fs:0, eax
0x4E8307: mov     ebp, ecx
0x4E8309: mov     edi, [esp+70h+arg_0]
0x4E830D: xor     ebx, ebx
0x4E830F: cmp     edi, ebx
0x4E8311: jz      loc_4E8729
0x4E8317: cmp     [ebp+28h], ebx
0x4E831A: jz      short loc_4E8321
0x4E831C: call    sub_4E8190
0x4E8321: push    0DCh ; 'Ü'; Size
0x4E8326: call    FormHeapAlloc
0x4E832B: add     esp, 4
0x4E832E: mov     [esp+70h+var_48], eax
0x4E8332: cmp     eax, ebx
0x4E8334: mov     [esp+70h+var_4], ebx
0x4E8338: jz      short loc_4E8344
0x4E833A: push    ebx
0x4E833B: mov     ecx, eax; this
0x4E833D: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4E8342: jmp     short loc_4E8346
0x4E8344: xor     eax, eax
0x4E8346: mov     [ebp+28h], eax
0x4E8349: fld     dword ptr [ebp+14h]
0x4E834C: fldz
0x4E834E: mov     [esp+70h+var_4], 0FFFFFFFFh
0x4E8356: fadd    st(1), st
0x4E8358: fxch    st(1)
0x4E835A: fstp    [esp+70h+var_58]
0x4E835E: fadd    dword ptr [ebp+18h]
0x4E8361: fstp    [esp+70h+var_5C]
0x4E8365: fld     dword ptr [ebp+1Ch]
0x4E8368: fadd    qword ptr ds:0A3F3F0h
0x4E836E: fstp    [esp+70h+var_54]
0x4E8372: fld     [esp+70h+var_58]
0x4E8376: fstp    [esp+70h+var_44]
0x4E837A: mov     ecx, [esp+70h+var_44]
0x4E837E: fld     [esp+70h+var_5C]
0x4E8382: mov     [eax+54h], ecx
0x4E8385: fstp    [esp+70h+var_40]
0x4E8389: mov     edx, [esp+70h+var_40]
0x4E838D: fld     [esp+70h+var_54]
0x4E8391: mov     [eax+58h], edx
0x4E8394: fstp    [esp+70h+var_3C]
0x4E8398: mov     ecx, [esp+70h+var_3C]
0x4E839C: mov     [eax+5Ch], ecx
0x4E839F: fld     dword ptr [ebp+1Ch]
0x4E83A2: fstp    [esp+70h+var_54]
0x4E83A6: fld     [esp+70h+var_54]
0x4E83AA: fistp   [esp+70h+var_5C]
0x4E83AE: test    byte ptr [esp+70h+var_5C], 1
0x4E83B3: mov     ecx, ds:0B36088h
0x4E83B9: jnz     short loc_4E83C1
0x4E83BB: mov     ecx, ds:0B36084h
0x4E83C1: call    sub_700900
0x4E83C6: push    eax
0x4E83C7: push    offset dword_B3FCD4
0x4E83CC: call    NiRTTI_Cast
0x4E83D1: mov     ecx, [ebp+28h]
0x4E83D4: mov     edx, [ecx]
0x4E83D6: mov     edx, [edx+90h]
0x4E83DC: add     esp, 8
0x4E83DF: push    eax
0x4E83E0: push    ebx
0x4E83E1: lea     eax, [esp+78h+var_54]
0x4E83E5: push    eax
0x4E83E6: call    edx
0x4E83E8: mov     eax, [esp+70h+var_54]
0x4E83EC: cmp     eax, ebx
0x4E83EE: jz      short loc_4E840E
0x4E83F0: mov     esi, eax
0x4E83F2: add     eax, 4
0x4E83F5: push    eax; lpAddend
0x4E83F6: call    dword ptr ds:0A2807Ch
0x4E83FC: test    eax, eax
0x4E83FE: jnz     short loc_4E840E
0x4E8400: cmp     esi, ebx
0x4E8402: jz      short loc_4E840E
0x4E8404: mov     eax, [esi]
0x4E8406: mov     edx, [eax]
0x4E8408: push    1
0x4E840A: mov     ecx, esi
0x4E840C: call    edx
0x4E840E: cmp     [ebp+24h], ebx
0x4E8411: lea     esi, [ebp+20h]
0x4E8414: jnz     short loc_4E841E
0x4E8416: cmp     [esi], ebx
0x4E8418: jz      loc_4E86B1
0x4E841E: cmp     byte ptr [esp+70h+arg_4], 0
0x4E8423: mov     [esp+70h+var_44], ebx
0x4E8427: mov     [esp+70h+var_40], ebx
0x4E842B: jz      short loc_4E8444
0x4E842D: test    esi, esi
0x4E842F: mov     eax, esi
0x4E8431: jz      short loc_4E8489
0x4E8433: cmp     dword ptr [eax], 0
0x4E8436: jz      short loc_4E843B
0x4E8438: add     ebx, 1
0x4E843B: mov     eax, [eax+4]
0x4E843E: test    eax, eax
0x4E8440: jnz     short loc_4E8433
0x4E8442: jmp     short loc_4E8489
0x4E8444: push    ebp
0x4E8445: mov     ecx, edi
0x4E8447: call    sub_4E4E90
0x4E844C: test    esi, esi
0x4E844E: mov     [esp+70h+arg_4], eax
0x4E8452: jz      short loc_4E8485
0x4E8454: cmp     dword ptr [esi+4], 0
0x4E8458: jnz     short loc_4E845F
0x4E845A: cmp     dword ptr [esi], 0
0x4E845D: jz      short loc_4E8485
0x4E845F: mov     edi, [esi]
0x4E8461: mov     ecx, [esp+70h+arg_0]
0x4E8465: push    edi
0x4E8466: call    sub_4E4E90
0x4E846B: cmp     eax, [esp+70h+arg_4]
0x4E846F: jle     short loc_4E847E
0x4E8471: push    edi
0x4E8472: lea     ecx, [esp+74h+var_44]
0x4E8476: add     ebx, 1
0x4E8479: call    BSSimpleList_PushFront
0x4E847E: mov     esi, [esi+4]
0x4E8481: test    esi, esi
0x4E8483: jnz     short loc_4E8454
0x4E8485: lea     esi, [esp+70h+var_44]
0x4E8489: test    ebx, ebx
0x4E848B: jz      loc_4E86A2
0x4E8491: lea     edi, [ebx+ebx]
0x4E8494: xor     ecx, ecx
0x4E8496: mov     eax, edi
0x4E8498: mov     edx, 0Ch
0x4E849D: mul     edx
0x4E849F: seto    cl
0x4E84A2: mov     [esp+70h+arg_4], edi
0x4E84A6: neg     ecx
0x4E84A8: or      ecx, eax
0x4E84AA: push    ecx; Size
0x4E84AB: call    FormHeapAlloc
0x4E84B0: mov     [esp+74h+var_58], eax
0x4E84B4: xor     ecx, ecx
0x4E84B6: mov     eax, edi
0x4E84B8: mov     edx, 10h
0x4E84BD: mul     edx
0x4E84BF: seto    cl
0x4E84C2: neg     ecx
0x4E84C4: or      ecx, eax
0x4E84C6: push    ecx; Size
0x4E84C7: call    FormHeapAlloc
0x4E84CC: mov     ebx, eax
0x4E84CE: add     esp, 8
0x4E84D1: mov     [esp+70h+var_48], ebx
0x4E84D5: test    ebx, ebx
0x4E84D7: mov     [esp+70h+var_4], 1
0x4E84DF: jz      short loc_4E84F1
0x4E84E1: push    offset sub_47EA50
0x4E84E6: push    edi
0x4E84E7: push    10h
0x4E84E9: push    ebx
0x4E84EA: call    sub_401080
0x4E84EF: jmp     short loc_4E84F3
0x4E84F1: xor     ebx, ebx
0x4E84F3: push    edi; Size
0x4E84F4: mov     [esp+74h+var_5C], ebx
0x4E84F8: mov     [esp+74h+var_4], 0FFFFFFFFh
0x4E8500: call    FormHeapAlloc
0x4E8505: add     esp, 4
0x4E8508: test    esi, esi
0x4E850A: mov     [esp+70h+var_48], eax
0x4E850E: jz      loc_4E8621
0x4E8514: fld1
0x4E8516: mov     ecx, [esp+70h+var_58]
0x4E851A: fldz
0x4E851C: mov     edx, eax
0x4E851E: mov     eax, ebx
0x4E8520: cmp     dword ptr [esi+4], 0
0x4E8524: jnz     short loc_4E852F
0x4E8526: cmp     dword ptr [esi], 0
0x4E8529: jz      loc_4E861D
0x4E852F: mov     edi, [esi]
0x4E8531: fxch    st(1)
0x4E8533: mov     ebx, ds:0B3F9A8h
0x4E8539: fst     [esp+70h+var_2C]
0x4E853D: mov     [ecx], ebx
0x4E853F: fst     [esp+70h+var_28]
0x4E8543: mov     ebx, ds:0B3F9ACh
0x4E8549: fst     [esp+70h+var_20]
0x4E854D: mov     [ecx+4], ebx
0x4E8550: fxch    st(1)
0x4E8552: mov     ebx, ds:0B3F9B0h
0x4E8558: fst     [esp+70h+var_24]
0x4E855C: mov     [ecx+8], ebx
0x4E855F: mov     ebx, [esp+70h+var_2C]
0x4E8563: mov     byte ptr [edx], 1
0x4E8566: mov     [eax], ebx
0x4E8568: mov     ebx, [esp+70h+var_28]
0x4E856C: mov     [eax+4], ebx
0x4E856F: mov     ebx, [esp+70h+var_24]
0x4E8573: mov     [eax+8], ebx
0x4E8576: mov     ebx, [esp+70h+var_20]
0x4E857A: mov     [eax+0Ch], ebx
0x4E857D: fld     dword ptr [edi+14h]
0x4E8580: fsub    dword ptr [ebp+14h]
0x4E8583: add     ecx, 0Ch
0x4E8586: add     eax, 10h
0x4E8589: add     edx, 1
0x4E858C: fstp    [esp+70h+var_54]
0x4E8590: add     ecx, 0Ch
0x4E8593: fld     dword ptr [edi+18h]
0x4E8596: add     edx, 1
0x4E8599: fsub    dword ptr [ebp+18h]
0x4E859C: add     eax, 10h
0x4E859F: fstp    [esp+70h+var_50]
0x4E85A3: fld     dword ptr [edi+1Ch]
0x4E85A6: fsub    dword ptr [ebp+1Ch]
0x4E85A9: fstp    [esp+70h+var_4C]
0x4E85AD: fld     [esp+70h+var_54]
0x4E85B1: fstp    [esp+70h+var_38]
0x4E85B5: mov     edi, [esp+70h+var_38]
0x4E85B9: fld     [esp+70h+var_50]
0x4E85BD: mov     [ecx-0Ch], edi
0x4E85C0: fstp    [esp+70h+var_34]
0x4E85C4: mov     edi, [esp+70h+var_34]
0x4E85C8: fld     [esp+70h+var_4C]
0x4E85CC: mov     [ecx-8], edi
0x4E85CF: fstp    [esp+70h+var_30]
0x4E85D3: mov     edi, [esp+70h+var_30]
0x4E85D7: mov     [ecx-4], edi
0x4E85DA: fxch    st(1)
0x4E85DC: mov     byte ptr [edx-1], 0
0x4E85E0: fst     [esp+70h+var_1C]
0x4E85E4: mov     edi, [esp+70h+var_1C]
0x4E85E8: fst     [esp+70h+var_18]
0x4E85EC: mov     [eax-10h], edi
0x4E85EF: fst     [esp+70h+var_10]
0x4E85F3: mov     edi, [esp+70h+var_18]
0x4E85F7: fxch    st(1)
0x4E85F9: mov     [eax-0Ch], edi
0x4E85FC: fst     [esp+70h+var_14]
0x4E8600: mov     edi, [esp+70h+var_14]
0x4E8604: mov     [eax-8], edi
0x4E8607: mov     edi, [esp+70h+var_10]
0x4E860B: mov     [eax-4], edi
0x4E860E: mov     esi, [esi+4]
0x4E8611: test    esi, esi
0x4E8613: mov     edi, [esp+70h+arg_4]
0x4E8617: jnz     loc_4E8520
0x4E861D: fstp    st(1)
0x4E861F: fstp    st
0x4E8621: push    0C0h ; 'À'; Size
0x4E8626: call    FormHeapAlloc
0x4E862B: add     esp, 4
0x4E862E: mov     [esp+70h+arg_4], eax
0x4E8632: test    eax, eax
0x4E8634: mov     [esp+70h+var_4], 2
0x4E863C: jz      short loc_4E865D
0x4E863E: mov     ecx, [esp+70h+var_48]
0x4E8642: mov     edx, [esp+70h+var_5C]
0x4E8646: push    ecx
0x4E8647: mov     ecx, [esp+74h+var_58]
0x4E864B: push    0
0x4E864D: push    0
0x4E864F: push    0
0x4E8651: push    edx
0x4E8652: push    ecx
0x4E8653: push    edi
0x4E8654: mov     ecx, eax
0x4E8656: call    sub_7177E0
0x4E865B: jmp     short loc_4E865F
0x4E865D: xor     eax, eax
0x4E865F: mov     ecx, [ebp+28h]
0x4E8662: mov     edx, [ecx]
0x4E8664: mov     edx, [edx+90h]
0x4E866A: push    eax
0x4E866B: push    1
0x4E866D: lea     eax, [esp+78h+var_48]
0x4E8671: push    eax
0x4E8672: mov     [esp+7Ch+var_4], 0FFFFFFFFh
0x4E867A: call    edx
0x4E867C: mov     eax, [esp+70h+var_48]
0x4E8680: test    eax, eax
0x4E8682: jz      short loc_4E86A2
0x4E8684: mov     esi, eax
0x4E8686: add     eax, 4
0x4E8689: push    eax; lpAddend
0x4E868A: call    dword ptr ds:0A2807Ch
0x4E8690: test    eax, eax
0x4E8692: jnz     short loc_4E86A2
0x4E8694: test    esi, esi
0x4E8696: jz      short loc_4E86A2
0x4E8698: mov     eax, [esi]
0x4E869A: mov     edx, [eax]
0x4E869C: push    1
0x4E869E: mov     ecx, esi
0x4E86A0: call    edx
0x4E86A2: lea     ecx, [esp+70h+var_44]
0x4E86A6: call    BSSimpleList_Clear
0x4E86AB: mov     edi, [esp+70h+arg_0]
0x4E86AF: xor     ebx, ebx
0x4E86B1: mov     ecx, ebp
0x4E86B3: call    sub_67ED70
0x4E86B8: test    al, al
0x4E86BA: jz      short loc_4E8705
0x4E86BC: push    1Ch; Size
0x4E86BE: call    FormHeapAlloc
0x4E86C3: mov     esi, eax
0x4E86C5: add     esp, 4
0x4E86C8: mov     [esp+70h+arg_4], esi
0x4E86CC: cmp     esi, ebx
0x4E86CE: mov     [esp+70h+var_4], 3
0x4E86D6: jz      short loc_4E86ED
0x4E86D8: mov     ecx, esi; this
0x4E86DA: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x4E86DF: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x4E86E5: mov     [esi+18h], bx
0x4E86E9: mov     eax, esi
0x4E86EB: jmp     short loc_4E86EF
0x4E86ED: xor     eax, eax
0x4E86EF: or      word ptr [eax+18h], 1
0x4E86F4: mov     ecx, [ebp+28h]; this
0x4E86F7: push    eax; a2
0x4E86F8: mov     [esp+74h+var_4], 0FFFFFFFFh
0x4E8700: call    sub_405680
0x4E8705: mov     ecx, edi; this
0x4E8707: call    TESObjectREFR_GetBaseForm
0x4E870C: test    eax, eax
0x4E870E: jz      short loc_4E8729
0x4E8710: mov     ecx, edi; this
0x4E8712: call    TESObjectREFR_GetBaseForm
0x4E8717: mov     ecx, [ebp+28h]
0x4E871A: mov     edx, [eax]
0x4E871C: mov     edx, [edx+84h]
0x4E8722: push    1
0x4E8724: push    ecx
0x4E8725: mov     ecx, eax
0x4E8727: call    edx
0x4E8729: mov     ecx, [esp+70h+var_C]
0x4E872D: mov     large fs:0, ecx
0x4E8734: pop     ecx
0x4E8735: pop     edi
0x4E8736: pop     esi
0x4E8737: pop     ebp
0x4E8738: pop     ebx
0x4E8739: add     esp, 5Ch
0x4E873C: retn    8
