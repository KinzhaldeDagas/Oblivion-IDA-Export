0x9924B9: push    ebp
0x9924BA: mov     ebp, esp
0x9924BC: sub     esp, 10h
0x9924BF: push    ebx
0x9924C0: push    esi
0x9924C1: push    [ebp+arg_8]; struct localeinfo_struct *
0x9924C4: lea     ecx, [ebp+var_10]; this
0x9924C7: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9924CC: mov     esi, [ebp+var_C]
0x9924CF: xor     ebx, ebx
0x9924D1: cmp     [esi+8], ebx
0x9924D4: jnz     short loc_9924E8
0x9924D6: push    [ebp+Control]; Control
0x9924D9: push    [ebp+Str]; Str
0x9924DC: call    _strpbrk
0x9924E1: pop     ecx
0x9924E2: pop     ecx
0x9924E3: jmp     loc_992573
0x9924E8: mov     ecx, [ebp+Str]
0x9924EB: cmp     ecx, ebx
0x9924ED: jnz     short loc_992517
0x9924EF: call    __errno
0x9924F4: push    ebx
0x9924F5: push    ebx
0x9924F6: push    ebx
0x9924F7: push    ebx
0x9924F8: push    ebx
0x9924F9: mov     dword ptr [eax], 16h
0x9924FF: call    __invalid_parameter
0x992504: add     esp, 14h
0x992507: cmp     [ebp+var_4], bl
0x99250A: jz      short loc_992513
0x99250C: mov     eax, [ebp+var_8]
0x99250F: and     dword ptr [eax+70h], 0FFFFFFFDh
0x992513: xor     eax, eax
0x992515: jmp     short loc_99257F
0x992517: cmp     [ebp+Control], ebx
0x99251A: jz      short loc_9924EF
0x99251C: cmp     [ecx], bl
0x99251E: jz      short loc_99256B
0x992520: push    edi
0x992521: mov     eax, [ebp+Control]
0x992524: jmp     short loc_99254E
0x992526: mov     dl, [eax]
0x992528: movzx   edi, dl
0x99252B: test    byte ptr [edi+esi+1Dh], 4
0x992530: jz      short loc_992549
0x992532: cmp     dl, [ecx]
0x992534: jnz     short loc_99253E
0x992536: mov     dl, [eax+1]
0x992539: cmp     dl, [ecx+1]
0x99253C: jz      short loc_992552
0x99253E: lea     edx, [eax+1]
0x992541: cmp     [edx], bl
0x992543: jz      short loc_992552
0x992545: mov     eax, edx
0x992547: jmp     short loc_99254D
0x992549: cmp     dl, [ecx]
0x99254B: jz      short loc_992552
0x99254D: inc     eax
0x99254E: cmp     [eax], bl
0x992550: jnz     short loc_992526
0x992552: cmp     [eax], bl
0x992554: jnz     short loc_99256A
0x992556: movzx   eax, byte ptr [ecx]
0x992559: test    byte ptr [eax+esi+1Dh], 4
0x99255E: jz      short loc_992565
0x992560: inc     ecx
0x992561: cmp     [ecx], bl
0x992563: jz      short loc_99256A
0x992565: inc     ecx
0x992566: cmp     [ecx], bl
0x992568: jnz     short loc_992521
0x99256A: pop     edi
0x99256B: mov     al, [ecx]
0x99256D: neg     al
0x99256F: sbb     eax, eax
0x992571: and     eax, ecx
0x992573: cmp     [ebp+var_4], bl
0x992576: jz      short loc_99257F
0x992578: mov     ecx, [ebp+var_8]
0x99257B: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99257F: pop     esi
0x992580: pop     ebx
0x992581: leave
0x992582: retn
