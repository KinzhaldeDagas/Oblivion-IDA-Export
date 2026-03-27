0x4E0580: push    esi
0x4E0581: push    edi
0x4E0582: mov     edi, [esp+8+arg_0]
0x4E0586: push    edi
0x4E0587: mov     esi, ecx
0x4E0589: call    nullsub_returnvVoid_1arg
0x4E058E: mov     eax, [esi]
0x4E0590: mov     edx, [eax+190h]
0x4E0596: mov     ecx, esi
0x4E0598: call    edx
0x4E059A: test    al, al
0x4E059C: jnz     short loc_4E05AF
0x4E059E: test    edi, 10000h
0x4E05A4: jz      short loc_4E05AF
0x4E05A6: push    0
0x4E05A8: mov     ecx, esi
0x4E05AA: call    sub_46AA00
0x4E05AF: mov     eax, ds:0B33B00h
0x4E05B4: mov     ecx, [eax+18h]
0x4E05B7: shr     ecx, 6
0x4E05BA: test    cl, 1
0x4E05BD: jz      short loc_4E0631
0x4E05BF: test    edi, 40000000h
0x4E05C5: jz      short loc_4E0631
0x4E05C7: mov     eax, [esi+8]
0x4E05CA: mov     edx, eax
0x4E05CC: shr     edx, 0Bh
0x4E05CF: test    dl, 1
0x4E05D2: jnz     short loc_4E0623
0x4E05D4: shr     eax, 5
0x4E05D7: test    al, 1
0x4E05D9: jnz     short loc_4E0623
0x4E05DB: cmp     dword ptr [esi+3Ch], 0
0x4E05DF: jnz     short loc_4E0631
0x4E05E1: mov     eax, [esi+40h]
0x4E05E4: test    eax, eax
0x4E05E6: jz      short loc_4E0631
0x4E05E8: mov     al, [eax+26h]
0x4E05EB: cmp     al, 6
0x4E05ED: jz      short loc_4E05F3
0x4E05EF: cmp     al, 3
0x4E05F1: jnz     short loc_4E0631
0x4E05F3: mov     ecx, ds:0B33A1Ch
0x4E05F9: push    esi
0x4E05FA: call    sub_4354F0
0x4E05FF: test    al, al
0x4E0601: jnz     short loc_4E0631
0x4E0603: mov     eax, [esi+40h]
0x4E0606: mov     ecx, ds:0B333A0h
0x4E060C: push    0
0x4E060E: push    eax
0x4E060F: call    sub_440C80
0x4E0614: mov     ecx, ds:0B33A1Ch
0x4E061A: push    eax
0x4E061B: push    esi
0x4E061C: call    sub_438060
0x4E0621: jmp     short loc_4E0631
0x4E0623: mov     eax, [esi]
0x4E0625: mov     edx, [eax+150h]
0x4E062B: push    0
0x4E062D: mov     ecx, esi
0x4E062F: call    edx
0x4E0631: test    edi, 2000000h
0x4E0637: jz      short loc_4E0650
0x4E0639: mov     eax, [esi]
0x4E063B: mov     edx, [eax+190h]
0x4E0641: mov     ecx, esi
0x4E0643: call    edx
0x4E0645: test    al, al
0x4E0647: jnz     short loc_4E0650
0x4E0649: mov     ecx, esi
0x4E064B: call    sub_4DA4F0
0x4E0650: test    edi, 177577E0h
0x4E0656: jnz     short loc_4E0668
0x4E0658: mov     eax, [esi]
0x4E065A: mov     edx, [eax+190h]
0x4E0660: mov     ecx, esi
0x4E0662: call    edx
0x4E0664: test    al, al
0x4E0666: jz      short loc_4E0672
0x4E0668: push    esi
0x4E0669: push    edi
0x4E066A: lea     ecx, [esi+44h]
0x4E066D: call    sub_425650
0x4E0672: test    edi, 8000000h
0x4E0678: jz      short loc_4E06D8
0x4E067A: mov     eax, [esi]
0x4E067C: mov     edx, [eax+190h]
0x4E0682: mov     ecx, esi
0x4E0684: call    edx
0x4E0686: test    al, al
0x4E0688: jz      short loc_4E06B3
0x4E068A: mov     ecx, esi; this
0x4E068C: call    Actor_IsCreature
0x4E0691: test    al, al
0x4E0693: jz      short loc_4E06B3
0x4E0695: mov     ecx, esi
0x4E0697: call    UnequipWeapon
0x4E069C: push    1
0x4E069E: mov     ecx, esi
0x4E06A0: call    sub_4DC8F0
0x4E06A5: mov     ecx, esi
0x4E06A7: call    UnequipLight
0x4E06AC: mov     ecx, esi
0x4E06AE: call    sub_4DCCF0
0x4E06B3: mov     eax, ds:0B33B00h
0x4E06B8: mov     ecx, [eax+18h]
0x4E06BB: shr     ecx, 6
0x4E06BE: test    cl, 1
0x4E06C1: push    0
0x4E06C3: mov     ecx, esi
0x4E06C5: jnz     short loc_4E06CE
0x4E06C7: call    sub_4DDB00
0x4E06CC: jmp     short loc_4E06D8
0x4E06CE: mov     edx, [esi]
0x4E06D0: mov     eax, [edx+184h]
0x4E06D6: call    eax
0x4E06D8: mov     edx, [esi]
0x4E06DA: mov     eax, [edx+170h]
0x4E06E0: mov     ecx, esi
0x4E06E2: call    eax
0x4E06E4: test    eax, eax
0x4E06E6: jz      short loc_4E075C
0x4E06E8: mov     edx, [esi]
0x4E06EA: mov     eax, [edx+170h]
0x4E06F0: mov     ecx, esi
0x4E06F2: call    eax
0x4E06F4: cmp     byte ptr [eax+4], 18h
0x4E06F8: jnz     short loc_4E075C
0x4E06FA: test    edi, 40000h
0x4E0700: jz      short loc_4E0731
0x4E0702: mov     ecx, ds:0B33B00h
0x4E0708: cmp     byte ptr [ecx+0A8h], 0
0x4E070F: jnz     short loc_4E0731
0x4E0711: lea     edi, [esi+44h]
0x4E0714: push    8
0x4E0716: mov     ecx, edi
0x4E0718: call    sub_41F830
0x4E071D: test    al, al
0x4E071F: push    8
0x4E0721: mov     ecx, edi
0x4E0723: jz      short loc_4E072C
0x4E0725: call    sub_423E50
0x4E072A: jmp     short loc_4E0731
0x4E072C: call    sub_423DF0
0x4E0731: mov     edx, ds:0B33B00h
0x4E0737: mov     eax, [edx+44h]
0x4E073A: cmp     eax, 1FFFF000h
0x4E073F: jz      short loc_4E0748
0x4E0741: cmp     eax, 7FFFF000h
0x4E0746: jnz     short loc_4E075C
0x4E0748: push    1; char
0x4E074A: push    8
0x4E074C: lea     ecx, [esi+44h]
0x4E074F: call    sub_41F830
0x4E0754: mov     ecx, esi
0x4E0756: push    eax; float
0x4E0757: call    sub_4DE460
0x4E075C: mov     eax, ds:0B33B00h
0x4E0761: mov     eax, [eax+44h]
0x4E0764: cmp     eax, 1FFFF000h
0x4E0769: jz      short loc_4E0772
0x4E076B: cmp     eax, 7FFFF000h
0x4E0770: jnz     short loc_4E07BC
0x4E0772: mov     edx, [esi]
0x4E0774: mov     eax, [edx+198h]
0x4E077A: push    0
0x4E077C: mov     ecx, esi
0x4E077E: call    eax
0x4E0780: test    al, al
0x4E0782: jz      short loc_4E07BC
0x4E0784: cmp     dword ptr [esi+3Ch], 0
0x4E0788: jz      short loc_4E07BC
0x4E078A: lea     ecx, [esi+44h]
0x4E078D: call    sub_41FFA0
0x4E0792: test    eax, eax
0x4E0794: jz      short loc_4E079E
0x4E0796: push    esi
0x4E0797: mov     ecx, eax
0x4E0799: call    sub_497830
0x4E079E: mov     edx, [esi]
0x4E07A0: mov     eax, [edx+198h]
0x4E07A6: push    0
0x4E07A8: mov     ecx, esi
0x4E07AA: call    eax
0x4E07AC: test    al, al
0x4E07AE: jnz     short loc_4E07BC
0x4E07B0: mov     edx, [esi]
0x4E07B2: mov     eax, [edx+164h]
0x4E07B8: mov     ecx, esi
0x4E07BA: call    eax
0x4E07BC: mov     ecx, ds:0B33B00h
0x4E07C2: mov     eax, [ecx+44h]
0x4E07C5: cmp     eax, 60000000h
0x4E07CA: jz      short loc_4E07D3
0x4E07CC: cmp     eax, 7FFFF000h
0x4E07D1: jnz     short loc_4E082E
0x4E07D3: mov     edx, [esi]
0x4E07D5: mov     eax, [edx+170h]
0x4E07DB: mov     ecx, esi
0x4E07DD: call    eax
0x4E07DF: test    eax, eax
0x4E07E1: jz      short loc_4E082E
0x4E07E3: mov     edx, [esi]
0x4E07E5: mov     eax, [edx+170h]
0x4E07EB: mov     ecx, esi
0x4E07ED: call    eax
0x4E07EF: movzx   ecx, byte ptr [eax+4]
0x4E07F3: cmp     ecx, 12h
0x4E07F6: jz      short loc_4E0802
0x4E07F8: cmp     ecx, 0Ah
0x4E07FB: jz      short loc_4E0802
0x4E07FD: cmp     ecx, 18h
0x4E0800: jnz     short loc_4E082E
0x4E0802: mov     eax, [esi+8]
0x4E0805: mov     edx, eax
0x4E0807: shr     edx, 0Bh
0x4E080A: test    dl, 1
0x4E080D: jnz     short loc_4E0825
0x4E080F: mov     edx, eax
0x4E0811: shr     edx, 5
0x4E0814: test    dl, 1
0x4E0817: jnz     short loc_4E0825
0x4E0819: cmp     ecx, 18h
0x4E081C: jnz     short loc_4E082E
0x4E081E: shr     eax, 0Dh
0x4E0821: test    al, 1
0x4E0823: jz      short loc_4E082E
0x4E0825: push    0
0x4E0827: mov     ecx, esi
0x4E0829: call    sub_4D9310
0x4E082E: pop     edi
0x4E082F: pop     esi
0x4E0830: retn    4
