0x98717A: push    ebp
0x98717B: mov     ebp, esp
0x98717D: sub     esp, 14h
0x987180: push    ebx
0x987181: xor     ebx, ebx
0x987183: cmp     [ebp+Count], ebx
0x987186: jnz     short loc_987190
0x987188: mov     eax, [ebp+Dest]
0x98718B: jmp     loc_9872B0
0x987190: push    esi
0x987191: mov     esi, [ebp+Dest]
0x987194: cmp     esi, ebx
0x987196: jnz     short loc_9871B7
0x987198: call    __errno
0x98719D: push    ebx
0x98719E: push    ebx
0x98719F: push    ebx
0x9871A0: push    ebx
0x9871A1: push    ebx
0x9871A2: mov     dword ptr [eax], 16h
0x9871A8: call    __invalid_parameter
0x9871AD: add     esp, 14h
0x9871B0: xor     eax, eax
0x9871B2: jmp     loc_9872AF
0x9871B7: push    edi
0x9871B8: mov     edi, [ebp+Source]
0x9871BB: cmp     edi, ebx
0x9871BD: jnz     short loc_9871DE
0x9871BF: call    __errno
0x9871C4: push    ebx
0x9871C5: push    ebx
0x9871C6: push    ebx
0x9871C7: push    ebx
0x9871C8: push    ebx
0x9871C9: mov     dword ptr [eax], 16h
0x9871CF: call    __invalid_parameter
0x9871D4: add     esp, 14h
0x9871D7: xor     eax, eax
0x9871D9: jmp     loc_9872AE
0x9871DE: push    [ebp+arg_C]; struct localeinfo_struct *
0x9871E1: lea     ecx, [ebp+var_14]; this
0x9871E4: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9871E9: mov     eax, [ebp+var_14.mbcinfo]
0x9871EC: cmp     [eax+8], ebx
0x9871EF: jnz     short loc_987213
0x9871F1: push    [ebp+Count]; Count
0x9871F4: push    edi; Source
0x9871F5: push    esi; Dest
0x9871F6: call    _strncat
0x9871FB: add     esp, 0Ch
0x9871FE: cmp     [ebp+var_8], bl
0x987201: jz      loc_9872AE
0x987207: mov     ecx, [ebp+var_C]
0x98720A: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x98720E: jmp     loc_9872AE
0x987213: mov     eax, esi
0x987215: mov     [ebp+var_4], eax
0x987218: mov     cl, [esi]
0x98721A: inc     esi
0x98721B: test    cl, cl
0x98721D: jnz     short loc_987218
0x98721F: dec     esi
0x987220: cmp     esi, eax
0x987222: jz      short loc_98723D
0x987224: lea     ecx, [ebp+var_14]
0x987227: push    ecx; struct localeinfo_struct *
0x987228: mov     ecx, esi
0x98722A: sub     ecx, eax
0x98722C: dec     ecx
0x98722D: push    ecx; int
0x98722E: push    eax; int
0x98722F: call    __mbsbtype_l
0x987234: add     esp, 0Ch
0x987237: cmp     eax, 1
0x98723A: jnz     short loc_98723D
0x98723C: dec     esi
0x98723D: mov     al, [edi]
0x98723F: mov     edx, [ebp+var_14.mbcinfo]
0x987242: dec     [ebp+Count]
0x987245: movzx   ecx, al
0x987248: test    byte ptr [ecx+edx+1Dh], 4
0x98724D: mov     [esi], al
0x98724F: jz      short loc_98728C
0x987251: inc     esi
0x987252: inc     edi
0x987253: cmp     [ebp+Count], ebx
0x987256: jz      short loc_987299
0x987258: mov     al, [edi]
0x98725A: dec     [ebp+Count]
0x98725D: mov     [esi], al
0x98725F: inc     esi
0x987260: inc     edi
0x987261: cmp     al, bl
0x987263: jnz     short loc_987292
0x987265: mov     [esi-2], bl
0x987268: mov     edi, [ebp+var_4]
0x98726B: cmp     esi, edi
0x98726D: jz      short loc_98729E
0x98726F: lea     eax, [ebp+var_14]
0x987272: push    eax; struct localeinfo_struct *
0x987273: mov     eax, esi
0x987275: sub     eax, edi
0x987277: dec     eax
0x987278: push    eax; int
0x987279: push    edi; int
0x98727A: call    __mbsbtype_l
0x98727F: add     esp, 0Ch
0x987282: cmp     eax, 1
0x987285: jnz     short loc_98729E
0x987287: mov     [esi-1], bl
0x98728A: jmp     short loc_9872A0
0x98728C: inc     esi
0x98728D: inc     edi
0x98728E: cmp     al, bl
0x987290: jz      short loc_987268
0x987292: cmp     [ebp+Count], ebx
0x987295: jnz     short loc_98723D
0x987297: jmp     short loc_987268
0x987299: mov     [esi-1], bl
0x98729C: jmp     short loc_987268
0x98729E: mov     [esi], bl
0x9872A0: cmp     [ebp+var_8], bl
0x9872A3: jz      short loc_9872AC
0x9872A5: mov     eax, [ebp+var_C]
0x9872A8: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9872AC: mov     eax, edi
0x9872AE: pop     edi
0x9872AF: pop     esi
0x9872B0: pop     ebx
0x9872B1: leave
0x9872B2: retn
