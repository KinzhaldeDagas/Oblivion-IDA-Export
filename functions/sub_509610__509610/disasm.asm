0x509610: sub     esp, 20Ch
0x509616: mov     eax, ds:0B30AACh
0x50961B: xor     eax, esp
0x50961D: mov     [esp+20Ch+var_4], eax
0x509624: mov     eax, [esp+20Ch+a1]
0x50962B: mov     ecx, [esp+20Ch+arg_4]
0x509632: mov     edx, [esp+20Ch+a4]
0x509639: push    ebx
0x50963A: mov     ebx, [esp+210h+arg_14]
0x509641: mov     [esp+210h+l], ebx
0x509645: mov     ebx, [esp+210h+arg_1C]
0x50964C: mov     [esp+210h+a3], ebx
0x509650: mov     ebx, ds:0B33398h
0x509656: mov     ebx, [ebx+24h]
0x509659: test    ebx, ebx
0x50965B: push    esi
0x50965C: mov     esi, [esp+214h+arg_C]
0x509663: push    edi
0x509664: mov     edi, [esp+218h+arg_10]
0x50966B: jz      loc_509785
0x509671: push    ebp
0x509672: lea     ebp, [esp+21Ch+var_204]
0x509676: push    ebp; UInt16
0x509677: mov     ebp, [esp+220h+l]
0x50967B: push    ebp; l
0x50967C: push    edi; a6
0x50967D: push    esi; a5
0x50967E: push    edx; a4
0x50967F: mov     edx, [esp+230h+a3]
0x509683: push    edx; a3
0x509684: push    ecx; a2
0x509685: push    eax; a1
0x509686: call    Script_ExtractArgs
0x50968B: add     esp, 20h
0x50968E: test    al, al
0x509690: pop     ebp
0x509691: jz      loc_509785
0x509697: mov     edi, offset aRandom; "random"
0x50969C: lea     esi, [esp+218h+var_204]
0x5096A0: mov     ecx, 7
0x5096A5: xor     eax, eax
0x5096A7: repe cmpsb
0x5096A9: jnz     short loc_5096D4
0x5096AB: fld1
0x5096AD: push    ecx
0x5096AE: fstp    [esp+21Ch+var_21C]
0x5096B1: push    eax
0x5096B2: push    eax; Seed
0x5096B3: call    GetRandomLargeInteger?
0x5096B8: add     esp, 4
0x5096BB: and     eax, 80000003h
0x5096C0: jns     short loc_5096C7
0x5096C2: dec     eax
0x5096C3: or      eax, 0FFFFFFFCh
0x5096C6: inc     eax
0x5096C7: push    eax
0x5096C8: mov     ecx, ebx
0x5096CA: call    sub_6ACD10
0x5096CF: jmp     loc_509785
0x5096D4: mov     edi, offset aExplore_0; "explore"
0x5096D9: lea     esi, [esp+218h+var_204]
0x5096DD: mov     ecx, 8
0x5096E2: xor     edx, edx
0x5096E4: repe cmpsb
0x5096E6: jnz     short loc_5096FC
0x5096E8: fld1
0x5096EA: push    ecx
0x5096EB: fstp    [esp+21Ch+var_21C]
0x5096EE: mov     ecx, ebx
0x5096F0: push    edx
0x5096F1: push    edx
0x5096F2: call    sub_6ACD10
0x5096F7: jmp     loc_509785
0x5096FC: mov     edi, offset aPublic_0; "public"
0x509701: lea     esi, [esp+218h+var_204]
0x509705: mov     ecx, 7
0x50970A: xor     eax, eax
0x50970C: repe cmpsb
0x50970E: jnz     short loc_509722
0x509710: fld1
0x509712: push    ecx
0x509713: fstp    [esp+21Ch+var_21C]
0x509716: mov     ecx, ebx
0x509718: push    eax
0x509719: push    1
0x50971B: call    sub_6ACD10
0x509720: jmp     short loc_509785
0x509722: mov     edi, offset aDungeon; "dungeon"
0x509727: lea     esi, [esp+218h+var_204]
0x50972B: mov     ecx, 8
0x509730: xor     edx, edx
0x509732: repe cmpsb
0x509734: jnz     short loc_509748
0x509736: fld1
0x509738: push    ecx
0x509739: fstp    [esp+21Ch+var_21C]
0x50973C: mov     ecx, ebx
0x50973E: push    edx
0x50973F: push    2
0x509741: call    sub_6ACD10
0x509746: jmp     short loc_509785
0x509748: mov     edi, offset aBattle_0; "battle"
0x50974D: lea     esi, [esp+218h+var_204]
0x509751: mov     ecx, 7
0x509756: xor     eax, eax
0x509758: repe cmpsb
0x50975A: jnz     short loc_50976E
0x50975C: fld1
0x50975E: push    ecx
0x50975F: fstp    [esp+21Ch+var_21C]
0x509762: mov     ecx, ebx
0x509764: push    eax
0x509765: push    4
0x509767: call    sub_6ACD10
0x50976C: jmp     short loc_509785
0x50976E: push    0
0x509770: lea     ecx, [esp+21Ch+var_204]
0x509774: push    ecx
0x509775: push    0
0x509777: mov     ecx, ebx
0x509779: call    SoundManager_OpenMusicFile
0x50977E: mov     ecx, ebx
0x509780: call    SoundManager_PlayMusic
0x509785: mov     ecx, [esp+218h+var_4]
0x50978C: pop     edi
0x50978D: pop     esi
0x50978E: pop     ebx
0x50978F: xor     ecx, esp
0x509791: mov     al, 1
0x509793: call    @__security_check_cookie@4; __security_check_cookie(x)
0x509798: add     esp, 20Ch
0x50979E: retn
