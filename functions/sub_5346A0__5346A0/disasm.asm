0x5346A0: sub     esp, 508h
0x5346A6: mov     eax, ds:0B30AACh
0x5346AB: xor     eax, esp
0x5346AD: mov     [esp+508h+var_4], eax
0x5346B4: mov     eax, [esp+508h+arg_8]
0x5346BB: push    ebx
0x5346BC: mov     ebx, [esp+50Ch+Str]
0x5346C3: push    ebp
0x5346C4: mov     ebp, ecx
0x5346C6: mov     ecx, [esp+510h+arg_0]
0x5346CD: test    ecx, ecx
0x5346CF: push    esi
0x5346D0: push    edi
0x5346D1: jz      short loc_5346EE
0x5346D3: lea     esi, [esp+518h+var_404]
0x5346DA: sub     esi, ecx
0x5346DC: lea     esp, [esp+0]
0x5346E0: mov     dl, [ecx]
0x5346E2: mov     [esi+ecx], dl
0x5346E5: add     ecx, 1
0x5346E8: test    dl, dl
0x5346EA: jnz     short loc_5346E0
0x5346EC: jmp     short loc_5346F6
0x5346EE: mov     [esp+518h+var_404], 0
0x5346F6: test    eax, eax
0x5346F8: jz      short loc_534748
0x5346FA: lea     edi, [esp+518h+var_404]
0x534701: add     edi, 0FFFFFFFFh
0x534704: mov     cl, [edi+1]
0x534707: add     edi, 1
0x53470A: test    cl, cl
0x53470C: jnz     short loc_534704
0x53470E: mov     ecx, ds:0A5626Ch
0x534714: mov     [edi], ecx
0x534716: mov     ecx, eax
0x534718: mov     dl, [eax]
0x53471A: add     eax, 1
0x53471D: test    dl, dl
0x53471F: jnz     short loc_534718
0x534721: lea     edi, [esp+518h+var_404]
0x534728: sub     eax, ecx
0x53472A: mov     esi, ecx
0x53472C: add     edi, 0FFFFFFFFh
0x53472F: nop
0x534730: mov     cl, [edi+1]
0x534733: add     edi, 1
0x534736: test    cl, cl
0x534738: jnz     short loc_534730
0x53473A: mov     ecx, eax
0x53473C: shr     ecx, 2
0x53473F: rep movsd
0x534741: mov     ecx, eax
0x534743: and     ecx, 3
0x534746: rep movsb
0x534748: cmp     byte ptr [ebp+20h], 0
0x53474C: lea     edi, [ebp+20h]
0x53474F: jz      loc_5347FE
0x534755: push    offset aTes4; "TES4"
0x53475A: push    ebx; Str
0x53475B: call    _strstr
0x534760: add     esp, 8
0x534763: test    eax, eax
0x534765: jnz     short loc_534779
0x534767: push    offset aTes4_0; "tes4"
0x53476C: push    ebx; Str
0x53476D: call    _strstr
0x534772: add     esp, 8
0x534775: test    eax, eax
0x534777: jz      short loc_5347C2
0x534779: lea     esi, [esp+518h+var_508]
0x53477D: mov     ecx, edi
0x53477F: sub     esi, edi
0x534781: mov     dl, [ecx]
0x534783: mov     [esi+ecx], dl
0x534786: add     ecx, 1
0x534789: test    dl, dl
0x53478B: jnz     short loc_534781
0x53478D: mov     edx, eax
0x53478F: nop
0x534790: mov     cl, [eax]
0x534792: add     eax, 1
0x534795: test    cl, cl
0x534797: jnz     short loc_534790
0x534799: lea     edi, [esp+518h+var_508]
0x53479D: sub     eax, edx
0x53479F: add     edi, 0FFFFFFFFh
0x5347A2: mov     cl, [edi+1]
0x5347A5: add     edi, 1
0x5347A8: test    cl, cl
0x5347AA: jnz     short loc_5347A2
0x5347AC: mov     ecx, eax
0x5347AE: shr     ecx, 2
0x5347B1: mov     esi, edx
0x5347B3: rep movsd
0x5347B5: mov     ecx, eax
0x5347B7: and     ecx, 3
0x5347BA: rep movsb
0x5347BC: lea     eax, [esp+518h+var_508]
0x5347C0: jmp     short loc_534800
0x5347C2: cmp     byte ptr [ebx], 2Eh ; '.'
0x5347C5: jnz     short loc_5347FE
0x5347C7: cmp     byte ptr [ebx+1], 2Eh ; '.'
0x5347CB: jnz     short loc_5347FE
0x5347CD: lea     edx, [esp+518h+var_508]
0x5347D1: push    edi
0x5347D2: push    edx
0x5347D3: call    BSStringT_Static_StrCpy
0x5347D8: lea     eax, [esp+520h+var_508]
0x5347DC: push    offset aTes4HavokSdkIn; "TES4\\Havok\\SDK\\Include\\"
0x5347E1: push    eax
0x5347E2: call    sub_412DC0
0x5347E7: add     ebx, 3
0x5347EA: lea     ecx, [esp+528h+var_508]
0x5347EE: push    ebx
0x5347EF: push    ecx
0x5347F0: call    sub_412DC0
0x5347F5: add     esp, 18h
0x5347F8: lea     eax, [esp+518h+var_508]
0x5347FC: jmp     short loc_534800
0x5347FE: mov     eax, ebx
0x534800: mov     edx, [esp+518h+arg_10]
0x534807: push    edx
0x534808: push    eax
0x534809: lea     eax, [esp+520h+var_404]
0x534810: push    eax
0x534811: call    nullsub_return0_0arg
0x534816: add     esp, 0Ch
0x534819: cmp     eax, 5
0x53481C: jnz     short loc_534836
0x53481E: push    ecx
0x53481F: mov     eax, esp
0x534821: mov     byte ptr [eax], 0
0x534824: mov     edx, [ebp+0]
0x534827: mov     eax, [esp+51Ch+arg_4]
0x53482E: mov     edx, [edx+0Ch]
0x534831: push    eax
0x534832: mov     ecx, ebp
0x534834: call    edx
0x534836: mov     ecx, [esp+518h+var_4]
0x53483D: pop     edi
0x53483E: pop     esi
0x53483F: pop     ebp
0x534840: pop     ebx
0x534841: xor     ecx, esp
0x534843: call    @__security_check_cookie@4; __security_check_cookie(x)
0x534848: add     esp, 508h
0x53484E: retn    14h
