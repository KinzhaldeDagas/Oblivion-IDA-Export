0x770640: sub     esp, 10h
0x770643: push    ebx
0x770644: push    ebp
0x770645: push    esi
0x770646: mov     esi, [esp+1Ch+Size]
0x77064A: mov     ebp, [esi+10h]
0x77064D: mov     ebx, [esi+24h]
0x770650: xor     ecx, ecx
0x770652: cmp     ebp, ecx
0x770654: mov     [esp+1Ch+var_10], ecx
0x770658: jnz     short loc_77069A
0x77065A: xor     ebp, ebp
0x77065C: cmp     [esi+8], cx
0x770660: jbe     loc_770732
0x770666: mov     eax, [esi+1Ch]
0x770669: lea     esp, [esp+0]
0x770670: push    eax
0x770671: push    0
0x770673: push    ebx
0x770674: call    __memset
0x770679: mov     eax, [esi+1Ch]
0x77067C: add     ebx, [esi+20h]
0x77067F: add     [esp+28h+var_10], eax
0x770683: add     ebp, 1
0x770686: add     esp, 0Ch
0x770689: cmp     bp, [esi+8]
0x77068D: jb      short loc_770670
0x77068F: mov     eax, [esp+1Ch+var_10]
0x770693: pop     esi
0x770694: pop     ebp
0x770695: pop     ebx
0x770696: add     esp, 10h
0x770699: retn
0x77069A: mov     ax, [esi+4]
0x77069E: xor     edx, edx
0x7706A0: sub     ax, 10h
0x7706A4: cmp     dword ptr [esi], 6
0x7706A7: movzx   eax, ax
0x7706AA: setnz   dl
0x7706AD: push    edi
0x7706AE: lea     edx, [edx+edx+2]
0x7706B2: movzx   edi, dx
0x7706B5: mov     edx, eax
0x7706B7: sub     edx, edi
0x7706B9: test    dx, dx
0x7706BC: mov     [esp+20h+var_4], edi
0x7706C0: jle     short loc_7706CA
0x7706C2: mov     edx, [esi+1Ch]
0x7706C5: movzx   eax, di
0x7706C8: jmp     short loc_7706D0
0x7706CA: mov     edx, [esi+14h]
0x7706CD: movzx   eax, ax
0x7706D0: cmp     [esi+8], cx
0x7706D4: mov     [esp+20h+Size], edx
0x7706D8: mov     [esp+20h+var_C], eax
0x7706DC: mov     [esp+20h+var_8], ecx
0x7706E0: jbe     short loc_770731
0x7706E2: mov     eax, [esp+20h+Size]
0x7706E6: push    eax; Size
0x7706E7: push    ebp; Src
0x7706E8: push    ebx; Dst
0x7706E9: call    _memcpy
0x7706EE: mov     eax, [esp+2Ch+var_C]
0x7706F2: add     esp, 0Ch
0x7706F5: cmp     ax, di
0x7706F8: lea     edx, [ebx+2]
0x7706FB: jnb     short loc_770713
0x7706FD: sub     edi, eax
0x7706FF: movzx   ecx, di
0x770702: xor     eax, eax
0x770704: shr     ecx, 1
0x770706: mov     edi, edx
0x770708: rep stosd
0x77070A: adc     ecx, ecx
0x77070C: rep stosw
0x77070F: mov     edi, [esp+20h+var_4]
0x770713: mov     eax, [esp+20h+var_8]
0x770717: mov     ecx, [esi+1Ch]
0x77071A: add     ebp, [esi+18h]
0x77071D: add     ebx, [esi+20h]
0x770720: add     [esp+20h+var_10], ecx
0x770724: add     eax, 1
0x770727: cmp     ax, [esi+8]
0x77072B: mov     [esp+20h+var_8], eax
0x77072F: jb      short loc_7706E2
0x770731: pop     edi
0x770732: mov     eax, [esp+1Ch+var_10]
0x770736: pop     esi
0x770737: pop     ebp
0x770738: pop     ebx
0x770739: add     esp, 10h
0x77073C: retn
