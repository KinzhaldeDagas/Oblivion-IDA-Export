0x9512F0: sub     esp, 18h
0x9512F3: mov     eax, [esp+18h+arg_18]
0x9512F7: mov     ecx, [esp+18h+arg_10]
0x9512FB: mov     edx, [esp+18h+arg_C]
0x9512FF: push    ebp
0x951300: push    eax; float
0x951301: mov     eax, [esp+20h+arg_4]
0x951305: push    ecx; int
0x951306: push    edx; int
0x951307: push    eax; int
0x951308: lea     ecx, [esp+2Ch+var_15]
0x95130C: push    ecx; int
0x95130D: call    sub_9511B0
0x951312: mov     cl, [eax]
0x951314: mov     eax, [esp+30h+arg_14]
0x951318: mov     ebp, [eax+4]
0x95131B: add     esp, 14h
0x95131E: test    cl, cl
0x951320: setnz   dl
0x951323: xor     ecx, ecx
0x951325: test    ebp, ebp
0x951327: mov     [esp+1Ch+var_15+1], dl
0x95132B: mov     [esp+1Ch+var_4], ecx
0x95132F: jle     loc_9513DD
0x951335: push    ebx
0x951336: push    esi
0x951337: push    edi
0x951338: xor     ebx, ebx
0x95133A: lea     ebx, [ebx+0]
0x951340: xor     edi, edi
0x951342: test    ebp, ebp
0x951344: mov     [esp+28h+var_10], 0
0x951349: mov     [esp+28h+var_C], 0
0x95134E: mov     [esp+28h+var_8], 0
0x951353: jle     short loc_951391
0x951355: xor     esi, esi
0x951357: cmp     edi, ecx
0x951359: jz      short loc_951389
0x95135B: mov     ecx, [esp+28h+arg_14]
0x95135F: mov     eax, [ecx]
0x951361: lea     edx, [esp+28h+var_8]
0x951365: push    edx
0x951366: lea     ecx, [esp+2Ch+var_C]
0x95136A: push    ecx
0x95136B: lea     edx, [esp+30h+var_10]
0x95136F: push    edx
0x951370: lea     ecx, [esi+eax]
0x951373: push    ecx
0x951374: lea     edx, [ebx+eax]
0x951377: push    edx
0x951378: lea     eax, [esp+3Ch+var_15]
0x95137C: push    eax
0x95137D: call    sub_9510E0
0x951382: mov     ecx, [esp+40h+var_4]
0x951386: add     esp, 18h
0x951389: inc     edi
0x95138A: add     esi, 20h ; ' '
0x95138D: cmp     edi, ebp
0x95138F: jl      short loc_951357
0x951391: mov     al, [esp+28h+var_15+1]
0x951395: test    al, al
0x951397: jz      short loc_9513B5
0x951399: mov     al, [esp+28h+var_10]
0x95139D: test    al, al
0x95139F: jz      short loc_9513B5
0x9513A1: mov     al, [esp+28h+var_C]
0x9513A5: test    al, al
0x9513A7: jz      short loc_9513B5
0x9513A9: mov     al, [esp+28h+var_8]
0x9513AD: test    al, al
0x9513AF: jz      short loc_9513B5
0x9513B1: mov     al, 1
0x9513B3: jmp     short loc_9513B7
0x9513B5: xor     al, al
0x9513B7: inc     ecx
0x9513B8: add     ebx, 20h ; ' '
0x9513BB: cmp     ecx, ebp
0x9513BD: mov     [esp+28h+var_15+1], al
0x9513C1: mov     [esp+28h+var_4], ecx
0x9513C5: jl      loc_951340
0x9513CB: mov     eax, [esp+28h+arg_0]
0x9513CF: mov     cl, [esp+28h+var_15+1]
0x9513D3: pop     edi
0x9513D4: pop     esi
0x9513D5: pop     ebx
0x9513D6: mov     [eax], cl
0x9513D8: pop     ebp
0x9513D9: add     esp, 18h
0x9513DC: retn
0x9513DD: mov     eax, [esp+1Ch+arg_0]
0x9513E1: mov     [eax], dl
0x9513E3: pop     ebp
0x9513E4: add     esp, 18h
0x9513E7: retn
