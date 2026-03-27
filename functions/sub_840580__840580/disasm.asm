0x840580: push    0FFFFFFFFh
0x840582: push    offset SEH_882120
0x840587: mov     eax, large fs:0
0x84058D: push    eax
0x84058E: push    ebx
0x84058F: push    ebp
0x840590: push    esi
0x840591: push    edi
0x840592: mov     eax, ds:0B30AACh
0x840597: xor     eax, esp
0x840599: push    eax
0x84059A: lea     eax, [esp+20h+var_C]
0x84059E: mov     large fs:0, eax
0x8405A4: mov     esi, ecx
0x8405A6: mov     ebx, [esp+20h+arg_8]
0x8405AA: mov     eax, [ebx+10h]
0x8405AD: mov     edi, ds:0B458D0h
0x8405B3: push    eax
0x8405B4: call    sub_848C40
0x8405B9: mov     ebp, [ebx+0Ch]
0x8405BC: push    ebp
0x8405BD: mov     ecx, esi
0x8405BF: call    sub_848E50
0x8405C4: mov     ebx, [ebx+10h]
0x8405C7: mov     ecx, [esp+20h+arg_0]
0x8405CB: mov     eax, [esi]
0x8405CD: mov     edx, [eax+0BCh]
0x8405D3: push    ebx
0x8405D4: push    ebp
0x8405D5: push    ecx
0x8405D6: mov     ecx, esi
0x8405D8: call    edx
0x8405DA: mov     eax, [edi+24h]
0x8405DD: mov     ebx, [esp+20h+arg_C]
0x8405E1: mov     ebp, [eax]
0x8405E3: mov     edx, [ebx]
0x8405E5: mov     eax, [edx+88h]
0x8405EB: push    0
0x8405ED: mov     ecx, ebx
0x8405EF: mov     [esp+24h+arg_8], ebp
0x8405F3: call    eax
0x8405F5: mov     ebp, [ebp+4]
0x8405F8: cmp     ebp, eax
0x8405FA: mov     [esp+20h+arg_0], eax
0x8405FE: jz      short loc_84063A
0x840600: test    ebp, ebp
0x840602: jz      short loc_840625
0x840604: lea     ecx, [ebp+4]
0x840607: push    ecx; lpAddend
0x840608: call    dword ptr ds:0A2807Ch
0x84060E: test    eax, eax
0x840610: jnz     short loc_840621
0x840612: test    ebp, ebp
0x840614: jz      short loc_840621
0x840616: mov     edx, [ebp+0]
0x840619: mov     eax, [edx]
0x84061B: push    1
0x84061D: mov     ecx, ebp
0x84061F: call    eax
0x840621: mov     eax, [esp+20h+arg_0]
0x840625: test    eax, eax
0x840627: mov     ecx, [esp+20h+arg_8]
0x84062B: mov     [ecx+4], eax
0x84062E: jz      short loc_84063A
0x840630: add     eax, 4
0x840633: push    eax; lpAddend
0x840634: call    dword ptr ds:0A28078h
0x84063A: mov     edx, [esp+20h+arg_8]
0x84063E: push    ebx
0x84063F: push    edx
0x840640: mov     ecx, esi
0x840642: call    sub_848FA0
0x840647: mov     eax, [edi+24h]
0x84064A: mov     ebp, [eax+4]
0x84064D: push    0
0x84064F: push    ebx
0x840650: mov     ecx, esi
0x840652: mov     [esp+28h+arg_8], ebp
0x840656: call    sub_848FD0
0x84065B: mov     ebp, [ebp+4]
0x84065E: cmp     ebp, eax
0x840660: mov     [esp+20h+arg_0], eax
0x840664: jz      short loc_8406A0
0x840666: test    ebp, ebp
0x840668: jz      short loc_84068B
0x84066A: lea     ecx, [ebp+4]
0x84066D: push    ecx; lpAddend
0x84066E: call    dword ptr ds:0A2807Ch
0x840674: test    eax, eax
0x840676: jnz     short loc_840687
0x840678: test    ebp, ebp
0x84067A: jz      short loc_840687
0x84067C: mov     edx, [ebp+0]
0x84067F: mov     eax, [edx]
0x840681: push    1
0x840683: mov     ecx, ebp
0x840685: call    eax
0x840687: mov     eax, [esp+20h+arg_0]
0x84068B: test    eax, eax
0x84068D: mov     ecx, [esp+20h+arg_8]
0x840691: mov     [ecx+4], eax
0x840694: jz      short loc_8406A0
0x840696: add     eax, 4
0x840699: push    eax; lpAddend
0x84069A: call    dword ptr ds:0A28078h
0x8406A0: mov     edx, [esp+20h+arg_8]
0x8406A4: push    ebx
0x8406A5: push    edx
0x8406A6: mov     ecx, esi
0x8406A8: call    sub_848FA0
0x8406AD: mov     ebx, 1
0x8406B2: add     [edi+60h], ebx
0x8406B5: mov     [esp+20h+arg_8], edi
0x8406B9: mov     ecx, [esi+38h]
0x8406BC: lea     eax, [esp+20h+arg_8]
0x8406C0: push    eax
0x8406C1: push    ecx
0x8406C2: lea     ecx, [esi+40h]
0x8406C5: mov     [esp+28h+var_4], 0
0x8406CD: call    sub_76CE40
0x8406D2: or      eax, 0FFFFFFFFh
0x8406D5: add     [edi+60h], eax
0x8406D8: mov     [esp+20h+var_4], eax
0x8406DC: jnz     short loc_8406E5
0x8406DE: mov     ecx, edi
0x8406E0: call    sub_7604D0
0x8406E5: add     [esi+38h], ebx
0x8406E8: mov     ecx, [esp+20h+var_C]
0x8406EC: mov     large fs:0, ecx
0x8406F3: pop     ecx
0x8406F4: pop     edi
0x8406F5: pop     esi
0x8406F6: pop     ebp
0x8406F7: pop     ebx
0x8406F8: add     esp, 0Ch
0x8406FB: retn    10h
