0x4CA430: mov     eax, [esp+arg_0]
0x4CA434: push    ebx
0x4CA435: push    edi
0x4CA436: push    0; int
0x4CA438: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4CA43D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CA442: push    0; int
0x4CA444: push    eax; void *
0x4CA445: mov     edi, ecx
0x4CA447: call    OblivionDynamicCast
0x4CA44C: mov     ebx, eax
0x4CA44E: add     esp, 14h
0x4CA451: test    ebx, ebx
0x4CA453: jnz     short loc_4CA45C
0x4CA455: pop     edi
0x4CA456: mov     al, 1
0x4CA458: pop     ebx
0x4CA459: retn    4
0x4CA45C: push    ebx; a2
0x4CA45D: mov     ecx, edi; this
0x4CA45F: call    TESForm_CompareAllComponentsTo
0x4CA464: test    al, al
0x4CA466: jnz     short loc_4CA455
0x4CA468: mov     al, [ebx+24h]
0x4CA46B: mov     cl, [edi+24h]
0x4CA46E: cmp     cl, al
0x4CA470: jnz     short loc_4CA455
0x4CA472: test    cl, 1
0x4CA475: mov     edx, [edi+3Ch]
0x4CA478: push    ebp
0x4CA479: push    esi
0x4CA47A: jz      loc_4CA526
0x4CA480: test    al, 1
0x4CA482: jnz     short loc_4CA488
0x4CA484: xor     ecx, ecx
0x4CA486: jmp     short loc_4CA48B
0x4CA488: mov     ecx, [ebx+3Ch]
0x4CA48B: test    edx, edx
0x4CA48D: jz      loc_4CA5CA
0x4CA493: test    ecx, ecx
0x4CA495: jz      loc_4CA5CA
0x4CA49B: mov     eax, 28h ; '('
0x4CA4A0: mov     esi, [edx]
0x4CA4A2: cmp     esi, [ecx]
0x4CA4A4: jnz     short loc_4CA4BC
0x4CA4A6: sub     eax, 4
0x4CA4A9: add     ecx, 4
0x4CA4AC: add     edx, 4
0x4CA4AF: cmp     eax, 4
0x4CA4B2: jnb     short loc_4CA4A0
0x4CA4B4: test    eax, eax
0x4CA4B6: jz      loc_4CA5BB
0x4CA4BC: movzx   esi, byte ptr [edx]
0x4CA4BF: movzx   ebp, byte ptr [ecx]
0x4CA4C2: sub     esi, ebp
0x4CA4C4: jnz     loc_4CA5AD
0x4CA4CA: sub     eax, 1
0x4CA4CD: add     ecx, 1
0x4CA4D0: add     edx, 1
0x4CA4D3: test    eax, eax
0x4CA4D5: jz      loc_4CA5BB
0x4CA4DB: movzx   esi, byte ptr [edx]
0x4CA4DE: movzx   ebp, byte ptr [ecx]
0x4CA4E1: sub     esi, ebp
0x4CA4E3: jnz     loc_4CA5AD
0x4CA4E9: sub     eax, 1
0x4CA4EC: add     ecx, 1
0x4CA4EF: add     edx, 1
0x4CA4F2: test    eax, eax
0x4CA4F4: jz      loc_4CA5BB
0x4CA4FA: movzx   esi, byte ptr [edx]
0x4CA4FD: movzx   ebp, byte ptr [ecx]
0x4CA500: sub     esi, ebp
0x4CA502: jnz     loc_4CA5AD
0x4CA508: sub     eax, 1
0x4CA50B: add     ecx, 1
0x4CA50E: add     edx, 1
0x4CA511: test    eax, eax
0x4CA513: jz      loc_4CA5BB
0x4CA519: movzx   esi, byte ptr [edx]
0x4CA51C: movzx   ecx, byte ptr [ecx]
0x4CA51F: sub     esi, ecx
0x4CA521: jmp     loc_4CA5AB
0x4CA526: test    al, 1
0x4CA528: jz      short loc_4CA52E
0x4CA52A: xor     ecx, ecx
0x4CA52C: jmp     short loc_4CA531
0x4CA52E: mov     ecx, [ebx+3Ch]
0x4CA531: test    edx, edx
0x4CA533: jz      loc_4CA5CA
0x4CA539: test    ecx, ecx
0x4CA53B: jz      loc_4CA5CA
0x4CA541: mov     eax, 8
0x4CA546: mov     esi, [edx]
0x4CA548: cmp     esi, [ecx]
0x4CA54A: jnz     short loc_4CA55E
0x4CA54C: sub     eax, 4
0x4CA54F: add     ecx, 4
0x4CA552: add     edx, 4
0x4CA555: cmp     eax, 4
0x4CA558: jnb     short loc_4CA546
0x4CA55A: test    eax, eax
0x4CA55C: jz      short loc_4CA5BB
0x4CA55E: movzx   ebp, byte ptr [ecx]
0x4CA561: movzx   esi, byte ptr [edx]
0x4CA564: sub     esi, ebp
0x4CA566: jnz     short loc_4CA5AD
0x4CA568: sub     eax, 1
0x4CA56B: add     ecx, 1
0x4CA56E: add     edx, 1
0x4CA571: test    eax, eax
0x4CA573: jz      short loc_4CA5BB
0x4CA575: movzx   ebp, byte ptr [ecx]
0x4CA578: movzx   esi, byte ptr [edx]
0x4CA57B: sub     esi, ebp
0x4CA57D: jnz     short loc_4CA5AD
0x4CA57F: sub     eax, 1
0x4CA582: add     ecx, 1
0x4CA585: add     edx, 1
0x4CA588: test    eax, eax
0x4CA58A: jz      short loc_4CA5BB
0x4CA58C: movzx   ebp, byte ptr [ecx]
0x4CA58F: movzx   esi, byte ptr [edx]
0x4CA592: sub     esi, ebp
0x4CA594: jnz     short loc_4CA5AD
0x4CA596: sub     eax, 1
0x4CA599: add     ecx, 1
0x4CA59C: add     edx, 1
0x4CA59F: test    eax, eax
0x4CA5A1: jz      short loc_4CA5BB
0x4CA5A3: movzx   eax, byte ptr [ecx]
0x4CA5A6: movzx   esi, byte ptr [edx]
0x4CA5A9: sub     esi, eax
0x4CA5AB: jz      short loc_4CA5BB
0x4CA5AD: test    esi, esi
0x4CA5AF: mov     eax, 1
0x4CA5B4: jg      short loc_4CA5BD
0x4CA5B6: or      eax, 0FFFFFFFFh
0x4CA5B9: jmp     short loc_4CA5BD
0x4CA5BB: xor     eax, eax
0x4CA5BD: test    eax, eax
0x4CA5BF: jz      short loc_4CA5CA
0x4CA5C1: pop     esi
0x4CA5C2: pop     ebp
0x4CA5C3: pop     edi
0x4CA5C4: mov     al, 1
0x4CA5C6: pop     ebx
0x4CA5C7: retn    4
0x4CA5CA: add     ebx, 28h ; '('
0x4CA5CD: push    ebx
0x4CA5CE: lea     ecx, [edi+28h]
0x4CA5D1: call    ExtraDataList_CompareList
0x4CA5D6: pop     esi
0x4CA5D7: pop     ebp
0x4CA5D8: test    al, al
0x4CA5DA: pop     edi
0x4CA5DB: setnz   al
0x4CA5DE: pop     ebx
0x4CA5DF: retn    4
