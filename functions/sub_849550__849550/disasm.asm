0x849550: push    0FFFFFFFFh
0x849552: push    offset SEH_879360
0x849557: mov     eax, large fs:0
0x84955D: push    eax
0x84955E: push    ecx
0x84955F: push    ebx
0x849560: push    ebp
0x849561: push    esi
0x849562: push    edi
0x849563: mov     eax, ds:0B30AACh
0x849568: xor     eax, esp
0x84956A: push    eax
0x84956B: lea     eax, [esp+24h+var_C]
0x84956F: mov     large fs:0, eax
0x849575: mov     [esp+24h+var_10], ecx
0x849579: mov     eax, [esp+24h+arg_8]
0x84957D: mov     eax, [eax+10h]
0x849580: mov     esi, ds:0B455ECh
0x849586: push    eax
0x849587: call    sub_848DA0
0x84958C: mov     ecx, [esi+24h]
0x84958F: mov     ebx, [esp+24h+arg_C]
0x849593: mov     edi, [ecx]
0x849595: mov     edx, [ebx]
0x849597: mov     eax, [edx+88h]
0x84959D: push    0
0x84959F: mov     ecx, ebx
0x8495A1: mov     [esp+28h+arg_8], edi
0x8495A5: call    eax
0x8495A7: mov     edi, [edi+4]
0x8495AA: mov     ebp, eax
0x8495AC: cmp     edi, ebp
0x8495AE: jz      short loc_8495E7
0x8495B0: test    edi, edi
0x8495B2: jz      short loc_8495D0
0x8495B4: lea     ecx, [edi+4]
0x8495B7: push    ecx; lpAddend
0x8495B8: call    dword ptr ds:0A2807Ch
0x8495BE: test    eax, eax
0x8495C0: jnz     short loc_8495D0
0x8495C2: test    edi, edi
0x8495C4: jz      short loc_8495D0
0x8495C6: mov     edx, [edi]
0x8495C8: mov     eax, [edx]
0x8495CA: push    1
0x8495CC: mov     ecx, edi
0x8495CE: call    eax
0x8495D0: test    ebp, ebp
0x8495D2: mov     edi, [esp+24h+arg_8]
0x8495D6: mov     [edi+4], ebp
0x8495D9: jz      short loc_8495EB
0x8495DB: add     ebp, 4
0x8495DE: push    ebp; lpAddend
0x8495DF: call    dword ptr ds:0A28078h
0x8495E5: jmp     short loc_8495EB
0x8495E7: mov     edi, [esp+24h+arg_8]
0x8495EB: test    edi, edi
0x8495ED: jz      short loc_849609
0x8495EF: cmp     byte ptr ds:0B42CDDh, 0
0x8495F6: jz      short loc_849609
0x8495F8: mov     edx, [ebx]
0x8495FA: mov     eax, [edx+78h]
0x8495FD: mov     ecx, ebx
0x8495FF: call    eax
0x849601: push    eax
0x849602: mov     ecx, edi
0x849604: call    sub_7715E0
0x849609: mov     ecx, [esi+24h]
0x84960C: mov     edi, [ecx+4]
0x84960F: mov     edx, [ebx]
0x849611: mov     eax, [edx+90h]
0x849617: push    0
0x849619: mov     ecx, ebx
0x84961B: mov     [esp+28h+arg_8], edi
0x84961F: call    eax
0x849621: mov     edi, [edi+4]
0x849624: mov     ebp, eax
0x849626: cmp     edi, ebp
0x849628: jz      short loc_849661
0x84962A: test    edi, edi
0x84962C: jz      short loc_84964A
0x84962E: lea     ecx, [edi+4]
0x849631: push    ecx; lpAddend
0x849632: call    dword ptr ds:0A2807Ch
0x849638: test    eax, eax
0x84963A: jnz     short loc_84964A
0x84963C: test    edi, edi
0x84963E: jz      short loc_84964A
0x849640: mov     edx, [edi]
0x849642: mov     eax, [edx]
0x849644: push    1
0x849646: mov     ecx, edi
0x849648: call    eax
0x84964A: test    ebp, ebp
0x84964C: mov     edi, [esp+24h+arg_8]
0x849650: mov     [edi+4], ebp
0x849653: jz      short loc_849665
0x849655: add     ebp, 4
0x849658: push    ebp; lpAddend
0x849659: call    dword ptr ds:0A28078h
0x84965F: jmp     short loc_849665
0x849661: mov     edi, [esp+24h+arg_8]
0x849665: test    edi, edi
0x849667: jz      short loc_849683
0x849669: cmp     byte ptr ds:0B42CDDh, 0
0x849670: jz      short loc_849683
0x849672: mov     edx, [ebx]
0x849674: mov     eax, [edx+78h]
0x849677: mov     ecx, ebx
0x849679: call    eax
0x84967B: push    eax
0x84967C: mov     ecx, edi
0x84967E: call    sub_7715E0
0x849683: mov     ebx, 1
0x849688: add     [esi+60h], ebx
0x84968B: mov     [esp+24h+arg_8], esi
0x84968F: mov     edi, [esp+24h+var_10]
0x849693: mov     edx, [edi+38h]
0x849696: lea     ecx, [esp+24h+arg_8]
0x84969A: push    ecx
0x84969B: push    edx
0x84969C: lea     ecx, [edi+40h]
0x84969F: mov     [esp+2Ch+var_4], 0
0x8496A7: call    sub_76CE40
0x8496AC: or      eax, 0FFFFFFFFh
0x8496AF: add     [esi+60h], eax
0x8496B2: mov     [esp+24h+var_4], eax
0x8496B6: jnz     short loc_8496BF
0x8496B8: mov     ecx, esi
0x8496BA: call    sub_7604D0
0x8496BF: add     [edi+38h], ebx
0x8496C2: mov     ecx, [esp+24h+var_C]
0x8496C6: mov     large fs:0, ecx
0x8496CD: pop     ecx
0x8496CE: pop     edi
0x8496CF: pop     esi
0x8496D0: pop     ebp
0x8496D1: pop     ebx
0x8496D2: add     esp, 10h
0x8496D5: retn    10h
