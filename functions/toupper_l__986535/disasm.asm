0x986535: push    ebp
0x986536: mov     ebp, esp
0x986538: sub     esp, 18h
0x98653B: push    ebx
0x98653C: push    [ebp+Locale]; struct localeinfo_struct *
0x98653F: lea     ecx, [ebp+var_18]; this
0x986542: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x986547: mov     ebx, [ebp+C]
0x98654A: cmp     ebx, 100h
0x986550: jnb     short loc_9865A6
0x986552: mov     ecx, [ebp+var_18.locinfo]
0x986555: cmp     dword ptr [ecx+0ACh], 1
0x98655C: jle     short loc_986572
0x98655E: lea     eax, [ebp+var_18]
0x986561: push    eax; Locale
0x986562: push    2; Type
0x986564: push    ebx; C
0x986565: call    __isctype_l
0x98656A: mov     ecx, [ebp+var_18.locinfo]
0x98656D: add     esp, 0Ch
0x986570: jmp     short loc_98657F
0x986572: mov     eax, [ecx+0C8h]
0x986578: movzx   eax, byte ptr [eax+ebx*2]
0x98657C: and     eax, 2
0x98657F: test    eax, eax
0x986581: jz      short loc_986592
0x986583: mov     eax, [ecx+0D0h]
0x986589: movzx   eax, byte ptr [eax+ebx]
0x98658D: jmp     loc_98663D
0x986592: cmp     [ebp+var_C], 0
0x986596: jz      short loc_98659F
0x986598: mov     eax, [ebp+var_10]
0x98659B: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98659F: mov     eax, ebx
0x9865A1: jmp     loc_98664A
0x9865A6: mov     eax, [ebp+var_18.locinfo]
0x9865A9: cmp     dword ptr [eax+0ACh], 1
0x9865B0: jle     short loc_9865E3
0x9865B2: mov     [ebp+C], ebx
0x9865B5: sar     [ebp+C], 8
0x9865B9: lea     eax, [ebp+var_18]
0x9865BC: push    eax; Locale
0x9865BD: mov     eax, [ebp+C]
0x9865C0: and     eax, 0FFh
0x9865C5: push    eax; C
0x9865C6: call    __isleadbyte_l
0x9865CB: test    eax, eax
0x9865CD: pop     ecx
0x9865CE: pop     ecx
0x9865CF: jz      short loc_9865E3
0x9865D1: mov     al, byte ptr [ebp+C]
0x9865D4: push    2
0x9865D6: mov     byte ptr [ebp+var_4], al
0x9865D9: mov     byte ptr [ebp+var_4+1], bl
0x9865DC: mov     byte ptr [ebp+var_4+2], 0
0x9865E0: pop     ecx
0x9865E1: jmp     short loc_9865F8
0x9865E3: call    __errno
0x9865E8: mov     dword ptr [eax], 2Ah ; '*'
0x9865EE: xor     ecx, ecx
0x9865F0: mov     byte ptr [ebp+var_4], bl
0x9865F3: mov     byte ptr [ebp+var_4+1], 0
0x9865F7: inc     ecx
0x9865F8: mov     eax, [ebp+var_18.locinfo]
0x9865FB: push    1; int
0x9865FD: push    dword ptr [eax+4]; int
0x986600: lea     edx, [ebp+var_8]
0x986603: push    3; int
0x986605: push    edx; int
0x986606: push    ecx; cchSrc
0x986607: lea     ecx, [ebp+var_4]
0x98660A: push    ecx; int
0x98660B: push    200h; dwMapFlags
0x986610: push    dword ptr [eax+14h]; Locale
0x986613: lea     eax, [ebp+var_18]
0x986616: push    eax; struct localeinfo_struct *
0x986617: call    ___crtLCMapStringA
0x98661C: add     esp, 24h
0x98661F: test    eax, eax
0x986621: jz      loc_986592
0x986627: cmp     eax, 1
0x98662A: jnz     short loc_986632
0x98662C: movzx   eax, byte ptr [ebp+var_8]
0x986630: jmp     short loc_98663D
0x986632: movzx   ecx, byte ptr [ebp+var_8+1]
0x986636: xor     eax, eax
0x986638: mov     ah, byte ptr [ebp+var_8]
0x98663B: or      eax, ecx
0x98663D: cmp     [ebp+var_C], 0
0x986641: jz      short loc_98664A
0x986643: mov     ecx, [ebp+var_10]
0x986646: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x98664A: pop     ebx
0x98664B: leave
0x98664C: retn
