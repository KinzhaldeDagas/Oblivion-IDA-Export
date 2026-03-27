0x4823D0: fld     [esp+arg_0]
0x4823D4: push    ebx
0x4823D5: push    ebp
0x4823D6: push    edi
0x4823D7: push    ecx
0x4823D8: fstp    [esp+10h+var_10]
0x4823DB: mov     ebx, ecx
0x4823DD: call    sub_4CCCE0
0x4823E2: mov     ebp, [ebx+0Ch]
0x4823E5: add     esp, 4
0x4823E8: cmp     byte ptr ds:0B3440Ch, 0
0x4823EF: setz    byte ptr ds:0B3440Ch
0x4823F6: xor     edi, edi
0x4823F8: test    ebp, ebp
0x4823FA: jbe     short loc_482465
0x4823FC: push    esi
0x4823FD: lea     ecx, [ecx+0]
0x482400: xor     esi, esi
0x482402: test    edi, edi
0x482404: mov     al, 1
0x482406: jz      short loc_482417
0x482408: test    esi, esi
0x48240A: jz      short loc_482417
0x48240C: lea     ecx, [ebp-1]
0x48240F: cmp     edi, ecx
0x482411: jz      short loc_482417
0x482413: cmp     esi, ecx
0x482415: jnz     short loc_482434
0x482417: mov     ecx, esi
0x482419: xor     ecx, edi
0x48241B: test    cl, 1
0x48241E: jz      short loc_482422
0x482420: xor     al, al
0x482422: cmp     byte ptr ds:0B3440Ch, 0
0x482429: jz      short loc_482430
0x48242B: test    al, al
0x48242D: setz    al
0x482430: test    al, al
0x482432: jz      short loc_482456
0x482434: mov     edx, [ebx+0Ch]
0x482437: mov     eax, [ebx+10h]
0x48243A: imul    edx, edi
0x48243D: add     edx, esi
0x48243F: mov     ecx, [eax+edx*8]
0x482442: test    ecx, ecx
0x482444: lea     eax, [eax+edx*8]
0x482447: jz      short loc_482456
0x482449: fld     [esp+10h+arg_0]
0x48244D: push    ecx
0x48244E: fstp    [esp+14h+var_14]; float
0x482451: call    sub_4D4970
0x482456: add     esi, 1
0x482459: cmp     esi, ebp
0x48245B: jb      short loc_482402
0x48245D: add     edi, 1
0x482460: cmp     edi, ebp
0x482462: jb      short loc_482400
0x482464: pop     esi
0x482465: pop     edi
0x482466: pop     ebp
0x482467: pop     ebx
0x482468: retn    4
