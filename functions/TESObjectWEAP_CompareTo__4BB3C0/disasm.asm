0x4BB3C0: mov     eax, [esp+arg_0]
0x4BB3C4: push    esi
0x4BB3C5: push    edi
0x4BB3C6: push    0; int
0x4BB3C8: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x4BB3CD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BB3D2: push    0; int
0x4BB3D4: push    eax; void *
0x4BB3D5: mov     edi, ecx
0x4BB3D7: call    OblivionDynamicCast
0x4BB3DC: mov     esi, eax
0x4BB3DE: add     esp, 14h
0x4BB3E1: test    esi, esi
0x4BB3E3: jnz     short loc_4BB3EC
0x4BB3E5: pop     edi
0x4BB3E6: mov     al, 1
0x4BB3E8: pop     esi
0x4BB3E9: retn    4
0x4BB3EC: push    esi; a2
0x4BB3ED: mov     ecx, edi; this
0x4BB3EF: call    TESForm_CompareAllComponentsTo
0x4BB3F4: test    al, al
0x4BB3F6: jnz     short loc_4BB3E5
0x4BB3F8: mov     eax, 10h
0x4BB3FD: lea     ecx, [esi+90h]
0x4BB403: lea     edx, [edi+90h]
0x4BB409: lea     esp, [esp+0]
0x4BB410: mov     esi, [edx]
0x4BB412: cmp     esi, [ecx]
0x4BB414: jnz     short loc_4BB428
0x4BB416: sub     eax, 4
0x4BB419: add     ecx, 4
0x4BB41C: add     edx, 4
0x4BB41F: cmp     eax, 4
0x4BB422: jnb     short loc_4BB410
0x4BB424: test    eax, eax
0x4BB426: jz      short loc_4BB48D
0x4BB428: movzx   esi, byte ptr [edx]
0x4BB42B: movzx   edi, byte ptr [ecx]
0x4BB42E: sub     esi, edi
0x4BB430: jnz     short loc_4BB477
0x4BB432: sub     eax, 1
0x4BB435: add     ecx, 1
0x4BB438: add     edx, 1
0x4BB43B: test    eax, eax
0x4BB43D: jz      short loc_4BB48D
0x4BB43F: movzx   esi, byte ptr [edx]
0x4BB442: movzx   edi, byte ptr [ecx]
0x4BB445: sub     esi, edi
0x4BB447: jnz     short loc_4BB477
0x4BB449: sub     eax, 1
0x4BB44C: add     ecx, 1
0x4BB44F: add     edx, 1
0x4BB452: test    eax, eax
0x4BB454: jz      short loc_4BB48D
0x4BB456: movzx   esi, byte ptr [edx]
0x4BB459: movzx   edi, byte ptr [ecx]
0x4BB45C: sub     esi, edi
0x4BB45E: jnz     short loc_4BB477
0x4BB460: sub     eax, 1
0x4BB463: add     ecx, 1
0x4BB466: add     edx, 1
0x4BB469: test    eax, eax
0x4BB46B: jz      short loc_4BB48D
0x4BB46D: movzx   esi, byte ptr [edx]
0x4BB470: movzx   ecx, byte ptr [ecx]
0x4BB473: sub     esi, ecx
0x4BB475: jz      short loc_4BB48D
0x4BB477: test    esi, esi
0x4BB479: mov     eax, 1
0x4BB47E: jg      short loc_4BB48F
0x4BB480: or      eax, 0FFFFFFFFh
0x4BB483: test    eax, eax
0x4BB485: pop     edi
0x4BB486: setnz   al
0x4BB489: pop     esi
0x4BB48A: retn    4
0x4BB48D: xor     eax, eax
0x4BB48F: test    eax, eax
0x4BB491: pop     edi
0x4BB492: setnz   al
0x4BB495: pop     esi
0x4BB496: retn    4
