0x726430: push    ebx
0x726431: push    ebp
0x726432: mov     ebp, [esp+8+a2]
0x726436: push    ebp; a2
0x726437: mov     ebx, ecx
0x726439: call    sub_700670
0x72643E: test    al, al
0x726440: jnz     short loc_726447
0x726442: pop     ebp
0x726443: pop     ebx
0x726444: retn    4
0x726447: mov     ax, [ebx+0Ch]
0x72644B: cmp     ax, [ebp+0Ch]
0x72644F: push    edi
0x726450: jnz     loc_726507
0x726456: mov     edi, [ebx+10h]
0x726459: cmp     edi, [ebp+10h]
0x72645C: jnz     loc_726507
0x726462: push    esi
0x726463: xor     esi, esi
0x726465: test    edi, edi
0x726467: jbe     short loc_7264B9
0x726469: mov     edx, [ebp+14h]
0x72646C: mov     eax, [ebx+14h]
0x72646F: mov     ebp, edx
0x726471: lea     ecx, [edx+8]
0x726474: sub     ebp, eax
0x726476: mov     edx, [eax+4]
0x726479: cmp     edx, [ecx-4]
0x72647C: jnz     short loc_7264DD
0x72647E: mov     edx, [eax+8]
0x726481: cmp     edx, [ecx]
0x726483: jnz     short loc_7264DD
0x726485: mov     edx, [eax+0Ch]
0x726488: cmp     edx, [ecx+4]
0x72648B: jnz     short loc_7264DD
0x72648D: mov     edx, [eax+10h]
0x726490: cmp     edx, [ecx+8]
0x726493: jnz     short loc_7264DD
0x726495: mov     edx, [eax+14h]
0x726498: cmp     edx, [ecx+0Ch]
0x72649B: jnz     short loc_7264DD
0x72649D: mov     edx, [eax+18h]
0x7264A0: cmp     edx, [ecx+10h]
0x7264A3: jnz     short loc_7264DD
0x7264A5: mov     dl, [eax]
0x7264A7: cmp     dl, [eax+ebp]
0x7264AA: jnz     short loc_7264DD
0x7264AC: add     esi, 1
0x7264AF: add     ecx, 1Ch
0x7264B2: add     eax, 1Ch
0x7264B5: cmp     esi, edi
0x7264B7: jb      short loc_726476
0x7264B9: movzx   ebp, word ptr [ebx+26h]
0x7264BD: xor     edi, edi
0x7264BF: test    ebp, ebp
0x7264C1: jbe     short loc_7264FE
0x7264C3: mov     eax, [esp+10h+a2]
0x7264C7: mov     esi, [eax+20h]
0x7264CA: mov     ebx, [ebx+20h]
0x7264CD: sub     ebx, esi
0x7264CF: nop
0x7264D0: mov     eax, [esi]
0x7264D2: test    eax, eax
0x7264D4: mov     ecx, [ebx+esi]
0x7264D7: jnz     short loc_7264E6
0x7264D9: test    ecx, ecx
0x7264DB: jz      short loc_7264F4
0x7264DD: pop     esi
0x7264DE: pop     edi
0x7264DF: pop     ebp
0x7264E0: xor     al, al
0x7264E2: pop     ebx
0x7264E3: retn    4
0x7264E6: test    ecx, ecx
0x7264E8: jz      short loc_7264DD
0x7264EA: push    eax
0x7264EB: call    sub_725EF0
0x7264F0: test    al, al
0x7264F2: jz      short loc_7264DD
0x7264F4: add     edi, 1
0x7264F7: add     esi, 4
0x7264FA: cmp     edi, ebp
0x7264FC: jb      short loc_7264D0
0x7264FE: pop     esi
0x7264FF: pop     edi
0x726500: pop     ebp
0x726501: mov     al, 1
0x726503: pop     ebx
0x726504: retn    4
0x726507: pop     edi
0x726508: pop     ebp
0x726509: xor     al, al
0x72650B: pop     ebx
0x72650C: retn    4
