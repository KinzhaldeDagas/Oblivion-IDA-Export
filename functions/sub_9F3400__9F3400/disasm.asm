0x9F3400: push    0FFFFFFFFh
0x9F3402: push    offset SEH_9F3400
0x9F3407: mov     eax, large fs:0
0x9F340D: push    eax
0x9F340E: push    ecx
0x9F340F: push    esi
0x9F3410: push    edi
0x9F3411: mov     eax, ___security_cookie
0x9F3416: xor     eax, esp
0x9F3418: push    eax
0x9F3419: lea     eax, [esp+1Ch+var_C]
0x9F341D: mov     large fs:0, eax
0x9F3423: push    8; Size
0x9F3425: call    FormHeapAlloc
0x9F342A: add     esp, 4
0x9F342D: mov     [esp+1Ch+var_10], eax
0x9F3431: xor     esi, esi
0x9F3433: cmp     eax, esi
0x9F3435: mov     [esp+1Ch+var_4], esi
0x9F3439: jz      short loc_9F344E
0x9F343B: push    offset off_A61FD4
0x9F3440: push    offset aSkbesc
0x9F3445: mov     ecx, eax
0x9F3447: call    GameSetting_ConstrAndReg
0x9F344C: jmp     short loc_9F3450
0x9F344E: xor     eax, eax
0x9F3450: or      edi, 0FFFFFFFFh
0x9F3453: push    8; Size
0x9F3455: mov     [esp+20h+var_4], edi
0x9F3459: mov     dword_B3957C, eax
0x9F345E: call    FormHeapAlloc
0x9F3463: add     esp, 4
0x9F3466: mov     [esp+1Ch+var_10], eax
0x9F346A: cmp     eax, esi
0x9F346C: mov     [esp+1Ch+var_4], 1
0x9F3474: jz      short loc_9F3489
0x9F3476: push    offset a1
0x9F347B: push    offset aSkb1
0x9F3480: mov     ecx, eax
0x9F3482: call    GameSetting_ConstrAndReg
0x9F3487: jmp     short loc_9F348B
0x9F3489: xor     eax, eax
0x9F348B: push    8; Size
0x9F348D: mov     [esp+20h+var_4], edi
0x9F3491: mov     dword_B39580, eax
0x9F3496: call    FormHeapAlloc
0x9F349B: add     esp, 4
0x9F349E: mov     [esp+1Ch+var_10], eax
0x9F34A2: cmp     eax, esi
0x9F34A4: mov     [esp+1Ch+var_4], 2
0x9F34AC: jz      short loc_9F34C1
0x9F34AE: push    offset a2_0
0x9F34B3: push    offset aSkb2
0x9F34B8: mov     ecx, eax
0x9F34BA: call    GameSetting_ConstrAndReg
0x9F34BF: jmp     short loc_9F34C3
0x9F34C1: xor     eax, eax
0x9F34C3: push    8; Size
0x9F34C5: mov     [esp+20h+var_4], edi
0x9F34C9: mov     dword_B39584, eax
0x9F34CE: call    FormHeapAlloc
0x9F34D3: add     esp, 4
0x9F34D6: mov     [esp+1Ch+var_10], eax
0x9F34DA: cmp     eax, esi
0x9F34DC: mov     [esp+1Ch+var_4], 3
0x9F34E4: jz      short loc_9F34F9
0x9F34E6: push    offset a3
0x9F34EB: push    offset aSkb3
0x9F34F0: mov     ecx, eax
0x9F34F2: call    GameSetting_ConstrAndReg
0x9F34F7: jmp     short loc_9F34FB
0x9F34F9: xor     eax, eax
0x9F34FB: push    8; Size
0x9F34FD: mov     [esp+20h+var_4], edi
0x9F3501: mov     dword_B39588, eax
0x9F3506: call    FormHeapAlloc
0x9F350B: add     esp, 4
0x9F350E: mov     [esp+1Ch+var_10], eax
0x9F3512: cmp     eax, esi
0x9F3514: mov     [esp+1Ch+var_4], 4
0x9F351C: jz      short loc_9F3531
0x9F351E: push    offset a4
0x9F3523: push    offset aSkb4
0x9F3528: mov     ecx, eax
0x9F352A: call    GameSetting_ConstrAndReg
0x9F352F: jmp     short loc_9F3533
0x9F3531: xor     eax, eax
0x9F3533: push    8; Size
0x9F3535: mov     [esp+20h+var_4], edi
0x9F3539: mov     dword_B3958C, eax
0x9F353E: call    FormHeapAlloc
0x9F3543: add     esp, 4
0x9F3546: mov     [esp+1Ch+var_10], eax
0x9F354A: cmp     eax, esi
0x9F354C: mov     [esp+1Ch+var_4], 5
0x9F3554: jz      short loc_9F3569
0x9F3556: push    offset a5
0x9F355B: push    offset aSkb5
0x9F3560: mov     ecx, eax
0x9F3562: call    GameSetting_ConstrAndReg
0x9F3567: jmp     short loc_9F356B
0x9F3569: xor     eax, eax
0x9F356B: push    8; Size
0x9F356D: mov     [esp+20h+var_4], edi
0x9F3571: mov     dword_B39590, eax
0x9F3576: call    FormHeapAlloc
0x9F357B: add     esp, 4
0x9F357E: mov     [esp+1Ch+var_10], eax
0x9F3582: cmp     eax, esi
0x9F3584: mov     [esp+1Ch+var_4], 6
0x9F358C: jz      short loc_9F35A1
0x9F358E: push    offset a6
0x9F3593: push    offset aSkb6
0x9F3598: mov     ecx, eax
0x9F359A: call    GameSetting_ConstrAndReg
0x9F359F: jmp     short loc_9F35A3
0x9F35A1: xor     eax, eax
0x9F35A3: push    8; Size
0x9F35A5: mov     [esp+20h+var_4], edi
0x9F35A9: mov     dword_B39594, eax
0x9F35AE: call    FormHeapAlloc
0x9F35B3: add     esp, 4
0x9F35B6: mov     [esp+1Ch+var_10], eax
0x9F35BA: cmp     eax, esi
0x9F35BC: mov     [esp+1Ch+var_4], 7
0x9F35C4: jz      short loc_9F35D9
0x9F35C6: push    offset a7
0x9F35CB: push    offset aSkb7
0x9F35D0: mov     ecx, eax
0x9F35D2: call    GameSetting_ConstrAndReg
0x9F35D7: jmp     short loc_9F35DB
0x9F35D9: xor     eax, eax
0x9F35DB: push    8; Size
0x9F35DD: mov     [esp+20h+var_4], edi
0x9F35E1: mov     dword_B39598, eax
0x9F35E6: call    FormHeapAlloc
0x9F35EB: add     esp, 4
0x9F35EE: mov     [esp+1Ch+var_10], eax
0x9F35F2: cmp     eax, esi
0x9F35F4: mov     [esp+1Ch+var_4], 8
0x9F35FC: jz      short loc_9F3611
0x9F35FE: push    offset a8
0x9F3603: push    offset aSkb8
0x9F3608: mov     ecx, eax
0x9F360A: call    GameSetting_ConstrAndReg
0x9F360F: jmp     short loc_9F3613
0x9F3611: xor     eax, eax
0x9F3613: push    8; Size
0x9F3615: mov     [esp+20h+var_4], edi
0x9F3619: mov     dword_B3959C, eax
0x9F361E: call    FormHeapAlloc
0x9F3623: add     esp, 4
0x9F3626: mov     [esp+1Ch+var_10], eax
0x9F362A: cmp     eax, esi
0x9F362C: mov     [esp+1Ch+var_4], 9
0x9F3634: jz      short loc_9F3649
0x9F3636: push    offset a9
0x9F363B: push    offset aSkb9
0x9F3640: mov     ecx, eax
0x9F3642: call    GameSetting_ConstrAndReg
0x9F3647: jmp     short loc_9F364B
0x9F3649: xor     eax, eax
0x9F364B: push    8; Size
0x9F364D: mov     [esp+20h+var_4], edi
0x9F3651: mov     dword_B395A0, eax
0x9F3656: call    FormHeapAlloc
0x9F365B: add     esp, 4
0x9F365E: mov     [esp+1Ch+var_10], eax
0x9F3662: cmp     eax, esi
0x9F3664: mov     [esp+1Ch+var_4], 0Ah
0x9F366C: jz      short loc_9F3681
0x9F366E: push    offset a0_0
0x9F3673: push    offset aSkb0
0x9F3678: mov     ecx, eax
0x9F367A: call    GameSetting_ConstrAndReg
0x9F367F: jmp     short loc_9F3683
0x9F3681: xor     eax, eax
0x9F3683: push    8; Size
0x9F3685: mov     [esp+20h+var_4], edi
0x9F3689: mov     dword_B395A4, eax
0x9F368E: call    FormHeapAlloc
0x9F3693: add     esp, 4
0x9F3696: mov     [esp+1Ch+var_10], eax
0x9F369A: cmp     eax, esi
0x9F369C: mov     [esp+1Ch+var_4], 0Bh
0x9F36A4: jz      short loc_9F36B9
0x9F36A6: push    offset asc_A3A0E4
0x9F36AB: push    offset aSkbminus
0x9F36B0: mov     ecx, eax
0x9F36B2: call    GameSetting_ConstrAndReg
0x9F36B7: jmp     short loc_9F36BB
0x9F36B9: xor     eax, eax
0x9F36BB: push    8; Size
0x9F36BD: mov     [esp+20h+var_4], edi
0x9F36C1: mov     dword_B395A8, eax
0x9F36C6: call    FormHeapAlloc
0x9F36CB: add     esp, 4
0x9F36CE: mov     [esp+1Ch+var_10], eax
0x9F36D2: cmp     eax, esi
0x9F36D4: mov     [esp+1Ch+var_4], 0Ch
0x9F36DC: jz      short loc_9F36F1
0x9F36DE: push    offset word_A61F44
0x9F36E3: push    offset aSkbequals
0x9F36E8: mov     ecx, eax
0x9F36EA: call    GameSetting_ConstrAndReg
0x9F36EF: jmp     short loc_9F36F3
0x9F36F1: xor     eax, eax
0x9F36F3: push    8; Size
0x9F36F5: mov     [esp+20h+var_4], edi
0x9F36F9: mov     dword_B395AC, eax
0x9F36FE: call    FormHeapAlloc
0x9F3703: add     esp, 4
0x9F3706: mov     [esp+1Ch+var_10], eax
0x9F370A: cmp     eax, esi
0x9F370C: mov     [esp+1Ch+var_4], 0Dh
0x9F3714: jz      short loc_9F3729
0x9F3716: push    offset aBackspace
0x9F371B: push    offset aSkbback
0x9F3720: mov     ecx, eax
0x9F3722: call    GameSetting_ConstrAndReg
0x9F3727: jmp     short loc_9F372B
0x9F3729: xor     eax, eax
0x9F372B: push    8; Size
0x9F372D: mov     [esp+20h+var_4], edi
0x9F3731: mov     dword_B395B0, eax
0x9F3736: call    FormHeapAlloc
0x9F373B: add     esp, 4
0x9F373E: mov     [esp+1Ch+var_10], eax
0x9F3742: cmp     eax, esi
0x9F3744: mov     [esp+1Ch+var_4], 0Eh
0x9F374C: jz      short loc_9F3761
0x9F374E: push    offset off_A61F20
0x9F3753: push    offset aSkbtab
0x9F3758: mov     ecx, eax
0x9F375A: call    GameSetting_ConstrAndReg
0x9F375F: jmp     short loc_9F3763
0x9F3761: xor     eax, eax
0x9F3763: push    8; Size
0x9F3765: mov     [esp+20h+var_4], edi
0x9F3769: mov     dword_B395B4, eax
0x9F376E: call    FormHeapAlloc
0x9F3773: add     esp, 4
0x9F3776: mov     [esp+1Ch+var_10], eax
0x9F377A: cmp     eax, esi
0x9F377C: mov     [esp+1Ch+var_4], 0Fh
0x9F3784: jz      short loc_9F3799
0x9F3786: push    offset aQ
0x9F378B: push    offset aSkbq
0x9F3790: mov     ecx, eax
0x9F3792: call    GameSetting_ConstrAndReg
0x9F3797: jmp     short loc_9F379B
0x9F3799: xor     eax, eax
0x9F379B: push    8; Size
0x9F379D: mov     [esp+20h+var_4], edi
0x9F37A1: mov     dword_B395B8, eax
0x9F37A6: call    FormHeapAlloc
0x9F37AB: add     esp, 4
0x9F37AE: mov     [esp+1Ch+var_10], eax
0x9F37B2: cmp     eax, esi
0x9F37B4: mov     [esp+1Ch+var_4], 10h
0x9F37BC: jz      short loc_9F37D1
0x9F37BE: push    offset aW_0
0x9F37C3: push    offset aSkbw
0x9F37C8: mov     ecx, eax
0x9F37CA: call    GameSetting_ConstrAndReg
0x9F37CF: jmp     short loc_9F37D3
0x9F37D1: xor     eax, eax
0x9F37D3: push    8; Size
0x9F37D5: mov     [esp+20h+var_4], edi
0x9F37D9: mov     dword_B395BC, eax
0x9F37DE: call    FormHeapAlloc
0x9F37E3: add     esp, 4
0x9F37E6: mov     [esp+1Ch+var_10], eax
0x9F37EA: cmp     eax, esi
0x9F37EC: mov     [esp+1Ch+var_4], 11h
0x9F37F4: jz      short loc_9F3809
0x9F37F6: push    offset aE
0x9F37FB: push    offset aSkbe
0x9F3800: mov     ecx, eax
0x9F3802: call    GameSetting_ConstrAndReg
0x9F3807: jmp     short loc_9F380B
0x9F3809: xor     eax, eax
0x9F380B: push    8; Size
0x9F380D: mov     [esp+20h+var_4], edi
0x9F3811: mov     dword_B395C0, eax
0x9F3816: call    FormHeapAlloc
0x9F381B: add     esp, 4
0x9F381E: mov     [esp+1Ch+var_10], eax
0x9F3822: cmp     eax, esi
0x9F3824: mov     [esp+1Ch+var_4], 12h
0x9F382C: jz      short loc_9F3841
0x9F382E: push    offset aR_0
0x9F3833: push    offset aSkbr
0x9F3838: mov     ecx, eax
0x9F383A: call    GameSetting_ConstrAndReg
0x9F383F: jmp     short loc_9F3843
0x9F3841: xor     eax, eax
0x9F3843: push    8; Size
0x9F3845: mov     [esp+20h+var_4], edi
0x9F3849: mov     dword_B395C4, eax
0x9F384E: call    FormHeapAlloc
0x9F3853: add     esp, 4
0x9F3856: mov     [esp+1Ch+var_10], eax
0x9F385A: cmp     eax, esi
0x9F385C: mov     [esp+1Ch+var_4], 13h
0x9F3864: jz      short loc_9F3879
0x9F3866: push    offset aT
0x9F386B: push    offset aSkbt
0x9F3870: mov     ecx, eax
0x9F3872: call    GameSetting_ConstrAndReg
0x9F3877: jmp     short loc_9F387B
0x9F3879: xor     eax, eax
0x9F387B: push    8; Size
0x9F387D: mov     [esp+20h+var_4], edi
0x9F3881: mov     dword_B395C8, eax
0x9F3886: call    FormHeapAlloc
0x9F388B: add     esp, 4
0x9F388E: mov     [esp+1Ch+var_10], eax
0x9F3892: cmp     eax, esi
0x9F3894: mov     [esp+1Ch+var_4], 14h
0x9F389C: jz      short loc_9F38B1
0x9F389E: push    offset aY_0
0x9F38A3: push    offset aSkby
0x9F38A8: mov     ecx, eax
0x9F38AA: call    GameSetting_ConstrAndReg
0x9F38AF: jmp     short loc_9F38B3
0x9F38B1: xor     eax, eax
0x9F38B3: push    8; Size
0x9F38B5: mov     [esp+20h+var_4], edi
0x9F38B9: mov     dword_B395CC, eax
0x9F38BE: call    FormHeapAlloc
0x9F38C3: add     esp, 4
0x9F38C6: mov     [esp+1Ch+var_10], eax
0x9F38CA: cmp     eax, esi
0x9F38CC: mov     [esp+1Ch+var_4], 15h
0x9F38D4: jz      short loc_9F38E9
0x9F38D6: push    offset aU
0x9F38DB: push    offset aSkbu
0x9F38E0: mov     ecx, eax
0x9F38E2: call    GameSetting_ConstrAndReg
0x9F38E7: jmp     short loc_9F38EB
0x9F38E9: xor     eax, eax
0x9F38EB: push    8; Size
0x9F38ED: mov     [esp+20h+var_4], edi
0x9F38F1: mov     dword_B395D0, eax
0x9F38F6: call    FormHeapAlloc
0x9F38FB: add     esp, 4
0x9F38FE: mov     [esp+1Ch+var_10], eax
0x9F3902: cmp     eax, esi
0x9F3904: mov     [esp+1Ch+var_4], 16h
0x9F390C: jz      short loc_9F3921
0x9F390E: push    offset aI_2
0x9F3913: push    offset aSkbi
0x9F3918: mov     ecx, eax
0x9F391A: call    GameSetting_ConstrAndReg
0x9F391F: jmp     short loc_9F3923
0x9F3921: xor     eax, eax
0x9F3923: push    8; Size
0x9F3925: mov     [esp+20h+var_4], edi
0x9F3929: mov     dword_B395D4, eax
0x9F392E: call    FormHeapAlloc
0x9F3933: add     esp, 4
0x9F3936: mov     [esp+1Ch+var_10], eax
0x9F393A: cmp     eax, esi
0x9F393C: mov     [esp+1Ch+var_4], 17h
0x9F3944: jz      short loc_9F3959
0x9F3946: push    offset aO
0x9F394B: push    offset aSkbo
0x9F3950: mov     ecx, eax
0x9F3952: call    GameSetting_ConstrAndReg
0x9F3957: jmp     short loc_9F395B
0x9F3959: xor     eax, eax
0x9F395B: push    8; Size
0x9F395D: mov     [esp+20h+var_4], edi
0x9F3961: mov     dword_B395D8, eax
0x9F3966: call    FormHeapAlloc
0x9F396B: add     esp, 4
0x9F396E: mov     [esp+1Ch+var_10], eax
0x9F3972: cmp     eax, esi
0x9F3974: mov     [esp+1Ch+var_4], 18h
0x9F397C: jz      short loc_9F3991
0x9F397E: push    offset aP
0x9F3983: push    offset aSkbp
0x9F3988: mov     ecx, eax
0x9F398A: call    GameSetting_ConstrAndReg
0x9F398F: jmp     short loc_9F3993
0x9F3991: xor     eax, eax
0x9F3993: push    8; Size
0x9F3995: mov     [esp+20h+var_4], edi
0x9F3999: mov     dword_B395DC, eax
0x9F399E: call    FormHeapAlloc
0x9F39A3: add     esp, 4
0x9F39A6: mov     [esp+1Ch+var_10], eax
0x9F39AA: cmp     eax, esi
0x9F39AC: mov     [esp+1Ch+var_4], 19h
0x9F39B4: jz      short loc_9F39C9
0x9F39B6: push    offset word_A61EA8
0x9F39BB: push    offset aSkblbracket
0x9F39C0: mov     ecx, eax
0x9F39C2: call    GameSetting_ConstrAndReg
0x9F39C7: jmp     short loc_9F39CB
0x9F39C9: xor     eax, eax
0x9F39CB: push    8; Size
0x9F39CD: mov     [esp+20h+var_4], edi
0x9F39D1: mov     dword_B395E0, eax
0x9F39D6: call    FormHeapAlloc
0x9F39DB: add     esp, 4
0x9F39DE: mov     [esp+1Ch+var_10], eax
0x9F39E2: cmp     eax, esi
0x9F39E4: mov     [esp+1Ch+var_4], 1Ah
0x9F39EC: jz      short loc_9F3A01
0x9F39EE: push    offset word_A61E98
0x9F39F3: push    offset aSkbrbracket
0x9F39F8: mov     ecx, eax
0x9F39FA: call    GameSetting_ConstrAndReg
0x9F39FF: jmp     short loc_9F3A03
0x9F3A01: xor     eax, eax
0x9F3A03: push    8; Size
0x9F3A05: mov     [esp+20h+var_4], edi
0x9F3A09: mov     dword_B395E4, eax
0x9F3A0E: call    FormHeapAlloc
0x9F3A13: add     esp, 4
0x9F3A16: mov     [esp+1Ch+var_10], eax
0x9F3A1A: cmp     eax, esi
0x9F3A1C: mov     [esp+1Ch+var_4], 1Bh
0x9F3A24: jz      short loc_9F3A39
0x9F3A26: push    offset aEnter
0x9F3A2B: push    offset aSkbreturn
0x9F3A30: mov     ecx, eax
0x9F3A32: call    GameSetting_ConstrAndReg
0x9F3A37: jmp     short loc_9F3A3B
0x9F3A39: xor     eax, eax
0x9F3A3B: push    8; Size
0x9F3A3D: mov     [esp+20h+var_4], edi
0x9F3A41: mov     dword_B395E8, eax
0x9F3A46: call    FormHeapAlloc
0x9F3A4B: add     esp, 4
0x9F3A4E: mov     [esp+1Ch+var_10], eax
0x9F3A52: cmp     eax, esi
0x9F3A54: mov     [esp+1Ch+var_4], 1Ch
0x9F3A5C: jz      short loc_9F3A71
0x9F3A5E: push    offset aLCtrl
0x9F3A63: push    offset aSkblcontrol
0x9F3A68: mov     ecx, eax
0x9F3A6A: call    GameSetting_ConstrAndReg
0x9F3A6F: jmp     short loc_9F3A73
0x9F3A71: xor     eax, eax
0x9F3A73: push    8; Size
0x9F3A75: mov     [esp+20h+var_4], edi
0x9F3A79: mov     dword_B395EC, eax
0x9F3A7E: call    FormHeapAlloc
0x9F3A83: add     esp, 4
0x9F3A86: mov     [esp+1Ch+var_10], eax
0x9F3A8A: cmp     eax, esi
0x9F3A8C: mov     [esp+1Ch+var_4], 1Dh
0x9F3A94: jz      short loc_9F3AA9
0x9F3A96: push    offset aA
0x9F3A9B: push    offset aSkba
0x9F3AA0: mov     ecx, eax
0x9F3AA2: call    GameSetting_ConstrAndReg
0x9F3AA7: jmp     short loc_9F3AAB
0x9F3AA9: xor     eax, eax
0x9F3AAB: push    8; Size
0x9F3AAD: mov     [esp+20h+var_4], edi
0x9F3AB1: mov     dword_B395F0, eax
0x9F3AB6: call    FormHeapAlloc
0x9F3ABB: add     esp, 4
0x9F3ABE: mov     [esp+1Ch+var_10], eax
0x9F3AC2: cmp     eax, esi
0x9F3AC4: mov     [esp+1Ch+var_4], 1Eh
0x9F3ACC: jz      short loc_9F3AE1
0x9F3ACE: push    offset aS_9
0x9F3AD3: push    offset aSkbs
0x9F3AD8: mov     ecx, eax
0x9F3ADA: call    GameSetting_ConstrAndReg
0x9F3ADF: jmp     short loc_9F3AE3
0x9F3AE1: xor     eax, eax
0x9F3AE3: push    8; Size
0x9F3AE5: mov     [esp+20h+var_4], edi
0x9F3AE9: mov     dword_B395F4, eax
0x9F3AEE: call    FormHeapAlloc
0x9F3AF3: add     esp, 4
0x9F3AF6: mov     [esp+1Ch+var_10], eax
0x9F3AFA: cmp     eax, esi
0x9F3AFC: mov     [esp+1Ch+var_4], 1Fh
0x9F3B04: jz      short loc_9F3B19
0x9F3B06: push    offset aD_3
0x9F3B0B: push    offset aSkbd
0x9F3B10: mov     ecx, eax
0x9F3B12: call    GameSetting_ConstrAndReg
0x9F3B17: jmp     short loc_9F3B1B
0x9F3B19: xor     eax, eax
0x9F3B1B: push    8; Size
0x9F3B1D: mov     [esp+20h+var_4], edi
0x9F3B21: mov     dword_B395F8, eax
0x9F3B26: call    FormHeapAlloc
0x9F3B2B: add     esp, 4
0x9F3B2E: mov     [esp+1Ch+var_10], eax
0x9F3B32: cmp     eax, esi
0x9F3B34: mov     [esp+1Ch+var_4], 20h ; ' '
0x9F3B3C: jz      short loc_9F3B51
0x9F3B3E: push    offset aF_0
0x9F3B43: push    offset aSkbf
0x9F3B48: mov     ecx, eax
0x9F3B4A: call    GameSetting_ConstrAndReg
0x9F3B4F: jmp     short loc_9F3B53
0x9F3B51: xor     eax, eax
0x9F3B53: push    8; Size
0x9F3B55: mov     [esp+20h+var_4], edi
0x9F3B59: mov     dword_B395FC, eax
0x9F3B5E: call    FormHeapAlloc
0x9F3B63: add     esp, 4
0x9F3B66: mov     [esp+1Ch+var_10], eax
0x9F3B6A: cmp     eax, esi
0x9F3B6C: mov     [esp+1Ch+var_4], 21h ; '!'
0x9F3B74: jz      short loc_9F3B89
0x9F3B76: push    offset aG
0x9F3B7B: push    offset aSkbg
0x9F3B80: mov     ecx, eax
0x9F3B82: call    GameSetting_ConstrAndReg
0x9F3B87: jmp     short loc_9F3B8B
0x9F3B89: xor     eax, eax
0x9F3B8B: push    8; Size
0x9F3B8D: mov     [esp+20h+var_4], edi
0x9F3B91: mov     dword_B39600, eax
0x9F3B96: call    FormHeapAlloc
0x9F3B9B: add     esp, 4
0x9F3B9E: mov     [esp+1Ch+var_10], eax
0x9F3BA2: cmp     eax, esi
0x9F3BA4: mov     [esp+1Ch+var_4], 22h ; '"'
0x9F3BAC: jz      short loc_9F3BC1
0x9F3BAE: push    offset asc_A61E2C
0x9F3BB3: push    offset aSkbh
0x9F3BB8: mov     ecx, eax
0x9F3BBA: call    GameSetting_ConstrAndReg
0x9F3BBF: jmp     short loc_9F3BC3
0x9F3BC1: xor     eax, eax
0x9F3BC3: push    8; Size
0x9F3BC5: mov     [esp+20h+var_4], edi
0x9F3BC9: mov     dword_B39604, eax
0x9F3BCE: call    FormHeapAlloc
0x9F3BD3: add     esp, 4
0x9F3BD6: mov     [esp+1Ch+var_10], eax
0x9F3BDA: cmp     eax, esi
0x9F3BDC: mov     [esp+1Ch+var_4], 23h ; '#'
0x9F3BE4: jz      short loc_9F3BF9
0x9F3BE6: push    offset aJ
0x9F3BEB: push    offset aSkbj
0x9F3BF0: mov     ecx, eax
0x9F3BF2: call    GameSetting_ConstrAndReg
0x9F3BF7: jmp     short loc_9F3BFB
0x9F3BF9: xor     eax, eax
0x9F3BFB: push    8; Size
0x9F3BFD: mov     [esp+20h+var_4], edi
0x9F3C01: mov     dword_B39608, eax
0x9F3C06: call    FormHeapAlloc
0x9F3C0B: add     esp, 4
0x9F3C0E: mov     [esp+1Ch+var_10], eax
0x9F3C12: cmp     eax, esi
0x9F3C14: mov     [esp+1Ch+var_4], 24h ; '$'
0x9F3C1C: jz      short loc_9F3C31
0x9F3C1E: push    offset aK
0x9F3C23: push    offset aSkbk
0x9F3C28: mov     ecx, eax
0x9F3C2A: call    GameSetting_ConstrAndReg
0x9F3C2F: jmp     short loc_9F3C33
0x9F3C31: xor     eax, eax
0x9F3C33: push    8; Size
0x9F3C35: mov     [esp+20h+var_4], edi
0x9F3C39: mov     dword_B3960C, eax
0x9F3C3E: call    FormHeapAlloc
0x9F3C43: add     esp, 4
0x9F3C46: mov     [esp+1Ch+var_10], eax
0x9F3C4A: cmp     eax, esi
0x9F3C4C: mov     [esp+1Ch+var_4], 25h ; '%'
0x9F3C54: jz      short loc_9F3C69
0x9F3C56: push    offset asc_A2FA78
0x9F3C5B: push    offset aSkbl
0x9F3C60: mov     ecx, eax
0x9F3C62: call    GameSetting_ConstrAndReg
0x9F3C67: jmp     short loc_9F3C6B
0x9F3C69: xor     eax, eax
0x9F3C6B: push    8; Size
0x9F3C6D: mov     [esp+20h+var_4], edi
0x9F3C71: mov     dword_B39610, eax
0x9F3C76: call    FormHeapAlloc
0x9F3C7B: add     esp, 4
0x9F3C7E: mov     [esp+1Ch+var_10], eax
0x9F3C82: cmp     eax, esi
0x9F3C84: mov     [esp+1Ch+var_4], 26h ; '&'
0x9F3C8C: jz      short loc_9F3CA1
0x9F3C8E: push    offset asc_A3206C
0x9F3C93: push    offset aSkbsemicolon
0x9F3C98: mov     ecx, eax
0x9F3C9A: call    GameSetting_ConstrAndReg
0x9F3C9F: jmp     short loc_9F3CA3
0x9F3CA1: xor     eax, eax
0x9F3CA3: push    8; Size
0x9F3CA5: mov     [esp+20h+var_4], edi
0x9F3CA9: mov     dword_B39614, eax
0x9F3CAE: call    FormHeapAlloc
0x9F3CB3: add     esp, 4
0x9F3CB6: mov     [esp+1Ch+var_10], eax
0x9F3CBA: cmp     eax, esi
0x9F3CBC: mov     [esp+1Ch+var_4], 27h ; '''
0x9F3CC4: jz      short loc_9F3CD9
0x9F3CC6: push    offset word_A56270
0x9F3CCB: push    offset aSkbapostrophe
0x9F3CD0: mov     ecx, eax
0x9F3CD2: call    GameSetting_ConstrAndReg
0x9F3CD7: jmp     short loc_9F3CDB
0x9F3CD9: xor     eax, eax
0x9F3CDB: push    8; Size
0x9F3CDD: mov     [esp+20h+var_4], edi
0x9F3CE1: mov     dword_B39618, eax
0x9F3CE6: call    FormHeapAlloc
0x9F3CEB: add     esp, 4
0x9F3CEE: mov     [esp+1Ch+var_10], eax
0x9F3CF2: cmp     eax, esi
0x9F3CF4: mov     [esp+1Ch+var_4], 28h ; '('
0x9F3CFC: jz      short loc_9F3D11
0x9F3CFE: push    offset asc_A61DE0
0x9F3D03: push    offset aSkbtilde
0x9F3D08: mov     ecx, eax
0x9F3D0A: call    GameSetting_ConstrAndReg
0x9F3D0F: jmp     short loc_9F3D13
0x9F3D11: xor     eax, eax
0x9F3D13: push    8; Size
0x9F3D15: mov     [esp+20h+var_4], edi
0x9F3D19: mov     dword_B3961C, eax
0x9F3D1E: call    FormHeapAlloc
0x9F3D23: add     esp, 4
0x9F3D26: mov     [esp+1Ch+var_10], eax
0x9F3D2A: cmp     eax, esi
0x9F3D2C: mov     [esp+1Ch+var_4], 29h ; ')'
0x9F3D34: jz      short loc_9F3D49
0x9F3D36: push    offset aLShift
0x9F3D3B: push    offset aSkblshift
0x9F3D40: mov     ecx, eax
0x9F3D42: call    GameSetting_ConstrAndReg
0x9F3D47: jmp     short loc_9F3D4B
0x9F3D49: xor     eax, eax
0x9F3D4B: push    8; Size
0x9F3D4D: mov     [esp+20h+var_4], edi
0x9F3D51: mov     dword_B39620, eax
0x9F3D56: call    FormHeapAlloc
0x9F3D5B: add     esp, 4
0x9F3D5E: mov     [esp+1Ch+var_10], eax
0x9F3D62: cmp     eax, esi
0x9F3D64: mov     [esp+1Ch+var_4], 2Ah ; '*'
0x9F3D6C: jz      short loc_9F3D81
0x9F3D6E: push    offset SubStr
0x9F3D73: push    offset aSkbbackslash
0x9F3D78: mov     ecx, eax
0x9F3D7A: call    GameSetting_ConstrAndReg
0x9F3D7F: jmp     short loc_9F3D83
0x9F3D81: xor     eax, eax
0x9F3D83: push    8; Size
0x9F3D85: mov     [esp+20h+var_4], edi
0x9F3D89: mov     dword_B39624, eax
0x9F3D8E: call    FormHeapAlloc
0x9F3D93: add     esp, 4
0x9F3D96: mov     [esp+1Ch+var_10], eax
0x9F3D9A: cmp     eax, esi
0x9F3D9C: mov     [esp+1Ch+var_4], 2Bh ; '+'
0x9F3DA4: jz      short loc_9F3DB9
0x9F3DA6: push    offset aZ
0x9F3DAB: push    offset aSkbz
0x9F3DB0: mov     ecx, eax
0x9F3DB2: call    GameSetting_ConstrAndReg
0x9F3DB7: jmp     short loc_9F3DBB
0x9F3DB9: xor     eax, eax
0x9F3DBB: push    8; Size
0x9F3DBD: mov     [esp+20h+var_4], edi
0x9F3DC1: mov     dword_B39628, eax
0x9F3DC6: call    FormHeapAlloc
0x9F3DCB: add     esp, 4
0x9F3DCE: mov     [esp+1Ch+var_10], eax
0x9F3DD2: cmp     eax, esi
0x9F3DD4: mov     [esp+1Ch+var_4], 2Ch ; ','
0x9F3DDC: jz      short loc_9F3DF1
0x9F3DDE: push    offset asc_A51A00
0x9F3DE3: push    offset aSkbx
0x9F3DE8: mov     ecx, eax
0x9F3DEA: call    GameSetting_ConstrAndReg
0x9F3DEF: jmp     short loc_9F3DF3
0x9F3DF1: xor     eax, eax
0x9F3DF3: push    8; Size
0x9F3DF5: mov     [esp+20h+var_4], edi
0x9F3DF9: mov     dword_B3962C, eax
0x9F3DFE: call    FormHeapAlloc
0x9F3E03: add     esp, 4
0x9F3E06: mov     [esp+1Ch+var_10], eax
0x9F3E0A: cmp     eax, esi
0x9F3E0C: mov     [esp+1Ch+var_4], 2Dh ; '-'
0x9F3E14: jz      short loc_9F3E29
0x9F3E16: push    offset aC
0x9F3E1B: push    offset aSkbc
0x9F3E20: mov     ecx, eax
0x9F3E22: call    GameSetting_ConstrAndReg
0x9F3E27: jmp     short loc_9F3E2B
0x9F3E29: xor     eax, eax
0x9F3E2B: push    8; Size
0x9F3E2D: mov     [esp+20h+var_4], edi
0x9F3E31: mov     dword_B39630, eax
0x9F3E36: call    FormHeapAlloc
0x9F3E3B: add     esp, 4
0x9F3E3E: mov     [esp+1Ch+var_10], eax
0x9F3E42: cmp     eax, esi
0x9F3E44: mov     [esp+1Ch+var_4], 2Eh ; '.'
0x9F3E4C: jz      short loc_9F3E61
0x9F3E4E: push    offset aV
0x9F3E53: push    offset aSkbv
0x9F3E58: mov     ecx, eax
0x9F3E5A: call    GameSetting_ConstrAndReg
0x9F3E5F: jmp     short loc_9F3E63
0x9F3E61: xor     eax, eax
0x9F3E63: push    8; Size
0x9F3E65: mov     [esp+20h+var_4], edi
0x9F3E69: mov     dword_B39634, eax
0x9F3E6E: call    FormHeapAlloc
0x9F3E73: add     esp, 4
0x9F3E76: mov     [esp+1Ch+var_10], eax
0x9F3E7A: cmp     eax, esi
0x9F3E7C: mov     [esp+1Ch+var_4], 2Fh ; '/'
0x9F3E84: jz      short loc_9F3E99
0x9F3E86: push    offset aB
0x9F3E8B: push    offset aSkbb
0x9F3E90: mov     ecx, eax
0x9F3E92: call    GameSetting_ConstrAndReg
0x9F3E97: jmp     short loc_9F3E9B
0x9F3E99: xor     eax, eax
0x9F3E9B: push    8; Size
0x9F3E9D: mov     [esp+20h+var_4], edi
0x9F3EA1: mov     dword_B39638, eax
0x9F3EA6: call    FormHeapAlloc
0x9F3EAB: add     esp, 4
0x9F3EAE: mov     [esp+1Ch+var_10], eax
0x9F3EB2: cmp     eax, esi
0x9F3EB4: mov     [esp+1Ch+var_4], 30h ; '0'
0x9F3EBC: jz      short loc_9F3ED1
0x9F3EBE: push    offset aN
0x9F3EC3: push    offset aSkbn
0x9F3EC8: mov     ecx, eax
0x9F3ECA: call    GameSetting_ConstrAndReg
0x9F3ECF: jmp     short loc_9F3ED3
0x9F3ED1: xor     eax, eax
0x9F3ED3: push    8; Size
0x9F3ED5: mov     [esp+20h+var_4], edi
0x9F3ED9: mov     dword_B3963C, eax
0x9F3EDE: call    FormHeapAlloc
0x9F3EE3: add     esp, 4
0x9F3EE6: mov     [esp+1Ch+var_10], eax
0x9F3EEA: cmp     eax, esi
0x9F3EEC: mov     [esp+1Ch+var_4], 31h ; '1'
0x9F3EF4: jz      short loc_9F3F09
0x9F3EF6: push    offset aM
0x9F3EFB: push    offset aSkbm
0x9F3F00: mov     ecx, eax
0x9F3F02: call    GameSetting_ConstrAndReg
0x9F3F07: jmp     short loc_9F3F0B
0x9F3F09: xor     eax, eax
0x9F3F0B: push    8; Size
0x9F3F0D: mov     [esp+20h+var_4], edi
0x9F3F11: mov     dword_B39640, eax
0x9F3F16: call    FormHeapAlloc
0x9F3F1B: add     esp, 4
0x9F3F1E: mov     [esp+1Ch+var_10], eax
0x9F3F22: cmp     eax, esi
0x9F3F24: mov     [esp+1Ch+var_4], 32h ; '2'
0x9F3F2C: jz      short loc_9F3F41
0x9F3F2E: push    offset asc_A319FC
0x9F3F33: push    offset aSkbcomma
0x9F3F38: mov     ecx, eax
0x9F3F3A: call    GameSetting_ConstrAndReg
0x9F3F3F: jmp     short loc_9F3F43
0x9F3F41: xor     eax, eax
0x9F3F43: push    8; Size
0x9F3F45: mov     [esp+20h+var_4], edi
0x9F3F49: mov     dword_B39644, eax
0x9F3F4E: call    FormHeapAlloc
0x9F3F53: add     esp, 4
0x9F3F56: mov     [esp+1Ch+var_10], eax
0x9F3F5A: cmp     eax, esi
0x9F3F5C: mov     [esp+1Ch+var_4], 33h ; '3'
0x9F3F64: jz      short loc_9F3F79
0x9F3F66: push    offset Delim
0x9F3F6B: push    offset aSkbperiod
0x9F3F70: mov     ecx, eax
0x9F3F72: call    GameSetting_ConstrAndReg
0x9F3F77: jmp     short loc_9F3F7B
0x9F3F79: xor     eax, eax
0x9F3F7B: push    8; Size
0x9F3F7D: mov     [esp+20h+var_4], edi
0x9F3F81: mov     dword_B39648, eax
0x9F3F86: call    FormHeapAlloc
0x9F3F8B: add     esp, 4
0x9F3F8E: mov     [esp+1Ch+var_10], eax
0x9F3F92: cmp     eax, esi
0x9F3F94: mov     [esp+1Ch+var_4], 34h ; '4'
0x9F3F9C: jz      short loc_9F3FB1
0x9F3F9E: push    offset asc_A61D50
0x9F3FA3: push    offset aSkbslash
0x9F3FA8: mov     ecx, eax
0x9F3FAA: call    GameSetting_ConstrAndReg
0x9F3FAF: jmp     short loc_9F3FB3
0x9F3FB1: xor     eax, eax
0x9F3FB3: push    8; Size
0x9F3FB5: mov     [esp+20h+var_4], edi
0x9F3FB9: mov     dword_B3964C, eax
0x9F3FBE: call    FormHeapAlloc
0x9F3FC3: add     esp, 4
0x9F3FC6: mov     [esp+1Ch+var_10], eax
0x9F3FCA: cmp     eax, esi
0x9F3FCC: mov     [esp+1Ch+var_4], 35h ; '5'
0x9F3FD4: jz      short loc_9F3FE9
0x9F3FD6: push    offset aRShift
0x9F3FDB: push    offset aSkbrshift
0x9F3FE0: mov     ecx, eax
0x9F3FE2: call    GameSetting_ConstrAndReg
0x9F3FE7: jmp     short loc_9F3FEB
0x9F3FE9: xor     eax, eax
0x9F3FEB: push    8; Size
0x9F3FED: mov     [esp+20h+var_4], edi
0x9F3FF1: mov     dword_B39650, eax
0x9F3FF6: call    FormHeapAlloc
0x9F3FFB: add     esp, 4
0x9F3FFE: mov     [esp+1Ch+var_10], eax
0x9F4002: cmp     eax, esi
0x9F4004: mov     [esp+1Ch+var_4], 36h ; '6'
0x9F400C: jz      short loc_9F4021
0x9F400E: push    offset aPad
0x9F4013: push    offset aSkbmultiply
0x9F4018: mov     ecx, eax
0x9F401A: call    GameSetting_ConstrAndReg
0x9F401F: jmp     short loc_9F4023
0x9F4021: xor     eax, eax
0x9F4023: push    8; Size
0x9F4025: mov     [esp+20h+var_4], edi
0x9F4029: mov     dword_B39654, eax
0x9F402E: call    FormHeapAlloc
0x9F4033: add     esp, 4
0x9F4036: mov     [esp+1Ch+var_10], eax
0x9F403A: cmp     eax, esi
0x9F403C: mov     [esp+1Ch+var_4], 37h ; '7'
0x9F4044: jz      short loc_9F4059
0x9F4046: push    offset aLAlt
0x9F404B: push    offset aSkblmenu
0x9F4050: mov     ecx, eax
0x9F4052: call    GameSetting_ConstrAndReg
0x9F4057: jmp     short loc_9F405B
0x9F4059: xor     eax, eax
0x9F405B: push    8; Size
0x9F405D: mov     [esp+20h+var_4], edi
0x9F4061: mov     dword_B39658, eax
0x9F4066: call    FormHeapAlloc
0x9F406B: add     esp, 4
0x9F406E: mov     [esp+1Ch+var_10], eax
0x9F4072: cmp     eax, esi
0x9F4074: mov     [esp+1Ch+var_4], 38h ; '8'
0x9F407C: jz      short loc_9F4091
0x9F407E: push    offset aSpace
0x9F4083: push    offset aSkbspace
0x9F4088: mov     ecx, eax
0x9F408A: call    GameSetting_ConstrAndReg
0x9F408F: jmp     short loc_9F4093
0x9F4091: xor     eax, eax
0x9F4093: push    8; Size
0x9F4095: mov     [esp+20h+var_4], edi
0x9F4099: mov     dword_B3965C, eax
0x9F409E: call    FormHeapAlloc
0x9F40A3: add     esp, 4
0x9F40A6: mov     [esp+1Ch+var_10], eax
0x9F40AA: cmp     eax, esi
0x9F40AC: mov     [esp+1Ch+var_4], 39h ; '9'
0x9F40B4: jz      short loc_9F40C9
0x9F40B6: push    offset aCaps
0x9F40BB: push    offset aSkbcapital
0x9F40C0: mov     ecx, eax
0x9F40C2: call    GameSetting_ConstrAndReg
0x9F40C7: jmp     short loc_9F40CB
0x9F40C9: xor     eax, eax
0x9F40CB: push    8; Size
0x9F40CD: mov     [esp+20h+var_4], edi
0x9F40D1: mov     dword_B39660, eax
0x9F40D6: call    FormHeapAlloc
0x9F40DB: add     esp, 4
0x9F40DE: mov     [esp+1Ch+var_10], eax
0x9F40E2: cmp     eax, esi
0x9F40E4: mov     [esp+1Ch+var_4], 3Ah ; ':'
0x9F40EC: jz      short loc_9F4101
0x9F40EE: push    offset aF1
0x9F40F3: push    offset aSkbf1
0x9F40F8: mov     ecx, eax
0x9F40FA: call    GameSetting_ConstrAndReg
0x9F40FF: jmp     short loc_9F4103
0x9F4101: xor     eax, eax
0x9F4103: push    8; Size
0x9F4105: mov     [esp+20h+var_4], edi
0x9F4109: mov     dword_B39664, eax
0x9F410E: call    FormHeapAlloc
0x9F4113: add     esp, 4
0x9F4116: mov     [esp+1Ch+var_10], eax
0x9F411A: cmp     eax, esi
0x9F411C: mov     [esp+1Ch+var_4], 3Bh ; ';'
0x9F4124: jz      short loc_9F4139
0x9F4126: push    offset aF2
0x9F412B: push    offset aSkbf2
0x9F4130: mov     ecx, eax
0x9F4132: call    GameSetting_ConstrAndReg
0x9F4137: jmp     short loc_9F413B
0x9F4139: xor     eax, eax
0x9F413B: push    8; Size
0x9F413D: mov     [esp+20h+var_4], edi
0x9F4141: mov     dword_B39668, eax
0x9F4146: call    FormHeapAlloc
0x9F414B: add     esp, 4
0x9F414E: mov     [esp+1Ch+var_10], eax
0x9F4152: cmp     eax, esi
0x9F4154: mov     [esp+1Ch+var_4], 3Ch ; '<'
0x9F415C: jz      short loc_9F4171
0x9F415E: push    offset aF3
0x9F4163: push    offset aSkbf3
0x9F4168: mov     ecx, eax
0x9F416A: call    GameSetting_ConstrAndReg
0x9F416F: jmp     short loc_9F4173
0x9F4171: xor     eax, eax
0x9F4173: push    8; Size
0x9F4175: mov     [esp+20h+var_4], edi
0x9F4179: mov     dword_B3966C, eax
0x9F417E: call    FormHeapAlloc
0x9F4183: add     esp, 4
0x9F4186: mov     [esp+1Ch+var_10], eax
0x9F418A: cmp     eax, esi
0x9F418C: mov     [esp+1Ch+var_4], 3Dh ; '='
0x9F4194: jz      short loc_9F41A9
0x9F4196: push    offset aF4
0x9F419B: push    offset aSkbf4
0x9F41A0: mov     ecx, eax
0x9F41A2: call    GameSetting_ConstrAndReg
0x9F41A7: jmp     short loc_9F41AB
0x9F41A9: xor     eax, eax
0x9F41AB: push    8; Size
0x9F41AD: mov     [esp+20h+var_4], edi
0x9F41B1: mov     dword_B39670, eax
0x9F41B6: call    FormHeapAlloc
0x9F41BB: add     esp, 4
0x9F41BE: mov     [esp+1Ch+var_10], eax
0x9F41C2: cmp     eax, esi
0x9F41C4: mov     [esp+1Ch+var_4], 3Eh ; '>'
0x9F41CC: jz      short loc_9F41E1
0x9F41CE: push    offset aF5
0x9F41D3: push    offset aSkbf5
0x9F41D8: mov     ecx, eax
0x9F41DA: call    GameSetting_ConstrAndReg
0x9F41DF: jmp     short loc_9F41E3
0x9F41E1: xor     eax, eax
0x9F41E3: push    8; Size
0x9F41E5: mov     [esp+20h+var_4], edi
0x9F41E9: mov     dword_B39674, eax
0x9F41EE: call    FormHeapAlloc
0x9F41F3: add     esp, 4
0x9F41F6: mov     [esp+1Ch+var_10], eax
0x9F41FA: cmp     eax, esi
0x9F41FC: mov     [esp+1Ch+var_4], 3Fh ; '?'
0x9F4204: jz      short loc_9F4219
0x9F4206: push    offset aF6
0x9F420B: push    offset aSkbf6
0x9F4210: mov     ecx, eax
0x9F4212: call    GameSetting_ConstrAndReg
0x9F4217: jmp     short loc_9F421B
0x9F4219: xor     eax, eax
0x9F421B: push    8; Size
0x9F421D: mov     [esp+20h+var_4], edi
0x9F4221: mov     dword_B39678, eax
0x9F4226: call    FormHeapAlloc
0x9F422B: add     esp, 4
0x9F422E: mov     [esp+1Ch+var_10], eax
0x9F4232: cmp     eax, esi
0x9F4234: mov     [esp+1Ch+var_4], 40h ; '@'
0x9F423C: jz      short loc_9F4251
0x9F423E: push    offset aF7
0x9F4243: push    offset aSkbf7
0x9F4248: mov     ecx, eax
0x9F424A: call    GameSetting_ConstrAndReg
0x9F424F: jmp     short loc_9F4253
0x9F4251: xor     eax, eax
0x9F4253: push    8; Size
0x9F4255: mov     [esp+20h+var_4], edi
0x9F4259: mov     dword_B3967C, eax
0x9F425E: call    FormHeapAlloc
0x9F4263: add     esp, 4
0x9F4266: mov     [esp+1Ch+var_10], eax
0x9F426A: cmp     eax, esi
0x9F426C: mov     [esp+1Ch+var_4], 41h ; 'A'
0x9F4274: jz      short loc_9F4289
0x9F4276: push    offset aF8
0x9F427B: push    offset aSkbf8
0x9F4280: mov     ecx, eax
0x9F4282: call    GameSetting_ConstrAndReg
0x9F4287: jmp     short loc_9F428B
0x9F4289: xor     eax, eax
0x9F428B: push    8; Size
0x9F428D: mov     [esp+20h+var_4], edi
0x9F4291: mov     dword_B39680, eax
0x9F4296: call    FormHeapAlloc
0x9F429B: add     esp, 4
0x9F429E: mov     [esp+1Ch+var_10], eax
0x9F42A2: cmp     eax, esi
0x9F42A4: mov     [esp+1Ch+var_4], 42h ; 'B'
0x9F42AC: jz      short loc_9F42C1
0x9F42AE: push    offset aF9
0x9F42B3: push    offset aSkbf9
0x9F42B8: mov     ecx, eax
0x9F42BA: call    GameSetting_ConstrAndReg
0x9F42BF: jmp     short loc_9F42C3
0x9F42C1: xor     eax, eax
0x9F42C3: push    8; Size
0x9F42C5: mov     [esp+20h+var_4], edi
0x9F42C9: mov     dword_B39684, eax
0x9F42CE: call    FormHeapAlloc
0x9F42D3: add     esp, 4
0x9F42D6: mov     [esp+1Ch+var_10], eax
0x9F42DA: cmp     eax, esi
0x9F42DC: mov     [esp+1Ch+var_4], 43h ; 'C'
0x9F42E4: jz      short loc_9F42F9
0x9F42E6: push    offset aF10
0x9F42EB: push    offset aSkbf10
0x9F42F0: mov     ecx, eax
0x9F42F2: call    GameSetting_ConstrAndReg
0x9F42F7: jmp     short loc_9F42FB
0x9F42F9: xor     eax, eax
0x9F42FB: push    8; Size
0x9F42FD: mov     [esp+20h+var_4], edi
0x9F4301: mov     dword_B39688, eax
0x9F4306: call    FormHeapAlloc
0x9F430B: add     esp, 4
0x9F430E: mov     [esp+1Ch+var_10], eax
0x9F4312: cmp     eax, esi
0x9F4314: mov     [esp+1Ch+var_4], 44h ; 'D'
0x9F431C: jz      short loc_9F4331
0x9F431E: push    offset off_A61C64
0x9F4323: push    offset aSkbnumlock
0x9F4328: mov     ecx, eax
0x9F432A: call    GameSetting_ConstrAndReg
0x9F432F: jmp     short loc_9F4333
0x9F4331: xor     eax, eax
0x9F4333: push    8; Size
0x9F4335: mov     [esp+20h+var_4], edi
0x9F4339: mov     dword_B3968C, eax
0x9F433E: call    FormHeapAlloc
0x9F4343: add     esp, 4
0x9F4346: mov     [esp+1Ch+var_10], eax
0x9F434A: cmp     eax, esi
0x9F434C: mov     [esp+1Ch+var_4], 45h ; 'E'
0x9F4354: jz      short loc_9F4369
0x9F4356: push    offset aScroll
0x9F435B: push    offset aSkbscroll
0x9F4360: mov     ecx, eax
0x9F4362: call    GameSetting_ConstrAndReg
0x9F4367: jmp     short loc_9F436B
0x9F4369: xor     eax, eax
0x9F436B: push    8; Size
0x9F436D: mov     [esp+20h+var_4], edi
0x9F4371: mov     dword_B39690, eax
0x9F4376: call    FormHeapAlloc
0x9F437B: add     esp, 4
0x9F437E: mov     [esp+1Ch+var_10], eax
0x9F4382: cmp     eax, esi
0x9F4384: mov     [esp+1Ch+var_4], 46h ; 'F'
0x9F438C: jz      short loc_9F43A1
0x9F438E: push    offset aPad7
0x9F4393: push    offset aSkbnumpad7
0x9F4398: mov     ecx, eax
0x9F439A: call    GameSetting_ConstrAndReg
0x9F439F: jmp     short loc_9F43A3
0x9F43A1: xor     eax, eax
0x9F43A3: push    8; Size
0x9F43A5: mov     [esp+20h+var_4], edi
0x9F43A9: mov     dword_B39694, eax
0x9F43AE: call    FormHeapAlloc
0x9F43B3: add     esp, 4
0x9F43B6: mov     [esp+1Ch+var_10], eax
0x9F43BA: cmp     eax, esi
0x9F43BC: mov     [esp+1Ch+var_4], 47h ; 'G'
0x9F43C4: jz      short loc_9F43D9
0x9F43C6: push    offset aPad8
0x9F43CB: push    offset aSkbnumpad8
0x9F43D0: mov     ecx, eax
0x9F43D2: call    GameSetting_ConstrAndReg
0x9F43D7: jmp     short loc_9F43DB
0x9F43D9: xor     eax, eax
0x9F43DB: push    8; Size
0x9F43DD: mov     [esp+20h+var_4], edi
0x9F43E1: mov     dword_B39698, eax
0x9F43E6: call    FormHeapAlloc
0x9F43EB: add     esp, 4
0x9F43EE: mov     [esp+1Ch+var_10], eax
0x9F43F2: cmp     eax, esi
0x9F43F4: mov     [esp+1Ch+var_4], 48h ; 'H'
0x9F43FC: jz      short loc_9F4411
0x9F43FE: push    offset aPad9
0x9F4403: push    offset aSkbnumpad9
0x9F4408: mov     ecx, eax
0x9F440A: call    GameSetting_ConstrAndReg
0x9F440F: jmp     short loc_9F4413
0x9F4411: xor     eax, eax
0x9F4413: push    8; Size
0x9F4415: mov     [esp+20h+var_4], edi
0x9F4419: mov     dword_B3969C, eax
0x9F441E: call    FormHeapAlloc
0x9F4423: add     esp, 4
0x9F4426: mov     [esp+1Ch+var_10], eax
0x9F442A: cmp     eax, esi
0x9F442C: mov     [esp+1Ch+var_4], 49h ; 'I'
0x9F4434: jz      short loc_9F4449
0x9F4436: push    offset aPad_0
0x9F443B: push    offset aSkbsubtract
0x9F4440: mov     ecx, eax
0x9F4442: call    GameSetting_ConstrAndReg
0x9F4447: jmp     short loc_9F444B
0x9F4449: xor     eax, eax
0x9F444B: push    8; Size
0x9F444D: mov     [esp+20h+var_4], edi
0x9F4451: mov     dword_B396A0, eax
0x9F4456: call    FormHeapAlloc
0x9F445B: add     esp, 4
0x9F445E: mov     [esp+1Ch+var_10], eax
0x9F4462: cmp     eax, esi
0x9F4464: mov     [esp+1Ch+var_4], 4Ah ; 'J'
0x9F446C: jz      short loc_9F4481
0x9F446E: push    offset aPad4
0x9F4473: push    offset aSkbnumpad4
0x9F4478: mov     ecx, eax
0x9F447A: call    GameSetting_ConstrAndReg
0x9F447F: jmp     short loc_9F4483
0x9F4481: xor     eax, eax
0x9F4483: push    8; Size
0x9F4485: mov     [esp+20h+var_4], edi
0x9F4489: mov     dword_B396A4, eax
0x9F448E: call    FormHeapAlloc
0x9F4493: add     esp, 4
0x9F4496: mov     [esp+1Ch+var_10], eax
0x9F449A: cmp     eax, esi
0x9F449C: mov     [esp+1Ch+var_4], 4Bh ; 'K'
0x9F44A4: jz      short loc_9F44B9
0x9F44A6: push    offset aPad5
0x9F44AB: push    offset aSkbnumpad5
0x9F44B0: mov     ecx, eax
0x9F44B2: call    GameSetting_ConstrAndReg
0x9F44B7: jmp     short loc_9F44BB
0x9F44B9: xor     eax, eax
0x9F44BB: push    8; Size
0x9F44BD: mov     [esp+20h+var_4], edi
0x9F44C1: mov     dword_B396A8, eax
0x9F44C6: call    FormHeapAlloc
0x9F44CB: add     esp, 4
0x9F44CE: mov     [esp+1Ch+var_10], eax
0x9F44D2: cmp     eax, esi
0x9F44D4: mov     [esp+1Ch+var_4], 4Ch ; 'L'
0x9F44DC: jz      short loc_9F44F1
0x9F44DE: push    offset aPad6
0x9F44E3: push    offset aSkbnumpad6
0x9F44E8: mov     ecx, eax
0x9F44EA: call    GameSetting_ConstrAndReg
0x9F44EF: jmp     short loc_9F44F3
0x9F44F1: xor     eax, eax
0x9F44F3: push    8; Size
0x9F44F5: mov     [esp+20h+var_4], edi
0x9F44F9: mov     dword_B396AC, eax
0x9F44FE: call    FormHeapAlloc
0x9F4503: add     esp, 4
0x9F4506: mov     [esp+1Ch+var_10], eax
0x9F450A: cmp     eax, esi
0x9F450C: mov     [esp+1Ch+var_4], 4Dh ; 'M'
0x9F4514: jz      short loc_9F4529
0x9F4516: push    offset aPad_1
0x9F451B: push    offset aSkbadd
0x9F4520: mov     ecx, eax
0x9F4522: call    GameSetting_ConstrAndReg
0x9F4527: jmp     short loc_9F452B
0x9F4529: xor     eax, eax
0x9F452B: push    8; Size
0x9F452D: mov     [esp+20h+var_4], edi
0x9F4531: mov     dword_B396B0, eax
0x9F4536: call    FormHeapAlloc
0x9F453B: add     esp, 4
0x9F453E: mov     [esp+1Ch+var_10], eax
0x9F4542: cmp     eax, esi
0x9F4544: mov     [esp+1Ch+var_4], 4Eh ; 'N'
0x9F454C: jz      short loc_9F4561
0x9F454E: push    offset aPad1
0x9F4553: push    offset aSkbnumpad1
0x9F4558: mov     ecx, eax
0x9F455A: call    GameSetting_ConstrAndReg
0x9F455F: jmp     short loc_9F4563
0x9F4561: xor     eax, eax
0x9F4563: push    8; Size
0x9F4565: mov     [esp+20h+var_4], edi
0x9F4569: mov     dword_B396B4, eax
0x9F456E: call    FormHeapAlloc
0x9F4573: add     esp, 4
0x9F4576: mov     [esp+1Ch+var_10], eax
0x9F457A: cmp     eax, esi
0x9F457C: mov     [esp+1Ch+var_4], 4Fh ; 'O'
0x9F4584: jz      short loc_9F4599
0x9F4586: push    offset aPad2
0x9F458B: push    offset aSkbnumpad2
0x9F4590: mov     ecx, eax
0x9F4592: call    GameSetting_ConstrAndReg
0x9F4597: jmp     short loc_9F459B
0x9F4599: xor     eax, eax
0x9F459B: push    8; Size
0x9F459D: mov     [esp+20h+var_4], edi
0x9F45A1: mov     dword_B396B8, eax
0x9F45A6: call    FormHeapAlloc
0x9F45AB: add     esp, 4
0x9F45AE: mov     [esp+1Ch+var_10], eax
0x9F45B2: cmp     eax, esi
0x9F45B4: mov     [esp+1Ch+var_4], 50h ; 'P'
0x9F45BC: jz      short loc_9F45D1
0x9F45BE: push    offset aPad3
0x9F45C3: push    offset aSkbnumpad3
0x9F45C8: mov     ecx, eax
0x9F45CA: call    GameSetting_ConstrAndReg
0x9F45CF: jmp     short loc_9F45D3
0x9F45D1: xor     eax, eax
0x9F45D3: push    8; Size
0x9F45D5: mov     [esp+20h+var_4], edi
0x9F45D9: mov     dword_B396BC, eax
0x9F45DE: call    FormHeapAlloc
0x9F45E3: add     esp, 4
0x9F45E6: mov     [esp+1Ch+var_10], eax
0x9F45EA: cmp     eax, esi
0x9F45EC: mov     [esp+1Ch+var_4], 51h ; 'Q'
0x9F45F4: jz      short loc_9F4609
0x9F45F6: push    offset aPad0
0x9F45FB: push    offset aSkbnumpad0
0x9F4600: mov     ecx, eax
0x9F4602: call    GameSetting_ConstrAndReg
0x9F4607: jmp     short loc_9F460B
0x9F4609: xor     eax, eax
0x9F460B: push    8; Size
0x9F460D: mov     [esp+20h+var_4], edi
0x9F4611: mov     dword_B396C0, eax
0x9F4616: call    FormHeapAlloc
0x9F461B: add     esp, 4
0x9F461E: mov     [esp+1Ch+var_10], eax
0x9F4622: cmp     eax, esi
0x9F4624: mov     [esp+1Ch+var_4], 52h ; 'R'
0x9F462C: jz      short loc_9F4641
0x9F462E: push    offset aPad_
0x9F4633: push    offset aSkbdecimal
0x9F4638: mov     ecx, eax
0x9F463A: call    GameSetting_ConstrAndReg
0x9F463F: jmp     short loc_9F4643
0x9F4641: xor     eax, eax
0x9F4643: push    8; Size
0x9F4645: mov     [esp+20h+var_4], edi
0x9F4649: mov     dword_B396C4, eax
0x9F464E: mov     dword_B396C8, esi
0x9F4654: mov     dword_B396CC, esi
0x9F465A: call    FormHeapAlloc
0x9F465F: add     esp, 4
0x9F4662: mov     [esp+1Ch+var_10], eax
0x9F4666: cmp     eax, esi
0x9F4668: mov     [esp+1Ch+var_4], 53h ; 'S'
0x9F4670: jz      short loc_9F4685
0x9F4672: push    offset asc_A61B48
0x9F4677: push    offset aSkboem102
0x9F467C: mov     ecx, eax
0x9F467E: call    GameSetting_ConstrAndReg
0x9F4683: jmp     short loc_9F4687
0x9F4685: xor     eax, eax
0x9F4687: push    8; Size
0x9F4689: mov     [esp+20h+var_4], edi
0x9F468D: mov     dword_B396D0, eax
0x9F4692: call    FormHeapAlloc
0x9F4697: add     esp, 4
0x9F469A: mov     [esp+1Ch+var_10], eax
0x9F469E: cmp     eax, esi
0x9F46A0: mov     [esp+1Ch+var_4], 54h ; 'T'
0x9F46A8: jz      short loc_9F46BD
0x9F46AA: push    offset aF11
0x9F46AF: push    offset aSkbf11
0x9F46B4: mov     ecx, eax
0x9F46B6: call    GameSetting_ConstrAndReg
0x9F46BB: jmp     short loc_9F46BF
0x9F46BD: xor     eax, eax
0x9F46BF: push    8; Size
0x9F46C1: mov     [esp+20h+var_4], edi
0x9F46C5: mov     dword_B396D4, eax
0x9F46CA: call    FormHeapAlloc
0x9F46CF: add     esp, 4
0x9F46D2: mov     [esp+1Ch+var_10], eax
0x9F46D6: cmp     eax, esi
0x9F46D8: mov     [esp+1Ch+var_4], 55h ; 'U'
0x9F46E0: jz      short loc_9F46F5
0x9F46E2: push    offset aF12
0x9F46E7: push    offset aSkbf12
0x9F46EC: mov     ecx, eax
0x9F46EE: call    GameSetting_ConstrAndReg
0x9F46F3: jmp     short loc_9F46F7
0x9F46F5: xor     eax, eax
0x9F46F7: push    8; Size
0x9F46F9: mov     [esp+20h+var_4], edi
0x9F46FD: mov     dword_B396D8, eax
0x9F4702: mov     dword_B396DC, esi
0x9F4708: mov     dword_B396E0, esi
0x9F470E: mov     dword_B396E4, esi
0x9F4714: mov     dword_B396E8, esi
0x9F471A: mov     dword_B396EC, esi
0x9F4720: mov     dword_B396F0, esi
0x9F4726: mov     dword_B396F4, esi
0x9F472C: mov     dword_B396F8, esi
0x9F4732: mov     dword_B396FC, esi
0x9F4738: mov     dword_B39700, esi
0x9F473E: mov     dword_B39704, esi
0x9F4744: call    FormHeapAlloc
0x9F4749: add     esp, 4
0x9F474C: mov     [esp+1Ch+var_10], eax
0x9F4750: cmp     eax, esi
0x9F4752: mov     [esp+1Ch+var_4], 56h ; 'V'
0x9F475A: jz      short loc_9F476F
0x9F475C: push    offset aF13
0x9F4761: push    offset aSkbf13
0x9F4766: mov     ecx, eax
0x9F4768: call    GameSetting_ConstrAndReg
0x9F476D: jmp     short loc_9F4771
0x9F476F: xor     eax, eax
0x9F4771: push    8; Size
0x9F4773: mov     [esp+20h+var_4], edi
0x9F4777: mov     dword_B39708, eax
0x9F477C: call    FormHeapAlloc
0x9F4781: add     esp, 4
0x9F4784: mov     [esp+1Ch+var_10], eax
0x9F4788: cmp     eax, esi
0x9F478A: mov     [esp+1Ch+var_4], 57h ; 'W'
0x9F4792: jz      short loc_9F47A7
0x9F4794: push    offset aF14
0x9F4799: push    offset aSkbf14
0x9F479E: mov     ecx, eax
0x9F47A0: call    GameSetting_ConstrAndReg
0x9F47A5: jmp     short loc_9F47A9
0x9F47A7: xor     eax, eax
0x9F47A9: push    8; Size
0x9F47AB: mov     [esp+20h+var_4], edi
0x9F47AF: mov     dword_B3970C, eax
0x9F47B4: call    FormHeapAlloc
0x9F47B9: add     esp, 4
0x9F47BC: mov     [esp+1Ch+var_10], eax
0x9F47C0: cmp     eax, esi
0x9F47C2: mov     [esp+1Ch+var_4], 58h ; 'X'
0x9F47CA: jz      short loc_9F47DF
0x9F47CC: push    offset aF15
0x9F47D1: push    offset aSkbf15
0x9F47D6: mov     ecx, eax
0x9F47D8: call    GameSetting_ConstrAndReg
0x9F47DD: jmp     short loc_9F47E1
0x9F47DF: xor     eax, eax
0x9F47E1: push    8; Size
0x9F47E3: mov     [esp+20h+var_4], edi
0x9F47E7: mov     dword_B39710, eax
0x9F47EC: mov     dword_B39714, esi
0x9F47F2: mov     dword_B39718, esi
0x9F47F8: mov     dword_B3971C, esi
0x9F47FE: mov     dword_B39720, esi
0x9F4804: mov     dword_B39724, esi
0x9F480A: mov     dword_B39728, esi
0x9F4810: mov     dword_B3972C, esi
0x9F4816: mov     dword_B39730, esi
0x9F481C: mov     dword_B39734, esi
0x9F4822: mov     dword_B39738, esi
0x9F4828: mov     dword_B3973C, esi
0x9F482E: mov     dword_B39740, esi
0x9F4834: call    FormHeapAlloc
0x9F4839: add     esp, 4
0x9F483C: mov     [esp+1Ch+var_10], eax
0x9F4840: cmp     eax, esi
0x9F4842: mov     [esp+1Ch+var_4], 59h ; 'Y'
0x9F484A: jz      short loc_9F485F
0x9F484C: push    offset asc_A61D50
0x9F4851: push    offset aSkbabntc1
0x9F4856: mov     ecx, eax
0x9F4858: call    GameSetting_ConstrAndReg
0x9F485D: jmp     short loc_9F4861
0x9F485F: xor     eax, eax
0x9F4861: push    8; Size
0x9F4863: mov     [esp+20h+var_4], edi
0x9F4867: mov     dword_B39744, eax
0x9F486C: mov     dword_B39748, esi
0x9F4872: mov     dword_B3974C, esi
0x9F4878: mov     dword_B39750, esi
0x9F487E: mov     dword_B39754, esi
0x9F4884: mov     dword_B39758, esi
0x9F488A: mov     dword_B3975C, esi
0x9F4890: mov     dword_B39760, esi
0x9F4896: mov     dword_B39764, esi
0x9F489C: mov     dword_B39768, esi
0x9F48A2: mov     dword_B3976C, esi
0x9F48A8: call    FormHeapAlloc
0x9F48AD: add     esp, 4
0x9F48B0: mov     [esp+1Ch+var_10], eax
0x9F48B4: cmp     eax, esi
0x9F48B6: mov     [esp+1Ch+var_4], 5Ah ; 'Z'
0x9F48BE: jz      short loc_9F48D3
0x9F48C0: push    offset aPad_
0x9F48C5: push    offset aSkbabntc2
0x9F48CA: mov     ecx, eax
0x9F48CC: call    GameSetting_ConstrAndReg
0x9F48D1: jmp     short loc_9F48D5
0x9F48D3: xor     eax, eax
0x9F48D5: push    8; Size
0x9F48D7: mov     [esp+20h+var_4], edi
0x9F48DB: mov     dword_B39770, eax
0x9F48E0: mov     dword_B39774, esi
0x9F48E6: mov     dword_B39778, esi
0x9F48EC: mov     dword_B3977C, esi
0x9F48F2: mov     dword_B39780, esi
0x9F48F8: mov     dword_B39784, esi
0x9F48FE: mov     dword_B39788, esi
0x9F4904: mov     dword_B3978C, esi
0x9F490A: mov     dword_B39790, esi
0x9F4910: mov     dword_B39794, esi
0x9F4916: mov     dword_B39798, esi
0x9F491C: mov     dword_B3979C, esi
0x9F4922: mov     dword_B397A0, esi
0x9F4928: mov     dword_B397A4, esi
0x9F492E: mov     dword_B397A8, esi
0x9F4934: call    FormHeapAlloc
0x9F4939: add     esp, 4
0x9F493C: mov     [esp+1Ch+var_10], eax
0x9F4940: cmp     eax, esi
0x9F4942: mov     [esp+1Ch+var_4], 5Bh ; '['
0x9F494A: jz      short loc_9F495F
0x9F494C: push    offset aPad_2
0x9F4951: push    offset aSkbnumpadequal
0x9F4956: mov     ecx, eax
0x9F4958: call    GameSetting_ConstrAndReg
0x9F495D: jmp     short loc_9F4961
0x9F495F: xor     eax, eax
0x9F4961: push    8; Size
0x9F4963: mov     [esp+20h+var_4], edi
0x9F4967: mov     dword_B397AC, eax
0x9F496C: mov     dword_B397B0, esi
0x9F4972: mov     dword_B397B4, esi
0x9F4978: call    FormHeapAlloc
0x9F497D: add     esp, 4
0x9F4980: mov     [esp+1Ch+var_10], eax
0x9F4984: cmp     eax, esi
0x9F4986: mov     [esp+1Ch+var_4], 5Ch ; '\'
0x9F498E: jz      short loc_9F49A3
0x9F4990: push    offset aPrev_0
0x9F4995: push    offset aSkbprevtrack
0x9F499A: mov     ecx, eax
0x9F499C: call    GameSetting_ConstrAndReg
0x9F49A1: jmp     short loc_9F49A5
0x9F49A3: xor     eax, eax
0x9F49A5: push    8; Size
0x9F49A7: mov     [esp+20h+var_4], edi
0x9F49AB: mov     dword_B397B8, eax
0x9F49B0: call    FormHeapAlloc
0x9F49B5: add     esp, 4
0x9F49B8: mov     [esp+1Ch+var_10], eax
0x9F49BC: cmp     eax, esi
0x9F49BE: mov     [esp+1Ch+var_4], 5Dh ; ']'
0x9F49C6: jz      short loc_9F49DB
0x9F49C8: push    offset a@
0x9F49CD: push    offset aSkbat
0x9F49D2: mov     ecx, eax
0x9F49D4: call    GameSetting_ConstrAndReg
0x9F49D9: jmp     short loc_9F49DD
0x9F49DB: xor     eax, eax
0x9F49DD: push    8; Size
0x9F49DF: mov     [esp+20h+var_4], edi
0x9F49E3: mov     dword_B397BC, eax
0x9F49E8: call    FormHeapAlloc
0x9F49ED: add     esp, 4
0x9F49F0: mov     [esp+1Ch+var_10], eax
0x9F49F4: cmp     eax, esi
0x9F49F6: mov     [esp+1Ch+var_4], 5Eh ; '^'
0x9F49FE: jz      short loc_9F4A13
0x9F4A00: push    offset asc_A61AA8
0x9F4A05: push    offset aSkbcolon
0x9F4A0A: mov     ecx, eax
0x9F4A0C: call    GameSetting_ConstrAndReg
0x9F4A11: jmp     short loc_9F4A15
0x9F4A13: xor     eax, eax
0x9F4A15: push    8; Size
0x9F4A17: mov     [esp+20h+var_4], edi
0x9F4A1B: mov     dword_B397C0, eax
0x9F4A20: call    FormHeapAlloc
0x9F4A25: add     esp, 4
0x9F4A28: mov     [esp+1Ch+var_10], eax
0x9F4A2C: cmp     eax, esi
0x9F4A2E: mov     [esp+1Ch+var_4], 5Fh ; '_'
0x9F4A36: jz      short loc_9F4A4B
0x9F4A38: push    offset a__0
0x9F4A3D: push    offset aSkbunderline
0x9F4A42: mov     ecx, eax
0x9F4A44: call    GameSetting_ConstrAndReg
0x9F4A49: jmp     short loc_9F4A4D
0x9F4A4B: xor     eax, eax
0x9F4A4D: push    8; Size
0x9F4A4F: mov     [esp+20h+var_4], edi
0x9F4A53: mov     dword_B397C4, eax
0x9F4A58: mov     dword_B397C8, esi
0x9F4A5E: call    FormHeapAlloc
0x9F4A63: add     esp, 4
0x9F4A66: mov     [esp+1Ch+var_10], eax
0x9F4A6A: cmp     eax, esi
0x9F4A6C: mov     [esp+1Ch+var_4], 60h ; '`'
0x9F4A74: jz      short loc_9F4A89
0x9F4A76: push    offset aStop
0x9F4A7B: push    offset aSkbstop
0x9F4A80: mov     ecx, eax
0x9F4A82: call    GameSetting_ConstrAndReg
0x9F4A87: jmp     short loc_9F4A8B
0x9F4A89: xor     eax, eax
0x9F4A8B: push    8; Size
0x9F4A8D: mov     [esp+20h+var_4], edi
0x9F4A91: mov     dword_B397CC, eax
0x9F4A96: mov     dword_B397D0, esi
0x9F4A9C: call    FormHeapAlloc
0x9F4AA1: add     esp, 4
0x9F4AA4: mov     [esp+1Ch+var_10], eax
0x9F4AA8: cmp     eax, esi
0x9F4AAA: mov     [esp+1Ch+var_4], 61h ; 'a'
0x9F4AB2: jz      short loc_9F4AC7
0x9F4AB4: push    offset aUnlabeled
0x9F4AB9: push    offset aSkbunlabeled
0x9F4ABE: mov     ecx, eax
0x9F4AC0: call    GameSetting_ConstrAndReg
0x9F4AC5: jmp     short loc_9F4AC9
0x9F4AC7: xor     eax, eax
0x9F4AC9: push    8; Size
0x9F4ACB: mov     [esp+20h+var_4], edi
0x9F4ACF: mov     dword_B397D4, eax
0x9F4AD4: mov     dword_B397D8, esi
0x9F4ADA: call    FormHeapAlloc
0x9F4ADF: add     esp, 4
0x9F4AE2: mov     [esp+1Ch+var_10], eax
0x9F4AE6: cmp     eax, esi
0x9F4AE8: mov     [esp+1Ch+var_4], 62h ; 'b'
0x9F4AF0: jz      short loc_9F4B05
0x9F4AF2: push    offset aNext_0
0x9F4AF7: push    offset aSkbnexttrack
0x9F4AFC: mov     ecx, eax
0x9F4AFE: call    GameSetting_ConstrAndReg
0x9F4B03: jmp     short loc_9F4B07
0x9F4B05: xor     eax, eax
0x9F4B07: push    8; Size
0x9F4B09: mov     [esp+20h+var_4], edi
0x9F4B0D: mov     dword_B397DC, eax
0x9F4B12: mov     dword_B397E0, esi
0x9F4B18: mov     dword_B397E4, esi
0x9F4B1E: call    FormHeapAlloc
0x9F4B23: add     esp, 4
0x9F4B26: mov     [esp+1Ch+var_10], eax
0x9F4B2A: cmp     eax, esi
0x9F4B2C: mov     [esp+1Ch+var_4], 63h ; 'c'
0x9F4B34: jz      short loc_9F4B49
0x9F4B36: push    offset aPadEnter
0x9F4B3B: push    offset aSkbnumpadenter
0x9F4B40: mov     ecx, eax
0x9F4B42: call    GameSetting_ConstrAndReg
0x9F4B47: jmp     short loc_9F4B4B
0x9F4B49: xor     eax, eax
0x9F4B4B: push    8; Size
0x9F4B4D: mov     [esp+20h+var_4], edi
0x9F4B51: mov     dword_B397E8, eax
0x9F4B56: call    FormHeapAlloc
0x9F4B5B: add     esp, 4
0x9F4B5E: mov     [esp+1Ch+var_10], eax
0x9F4B62: cmp     eax, esi
0x9F4B64: mov     [esp+1Ch+var_4], 64h ; 'd'
0x9F4B6C: jz      short loc_9F4B81
0x9F4B6E: push    offset aRCtrl
0x9F4B73: push    offset aSkbrcontrol
0x9F4B78: mov     ecx, eax
0x9F4B7A: call    GameSetting_ConstrAndReg
0x9F4B7F: jmp     short loc_9F4B83
0x9F4B81: xor     eax, eax
0x9F4B83: push    8; Size
0x9F4B85: mov     [esp+20h+var_4], edi
0x9F4B89: mov     dword_B397EC, eax
0x9F4B8E: mov     dword_B397F0, esi
0x9F4B94: mov     dword_B397F4, esi
0x9F4B9A: call    FormHeapAlloc
0x9F4B9F: add     esp, 4
0x9F4BA2: mov     [esp+1Ch+var_10], eax
0x9F4BA6: cmp     eax, esi
0x9F4BA8: mov     [esp+1Ch+var_4], 65h ; 'e'
0x9F4BB0: jz      short loc_9F4BC5
0x9F4BB2: push    offset aMute
0x9F4BB7: push    offset aSkbmute
0x9F4BBC: mov     ecx, eax
0x9F4BBE: call    GameSetting_ConstrAndReg
0x9F4BC3: jmp     short loc_9F4BC7
0x9F4BC5: xor     eax, eax
0x9F4BC7: push    8; Size
0x9F4BC9: mov     [esp+20h+var_4], edi
0x9F4BCD: mov     dword_B397F8, eax
0x9F4BD2: call    FormHeapAlloc
0x9F4BD7: add     esp, 4
0x9F4BDA: mov     [esp+1Ch+var_10], eax
0x9F4BDE: cmp     eax, esi
0x9F4BE0: mov     [esp+1Ch+var_4], 66h ; 'f'
0x9F4BE8: jz      short loc_9F4BFD
0x9F4BEA: push    offset aCalc
0x9F4BEF: push    offset aSkbcalculator
0x9F4BF4: mov     ecx, eax
0x9F4BF6: call    GameSetting_ConstrAndReg
0x9F4BFB: jmp     short loc_9F4BFF
0x9F4BFD: xor     eax, eax
0x9F4BFF: push    8; Size
0x9F4C01: mov     [esp+20h+var_4], edi
0x9F4C05: mov     dword_B397FC, eax
0x9F4C0A: call    FormHeapAlloc
0x9F4C0F: add     esp, 4
0x9F4C12: mov     [esp+1Ch+var_10], eax
0x9F4C16: cmp     eax, esi
0x9F4C18: mov     [esp+1Ch+var_4], 67h ; 'g'
0x9F4C20: jz      short loc_9F4C35
0x9F4C22: push    offset aPlay
0x9F4C27: push    offset aSkbplaypause
0x9F4C2C: mov     ecx, eax
0x9F4C2E: call    GameSetting_ConstrAndReg
0x9F4C33: jmp     short loc_9F4C37
0x9F4C35: xor     eax, eax
0x9F4C37: push    8; Size
0x9F4C39: mov     [esp+20h+var_4], edi
0x9F4C3D: mov     dword_B39800, eax
0x9F4C42: mov     dword_B39804, esi
0x9F4C48: call    FormHeapAlloc
0x9F4C4D: add     esp, 4
0x9F4C50: mov     [esp+1Ch+var_10], eax
0x9F4C54: cmp     eax, esi
0x9F4C56: mov     [esp+1Ch+var_4], 68h ; 'h'
0x9F4C5E: jz      short loc_9F4C73
0x9F4C60: push    offset aStop
0x9F4C65: push    offset aSkbmediastop
0x9F4C6A: mov     ecx, eax
0x9F4C6C: call    GameSetting_ConstrAndReg
0x9F4C71: jmp     short loc_9F4C75
0x9F4C73: xor     eax, eax
0x9F4C75: push    8; Size
0x9F4C77: mov     [esp+20h+var_4], edi
0x9F4C7B: mov     dword_B39808, eax
0x9F4C80: mov     dword_B3980C, esi
0x9F4C86: mov     dword_B39810, esi
0x9F4C8C: mov     dword_B39814, esi
0x9F4C92: mov     dword_B39818, esi
0x9F4C98: mov     dword_B3981C, esi
0x9F4C9E: mov     dword_B39820, esi
0x9F4CA4: mov     dword_B39824, esi
0x9F4CAA: mov     dword_B39828, esi
0x9F4CB0: mov     dword_B3982C, esi
0x9F4CB6: call    FormHeapAlloc
0x9F4CBB: add     esp, 4
0x9F4CBE: mov     [esp+1Ch+var_10], eax
0x9F4CC2: cmp     eax, esi
0x9F4CC4: mov     [esp+1Ch+var_4], 69h ; 'i'
0x9F4CCC: jz      short loc_9F4CE1
0x9F4CCE: push    offset aVol
0x9F4CD3: push    offset aSkbvolumedown
0x9F4CD8: mov     ecx, eax
0x9F4CDA: call    GameSetting_ConstrAndReg
0x9F4CDF: jmp     short loc_9F4CE3
0x9F4CE1: xor     eax, eax
0x9F4CE3: push    8; Size
0x9F4CE5: mov     [esp+20h+var_4], edi
0x9F4CE9: mov     dword_B39830, eax
0x9F4CEE: mov     dword_B39834, esi
0x9F4CF4: call    FormHeapAlloc
0x9F4CF9: add     esp, 4
0x9F4CFC: mov     [esp+1Ch+var_10], eax
0x9F4D00: cmp     eax, esi
0x9F4D02: mov     [esp+1Ch+var_4], 6Ah ; 'j'
0x9F4D0A: jz      short loc_9F4D1F
0x9F4D0C: push    offset aVol_0
0x9F4D11: push    offset aSkbvolumeup
0x9F4D16: mov     ecx, eax
0x9F4D18: call    GameSetting_ConstrAndReg
0x9F4D1D: jmp     short loc_9F4D21
0x9F4D1F: xor     eax, eax
0x9F4D21: push    8; Size
0x9F4D23: mov     [esp+20h+var_4], edi
0x9F4D27: mov     dword_B39838, eax
0x9F4D2C: mov     dword_B3983C, esi
0x9F4D32: call    FormHeapAlloc
0x9F4D37: add     esp, 4
0x9F4D3A: mov     [esp+1Ch+var_10], eax
0x9F4D3E: cmp     eax, esi
0x9F4D40: mov     [esp+1Ch+var_4], 6Bh ; 'k'
0x9F4D48: jz      short loc_9F4D5D
0x9F4D4A: push    offset off_A61994
0x9F4D4F: push    offset aSkbwebhome
0x9F4D54: mov     ecx, eax
0x9F4D56: call    GameSetting_ConstrAndReg
0x9F4D5B: jmp     short loc_9F4D5F
0x9F4D5D: xor     eax, eax
0x9F4D5F: push    8; Size
0x9F4D61: mov     [esp+20h+var_4], edi
0x9F4D65: mov     dword_B39840, eax
0x9F4D6A: call    FormHeapAlloc
0x9F4D6F: add     esp, 4
0x9F4D72: mov     [esp+1Ch+var_10], eax
0x9F4D76: cmp     eax, esi
0x9F4D78: mov     [esp+1Ch+var_4], 6Ch ; 'l'
0x9F4D80: jz      short loc_9F4D95
0x9F4D82: push    offset aPad_3
0x9F4D87: push    offset aSkbnumpadcomma
0x9F4D8C: mov     ecx, eax
0x9F4D8E: call    GameSetting_ConstrAndReg
0x9F4D93: jmp     short loc_9F4D97
0x9F4D95: xor     eax, eax
0x9F4D97: push    8; Size
0x9F4D99: mov     [esp+20h+var_4], edi
0x9F4D9D: mov     dword_B39844, eax
0x9F4DA2: mov     dword_B39848, esi
0x9F4DA8: call    FormHeapAlloc
0x9F4DAD: add     esp, 4
0x9F4DB0: mov     [esp+1Ch+var_10], eax
0x9F4DB4: cmp     eax, esi
0x9F4DB6: mov     [esp+1Ch+var_4], 6Dh ; 'm'
0x9F4DBE: jz      short loc_9F4DD3
0x9F4DC0: push    offset aPad_4
0x9F4DC5: push    offset aSkbdivide
0x9F4DCA: mov     ecx, eax
0x9F4DCC: call    GameSetting_ConstrAndReg
0x9F4DD1: jmp     short loc_9F4DD5
0x9F4DD3: xor     eax, eax
0x9F4DD5: push    8; Size
0x9F4DD7: mov     [esp+20h+var_4], edi
0x9F4DDB: mov     dword_B3984C, eax
0x9F4DE0: mov     dword_B39850, esi
0x9F4DE6: call    FormHeapAlloc
0x9F4DEB: add     esp, 4
0x9F4DEE: mov     [esp+1Ch+var_10], eax
0x9F4DF2: cmp     eax, esi
0x9F4DF4: mov     [esp+1Ch+var_4], 6Eh ; 'n'
0x9F4DFC: jz      short loc_9F4E11
0x9F4DFE: push    offset aPrntscrn
0x9F4E03: push    offset aSkbsysrq
0x9F4E08: mov     ecx, eax
0x9F4E0A: call    GameSetting_ConstrAndReg
0x9F4E0F: jmp     short loc_9F4E13
0x9F4E11: xor     eax, eax
0x9F4E13: push    8; Size
0x9F4E15: mov     [esp+20h+var_4], edi
0x9F4E19: mov     dword_B39854, eax
0x9F4E1E: call    FormHeapAlloc
0x9F4E23: add     esp, 4
0x9F4E26: mov     [esp+1Ch+var_10], eax
0x9F4E2A: cmp     eax, esi
0x9F4E2C: mov     [esp+1Ch+var_4], 6Fh ; 'o'
0x9F4E34: jz      short loc_9F4E49
0x9F4E36: push    offset aRAlt
0x9F4E3B: push    offset aSkbrmenu
0x9F4E40: mov     ecx, eax
0x9F4E42: call    GameSetting_ConstrAndReg
0x9F4E47: jmp     short loc_9F4E4B
0x9F4E49: xor     eax, eax
0x9F4E4B: push    8; Size
0x9F4E4D: mov     [esp+20h+var_4], edi
0x9F4E51: mov     dword_B39858, eax
0x9F4E56: mov     dword_B3985C, esi
0x9F4E5C: mov     dword_B39860, esi
0x9F4E62: mov     dword_B39864, esi
0x9F4E68: mov     dword_B39868, esi
0x9F4E6E: mov     dword_B3986C, esi
0x9F4E74: mov     dword_B39870, esi
0x9F4E7A: mov     dword_B39874, esi
0x9F4E80: mov     dword_B39878, esi
0x9F4E86: mov     dword_B3987C, esi
0x9F4E8C: mov     dword_B39880, esi
0x9F4E92: mov     dword_B39884, esi
0x9F4E98: mov     dword_B39888, esi
0x9F4E9E: call    FormHeapAlloc
0x9F4EA3: add     esp, 4
0x9F4EA6: mov     [esp+1Ch+var_10], eax
0x9F4EAA: cmp     eax, esi
0x9F4EAC: mov     [esp+1Ch+var_4], 70h ; 'p'
0x9F4EB4: jz      short loc_9F4EC9
0x9F4EB6: push    offset aPause
0x9F4EBB: push    offset aSkbpause
0x9F4EC0: mov     ecx, eax
0x9F4EC2: call    GameSetting_ConstrAndReg
0x9F4EC7: jmp     short loc_9F4ECB
0x9F4EC9: xor     eax, eax
0x9F4ECB: push    8; Size
0x9F4ECD: mov     [esp+20h+var_4], edi
0x9F4ED1: mov     dword_B3988C, eax
0x9F4ED6: mov     dword_B39890, esi
0x9F4EDC: call    FormHeapAlloc
0x9F4EE1: add     esp, 4
0x9F4EE4: mov     [esp+1Ch+var_10], eax
0x9F4EE8: cmp     eax, esi
0x9F4EEA: mov     [esp+1Ch+var_4], 71h ; 'q'
0x9F4EF2: jz      short loc_9F4F07
0x9F4EF4: push    offset aHome
0x9F4EF9: push    offset aSkbhome
0x9F4EFE: mov     ecx, eax
0x9F4F00: call    GameSetting_ConstrAndReg
0x9F4F05: jmp     short loc_9F4F09
0x9F4F07: xor     eax, eax
0x9F4F09: push    8; Size
0x9F4F0B: mov     [esp+20h+var_4], edi
0x9F4F0F: mov     dword_B39894, eax
0x9F4F14: call    FormHeapAlloc
0x9F4F19: add     esp, 4
0x9F4F1C: mov     [esp+1Ch+var_10], eax
0x9F4F20: cmp     eax, esi
0x9F4F22: mov     [esp+1Ch+var_4], 72h ; 'r'
0x9F4F2A: jz      short loc_9F4F3F
0x9F4F2C: push    offset aUp
0x9F4F31: push    offset aSkbup
0x9F4F36: mov     ecx, eax
0x9F4F38: call    GameSetting_ConstrAndReg
0x9F4F3D: jmp     short loc_9F4F41
0x9F4F3F: xor     eax, eax
0x9F4F41: push    8; Size
0x9F4F43: mov     [esp+20h+var_4], edi
0x9F4F47: mov     dword_B39898, eax
0x9F4F4C: call    FormHeapAlloc
0x9F4F51: add     esp, 4
0x9F4F54: mov     [esp+1Ch+var_10], eax
0x9F4F58: cmp     eax, esi
0x9F4F5A: mov     [esp+1Ch+var_4], 73h ; 's'
0x9F4F62: jz      short loc_9F4F77
0x9F4F64: push    offset aPgup
0x9F4F69: push    offset aSkbprior
0x9F4F6E: mov     ecx, eax
0x9F4F70: call    GameSetting_ConstrAndReg
0x9F4F75: jmp     short loc_9F4F79
0x9F4F77: xor     eax, eax
0x9F4F79: push    8; Size
0x9F4F7B: mov     [esp+20h+var_4], edi
0x9F4F7F: mov     dword_B3989C, eax
0x9F4F84: mov     dword_B398A0, esi
0x9F4F8A: call    FormHeapAlloc
0x9F4F8F: add     esp, 4
0x9F4F92: mov     [esp+1Ch+var_10], eax
0x9F4F96: cmp     eax, esi
0x9F4F98: mov     [esp+1Ch+var_4], 74h ; 't'
0x9F4FA0: jz      short loc_9F4FB5
0x9F4FA2: push    offset aLeft_1
0x9F4FA7: push    offset aSkbleft
0x9F4FAC: mov     ecx, eax
0x9F4FAE: call    GameSetting_ConstrAndReg
0x9F4FB3: jmp     short loc_9F4FB7
0x9F4FB5: xor     eax, eax
0x9F4FB7: push    8; Size
0x9F4FB9: mov     [esp+20h+var_4], edi
0x9F4FBD: mov     dword_B398A4, eax
0x9F4FC2: mov     dword_B398A8, esi
0x9F4FC8: call    FormHeapAlloc
0x9F4FCD: add     esp, 4
0x9F4FD0: mov     [esp+1Ch+var_10], eax
0x9F4FD4: cmp     eax, esi
0x9F4FD6: mov     [esp+1Ch+var_4], 75h ; 'u'
0x9F4FDE: jz      short loc_9F4FF3
0x9F4FE0: push    offset aRight_2
0x9F4FE5: push    offset aSkbright
0x9F4FEA: mov     ecx, eax
0x9F4FEC: call    GameSetting_ConstrAndReg
0x9F4FF1: jmp     short loc_9F4FF5
0x9F4FF3: xor     eax, eax
0x9F4FF5: push    8; Size
0x9F4FF7: mov     [esp+20h+var_4], edi
0x9F4FFB: mov     dword_B398AC, eax
0x9F5000: mov     dword_B398B0, esi
0x9F5006: call    FormHeapAlloc
0x9F500B: add     esp, 4
0x9F500E: mov     [esp+1Ch+var_10], eax
0x9F5012: cmp     eax, esi
0x9F5014: mov     [esp+1Ch+var_4], 76h ; 'v'
0x9F501C: jz      short loc_9F5031
0x9F501E: push    offset aEnd
0x9F5023: push    offset aSkbend
0x9F5028: mov     ecx, eax
0x9F502A: call    GameSetting_ConstrAndReg
0x9F502F: jmp     short loc_9F5033
0x9F5031: xor     eax, eax
0x9F5033: push    8; Size
0x9F5035: mov     [esp+20h+var_4], edi
0x9F5039: mov     dword_B398B4, eax
0x9F503E: call    FormHeapAlloc
0x9F5043: add     esp, 4
0x9F5046: mov     [esp+1Ch+var_10], eax
0x9F504A: cmp     eax, esi
0x9F504C: mov     [esp+1Ch+var_4], 77h ; 'w'
0x9F5054: jz      short loc_9F5069
0x9F5056: push    offset aDown
0x9F505B: push    offset aSkbdown
0x9F5060: mov     ecx, eax
0x9F5062: call    GameSetting_ConstrAndReg
0x9F5067: jmp     short loc_9F506B
0x9F5069: xor     eax, eax
0x9F506B: push    8; Size
0x9F506D: mov     [esp+20h+var_4], edi
0x9F5071: mov     dword_B398B8, eax
0x9F5076: call    FormHeapAlloc
0x9F507B: add     esp, 4
0x9F507E: mov     [esp+1Ch+var_10], eax
0x9F5082: cmp     eax, esi
0x9F5084: mov     [esp+1Ch+var_4], 78h ; 'x'
0x9F508C: jz      short loc_9F50A1
0x9F508E: push    offset aPgdn
0x9F5093: push    offset aSkbnext
0x9F5098: mov     ecx, eax
0x9F509A: call    GameSetting_ConstrAndReg
0x9F509F: jmp     short loc_9F50A3
0x9F50A1: xor     eax, eax
0x9F50A3: push    8; Size
0x9F50A5: mov     [esp+20h+var_4], edi
0x9F50A9: mov     dword_B398BC, eax
0x9F50AE: call    FormHeapAlloc
0x9F50B3: add     esp, 4
0x9F50B6: mov     [esp+1Ch+var_10], eax
0x9F50BA: cmp     eax, esi
0x9F50BC: mov     [esp+1Ch+var_4], 79h ; 'y'
0x9F50C4: jz      short loc_9F50D9
0x9F50C6: push    offset aInsert
0x9F50CB: push    offset aSkbinsert
0x9F50D0: mov     ecx, eax
0x9F50D2: call    GameSetting_ConstrAndReg
0x9F50D7: jmp     short loc_9F50DB
0x9F50D9: xor     eax, eax
0x9F50DB: push    8; Size
0x9F50DD: mov     [esp+20h+var_4], edi
0x9F50E1: mov     dword_B398C0, eax
0x9F50E6: call    FormHeapAlloc
0x9F50EB: add     esp, 4
0x9F50EE: mov     [esp+1Ch+var_10], eax
0x9F50F2: cmp     eax, esi
0x9F50F4: mov     [esp+1Ch+var_4], 7Ah ; 'z'
0x9F50FC: jz      short loc_9F5111
0x9F50FE: push    offset aDelete_0
0x9F5103: push    offset aSkbdelete
0x9F5108: mov     ecx, eax
0x9F510A: call    GameSetting_ConstrAndReg
0x9F510F: jmp     short loc_9F5113
0x9F5111: xor     eax, eax
0x9F5113: push    8; Size
0x9F5115: mov     [esp+20h+var_4], edi
0x9F5119: mov     dword_B398C4, eax
0x9F511E: mov     dword_B398C8, esi
0x9F5124: mov     dword_B398CC, esi
0x9F512A: mov     dword_B398D0, esi
0x9F5130: mov     dword_B398D4, esi
0x9F5136: mov     dword_B398D8, esi
0x9F513C: mov     dword_B398DC, esi
0x9F5142: mov     dword_B398E0, esi
0x9F5148: call    FormHeapAlloc
0x9F514D: add     esp, 4
0x9F5150: mov     [esp+1Ch+var_10], eax
0x9F5154: cmp     eax, esi
0x9F5156: mov     [esp+1Ch+var_4], 7Bh ; '{'
0x9F515E: jz      short loc_9F5173
0x9F5160: push    offset aLwin
0x9F5165: push    offset aSkblwin
0x9F516A: mov     ecx, eax
0x9F516C: call    GameSetting_ConstrAndReg
0x9F5171: jmp     short loc_9F5175
0x9F5173: xor     eax, eax
0x9F5175: push    8; Size
0x9F5177: mov     [esp+20h+var_4], edi
0x9F517B: mov     dword_B398E4, eax
0x9F5180: call    FormHeapAlloc
0x9F5185: add     esp, 4
0x9F5188: mov     [esp+1Ch+var_10], eax
0x9F518C: cmp     eax, esi
0x9F518E: mov     [esp+1Ch+var_4], 7Ch ; '|'
0x9F5196: jz      short loc_9F51AB
0x9F5198: push    offset aRwin
0x9F519D: push    offset aSkbrwin
0x9F51A2: mov     ecx, eax
0x9F51A4: call    GameSetting_ConstrAndReg
0x9F51A9: jmp     short loc_9F51AD
0x9F51AB: xor     eax, eax
0x9F51AD: push    8; Size
0x9F51AF: mov     [esp+20h+var_4], edi
0x9F51B3: mov     dword_B398E8, eax
0x9F51B8: call    FormHeapAlloc
0x9F51BD: add     esp, 4
0x9F51C0: mov     [esp+1Ch+var_10], eax
0x9F51C4: cmp     eax, esi
0x9F51C6: mov     [esp+1Ch+var_4], 7Dh ; '}'
0x9F51CE: jz      short loc_9F51E3
0x9F51D0: push    offset aApps
0x9F51D5: push    offset aSkbapps
0x9F51DA: mov     ecx, eax
0x9F51DC: call    GameSetting_ConstrAndReg
0x9F51E1: jmp     short loc_9F51E5
0x9F51E3: xor     eax, eax
0x9F51E5: push    8; Size
0x9F51E7: mov     [esp+20h+var_4], edi
0x9F51EB: mov     dword_B398EC, eax
0x9F51F0: call    FormHeapAlloc
0x9F51F5: add     esp, 4
0x9F51F8: mov     [esp+1Ch+var_10], eax
0x9F51FC: cmp     eax, esi
0x9F51FE: mov     [esp+1Ch+var_4], 7Eh ; '~'
0x9F5206: jz      short loc_9F521B
0x9F5208: push    offset aPower
0x9F520D: push    offset aSkbpower
0x9F5212: mov     ecx, eax
0x9F5214: call    GameSetting_ConstrAndReg
0x9F5219: jmp     short loc_9F521D
0x9F521B: xor     eax, eax
0x9F521D: push    8; Size
0x9F521F: mov     [esp+20h+var_4], edi
0x9F5223: mov     dword_B398F0, eax
0x9F5228: call    FormHeapAlloc
0x9F522D: add     esp, 4
0x9F5230: mov     [esp+1Ch+var_10], eax
0x9F5234: cmp     eax, esi
0x9F5236: mov     [esp+1Ch+var_4], 7Fh
0x9F523E: jz      short loc_9F5253
0x9F5240: push    offset aSleep
0x9F5245: push    offset aSkbsleep
0x9F524A: mov     ecx, eax
0x9F524C: call    GameSetting_ConstrAndReg
0x9F5251: jmp     short loc_9F5255
0x9F5253: xor     eax, eax
0x9F5255: push    8; Size
0x9F5257: mov     [esp+20h+var_4], edi
0x9F525B: mov     dword_B398F4, eax
0x9F5260: mov     dword_B398F8, esi
0x9F5266: mov     dword_B398FC, esi
0x9F526C: mov     dword_B39900, esi
0x9F5272: call    FormHeapAlloc
0x9F5277: add     esp, 4
0x9F527A: mov     [esp+1Ch+var_10], eax
0x9F527E: cmp     eax, esi
0x9F5280: mov     [esp+1Ch+var_4], 80h ; '€'
0x9F5288: jz      short loc_9F529D
0x9F528A: push    offset aWake
0x9F528F: push    offset aSkbwake
0x9F5294: mov     ecx, eax
0x9F5296: call    GameSetting_ConstrAndReg
0x9F529B: jmp     short loc_9F529F
0x9F529D: xor     eax, eax
0x9F529F: push    8; Size
0x9F52A1: mov     [esp+20h+var_4], edi
0x9F52A5: mov     dword_B39904, eax
0x9F52AA: mov     dword_B39908, esi
0x9F52B0: call    FormHeapAlloc
0x9F52B5: add     esp, 4
0x9F52B8: mov     [esp+1Ch+var_10], eax
0x9F52BC: cmp     eax, esi
0x9F52BE: mov     [esp+1Ch+var_4], 81h
0x9F52C6: jz      short loc_9F52DB
0x9F52C8: push    offset aSearch
0x9F52CD: push    offset aSkbwebsearch
0x9F52D2: mov     ecx, eax
0x9F52D4: call    GameSetting_ConstrAndReg
0x9F52D9: jmp     short loc_9F52DD
0x9F52DB: xor     eax, eax
0x9F52DD: push    8; Size
0x9F52DF: mov     [esp+20h+var_4], edi
0x9F52E3: mov     dword_B3990C, eax
0x9F52E8: call    FormHeapAlloc
0x9F52ED: add     esp, 4
0x9F52F0: mov     [esp+1Ch+var_10], eax
0x9F52F4: cmp     eax, esi
0x9F52F6: mov     [esp+1Ch+var_4], 82h ; '‚'
0x9F52FE: jz      short loc_9F5313
0x9F5300: push    offset off_A61814
0x9F5305: push    offset aSkbwebfavorite
0x9F530A: mov     ecx, eax
0x9F530C: call    GameSetting_ConstrAndReg
0x9F5311: jmp     short loc_9F5315
0x9F5313: xor     eax, eax
0x9F5315: push    8; Size
0x9F5317: mov     [esp+20h+var_4], edi
0x9F531B: mov     dword_B39910, eax
0x9F5320: call    FormHeapAlloc
0x9F5325: add     esp, 4
0x9F5328: mov     [esp+1Ch+var_10], eax
0x9F532C: cmp     eax, esi
0x9F532E: mov     [esp+1Ch+var_4], 83h ; 'ƒ'
0x9F5336: jz      short loc_9F534B
0x9F5338: push    offset aRefresh
0x9F533D: push    offset aSkbwebrefresh
0x9F5342: mov     ecx, eax
0x9F5344: call    GameSetting_ConstrAndReg
0x9F5349: jmp     short loc_9F534D
0x9F534B: xor     eax, eax
0x9F534D: push    8; Size
0x9F534F: mov     [esp+20h+var_4], edi
0x9F5353: mov     dword_B39914, eax
0x9F5358: call    FormHeapAlloc
0x9F535D: add     esp, 4
0x9F5360: mov     [esp+1Ch+var_10], eax
0x9F5364: cmp     eax, esi
0x9F5366: mov     [esp+1Ch+var_4], 84h ; '„'
0x9F536E: jz      short loc_9F5383
0x9F5370: push    offset aWebStop
0x9F5375: push    offset aSkbwebstop
0x9F537A: mov     ecx, eax
0x9F537C: call    GameSetting_ConstrAndReg
0x9F5381: jmp     short loc_9F5385
0x9F5383: xor     eax, eax
0x9F5385: push    8; Size
0x9F5387: mov     [esp+20h+var_4], edi
0x9F538B: mov     dword_B39918, eax
0x9F5390: call    FormHeapAlloc
0x9F5395: add     esp, 4
0x9F5398: mov     [esp+1Ch+var_10], eax
0x9F539C: cmp     eax, esi
0x9F539E: mov     [esp+1Ch+var_4], 85h ; '…'
0x9F53A6: jz      short loc_9F53BB
0x9F53A8: push    offset aWeb
0x9F53AD: push    offset aSkbwebforward
0x9F53B2: mov     ecx, eax
0x9F53B4: call    GameSetting_ConstrAndReg
0x9F53B9: jmp     short loc_9F53BD
0x9F53BB: xor     eax, eax
0x9F53BD: push    8; Size
0x9F53BF: mov     [esp+20h+var_4], edi
0x9F53C3: mov     dword_B3991C, eax
0x9F53C8: call    FormHeapAlloc
0x9F53CD: add     esp, 4
0x9F53D0: mov     [esp+1Ch+var_10], eax
0x9F53D4: cmp     eax, esi
0x9F53D6: mov     [esp+1Ch+var_4], 86h ; '†'
0x9F53DE: jz      short loc_9F53F3
0x9F53E0: push    offset aWeb_0
0x9F53E5: push    offset aSkbwebback
0x9F53EA: mov     ecx, eax
0x9F53EC: call    GameSetting_ConstrAndReg
0x9F53F1: jmp     short loc_9F53F5
0x9F53F3: xor     eax, eax
0x9F53F5: push    8; Size
0x9F53F7: mov     [esp+20h+var_4], edi
0x9F53FB: mov     dword_B39920, eax
0x9F5400: call    FormHeapAlloc
0x9F5405: add     esp, 4
0x9F5408: mov     [esp+1Ch+var_10], eax
0x9F540C: cmp     eax, esi
0x9F540E: mov     [esp+1Ch+var_4], 87h ; '‡'
0x9F5416: jz      short loc_9F542B
0x9F5418: push    offset aMyComp
0x9F541D: push    offset aSkbmycomputer
0x9F5422: mov     ecx, eax
0x9F5424: call    GameSetting_ConstrAndReg
0x9F5429: jmp     short loc_9F542D
0x9F542B: xor     eax, eax
0x9F542D: push    8; Size
0x9F542F: mov     [esp+20h+var_4], edi
0x9F5433: mov     dword_B39924, eax
0x9F5438: call    FormHeapAlloc
0x9F543D: add     esp, 4
0x9F5440: mov     [esp+1Ch+var_10], eax
0x9F5444: cmp     eax, esi
0x9F5446: mov     [esp+1Ch+var_4], 88h ; 'ˆ'
0x9F544E: jz      short loc_9F5463
0x9F5450: push    offset aMail
0x9F5455: push    offset aSkbmail
0x9F545A: mov     ecx, eax
0x9F545C: call    GameSetting_ConstrAndReg
0x9F5461: jmp     short loc_9F5465
0x9F5463: xor     eax, eax
0x9F5465: push    8; Size
0x9F5467: mov     [esp+20h+var_4], edi
0x9F546B: mov     dword_B39928, eax
0x9F5470: call    FormHeapAlloc
0x9F5475: add     esp, 4
0x9F5478: mov     [esp+1Ch+var_10], eax
0x9F547C: cmp     eax, esi
0x9F547E: mov     [esp+1Ch+var_4], 89h ; '‰'
0x9F5486: jz      short loc_9F54B0
0x9F5488: push    offset aSelect
0x9F548D: push    offset aSkbmediaselect
0x9F5492: mov     ecx, eax
0x9F5494: call    GameSetting_ConstrAndReg
0x9F5499: mov     dword_B3992C, eax
0x9F549E: mov     ecx, [esp+1Ch+var_C]
0x9F54A2: mov     large fs:0, ecx
0x9F54A9: pop     ecx
0x9F54AA: pop     edi
0x9F54AB: pop     esi
0x9F54AC: add     esp, 10h
0x9F54AF: retn
0x9F54B0: mov     dword_B3992C, esi
0x9F54B6: mov     ecx, [esp+1Ch+var_C]
0x9F54BA: mov     large fs:0, ecx
0x9F54C1: pop     ecx
0x9F54C2: pop     edi
0x9F54C3: pop     esi
0x9F54C4: add     esp, 10h
0x9F54C7: retn
