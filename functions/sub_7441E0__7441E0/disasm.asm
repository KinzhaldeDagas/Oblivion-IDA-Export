0x7441E0: sub     esp, 8
0x7441E3: push    ebx
0x7441E4: push    ebp
0x7441E5: mov     ebp, [esi+24h]
0x7441E8: push    edi
0x7441E9: lea     esp, [esp+0]
0x7441F0: mov     edi, [esi+34h]
0x7441F3: sub     edi, [esi+6Ch]
0x7441F6: mov     eax, [esi+64h]
0x7441F9: mov     ecx, [esi+24h]
0x7441FC: sub     edi, eax
0x7441FE: lea     edx, [ecx+ebp-106h]
0x744205: cmp     eax, edx
0x744207: mov     [esp+14h+var_8], edi
0x74420B: jb      short loc_744270
0x74420D: mov     eax, [esi+30h]
0x744210: push    ebp; Size
0x744211: lea     ecx, [eax+ebp]
0x744214: push    ecx; Src
0x744215: push    eax; Dst
0x744216: call    _memcpy
0x74421B: mov     edx, [esi+44h]
0x74421E: mov     eax, [esi+3Ch]
0x744221: sub     [esi+68h], ebp
0x744224: sub     [esi+64h], ebp
0x744227: add     esp, 0Ch
0x74422A: sub     [esi+54h], ebp
0x74422D: lea     ecx, [eax+edx*2]
0x744230: movzx   eax, word ptr [ecx-2]
0x744234: sub     ecx, 2
0x744237: cmp     eax, ebp
0x744239: jb      short loc_74423F
0x74423B: sub     eax, ebp
0x74423D: jmp     short loc_744241
0x74423F: xor     eax, eax
0x744241: sub     edx, 1
0x744244: mov     [ecx], ax
0x744247: jnz     short loc_744230
0x744249: mov     ecx, [esi+38h]
0x74424C: mov     edx, ebp
0x74424E: lea     ecx, [ecx+ebp*2]
0x744251: movzx   eax, word ptr [ecx-2]
0x744255: sub     ecx, 2
0x744258: cmp     eax, ebp
0x74425A: jb      short loc_744260
0x74425C: sub     eax, ebp
0x74425E: jmp     short loc_744262
0x744260: xor     eax, eax
0x744262: sub     edx, 1
0x744265: mov     [ecx], ax
0x744268: jnz     short loc_744251
0x74426A: add     edi, ebp
0x74426C: mov     [esp+14h+var_8], edi
0x744270: mov     edi, [esi]
0x744272: cmp     dword ptr [edi+4], 0
0x744276: jz      loc_744327
0x74427C: mov     eax, [esi+6Ch]
0x74427F: add     eax, [esi+64h]
0x744282: mov     ecx, [edi+4]
0x744285: add     eax, [esi+30h]
0x744288: mov     edx, [esp+14h+var_8]
0x74428C: mov     ebx, ecx
0x74428E: cmp     ebx, edx
0x744290: mov     [esp+14h+var_4], eax
0x744294: jbe     short loc_744298
0x744296: mov     ebx, edx
0x744298: test    ebx, ebx
0x74429A: jz      short loc_7442E9
0x74429C: mov     edx, [edi+1Ch]
0x74429F: sub     ecx, ebx
0x7442A1: mov     [edi+4], ecx
0x7442A4: mov     ecx, [edx+18h]
0x7442A7: cmp     ecx, 1
0x7442AA: jnz     short loc_7442BB
0x7442AC: mov     eax, [edi]
0x7442AE: mov     ecx, [edi+30h]
0x7442B1: push    ebx
0x7442B2: push    eax
0x7442B3: push    ecx
0x7442B4: call    sub_7459B0
0x7442B9: jmp     short loc_7442CD
0x7442BB: cmp     ecx, 2
0x7442BE: jnz     short loc_7442D7
0x7442C0: mov     edx, [edi]
0x7442C2: mov     eax, [edi+30h]
0x7442C5: push    ebx
0x7442C6: push    edx
0x7442C7: push    eax
0x7442C8: call    sub_745D90
0x7442CD: mov     [edi+30h], eax
0x7442D0: mov     eax, [esp+20h+var_4]
0x7442D4: add     esp, 0Ch
0x7442D7: mov     ecx, [edi]
0x7442D9: push    ebx; Size
0x7442DA: push    ecx; Src
0x7442DB: push    eax; Dst
0x7442DC: call    _memcpy
0x7442E1: add     [edi], ebx
0x7442E3: add     esp, 0Ch
0x7442E6: add     [edi+8], ebx
0x7442E9: add     [esi+6Ch], ebx
0x7442EC: mov     edi, [esi+6Ch]
0x7442EF: cmp     edi, 3
0x7442F2: jb      short loc_744313
0x7442F4: mov     eax, [esi+30h]
0x7442F7: mov     edx, [esi+64h]
0x7442FA: mov     ecx, [esi+50h]
0x7442FD: add     edx, eax
0x7442FF: movzx   eax, byte ptr [edx]
0x744302: mov     [esi+40h], eax
0x744305: shl     eax, cl
0x744307: movzx   ecx, byte ptr [edx+1]
0x74430B: xor     eax, ecx
0x74430D: and     eax, [esi+4Ch]
0x744310: mov     [esi+40h], eax
0x744313: cmp     edi, 106h
0x744319: jnb     short loc_744327
0x74431B: mov     edx, [esi]
0x74431D: cmp     dword ptr [edx+4], 0
0x744321: jnz     loc_7441F0
0x744327: pop     edi
0x744328: pop     ebp
0x744329: pop     ebx
0x74432A: add     esp, 8
0x74432D: retn
