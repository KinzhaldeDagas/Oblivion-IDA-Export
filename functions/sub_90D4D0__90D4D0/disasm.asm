0x90D4D0: sub     esp, 88h
0x90D4D6: push    ebx
0x90D4D7: push    ebp
0x90D4D8: push    esi
0x90D4D9: push    edi; Args
0x90D4DA: mov     edi, ecx
0x90D4DC: lea     ecx, [esp+98h+var_30]
0x90D4E0: call    sub_941EC0
0x90D4E5: mov     eax, ds:0B30594h
0x90D4EA: push    eax
0x90D4EB: mov     ecx, edi
0x90D4ED: call    sub_940EF0
0x90D4F2: lea     ebx, [edi+14h]
0x90D4F5: mov     ecx, ebx
0x90D4F7: mov     [esp+98h+var_78], eax
0x90D4FB: call    sub_8B0D00
0x90D500: mov     esi, eax
0x90D502: push    esi
0x90D503: lea     ecx, [esp+9Ch+var_85]
0x90D507: push    ecx
0x90D508: mov     ecx, ebx
0x90D50A: call    sub_8B0D80
0x90D50F: mov     al, [esp+98h+var_85]
0x90D513: test    al, al
0x90D515: jz      short loc_90D555
0x90D517: push    esi
0x90D518: mov     ecx, ebx
0x90D51A: call    sub_8B0D30
0x90D51F: cmp     eax, 0FFFFFFFFh
0x90D522: jnz     short loc_90D536
0x90D524: push    esi
0x90D525: mov     ecx, ebx
0x90D527: call    sub_8B0D20
0x90D52C: push    eax
0x90D52D: lea     ecx, [esp+9Ch+var_30]
0x90D531: call    sub_941B70
0x90D536: push    esi
0x90D537: mov     ecx, ebx
0x90D539: call    sub_8B0D50
0x90D53E: mov     esi, eax
0x90D540: push    esi
0x90D541: lea     edx, [esp+9Ch+var_85]
0x90D545: push    edx
0x90D546: mov     ecx, ebx
0x90D548: call    sub_8B0D80
0x90D54D: mov     al, [esp+98h+var_85]
0x90D551: test    al, al
0x90D553: jnz     short loc_90D517
0x90D555: mov     eax, [esp+98h+arg_4]
0x90D55C: mov     cl, [eax+8]
0x90D55F: xor     esi, esi
0x90D561: test    cl, cl
0x90D563: jnz     short loc_90D599
0x90D565: mov     eax, [edi+0Ch]
0x90D568: xor     ebp, ebp
0x90D56A: cmp     eax, esi
0x90D56C: jle     short loc_90D599
0x90D56E: xor     ebx, ebx
0x90D570: mov     eax, [edi+8]
0x90D573: mov     ecx, [esp+98h+var_78]
0x90D577: mov     edx, [eax+ebx+10h]
0x90D57B: add     eax, ebx
0x90D57D: cmp     edx, ecx
0x90D57F: jnz     short loc_90D58E
0x90D581: mov     edx, [eax+8]
0x90D584: push    edx
0x90D585: lea     ecx, [esp+9Ch+var_30]
0x90D589: call    sub_941B70
0x90D58E: mov     eax, [edi+0Ch]
0x90D591: inc     ebp
0x90D592: add     ebx, 18h
0x90D595: cmp     ebp, eax
0x90D597: jl      short loc_90D570
0x90D599: mov     ebx, [esp+98h+arg_0]
0x90D5A0: mov     eax, 80000000h
0x90D5A5: push    ebx
0x90D5A6: lea     ecx, [esp+9Ch+var_70]
0x90D5AA: mov     [esp+9Ch+var_64], esi
0x90D5AE: mov     [esp+9Ch+var_60], esi
0x90D5B2: mov     [esp+9Ch+var_5C], eax
0x90D5B6: mov     [esp+9Ch+var_58], esi
0x90D5BA: mov     [esp+9Ch+var_54], esi
0x90D5BE: mov     [esp+9Ch+var_50], eax
0x90D5C2: mov     [esp+9Ch+var_4C], esi
0x90D5C6: mov     [esp+9Ch+var_48], esi
0x90D5CA: mov     [esp+9Ch+var_44], eax
0x90D5CE: mov     [esp+9Ch+var_40], esi
0x90D5D2: mov     [esp+9Ch+var_3C], esi
0x90D5D6: mov     [esp+9Ch+var_38], eax
0x90D5DA: mov     [esp+9Ch+var_34], esi
0x90D5DE: call    sub_8BBF50
0x90D5E3: lea     eax, [esp+98h+var_70]
0x90D5E7: push    offset a?xmlVersion1_0; "<?xml version=\"1.0\" encoding=\"utf-8"...
0x90D5EC: push    eax; int
0x90D5ED: call    sub_8BBEE0
0x90D5F2: add     esp, 8
0x90D5F5: push    1
0x90D5F7: lea     ecx, [esp+9Ch+var_30]
0x90D5FB: call    sub_941DB0
0x90D600: mov     eax, [edi+24h]
0x90D603: xor     ebp, ebp
0x90D605: cmp     eax, esi
0x90D607: mov     [esp+98h+var_80], ebp
0x90D60B: jle     loc_90D74A
0x90D611: mov     ecx, [esp+98h+arg_4]
0x90D618: mov     al, [ecx+8]
0x90D61B: test    al, al
0x90D61D: jnz     short loc_90D629
0x90D61F: cmp     ebp, [esp+98h+var_78]
0x90D623: jz      loc_90D73A
0x90D629: mov     edx, [edi+20h]
0x90D62C: mov     eax, [edx+ebp*4]
0x90D62F: push    eax; Args
0x90D630: lea     ecx, [esp+9Ch+var_70]
0x90D634: push    offset aHksectionNameS; "\n\t<hksection name=\"%s\">\n"
0x90D639: push    ecx; int
0x90D63A: call    sub_8BBEE0
0x90D63F: add     esp, 0Ch
0x90D642: push    1
0x90D644: lea     ecx, [esp+9Ch+var_30]
0x90D648: call    sub_941DB0
0x90D64D: cmp     [edi+0Ch], esi
0x90D650: mov     [esp+98h+var_74], esi
0x90D654: jle     loc_90D71D
0x90D65A: mov     [esp+98h+var_84], esi
0x90D65E: mov     edi, edi
0x90D660: mov     esi, [edi+8]
0x90D663: mov     ecx, [esp+98h+var_84]
0x90D667: mov     eax, [esi+ecx+10h]
0x90D66B: add     esi, ecx
0x90D66D: cmp     eax, ebp
0x90D66F: jnz     loc_90D6FC
0x90D675: mov     edx, [esi+8]
0x90D678: push    edx
0x90D679: lea     eax, [esp+9Ch+var_7C]
0x90D67D: push    eax
0x90D67E: lea     ecx, [esp+0A0h+var_30]
0x90D682: call    sub_941DD0
0x90D687: mov     ecx, [esi+4]
0x90D68A: mov     ebp, [esp+98h+var_7C]
0x90D68E: call    sub_90D1E0
0x90D693: push    eax
0x90D694: push    ebp
0x90D695: push    ebx
0x90D696: lea     ecx, [esp+0A4h+var_30]
0x90D69A: call    sub_941BF0
0x90D69F: mov     edx, [esi+4]
0x90D6A2: mov     eax, [esi]
0x90D6A4: lea     ecx, [esp+98h+var_64]
0x90D6A8: push    ecx; int
0x90D6A9: push    edx; int
0x90D6AA: push    eax; int
0x90D6AB: push    ebx; int
0x90D6AC: lea     ecx, [esp+0A8h+var_30]; int
0x90D6B0: call    sub_9428A0
0x90D6B5: push    ebx
0x90D6B6: lea     ecx, [esp+9Ch+var_30]
0x90D6BA: call    sub_941C90
0x90D6BF: lea     ecx, [esp+98h+var_70]
0x90D6C3: push    offset asc_A366D0; "\n"
0x90D6C8: push    ecx; int
0x90D6C9: call    sub_8BBEE0
0x90D6CE: mov     ecx, [esp+0A0h+var_7C]
0x90D6D2: xor     eax, eax
0x90D6D4: add     ecx, 0FFFFFFF4h
0x90D6D7: mov     [esp+0A0h+var_60], eax
0x90D6DB: mov     [esp+0A0h+var_54], eax
0x90D6DF: mov     [esp+0A0h+var_48], eax
0x90D6E3: mov     [esp+0A0h+var_3C], eax
0x90D6E7: mov     eax, [ecx+8]
0x90D6EA: add     esp, 8
0x90D6ED: dec     eax
0x90D6EE: mov     [ecx+8], eax
0x90D6F1: jns     short loc_90D6F8
0x90D6F3: call    sub_8B1930
0x90D6F8: mov     ebp, [esp+98h+var_80]
0x90D6FC: mov     eax, [esp+98h+var_74]
0x90D700: mov     edx, [esp+98h+var_84]
0x90D704: mov     ecx, [edi+0Ch]
0x90D707: inc     eax
0x90D708: add     edx, 18h
0x90D70B: cmp     eax, ecx
0x90D70D: mov     [esp+98h+var_74], eax
0x90D711: mov     [esp+98h+var_84], edx
0x90D715: jl      loc_90D660
0x90D71B: xor     esi, esi
0x90D71D: push    0FFFFFFFFh
0x90D71F: lea     ecx, [esp+9Ch+var_30]
0x90D723: call    sub_941DB0
0x90D728: lea     edx, [esp+98h+var_70]
0x90D72C: push    offset aHksection; "\n\t</hksection>"
0x90D731: push    edx; int
0x90D732: call    sub_8BBEE0
0x90D737: add     esp, 8
0x90D73A: mov     eax, [edi+24h]
0x90D73D: inc     ebp
0x90D73E: cmp     ebp, eax
0x90D740: mov     [esp+98h+var_80], ebp
0x90D744: jl      loc_90D611
0x90D74A: push    0FFFFFFFFh
0x90D74C: lea     ecx, [esp+9Ch+var_30]
0x90D750: call    sub_941DB0
0x90D755: lea     eax, [esp+98h+var_70]
0x90D759: push    offset aHkpackfile; "\n\n</hkpackfile>\n"
0x90D75E: push    eax; int
0x90D75F: call    sub_8BBEE0
0x90D764: add     esp, 8
0x90D767: lea     ecx, [esp+98h+var_70]
0x90D76B: call    sub_8BC000
0x90D770: lea     ecx, [esp+98h+var_64]
0x90D774: call    sub_941400
0x90D779: lea     ecx, [esp+98h+var_C]
0x90D780: call    sub_8B0E60
0x90D785: mov     eax, [esp+98h+var_20]
0x90D789: test    eax, eax
0x90D78B: pop     edi
0x90D78C: pop     esi
0x90D78D: pop     ebp
0x90D78E: pop     ebx
0x90D78F: js      short loc_90D7B8
0x90D791: mov     ecx, [esp+88h+var_28]
0x90D795: mov     edx, ds:0BA9DE4h
0x90D79B: push    14h
0x90D79D: and     eax, 3FFFFFFFh
0x90D7A2: push    eax
0x90D7A3: mov     eax, large fs:2Ch
0x90D7A9: push    ecx
0x90D7AA: mov     ecx, [eax+edx*4]
0x90D7AD: mov     ecx, [ecx+19Ch]
0x90D7B3: call    sub_8A75D0
0x90D7B8: xor     eax, eax
0x90D7BA: add     esp, 88h
0x90D7C0: retn    8
