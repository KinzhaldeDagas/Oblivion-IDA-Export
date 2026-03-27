0x4EE370: push    ecx
0x4EE371: mov     eax, [esp+4+arg_0]
0x4EE375: push    ebx
0x4EE376: push    ebp
0x4EE377: push    0; int
0x4EE379: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x4EE37E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EE383: mov     ebx, ecx
0x4EE385: push    0; int
0x4EE387: push    eax; void *
0x4EE388: mov     [esp+20h+var_4], ebx
0x4EE38C: call    OblivionDynamicCast
0x4EE391: mov     ebp, eax
0x4EE393: add     esp, 14h
0x4EE396: test    ebp, ebp
0x4EE398: mov     [esp+0Ch+arg_0], ebp
0x4EE39C: jnz     short loc_4EE3A6
0x4EE39E: pop     ebp
0x4EE39F: mov     al, 1
0x4EE3A1: pop     ebx
0x4EE3A2: pop     ecx
0x4EE3A3: retn    4
0x4EE3A6: push    edi
0x4EE3A7: lea     edi, [ebp+108h]
0x4EE3AD: add     ebx, 108h
0x4EE3B3: xor     edx, edx
0x4EE3B5: test    edi, edi
0x4EE3B7: mov     eax, edi
0x4EE3B9: jz      short loc_4EE3CF
0x4EE3BB: jmp     short loc_4EE3C0
0x4EE3BD: align 10h
0x4EE3C0: cmp     dword ptr [eax], 0
0x4EE3C3: jz      short loc_4EE3C8
0x4EE3C5: add     edx, 1
0x4EE3C8: mov     eax, [eax+4]
0x4EE3CB: test    eax, eax
0x4EE3CD: jnz     short loc_4EE3C0
0x4EE3CF: xor     ecx, ecx
0x4EE3D1: test    ebx, ebx
0x4EE3D3: mov     eax, ebx
0x4EE3D5: jz      short loc_4EE3E6
0x4EE3D7: cmp     dword ptr [eax], 0
0x4EE3DA: jz      short loc_4EE3DF
0x4EE3DC: add     ecx, 1
0x4EE3DF: mov     eax, [eax+4]
0x4EE3E2: test    eax, eax
0x4EE3E4: jnz     short loc_4EE3D7
0x4EE3E6: cmp     edx, ecx
0x4EE3E8: jnz     loc_4EE760
0x4EE3EE: test    edi, edi
0x4EE3F0: push    esi
0x4EE3F1: jz      loc_4EE4AD
0x4EE3F7: test    ebx, ebx
0x4EE3F9: jz      loc_4EE4AD
0x4EE3FF: mov     edx, [edi]
0x4EE401: test    edx, edx
0x4EE403: jz      loc_4EE4AD
0x4EE409: mov     ecx, [ebx]
0x4EE40B: test    ecx, ecx
0x4EE40D: jz      loc_4EE4AD
0x4EE413: mov     eax, 8
0x4EE418: mov     esi, [edx]
0x4EE41A: cmp     esi, [ecx]
0x4EE41C: jnz     short loc_4EE430
0x4EE41E: sub     eax, 4
0x4EE421: add     ecx, 4
0x4EE424: add     edx, 4
0x4EE427: cmp     eax, 4
0x4EE42A: jnb     short loc_4EE418
0x4EE42C: test    eax, eax
0x4EE42E: jz      short loc_4EE495
0x4EE430: movzx   esi, byte ptr [edx]
0x4EE433: movzx   ebp, byte ptr [ecx]
0x4EE436: sub     esi, ebp
0x4EE438: jnz     short loc_4EE47F
0x4EE43A: sub     eax, 1
0x4EE43D: add     ecx, 1
0x4EE440: add     edx, 1
0x4EE443: test    eax, eax
0x4EE445: jz      short loc_4EE491
0x4EE447: movzx   esi, byte ptr [edx]
0x4EE44A: movzx   ebp, byte ptr [ecx]
0x4EE44D: sub     esi, ebp
0x4EE44F: jnz     short loc_4EE47F
0x4EE451: sub     eax, 1
0x4EE454: add     ecx, 1
0x4EE457: add     edx, 1
0x4EE45A: test    eax, eax
0x4EE45C: jz      short loc_4EE491
0x4EE45E: movzx   esi, byte ptr [edx]
0x4EE461: movzx   ebp, byte ptr [ecx]
0x4EE464: sub     esi, ebp
0x4EE466: jnz     short loc_4EE47F
0x4EE468: sub     eax, 1
0x4EE46B: add     ecx, 1
0x4EE46E: add     edx, 1
0x4EE471: test    eax, eax
0x4EE473: jz      short loc_4EE491
0x4EE475: movzx   esi, byte ptr [edx]
0x4EE478: movzx   ecx, byte ptr [ecx]
0x4EE47B: sub     esi, ecx
0x4EE47D: jz      short loc_4EE491
0x4EE47F: test    esi, esi
0x4EE481: mov     ebp, [esp+14h+arg_0]
0x4EE485: mov     eax, 1
0x4EE48A: jg      short loc_4EE497
0x4EE48C: or      eax, 0FFFFFFFFh
0x4EE48F: jmp     short loc_4EE497
0x4EE491: mov     ebp, [esp+14h+arg_0]
0x4EE495: xor     eax, eax
0x4EE497: test    eax, eax
0x4EE499: jnz     loc_4EE58B
0x4EE49F: mov     edi, [edi+4]
0x4EE4A2: test    edi, edi
0x4EE4A4: mov     ebx, [ebx+4]
0x4EE4A7: jnz     loc_4EE3F7
0x4EE4AD: mov     edi, [esp+14h+var_4]
0x4EE4B1: xor     esi, esi
0x4EE4B3: lea     eax, [esi+esi*2+6]
0x4EE4B7: add     eax, eax
0x4EE4B9: add     eax, eax
0x4EE4BB: mov     edx, [eax+edi]
0x4EE4BE: lea     ecx, [eax+edi]
0x4EE4C1: add     eax, ebp
0x4EE4C3: push    eax
0x4EE4C4: mov     eax, [edx+0Ch]
0x4EE4C7: call    eax
0x4EE4C9: test    al, al
0x4EE4CB: jnz     loc_4EE58B
0x4EE4D1: lea     eax, [esi+1]
0x4EE4D4: xor     edx, edx
0x4EE4D6: mov     ecx, 3
0x4EE4DB: div     ecx
0x4EE4DD: mov     esi, edx
0x4EE4DF: cmp     esi, 2
0x4EE4E2: jl      short loc_4EE4B3
0x4EE4E4: push    ebp; a2
0x4EE4E5: mov     ecx, edi; this
0x4EE4E7: call    TESForm_CompareAllComponentsTo
0x4EE4EC: test    al, al
0x4EE4EE: jnz     loc_4EE753
0x4EE4F4: mov     edx, [edi+30h]
0x4EE4F7: mov     edx, [edx+0Ch]
0x4EE4FA: lea     ecx, [edi+30h]
0x4EE4FD: lea     eax, [ebp+30h]
0x4EE500: push    eax
0x4EE501: call    edx
0x4EE503: test    al, al
0x4EE505: jnz     loc_4EE753
0x4EE50B: mov     eax, 0Fh
0x4EE510: lea     ecx, [ebp+48h]
0x4EE513: lea     edx, [edi+48h]
0x4EE516: mov     esi, [edx]
0x4EE518: cmp     esi, [ecx]
0x4EE51A: jnz     short loc_4EE52E
0x4EE51C: sub     eax, 4
0x4EE51F: add     ecx, 4
0x4EE522: add     edx, 4
0x4EE525: cmp     eax, 4
0x4EE528: jnb     short loc_4EE516
0x4EE52A: test    eax, eax
0x4EE52C: jz      short loc_4EE595
0x4EE52E: movzx   ebx, byte ptr [ecx]
0x4EE531: movzx   esi, byte ptr [edx]
0x4EE534: sub     esi, ebx
0x4EE536: jnz     short loc_4EE57D
0x4EE538: sub     eax, 1
0x4EE53B: add     ecx, 1
0x4EE53E: add     edx, 1
0x4EE541: test    eax, eax
0x4EE543: jz      short loc_4EE595
0x4EE545: movzx   ebx, byte ptr [ecx]
0x4EE548: movzx   esi, byte ptr [edx]
0x4EE54B: sub     esi, ebx
0x4EE54D: jnz     short loc_4EE57D
0x4EE54F: sub     eax, 1
0x4EE552: add     ecx, 1
0x4EE555: add     edx, 1
0x4EE558: test    eax, eax
0x4EE55A: jz      short loc_4EE595
0x4EE55C: movzx   ebx, byte ptr [ecx]
0x4EE55F: movzx   esi, byte ptr [edx]
0x4EE562: sub     esi, ebx
0x4EE564: jnz     short loc_4EE57D
0x4EE566: sub     eax, 1
0x4EE569: add     ecx, 1
0x4EE56C: add     edx, 1
0x4EE56F: test    eax, eax
0x4EE571: jz      short loc_4EE595
0x4EE573: movzx   eax, byte ptr [ecx]
0x4EE576: movzx   esi, byte ptr [edx]
0x4EE579: sub     esi, eax
0x4EE57B: jz      short loc_4EE595
0x4EE57D: test    esi, esi
0x4EE57F: mov     eax, 1
0x4EE584: jg      short loc_4EE597
0x4EE586: or      eax, 0FFFFFFFFh
0x4EE589: jmp     short loc_4EE597
0x4EE58B: pop     esi
0x4EE58C: pop     edi
0x4EE58D: pop     ebp
0x4EE58E: mov     al, 1
0x4EE590: pop     ebx
0x4EE591: pop     ecx
0x4EE592: retn    4
0x4EE595: xor     eax, eax
0x4EE597: test    eax, eax
0x4EE599: jnz     loc_4EE753
0x4EE59F: mov     eax, 0A0h ; ' '
0x4EE5A4: lea     ecx, [ebp+68h]
0x4EE5A7: lea     edx, [edi+68h]
0x4EE5AA: lea     ebx, [ebx+0]
0x4EE5B0: mov     esi, [edx]
0x4EE5B2: cmp     esi, [ecx]
0x4EE5B4: jnz     short loc_4EE5C8
0x4EE5B6: sub     eax, 4
0x4EE5B9: add     ecx, 4
0x4EE5BC: add     edx, 4
0x4EE5BF: cmp     eax, 4
0x4EE5C2: jnb     short loc_4EE5B0
0x4EE5C4: test    eax, eax
0x4EE5C6: jz      short loc_4EE625
0x4EE5C8: movzx   esi, byte ptr [edx]
0x4EE5CB: movzx   ebx, byte ptr [ecx]
0x4EE5CE: sub     esi, ebx
0x4EE5D0: jnz     short loc_4EE617
0x4EE5D2: sub     eax, 1
0x4EE5D5: add     ecx, 1
0x4EE5D8: add     edx, 1
0x4EE5DB: test    eax, eax
0x4EE5DD: jz      short loc_4EE625
0x4EE5DF: movzx   esi, byte ptr [edx]
0x4EE5E2: movzx   ebx, byte ptr [ecx]
0x4EE5E5: sub     esi, ebx
0x4EE5E7: jnz     short loc_4EE617
0x4EE5E9: sub     eax, 1
0x4EE5EC: add     ecx, 1
0x4EE5EF: add     edx, 1
0x4EE5F2: test    eax, eax
0x4EE5F4: jz      short loc_4EE625
0x4EE5F6: movzx   esi, byte ptr [edx]
0x4EE5F9: movzx   ebx, byte ptr [ecx]
0x4EE5FC: sub     esi, ebx
0x4EE5FE: jnz     short loc_4EE617
0x4EE600: sub     eax, 1
0x4EE603: add     ecx, 1
0x4EE606: add     edx, 1
0x4EE609: test    eax, eax
0x4EE60B: jz      short loc_4EE625
0x4EE60D: movzx   esi, byte ptr [edx]
0x4EE610: movzx   ecx, byte ptr [ecx]
0x4EE613: sub     esi, ecx
0x4EE615: jz      short loc_4EE625
0x4EE617: test    esi, esi
0x4EE619: mov     eax, 1
0x4EE61E: jg      short loc_4EE627
0x4EE620: or      eax, 0FFFFFFFFh
0x4EE623: jmp     short loc_4EE627
0x4EE625: xor     eax, eax
0x4EE627: test    eax, eax
0x4EE629: jnz     loc_4EE753
0x4EE62F: mov     eax, 10h
0x4EE634: lea     ecx, [ebp+58h]
0x4EE637: lea     edx, [edi+58h]
0x4EE63A: lea     ebx, [ebx+0]
0x4EE640: mov     esi, [edx]
0x4EE642: cmp     esi, [ecx]
0x4EE644: jnz     short loc_4EE658
0x4EE646: sub     eax, 4
0x4EE649: add     ecx, 4
0x4EE64C: add     edx, 4
0x4EE64F: cmp     eax, 4
0x4EE652: jnb     short loc_4EE640
0x4EE654: test    eax, eax
0x4EE656: jz      short loc_4EE6B5
0x4EE658: movzx   ebx, byte ptr [ecx]
0x4EE65B: movzx   esi, byte ptr [edx]
0x4EE65E: sub     esi, ebx
0x4EE660: jnz     short loc_4EE6A7
0x4EE662: sub     eax, 1
0x4EE665: add     ecx, 1
0x4EE668: add     edx, 1
0x4EE66B: test    eax, eax
0x4EE66D: jz      short loc_4EE6B5
0x4EE66F: movzx   ebx, byte ptr [ecx]
0x4EE672: movzx   esi, byte ptr [edx]
0x4EE675: sub     esi, ebx
0x4EE677: jnz     short loc_4EE6A7
0x4EE679: sub     eax, 1
0x4EE67C: add     ecx, 1
0x4EE67F: add     edx, 1
0x4EE682: test    eax, eax
0x4EE684: jz      short loc_4EE6B5
0x4EE686: movzx   ebx, byte ptr [ecx]
0x4EE689: movzx   esi, byte ptr [edx]
0x4EE68C: sub     esi, ebx
0x4EE68E: jnz     short loc_4EE6A7
0x4EE690: sub     eax, 1
0x4EE693: add     ecx, 1
0x4EE696: add     edx, 1
0x4EE699: test    eax, eax
0x4EE69B: jz      short loc_4EE6B5
0x4EE69D: movzx   eax, byte ptr [ecx]
0x4EE6A0: movzx   esi, byte ptr [edx]
0x4EE6A3: sub     esi, eax
0x4EE6A5: jz      short loc_4EE6B5
0x4EE6A7: test    esi, esi
0x4EE6A9: mov     eax, 1
0x4EE6AE: jg      short loc_4EE6B7
0x4EE6B0: or      eax, 0FFFFFFFFh
0x4EE6B3: jmp     short loc_4EE6B7
0x4EE6B5: xor     eax, eax
0x4EE6B7: test    eax, eax
0x4EE6B9: jnz     loc_4EE753
0x4EE6BF: mov     eax, 38h ; '8'
0x4EE6C4: lea     ecx, [ebp+110h]
0x4EE6CA: lea     edx, [edi+110h]
0x4EE6D0: mov     esi, [edx]
0x4EE6D2: cmp     esi, [ecx]
0x4EE6D4: jnz     short loc_4EE6E8
0x4EE6D6: sub     eax, 4
0x4EE6D9: add     ecx, 4
0x4EE6DC: add     edx, 4
0x4EE6DF: cmp     eax, 4
0x4EE6E2: jnb     short loc_4EE6D0
0x4EE6E4: test    eax, eax
0x4EE6E6: jz      short loc_4EE745
0x4EE6E8: movzx   esi, byte ptr [edx]
0x4EE6EB: movzx   edi, byte ptr [ecx]
0x4EE6EE: sub     esi, edi
0x4EE6F0: jnz     short loc_4EE737
0x4EE6F2: sub     eax, 1
0x4EE6F5: add     ecx, 1
0x4EE6F8: add     edx, 1
0x4EE6FB: test    eax, eax
0x4EE6FD: jz      short loc_4EE745
0x4EE6FF: movzx   esi, byte ptr [edx]
0x4EE702: movzx   edi, byte ptr [ecx]
0x4EE705: sub     esi, edi
0x4EE707: jnz     short loc_4EE737
0x4EE709: sub     eax, 1
0x4EE70C: add     ecx, 1
0x4EE70F: add     edx, 1
0x4EE712: test    eax, eax
0x4EE714: jz      short loc_4EE745
0x4EE716: movzx   esi, byte ptr [edx]
0x4EE719: movzx   edi, byte ptr [ecx]
0x4EE71C: sub     esi, edi
0x4EE71E: jnz     short loc_4EE737
0x4EE720: sub     eax, 1
0x4EE723: add     ecx, 1
0x4EE726: add     edx, 1
0x4EE729: test    eax, eax
0x4EE72B: jz      short loc_4EE745
0x4EE72D: movzx   esi, byte ptr [edx]
0x4EE730: movzx   ecx, byte ptr [ecx]
0x4EE733: sub     esi, ecx
0x4EE735: jz      short loc_4EE745
0x4EE737: test    esi, esi
0x4EE739: mov     eax, 1
0x4EE73E: jg      short loc_4EE747
0x4EE740: or      eax, 0FFFFFFFFh
0x4EE743: jmp     short loc_4EE747
0x4EE745: xor     eax, eax
0x4EE747: test    eax, eax
0x4EE749: jnz     short loc_4EE753
0x4EE74B: pop     esi
0x4EE74C: pop     edi
0x4EE74D: pop     ebp
0x4EE74E: pop     ebx
0x4EE74F: pop     ecx
0x4EE750: retn    4
0x4EE753: pop     esi
0x4EE754: pop     edi
0x4EE755: pop     ebp
0x4EE756: mov     eax, 1
0x4EE75B: pop     ebx
0x4EE75C: pop     ecx
0x4EE75D: retn    4
0x4EE760: pop     edi
0x4EE761: pop     ebp
0x4EE762: mov     al, 1
0x4EE764: pop     ebx
0x4EE765: pop     ecx
0x4EE766: retn    4
