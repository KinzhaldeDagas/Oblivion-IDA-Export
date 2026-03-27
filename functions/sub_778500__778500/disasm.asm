0x778500: sub     esp, 18h
0x778503: cmp     dword ptr [ecx+8], 0
0x778507: mov     [esp+18h+var_18], ecx
0x77850A: jnz     short loc_778514
0x77850C: xor     eax, eax
0x77850E: add     esp, 18h
0x778511: retn    14h
0x778514: push    ebx
0x778515: mov     ebx, [esp+1Ch+arg_0]
0x778519: test    ebx, ebx
0x77851B: jz      short loc_778524
0x77851D: cmp     [esp+1Ch+arg_4], 0
0x778522: jnz     short loc_77852D
0x778524: xor     eax, eax
0x778526: pop     ebx
0x778527: add     esp, 18h
0x77852A: retn    14h
0x77852D: push    ebp
0x77852E: mov     ebp, [esp+20h+arg_C]
0x778532: push    esi
0x778533: mov     esi, [ecx+14h]
0x778536: test    esi, esi
0x778538: lea     eax, ds:4[ebx*4]
0x77853F: push    edi
0x778540: mov     edi, [esp+28h+arg_10]
0x778544: mov     [esp+28h+arg_0], eax
0x778548: jz      loc_778645
0x77854E: mov     ecx, [esi]
0x778550: xor     eax, eax
0x778552: lea     edx, [esp+28h+var_14]
0x778556: push    edx
0x778557: mov     [esp+2Ch+var_14], eax
0x77855B: mov     [esp+2Ch+var_10], eax
0x77855F: mov     [esp+2Ch+var_C], eax
0x778563: mov     [esp+2Ch+var_8], eax
0x778567: mov     [esp+2Ch+var_4], eax
0x77856B: mov     eax, [ecx+34h]
0x77856E: push    esi
0x77856F: call    eax
0x778571: test    eax, eax
0x778573: jl      loc_778641
0x778579: cmp     [esp+28h+var_14], 65h ; 'e'
0x77857E: jnz     loc_778639
0x778584: cmp     [esp+28h+var_10], 7
0x778589: jnz     loc_778639
0x77858F: cmp     [esp+28h+var_C], ebp
0x778593: jnz     loc_778639
0x778599: cmp     [esp+28h+var_8], edi
0x77859D: jnz     loc_778639
0x7785A3: mov     ecx, [esp+28h+var_4]
0x7785A7: cmp     ecx, [esp+28h+arg_0]
0x7785AB: jb      loc_778639
0x7785B1: mov     edi, esi
0x7785B3: mov     edx, [esp+28h+arg_0]
0x7785B7: mov     esi, [esp+28h+arg_8]
0x7785BB: push    0
0x7785BD: lea     ecx, [esp+2Ch+arg_10]
0x7785C1: push    ecx
0x7785C2: push    edx
0x7785C3: mov     dword ptr [esi], 0
0x7785C9: mov     eax, [edi]
0x7785CB: mov     eax, [eax+2Ch]
0x7785CE: push    0
0x7785D0: push    edi
0x7785D1: mov     [esp+3Ch+arg_10], 0
0x7785D9: call    eax
0x7785DB: test    eax, eax
0x7785DD: jl      loc_778678
0x7785E3: mov     eax, [esp+24h+arg_14]
0x7785E7: lea     ebp, [ebx-1]
0x7785EA: xor     edx, edx
0x7785EC: test    ebp, ebp
0x7785EE: jbe     short loc_77861A
0x7785F0: mov     ebx, 1
0x7785F5: mov     ecx, [esp+24h+arg_8]
0x7785F9: cmp     byte ptr [ecx], 0
0x7785FC: jz      short loc_778610
0x7785FE: movzx   ecx, dx
0x778601: mov     [eax], cx
0x778604: add     ecx, ebx
0x778606: mov     [eax+2], cx
0x77860A: add     eax, 4
0x77860D: add     dword ptr [esi], 2
0x778610: add     [esp+24h+arg_8], ebx
0x778614: add     edx, ebx
0x778616: cmp     edx, ebp
0x778618: jb      short loc_7785F5
0x77861A: mov     edx, [esp+24h+arg_8]
0x77861E: cmp     byte ptr [edx], 0
0x778621: jz      short loc_77862F
0x778623: mov     [eax], bp
0x778626: mov     word ptr [eax+2], 0
0x77862C: add     dword ptr [esi], 2
0x77862F: mov     eax, [edi]
0x778631: mov     ecx, [eax+30h]
0x778634: push    edi
0x778635: call    ecx
0x778637: jmp     short loc_778697
0x778639: mov     edx, [esi]
0x77863B: mov     eax, [edx+8]
0x77863E: push    esi
0x77863F: call    eax
0x778641: mov     ecx, [esp+28h+var_18]
0x778645: mov     edx, [esp+28h+arg_0]
0x778649: push    0
0x77864B: push    edi
0x77864C: push    65h ; 'e'
0x77864E: push    ebp
0x77864F: push    edx
0x778650: call    sub_778180
0x778655: mov     edi, eax
0x778657: test    edi, edi
0x778659: jnz     loc_7785B3
0x77865F: push    offset aNidx9indexbu_3; "NiDX9IndexBufferManager::ResizeTempLine"...
0x778664: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x778669: add     esp, 4
0x77866C: pop     edi
0x77866D: pop     esi
0x77866E: pop     ebp
0x77866F: xor     eax, eax
0x778671: pop     ebx
0x778672: add     esp, 18h
0x778675: retn    14h
0x778678: push    offset aNidx9indexbu_1; "NiDX9IndexBufferManager::PackBuffer> Fa"...
0x77867D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x778682: mov     edx, [edi]
0x778684: mov     eax, [edx+30h]
0x778687: add     esp, 4
0x77868A: push    edi
0x77868B: call    eax
0x77868D: mov     ecx, [edi]
0x77868F: mov     edx, [ecx+8]
0x778692: push    edi
0x778693: call    edx
0x778695: xor     edi, edi
0x778697: mov     eax, [esp+28h+var_18]
0x77869B: mov     ecx, [esp+28h+arg_0]
0x77869F: mov     [eax+14h], edi
0x7786A2: mov     [eax+18h], ecx
0x7786A5: mov     eax, edi
0x7786A7: pop     edi
0x7786A8: pop     esi
0x7786A9: pop     ebp
0x7786AA: pop     ebx
0x7786AB: add     esp, 18h
0x7786AE: retn    14h
