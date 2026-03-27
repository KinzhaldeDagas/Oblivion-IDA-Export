0x8753F0: push    0FFFFFFFFh
0x8753F2: push    offset SEH_880560
0x8753F7: mov     eax, large fs:0
0x8753FD: push    eax
0x8753FE: push    ebx
0x8753FF: push    ebp
0x875400: push    esi
0x875401: push    edi
0x875402: mov     eax, ds:0B30AACh
0x875407: xor     eax, esp
0x875409: push    eax
0x87540A: lea     eax, [esp+20h+var_C]
0x87540E: mov     large fs:0, eax
0x875414: mov     esi, ecx
0x875416: mov     ebx, [esp+20h+arg_8]
0x87541A: mov     eax, [ebx+10h]
0x87541D: mov     edi, ds:0B47658h
0x875423: push    eax
0x875424: call    sub_848C40
0x875429: mov     ebx, [ebx+0Ch]
0x87542C: push    ebx
0x87542D: mov     ecx, esi
0x87542F: call    sub_848E50
0x875434: mov     ecx, [esp+20h+arg_0]
0x875438: mov     eax, [esi]
0x87543A: mov     edx, [eax+0BCh]
0x875440: push    0
0x875442: push    ebx
0x875443: push    ecx
0x875444: mov     ecx, esi
0x875446: call    edx
0x875448: mov     eax, [edi+24h]
0x87544B: mov     ecx, [esp+20h+arg_C]
0x87544F: mov     ebx, [eax]
0x875451: mov     edx, [ecx]
0x875453: mov     eax, [edx+88h]
0x875459: push    0
0x87545B: mov     [esp+24h+arg_8], ebx
0x87545F: call    eax
0x875461: mov     ebx, [ebx+4]
0x875464: mov     ebp, eax
0x875466: cmp     ebx, ebp
0x875468: jz      short loc_87549F
0x87546A: test    ebx, ebx
0x87546C: jz      short loc_87548A
0x87546E: lea     ecx, [ebx+4]
0x875471: push    ecx; lpAddend
0x875472: call    dword ptr ds:0A2807Ch
0x875478: test    eax, eax
0x87547A: jnz     short loc_87548A
0x87547C: test    ebx, ebx
0x87547E: jz      short loc_87548A
0x875480: mov     edx, [ebx]
0x875482: mov     eax, [edx]
0x875484: push    1
0x875486: mov     ecx, ebx
0x875488: call    eax
0x87548A: test    ebp, ebp
0x87548C: mov     ecx, [esp+20h+arg_8]
0x875490: mov     [ecx+4], ebp
0x875493: jz      short loc_87549F
0x875495: add     ebp, 4
0x875498: push    ebp; lpAddend
0x875499: call    dword ptr ds:0A28078h
0x87549F: mov     edx, [edi+24h]
0x8754A2: mov     eax, [esp+20h+arg_C]
0x8754A6: mov     ebx, [edx+4]
0x8754A9: push    0
0x8754AB: push    eax
0x8754AC: mov     ecx, esi
0x8754AE: mov     [esp+28h+arg_8], ebx
0x8754B2: call    sub_848FD0
0x8754B7: mov     ebx, [ebx+4]
0x8754BA: mov     ebp, eax
0x8754BC: cmp     ebx, ebp
0x8754BE: jz      short loc_8754F5
0x8754C0: test    ebx, ebx
0x8754C2: jz      short loc_8754E0
0x8754C4: lea     ecx, [ebx+4]
0x8754C7: push    ecx; lpAddend
0x8754C8: call    dword ptr ds:0A2807Ch
0x8754CE: test    eax, eax
0x8754D0: jnz     short loc_8754E0
0x8754D2: test    ebx, ebx
0x8754D4: jz      short loc_8754E0
0x8754D6: mov     edx, [ebx]
0x8754D8: mov     eax, [edx]
0x8754DA: push    1
0x8754DC: mov     ecx, ebx
0x8754DE: call    eax
0x8754E0: test    ebp, ebp
0x8754E2: mov     ecx, [esp+20h+arg_8]
0x8754E6: mov     [ecx+4], ebp
0x8754E9: jz      short loc_8754F5
0x8754EB: add     ebp, 4
0x8754EE: push    ebp; lpAddend
0x8754EF: call    dword ptr ds:0A28078h
0x8754F5: mov     edx, [edi+24h]
0x8754F8: mov     ebx, [edx+10h]
0x8754FB: mov     eax, ds:0B43110h
0x875500: mov     ebp, [ebx+4]
0x875503: add     ebx, 4
0x875506: cmp     ebp, eax
0x875508: mov     [esp+20h+arg_C], eax
0x87550C: jz      short loc_875543
0x87550E: test    ebp, ebp
0x875510: jz      short loc_875533
0x875512: lea     eax, [ebp+4]
0x875515: push    eax; lpAddend
0x875516: call    dword ptr ds:0A2807Ch
0x87551C: test    eax, eax
0x87551E: jnz     short loc_87552F
0x875520: test    ebp, ebp
0x875522: jz      short loc_87552F
0x875524: mov     edx, [ebp+0]
0x875527: mov     eax, [edx]
0x875529: push    1
0x87552B: mov     ecx, ebp
0x87552D: call    eax
0x87552F: mov     eax, [esp+20h+arg_C]
0x875533: test    eax, eax
0x875535: mov     [ebx], eax
0x875537: jz      short loc_875543
0x875539: add     eax, 4
0x87553C: push    eax; lpAddend
0x87553D: call    dword ptr ds:0A28078h
0x875543: mov     ecx, [edi+24h]
0x875546: mov     ebx, [ecx+14h]
0x875549: mov     eax, ds:0B43108h
0x87554E: mov     ebp, [ebx+4]
0x875551: add     ebx, 4
0x875554: cmp     ebp, eax
0x875556: mov     [esp+20h+arg_C], eax
0x87555A: jz      short loc_875591
0x87555C: test    ebp, ebp
0x87555E: jz      short loc_875581
0x875560: lea     edx, [ebp+4]
0x875563: push    edx; lpAddend
0x875564: call    dword ptr ds:0A2807Ch
0x87556A: test    eax, eax
0x87556C: jnz     short loc_87557D
0x87556E: test    ebp, ebp
0x875570: jz      short loc_87557D
0x875572: mov     eax, [ebp+0]
0x875575: mov     edx, [eax]
0x875577: push    1
0x875579: mov     ecx, ebp
0x87557B: call    edx
0x87557D: mov     eax, [esp+20h+arg_C]
0x875581: test    eax, eax
0x875583: mov     [ebx], eax
0x875585: jz      short loc_875591
0x875587: add     eax, 4
0x87558A: push    eax; lpAddend
0x87558B: call    dword ptr ds:0A28078h
0x875591: mov     eax, [edi+24h]
0x875594: mov     ebp, [eax+18h]
0x875597: mov     eax, ds:0B4310Ch
0x87559C: mov     ebx, [ebp+4]
0x87559F: cmp     ebx, eax
0x8755A1: mov     ecx, eax
0x8755A3: mov     [esp+20h+arg_C], ecx
0x8755A7: jz      short loc_8755DE
0x8755A9: test    ebx, ebx
0x8755AB: jz      short loc_8755CD
0x8755AD: lea     ecx, [ebx+4]
0x8755B0: push    ecx; lpAddend
0x8755B1: call    dword ptr ds:0A2807Ch
0x8755B7: test    eax, eax
0x8755B9: jnz     short loc_8755C9
0x8755BB: test    ebx, ebx
0x8755BD: jz      short loc_8755C9
0x8755BF: mov     edx, [ebx]
0x8755C1: mov     eax, [edx]
0x8755C3: push    1
0x8755C5: mov     ecx, ebx
0x8755C7: call    eax
0x8755C9: mov     ecx, [esp+20h+arg_C]
0x8755CD: test    ecx, ecx
0x8755CF: mov     [ebp+4], ecx
0x8755D2: jz      short loc_8755DE
0x8755D4: add     ecx, 4
0x8755D7: push    ecx; lpAddend
0x8755D8: call    dword ptr ds:0A28078h
0x8755DE: mov     ebx, 1
0x8755E3: add     [edi+60h], ebx
0x8755E6: mov     [esp+20h+arg_C], edi
0x8755EA: mov     edx, [esi+38h]
0x8755ED: lea     ecx, [esp+20h+arg_C]
0x8755F1: push    ecx
0x8755F2: push    edx
0x8755F3: lea     ecx, [esi+40h]
0x8755F6: mov     [esp+28h+var_4], 0
0x8755FE: call    sub_76CE40
0x875603: or      eax, 0FFFFFFFFh
0x875606: add     [edi+60h], eax
0x875609: mov     [esp+20h+var_4], eax
0x87560D: jnz     short loc_875616
0x87560F: mov     ecx, edi
0x875611: call    sub_7604D0
0x875616: add     [esi+38h], ebx
0x875619: mov     ecx, [esp+20h+var_C]
0x87561D: mov     large fs:0, ecx
0x875624: pop     ecx
0x875625: pop     edi
0x875626: pop     esi
0x875627: pop     ebp
0x875628: pop     ebx
0x875629: add     esp, 0Ch
0x87562C: retn    10h
