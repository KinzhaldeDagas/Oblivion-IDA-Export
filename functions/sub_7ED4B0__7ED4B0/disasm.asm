0x7ED4B0: sub     esp, 8
0x7ED4B3: push    ebx
0x7ED4B4: push    ebp
0x7ED4B5: push    esi
0x7ED4B6: push    edi
0x7ED4B7: xor     edi, edi
0x7ED4B9: mov     ebp, ecx
0x7ED4BB: cmp     [ebp+7Ch], edi
0x7ED4BE: mov     [esp+18h+var_8], edi
0x7ED4C2: jz      loc_7ED577
0x7ED4C8: mov     eax, [ebp+7Ch]
0x7ED4CB: mov     ecx, [eax]
0x7ED4CD: mov     [ebp+7Ch], ecx
0x7ED4D0: mov     edi, [eax+8]
0x7ED4D3: test    edi, edi
0x7ED4D5: jz      short loc_7ED50C
0x7ED4D7: test    ecx, ecx
0x7ED4D9: jz      short loc_7ED50C
0x7ED4DB: cmp     word ptr [edi+118h], 0FFh
0x7ED4E4: jz      short loc_7ED508
0x7ED4E6: lea     edx, [esp+18h+var_4]
0x7ED4EA: push    edx
0x7ED4EB: mov     ecx, edi
0x7ED4ED: call    sub_405AD0
0x7ED4F2: mov     eax, [eax]
0x7ED4F4: or      [esp+18h+var_8], 1
0x7ED4F9: test    byte ptr [eax+18h], 1
0x7ED4FD: jnz     short loc_7ED508
0x7ED4FF: cmp     byte ptr [edi+0F4h], 1
0x7ED506: jnz     short loc_7ED50C
0x7ED508: mov     bl, 1
0x7ED50A: jmp     short loc_7ED50E
0x7ED50C: xor     bl, bl
0x7ED50E: test    byte ptr [esp+18h+var_8], 1
0x7ED513: jz      short loc_7ED53E
0x7ED515: mov     esi, [esp+18h+var_4]
0x7ED519: and     [esp+18h+var_8], 0FFFFFFFEh
0x7ED51E: test    esi, esi
0x7ED520: jz      short loc_7ED53E
0x7ED522: lea     ecx, [esi+4]
0x7ED525: push    ecx; lpAddend
0x7ED526: call    dword ptr ds:0A2807Ch
0x7ED52C: test    eax, eax
0x7ED52E: jnz     short loc_7ED53E
0x7ED530: test    esi, esi
0x7ED532: jz      short loc_7ED53E
0x7ED534: mov     edx, [esi]
0x7ED536: mov     eax, [edx]
0x7ED538: push    1
0x7ED53A: mov     ecx, esi
0x7ED53C: call    eax
0x7ED53E: test    bl, bl
0x7ED540: jnz     short loc_7ED4C8
0x7ED542: test    edi, edi
0x7ED544: jz      short loc_7ED577
0x7ED546: cmp     word ptr [edi+118h], 0FFh
0x7ED54F: jz      short loc_7ED573
0x7ED551: lea     edx, [esp+18h+var_4]
0x7ED555: push    edx
0x7ED556: mov     ecx, edi
0x7ED558: call    sub_405AD0
0x7ED55D: mov     eax, [eax]
0x7ED55F: or      [esp+18h+var_8], 2
0x7ED564: test    byte ptr [eax+18h], 1
0x7ED568: jnz     short loc_7ED573
0x7ED56A: cmp     byte ptr [edi+0F4h], 1
0x7ED571: jnz     short loc_7ED577
0x7ED573: mov     bl, 1
0x7ED575: jmp     short loc_7ED579
0x7ED577: xor     bl, bl
0x7ED579: test    byte ptr [esp+18h+var_8], 2
0x7ED57E: jz      short loc_7ED5A4
0x7ED580: mov     esi, [esp+18h+var_4]
0x7ED584: test    esi, esi
0x7ED586: jz      short loc_7ED5A4
0x7ED588: lea     ecx, [esi+4]
0x7ED58B: push    ecx; lpAddend
0x7ED58C: call    dword ptr ds:0A2807Ch
0x7ED592: test    eax, eax
0x7ED594: jnz     short loc_7ED5A4
0x7ED596: test    esi, esi
0x7ED598: jz      short loc_7ED5A4
0x7ED59A: mov     edx, [esi]
0x7ED59C: mov     eax, [edx]
0x7ED59E: push    1
0x7ED5A0: mov     ecx, esi
0x7ED5A2: call    eax
0x7ED5A4: neg     bl
0x7ED5A6: sbb     ebx, ebx
0x7ED5A8: not     ebx
0x7ED5AA: and     ebx, edi
0x7ED5AC: pop     edi
0x7ED5AD: pop     esi
0x7ED5AE: pop     ebp
0x7ED5AF: mov     eax, ebx
0x7ED5B1: pop     ebx
0x7ED5B2: add     esp, 8
0x7ED5B5: retn
