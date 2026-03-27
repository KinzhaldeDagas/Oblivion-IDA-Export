0x876340: push    0FFFFFFFFh
0x876342: push    offset SEH_880560
0x876347: mov     eax, large fs:0
0x87634D: push    eax
0x87634E: push    ebx
0x87634F: push    ebp
0x876350: push    esi
0x876351: push    edi
0x876352: mov     eax, ds:0B30AACh
0x876357: xor     eax, esp
0x876359: push    eax
0x87635A: lea     eax, [esp+20h+var_C]
0x87635E: mov     large fs:0, eax
0x876364: mov     esi, ecx
0x876366: mov     ebx, [esp+20h+arg_8]
0x87636A: mov     eax, [ebx+10h]
0x87636D: mov     edi, ds:0B47678h
0x876373: push    eax
0x876374: call    sub_848C40
0x876379: mov     ebx, [ebx+0Ch]
0x87637C: push    ebx
0x87637D: mov     ecx, esi
0x87637F: call    sub_848E50
0x876384: mov     ecx, [esp+20h+arg_0]
0x876388: mov     eax, [esi]
0x87638A: mov     edx, [eax+0BCh]
0x876390: push    0
0x876392: push    ebx
0x876393: push    ecx
0x876394: mov     ecx, esi
0x876396: call    edx
0x876398: mov     eax, [edi+24h]
0x87639B: mov     ecx, [esp+20h+arg_C]
0x87639F: mov     ebx, [eax]
0x8763A1: mov     edx, [ecx]
0x8763A3: mov     eax, [edx+88h]
0x8763A9: push    0
0x8763AB: mov     [esp+24h+arg_8], ebx
0x8763AF: call    eax
0x8763B1: mov     ebx, [ebx+4]
0x8763B4: mov     ebp, eax
0x8763B6: cmp     ebx, ebp
0x8763B8: jz      short loc_8763EF
0x8763BA: test    ebx, ebx
0x8763BC: jz      short loc_8763DA
0x8763BE: lea     ecx, [ebx+4]
0x8763C1: push    ecx; lpAddend
0x8763C2: call    dword ptr ds:0A2807Ch
0x8763C8: test    eax, eax
0x8763CA: jnz     short loc_8763DA
0x8763CC: test    ebx, ebx
0x8763CE: jz      short loc_8763DA
0x8763D0: mov     edx, [ebx]
0x8763D2: mov     eax, [edx]
0x8763D4: push    1
0x8763D6: mov     ecx, ebx
0x8763D8: call    eax
0x8763DA: test    ebp, ebp
0x8763DC: mov     ecx, [esp+20h+arg_8]
0x8763E0: mov     [ecx+4], ebp
0x8763E3: jz      short loc_8763EF
0x8763E5: add     ebp, 4
0x8763E8: push    ebp; lpAddend
0x8763E9: call    dword ptr ds:0A28078h
0x8763EF: mov     edx, [edi+24h]
0x8763F2: mov     eax, [esp+20h+arg_C]
0x8763F6: mov     ebx, [edx+4]
0x8763F9: push    0
0x8763FB: push    eax
0x8763FC: mov     ecx, esi
0x8763FE: mov     [esp+28h+arg_8], ebx
0x876402: call    sub_848FD0
0x876407: mov     ebx, [ebx+4]
0x87640A: mov     ebp, eax
0x87640C: cmp     ebx, ebp
0x87640E: jz      short loc_876445
0x876410: test    ebx, ebx
0x876412: jz      short loc_876430
0x876414: lea     ecx, [ebx+4]
0x876417: push    ecx; lpAddend
0x876418: call    dword ptr ds:0A2807Ch
0x87641E: test    eax, eax
0x876420: jnz     short loc_876430
0x876422: test    ebx, ebx
0x876424: jz      short loc_876430
0x876426: mov     edx, [ebx]
0x876428: mov     eax, [edx]
0x87642A: push    1
0x87642C: mov     ecx, ebx
0x87642E: call    eax
0x876430: test    ebp, ebp
0x876432: mov     ecx, [esp+20h+arg_8]
0x876436: mov     [ecx+4], ebp
0x876439: jz      short loc_876445
0x87643B: add     ebp, 4
0x87643E: push    ebp; lpAddend
0x87643F: call    dword ptr ds:0A28078h
0x876445: mov     edx, [edi+24h]
0x876448: mov     ebp, [edx+18h]
0x87644B: mov     eax, ds:0B43108h
0x876450: mov     ebx, [ebp+4]
0x876453: add     ebp, 4
0x876456: cmp     ebx, eax
0x876458: mov     [esp+20h+arg_C], eax
0x87645C: jz      short loc_876493
0x87645E: test    ebx, ebx
0x876460: jz      short loc_876482
0x876462: lea     eax, [ebx+4]
0x876465: push    eax; lpAddend
0x876466: call    dword ptr ds:0A2807Ch
0x87646C: test    eax, eax
0x87646E: jnz     short loc_87647E
0x876470: test    ebx, ebx
0x876472: jz      short loc_87647E
0x876474: mov     edx, [ebx]
0x876476: mov     eax, [edx]
0x876478: push    1
0x87647A: mov     ecx, ebx
0x87647C: call    eax
0x87647E: mov     eax, [esp+20h+arg_C]
0x876482: test    eax, eax
0x876484: mov     [ebp+0], eax
0x876487: jz      short loc_876493
0x876489: add     eax, 4
0x87648C: push    eax; lpAddend
0x87648D: call    dword ptr ds:0A28078h
0x876493: mov     ecx, [edi+24h]
0x876496: mov     ebp, [ecx+1Ch]
0x876499: mov     eax, ds:0B4310Ch
0x87649E: mov     ebx, [ebp+4]
0x8764A1: cmp     ebx, eax
0x8764A3: mov     ecx, eax
0x8764A5: mov     [esp+20h+arg_C], ecx
0x8764A9: jz      short loc_8764E0
0x8764AB: test    ebx, ebx
0x8764AD: jz      short loc_8764CF
0x8764AF: lea     edx, [ebx+4]
0x8764B2: push    edx; lpAddend
0x8764B3: call    dword ptr ds:0A2807Ch
0x8764B9: test    eax, eax
0x8764BB: jnz     short loc_8764CB
0x8764BD: test    ebx, ebx
0x8764BF: jz      short loc_8764CB
0x8764C1: mov     eax, [ebx]
0x8764C3: mov     edx, [eax]
0x8764C5: push    1
0x8764C7: mov     ecx, ebx
0x8764C9: call    edx
0x8764CB: mov     ecx, [esp+20h+arg_C]
0x8764CF: test    ecx, ecx
0x8764D1: mov     [ebp+4], ecx
0x8764D4: jz      short loc_8764E0
0x8764D6: add     ecx, 4
0x8764D9: push    ecx; lpAddend
0x8764DA: call    dword ptr ds:0A28078h
0x8764E0: mov     ebx, 1
0x8764E5: add     [edi+60h], ebx
0x8764E8: mov     [esp+20h+arg_C], edi
0x8764EC: mov     ecx, [esi+38h]
0x8764EF: lea     eax, [esp+20h+arg_C]
0x8764F3: push    eax
0x8764F4: push    ecx
0x8764F5: lea     ecx, [esi+40h]
0x8764F8: mov     [esp+28h+var_4], 0
0x876500: call    sub_76CE40
0x876505: or      eax, 0FFFFFFFFh
0x876508: add     [edi+60h], eax
0x87650B: mov     [esp+20h+var_4], eax
0x87650F: jnz     short loc_876518
0x876511: mov     ecx, edi
0x876513: call    sub_7604D0
0x876518: add     [esi+38h], ebx
0x87651B: mov     ecx, [esp+20h+var_C]
0x87651F: mov     large fs:0, ecx
0x876526: pop     ecx
0x876527: pop     edi
0x876528: pop     esi
0x876529: pop     ebp
0x87652A: pop     ebx
0x87652B: add     esp, 0Ch
0x87652E: retn    10h
