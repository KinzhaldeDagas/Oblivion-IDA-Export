0x911480: push    ebp
0x911481: mov     ebp, esp
0x911483: and     esp, 0FFFFFFF0h
0x911486: sub     esp, 0A4h
0x91148C: mov     al, ds:0BA8350h
0x911491: test    al, al
0x911493: push    ebx
0x911494: push    esi
0x911495: push    edi
0x911496: mov     edi, ecx
0x911498: jnz     short loc_9114B1
0x91149A: push    1
0x91149C: call    sub_9246E0
0x9114A1: add     esp, 4
0x9114A4: test    al, al
0x9114A6: mov     ds:0BA8350h, al
0x9114AB: jz      loc_911776
0x9114B1: mov     esi, [ebp+arg_0]
0x9114B4: mov     eax, [esi+28h]
0x9114B7: mov     ecx, [ebp+arg_4]
0x9114BA: push    8
0x9114BC: push    eax
0x9114BD: push    ecx
0x9114BE: push    esi
0x9114BF: call    sub_8F0F70
0x9114C4: mov     ecx, [esi+1Ch]
0x9114C7: movaps  xmm1, xmmword ptr [ecx]
0x9114CA: movaps  xmm2, xmmword ptr [ecx+10h]
0x9114CE: movaps  xmm3, xmmword ptr [ecx+20h]
0x9114D2: lea     eax, [edi+10h]
0x9114D5: lea     edx, [esp+0C0h+var_30]
0x9114DC: add     esp, 10h
0x9114DF: sub     edx, eax
0x9114E1: mov     ebx, 3
0x9114E6: movaps  xmm0, xmmword ptr [eax]
0x9114E9: movaps  xmm4, xmm0
0x9114EC: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x9114F0: movaps  xmm5, xmm3
0x9114F3: mulps   xmm5, xmm4
0x9114F6: movaps  xmm4, xmm0
0x9114F9: shufps  xmm4, xmm0, 55h ; 'U'
0x9114FD: movaps  xmm6, xmm2
0x911500: mulps   xmm6, xmm4
0x911503: movaps  xmm4, xmm0
0x911506: shufps  xmm4, xmm0, 0
0x91150A: movaps  xmm0, xmm1
0x91150D: mulps   xmm0, xmm4
0x911510: addps   xmm0, xmm6
0x911513: addps   xmm0, xmm5
0x911516: movaps  xmmword ptr [edx+eax], xmm0
0x91151A: add     eax, 10h
0x91151D: dec     ebx
0x91151E: jnz     short loc_9114E6
0x911520: movaps  xmm0, xmmword ptr [ecx+30h]
0x911524: movaps  xmm1, [esp+0B0h+var_30]
0x91152C: mov     ecx, [esi+20h]
0x91152F: addps   xmm1, xmm0
0x911532: movaps  [esp+0B0h+var_30], xmm1
0x91153A: movaps  xmm1, xmmword ptr [ecx]
0x91153D: movaps  xmm2, xmmword ptr [ecx+10h]
0x911541: movaps  xmm3, xmmword ptr [ecx+20h]
0x911545: lea     eax, [edi+40h]
0x911548: lea     edx, [esp+0B0h+var_60]
0x91154C: sub     edx, eax
0x91154E: mov     ebx, 3
0x911553: movaps  xmm0, xmmword ptr [eax]
0x911556: movaps  xmm4, xmm0
0x911559: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x91155D: movaps  xmm5, xmm3
0x911560: mulps   xmm5, xmm4
0x911563: movaps  xmm4, xmm0
0x911566: shufps  xmm4, xmm0, 55h ; 'U'
0x91156A: movaps  xmm6, xmm2
0x91156D: mulps   xmm6, xmm4
0x911570: movaps  xmm4, xmm0
0x911573: shufps  xmm4, xmm0, 0
0x911577: movaps  xmm0, xmm1
0x91157A: mulps   xmm0, xmm4
0x91157D: addps   xmm0, xmm6
0x911580: addps   xmm0, xmm5
0x911583: movaps  xmmword ptr [edx+eax], xmm0
0x911587: add     eax, 10h
0x91158A: dec     ebx
0x91158B: jnz     short loc_911553
0x91158D: mov     ebx, [ebp+arg_4]
0x911590: movaps  xmm0, xmmword ptr [ecx+30h]
0x911594: movaps  xmm1, [esp+0B0h+var_60]
0x911599: push    ebx
0x91159A: push    esi
0x91159B: lea     edx, [esp+0B8h+var_50]
0x91159F: push    edx
0x9115A0: lea     eax, [esp+0BCh+var_40]
0x9115A4: push    eax
0x9115A5: lea     ecx, [esp+0C0h+var_10]
0x9115AC: push    ecx
0x9115AD: addps   xmm1, xmm0
0x9115B0: mov     ecx, edi
0x9115B2: movaps  [esp+0C4h+var_60], xmm1
0x9115B7: call    sub_911060
0x9115BC: movaps  xmm0, [esp+0B0h+var_10]
0x9115C4: movaps  xmm2, [esp+0B0h+var_40]
0x9115C9: mov     eax, [edi+80h]
0x9115CF: mov     edx, [edi+7Ch]
0x9115D2: movaps  [esp+0B0h+var_80], xmm0
0x9115D7: movaps  xmm1, xmm2
0x9115DA: addps   xmm1, xmm0
0x9115DD: movaps  xmm0, xmm1
0x9115E0: mulps   xmm0, xmm1
0x9115E3: movaps  xmm3, xmm0
0x9115E6: shufps  xmm3, xmm0, 55h ; 'U'
0x9115EA: movaps  xmm4, xmm0
0x9115ED: addss   xmm3, xmm0
0x9115F1: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x9115F5: movaps  xmm0, xmm4
0x9115F8: addss   xmm0, xmm3
0x9115FC: movaps  [esp+0B0h+var_A0], xmm0
0x911601: sqrtss  xmm0, xmm0
0x911605: movss   dword ptr [esp+0B0h+var_A0], xmm0
0x91160B: movaps  xmm0, [esp+0B0h+var_A0]
0x911610: lea     ecx, [esp+0B0h+var_A4]
0x911614: movss   dword ptr [ecx], xmm0
0x911618: fld     [esp+0B0h+var_A4]
0x91161C: fcomp   dword ptr ds:0A9CCB4h
0x911622: mov     [esp+0B0h+var_6C], eax
0x911626: mov     [esp+0B0h+var_70], edx
0x91162A: fnstsw  ax
0x91162C: test    ah, 41h
0x91162F: jnz     short loc_911656
0x911631: fld     dword ptr ds:0A2F948h
0x911637: fdiv    [esp+0B0h+var_A4]
0x91163B: fstp    [esp+0B0h+var_A4]
0x91163F: movss   xmm0, [esp+0B0h+var_A4]
0x911645: movaps  xmm2, xmm0
0x911648: shufps  xmm2, xmm0, 0
0x91164C: mulps   xmm2, xmm1
0x91164F: movaps  [esp+0B0h+var_A0], xmm2
0x911654: jmp     short loc_911660
0x911656: movaps  [esp+0B0h+var_A0], xmm2
0x91165B: movaps  xmm2, [esp+0B0h+var_A0]
0x911660: movaps  xmm0, [esp+0B0h+var_50]
0x911665: movaps  xmm1, xmm2
0x911668: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x91166C: movaps  xmm3, xmm0
0x91166F: shufps  xmm3, xmm0, 0C9h ; 'É'
0x911673: shufps  xmm2, xmm2, 0C9h ; 'É'
0x911677: movaps  xmm4, xmm1
0x91167A: mulps   xmm4, xmm3
0x91167D: movaps  xmm3, xmm0
0x911680: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x911684: movaps  xmm0, xmm2
0x911687: mulps   xmm0, xmm3
0x91168A: subps   xmm0, xmm4
0x91168D: movaps  xmm3, xmm0
0x911690: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x911694: mulps   xmm3, xmm2
0x911697: movaps  xmm2, xmm0
0x91169A: shufps  xmm2, xmm0, 0C9h ; 'É'
0x91169E: mulps   xmm2, xmm1
0x9116A1: movaps  xmm1, xmm2
0x9116A4: movaps  xmm2, [esp+0B0h+var_20]
0x9116AC: mulps   xmm0, xmm2
0x9116AF: subps   xmm1, xmm3
0x9116B2: movaps  xmm3, xmm0
0x9116B5: mulps   xmm1, xmm2
0x9116B8: shufps  xmm3, xmm0, 55h ; 'U'
0x9116BC: movaps  xmm4, xmm0
0x9116BF: addss   xmm3, xmm0
0x9116C3: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x9116C7: movaps  xmm0, xmm1
0x9116CA: shufps  xmm0, xmm1, 55h ; 'U'
0x9116CE: movaps  xmm2, xmm1
0x9116D1: addss   xmm0, xmm1
0x9116D5: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x9116D9: lea     eax, [esp+0B0h+var_A4]
0x9116DD: addss   xmm2, xmm0
0x9116E1: lea     edx, [esp+0B0h+var_84]
0x9116E5: movss   dword ptr [eax], xmm2
0x9116E9: mov     ecx, [esp+0B0h+var_A4]
0x9116ED: addss   xmm4, xmm3
0x9116F1: movss   dword ptr [edx], xmm4
0x9116F5: mov     edx, [esp+0B0h+var_84]
0x9116F9: push    ecx; float
0x9116FA: push    edx; float
0x9116FB: call    sub_8ECBB0
0x911700: fstp    [esp+0B8h+var_68]
0x911704: movaps  xmm0, [esp+0B8h+var_A0]
0x911709: push    ebx
0x91170A: lea     eax, [esp+0BCh+var_80]
0x91170E: push    esi
0x91170F: push    eax
0x911710: movaps  [esp+0C4h+var_80], xmm0
0x911715: call    sub_8F1B60
0x91171A: push    ebx
0x91171B: push    esi
0x91171C: lea     ecx, [esp+0CCh+var_60]
0x911720: push    ecx
0x911721: lea     edx, [esp+0D0h+var_30]
0x911728: push    edx
0x911729: call    sub_8F1CC0
0x91172E: fld     dword ptr [edi+84h]
0x911734: fcomp   dword ptr ds:0A2FAA8h
0x91173A: add     esp, 24h
0x91173D: fnstsw  ax
0x91173F: test    ah, 41h
0x911742: jnz     short loc_911776
0x911744: mov     eax, [edi+84h]
0x91174A: mov     edx, [esi+28h]
0x91174D: mov     ecx, [esi+1Ch]
0x911750: push    ebx
0x911751: mov     dword ptr [esp+0B4h+var_A0+8], eax
0x911755: lea     eax, [esp+0B4h+var_A0]
0x911759: add     edx, 30h ; '0'
0x91175C: push    esi
0x91175D: push    eax
0x91175E: mov     dword ptr [esp+0BCh+var_A0], ecx
0x911762: mov     dword ptr [esp+0BCh+var_A0+0Ch], 3
0x91176A: mov     dword ptr [esp+0BCh+var_A0+4], edx
0x91176E: call    sub_8F1460
0x911773: add     esp, 0Ch
0x911776: pop     edi
0x911777: pop     esi
0x911778: pop     ebx
0x911779: mov     esp, ebp
0x91177B: pop     ebp
0x91177C: retn    8
