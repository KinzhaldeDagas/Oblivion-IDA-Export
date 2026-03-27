0x4F06A0: sub     esp, 0Ch
0x4F06A3: push    ebx
0x4F06A4: push    edi
0x4F06A5: xor     edi, edi
0x4F06A7: cmp     [esp+14h+Str2], edi
0x4F06AB: mov     ebx, ecx
0x4F06AD: jz      loc_4F073E
0x4F06B3: mov     ecx, [ebx+30h]
0x4F06B6: mov     edx, [ecx+4]
0x4F06B9: xor     eax, eax
0x4F06BB: test    edx, edx
0x4F06BD: push    esi
0x4F06BE: jbe     short loc_4F06D3
0x4F06C0: mov     esi, [ecx+8]
0x4F06C3: mov     ecx, esi
0x4F06C5: cmp     [ecx], edi
0x4F06C7: jnz     short loc_4F0739
0x4F06C9: add     eax, 1
0x4F06CC: add     ecx, 4
0x4F06CF: cmp     eax, edx
0x4F06D1: jb      short loc_4F06C5
0x4F06D3: xor     eax, eax
0x4F06D5: test    eax, eax
0x4F06D7: mov     [esp+18h+var_8], eax
0x4F06DB: jz      short loc_4F072E
0x4F06DD: lea     ecx, [ecx+0]
0x4F06E0: test    edi, edi
0x4F06E2: jnz     short loc_4F072E
0x4F06E4: lea     eax, [esp+18h+var_C]
0x4F06E8: push    eax
0x4F06E9: lea     ecx, [esp+1Ch+var_4]
0x4F06ED: push    ecx
0x4F06EE: mov     ecx, [ebx+30h]
0x4F06F1: lea     edx, [esp+20h+var_8]
0x4F06F5: push    edx
0x4F06F6: mov     [esp+24h+var_C], edi
0x4F06FA: call    sub_452600
0x4F06FF: mov     esi, [esp+18h+var_C]
0x4F0703: test    esi, esi
0x4F0705: jz      short loc_4F0727
0x4F0707: mov     eax, [esp+18h+Str2]
0x4F070B: mov     edx, [esi]
0x4F070D: push    eax; Str2
0x4F070E: mov     eax, [edx+0D4h]
0x4F0714: mov     ecx, esi
0x4F0716: call    eax
0x4F0718: push    eax; Str1
0x4F0719: call    __strcmp
0x4F071E: add     esp, 8
0x4F0721: test    eax, eax
0x4F0723: jnz     short loc_4F0727
0x4F0725: mov     edi, esi
0x4F0727: cmp     [esp+18h+var_8], 0
0x4F072C: jnz     short loc_4F06E0
0x4F072E: pop     esi
0x4F072F: mov     eax, edi
0x4F0731: pop     edi
0x4F0732: pop     ebx
0x4F0733: add     esp, 0Ch
0x4F0736: retn    4
0x4F0739: mov     eax, [esi+eax*4]
0x4F073C: jmp     short loc_4F06D5
0x4F073E: mov     eax, edi
0x4F0740: pop     edi
0x4F0741: pop     ebx
0x4F0742: add     esp, 0Ch
0x4F0745: retn    4
