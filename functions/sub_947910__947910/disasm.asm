0x947910: push    ebx
0x947911: mov     ebx, [esp+4+arg_0]
0x947915: push    ebp
0x947916: mov     ebp, [esp+8+arg_4]
0x94791A: push    esi
0x94791B: push    edi
0x94791C: mov     edi, [esp+10h+arg_8]
0x947920: mov     edx, ebp
0x947922: imul    edx, edi
0x947925: mov     esi, ecx
0x947927: mov     ecx, [esi+8]
0x94792A: mov     eax, [ecx]
0x94792C: push    edx
0x94792D: push    ebx
0x94792E: call    dword ptr [eax+0Ch]
0x947931: mov     al, [esi+0Ch]
0x947934: test    al, al
0x947936: jz      loc_9479E0
0x94793C: mov     ecx, ebp
0x94793E: sub     ecx, 2
0x947941: mov     eax, ebx
0x947943: jz      loc_9479C7
0x947949: sub     ecx, 2
0x94794C: jz      short loc_94799D
0x94794E: sub     ecx, 4
0x947951: jnz     loc_9479E0
0x947957: test    edi, edi
0x947959: jle     loc_9479E0
0x94795F: lea     eax, [ebx+6]
0x947962: mov     dl, [eax+1]
0x947965: mov     cl, [eax-6]
0x947968: mov     [eax-6], dl
0x94796B: mov     [eax+1], cl
0x94796E: mov     dl, [eax]
0x947970: mov     cl, [eax-5]
0x947973: mov     [eax-5], dl
0x947976: mov     [eax], cl
0x947978: mov     dl, [eax-1]
0x94797B: mov     cl, [eax-4]
0x94797E: mov     [eax-4], dl
0x947981: mov     [eax-1], cl
0x947984: mov     dl, [eax-2]
0x947987: mov     cl, [eax-3]
0x94798A: mov     [eax-3], dl
0x94798D: mov     [eax-2], cl
0x947990: add     eax, 8
0x947993: dec     edi
0x947994: jnz     short loc_947962
0x947996: pop     edi
0x947997: pop     esi
0x947998: pop     ebp
0x947999: pop     ebx
0x94799A: retn    0Ch
0x94799D: test    edi, edi
0x94799F: jle     short loc_9479E0
0x9479A1: lea     eax, [ebx+2]
0x9479A4: mov     dl, [eax+1]
0x9479A7: mov     cl, [eax-2]
0x9479AA: mov     [eax-2], dl
0x9479AD: mov     [eax+1], cl
0x9479B0: mov     dl, [eax]
0x9479B2: mov     cl, [eax-1]
0x9479B5: mov     [eax-1], dl
0x9479B8: mov     [eax], cl
0x9479BA: add     eax, 4
0x9479BD: dec     edi
0x9479BE: jnz     short loc_9479A4
0x9479C0: pop     edi
0x9479C1: pop     esi
0x9479C2: pop     ebp
0x9479C3: pop     ebx
0x9479C4: retn    0Ch
0x9479C7: test    edi, edi
0x9479C9: jle     short loc_9479E0
0x9479CB: jmp     short loc_9479D0
0x9479CD: align 10h
0x9479D0: mov     dl, [eax+1]
0x9479D3: mov     cl, [eax]
0x9479D5: mov     [eax], dl
0x9479D7: mov     [eax+1], cl
0x9479DA: add     eax, 2
0x9479DD: dec     edi
0x9479DE: jnz     short loc_9479D0
0x9479E0: pop     edi
0x9479E1: pop     esi
0x9479E2: pop     ebp
0x9479E3: pop     ebx
0x9479E4: retn    0Ch
