0x459570: sub     esp, 214h
0x459576: mov     eax, ds:0B30AACh
0x45957B: xor     eax, esp
0x45957D: mov     [esp+214h+var_4], eax
0x459584: mov     eax, [esp+214h+arg_0]
0x45958B: mov     ecx, [esp+214h+arg_8]
0x459592: push    ebx
0x459593: mov     ebx, [esp+218h+Str]
0x45959A: push    ebp
0x45959B: mov     ebp, [esp+21Ch+arg_4]
0x4595A2: push    esi
0x4595A3: push    edi
0x4595A4: add     eax, 3Ch ; '<'
0x4595A7: push    5Ch ; '\'; Ch
0x4595A9: push    eax; Str
0x4595AA: mov     [esp+22Ch+var_210], ecx
0x4595AE: call    _strrchr
0x4595B3: mov     esi, eax
0x4595B5: add     esi, 1
0x4595B8: push    offset aPlayingTime; "Playing Time"
0x4595BD: push    esi; Str
0x4595BE: call    _strstr
0x4595C3: push    offset asc_A3A0E4; "-"
0x4595C8: push    esi; Str
0x4595C9: mov     [esp+23Ch+var_214], eax
0x4595CD: call    _strstr
0x4595D2: add     esp, 18h
0x4595D5: cmp     [esp+224h+var_214], 0
0x4595DA: mov     edi, eax
0x4595DC: jz      loc_459765
0x4595E2: test    edi, edi
0x4595E4: jz      loc_459765
0x4595EA: push    5; MaxCount
0x4595EC: push    offset aSave; "Save "
0x4595F1: push    esi; Str1
0x4595F2: call    _strncmp
0x4595F7: add     esp, 0Ch
0x4595FA: test    eax, eax
0x4595FC: jnz     loc_459765
0x459602: test    ebp, ebp
0x459604: jz      short loc_45962F
0x459606: sub     edi, esi
0x459608: sub     edi, 5
0x45960B: push    edi; Count
0x45960C: lea     edx, [esi+5]
0x45960F: push    edx; Source
0x459610: lea     eax, [esp+22Ch+Dest]
0x459614: push    eax; Dest
0x459615: call    _strncpy
0x45961A: lea     ecx, [esp+230h+Dest]
0x45961E: push    ecx; Str
0x45961F: mov     [esp+edi+234h+Dest], 0
0x459624: call    j__atol
0x459629: add     esp, 10h
0x45962C: mov     [ebp+0], eax
0x45962F: cmp     [esp+224h+var_210], 0
0x459634: jnz     short loc_45963E
0x459636: test    ebx, ebx
0x459638: jz      loc_459761
0x45963E: lea     edx, [esi+1]
0x459641: push    offset byte_A319FC; SubStr
0x459646: push    edx; Str
0x459647: xor     ebp, ebp
0x459649: call    _strstr
0x45964E: add     esp, 8
0x459651: test    eax, eax
0x459653: jz      loc_459765
0x459659: lea     esp, [esp+0]
0x459660: mov     edi, ebp
0x459662: mov     ebp, eax
0x459664: add     eax, 1
0x459667: push    offset byte_A319FC; SubStr
0x45966C: push    eax; Str
0x45966D: call    _strstr
0x459672: add     esp, 8
0x459675: test    eax, eax
0x459677: jnz     short loc_459660
0x459679: test    edi, edi
0x45967B: jz      loc_459765
0x459681: test    ebp, ebp
0x459683: jz      loc_459765
0x459689: cmp     [esp+224h+var_210], eax
0x45968D: jz      short loc_4596F6
0x45968F: mov     eax, esi
0x459691: add     edi, 2
0x459694: lea     edx, [eax+1]
0x459697: mov     cl, [eax]
0x459699: add     eax, 1
0x45969C: test    cl, cl
0x45969E: jnz     short loc_459697
0x4596A0: sub     eax, edx
0x4596A2: cmp     byte ptr [edi], 20h ; ' '
0x4596A5: jz      short loc_4596BC
0x4596A7: add     eax, esi
0x4596A9: lea     esp, [esp+0]
0x4596B0: cmp     edi, eax
0x4596B2: jnb     short loc_4596BC
0x4596B4: add     edi, 1
0x4596B7: cmp     byte ptr [edi], 20h ; ' '
0x4596BA: jnz     short loc_4596B0
0x4596BC: sub     ebp, edi
0x4596BE: push    ebp; Count
0x4596BF: lea     eax, [esp+228h+var_108]
0x4596C6: push    edi; Source
0x4596C7: push    eax; Dest
0x4596C8: call    _strncpy
0x4596CD: mov     edx, ds:0B38720h
0x4596D3: mov     eax, [esp+230h+var_210]
0x4596D7: lea     ecx, [esp+230h+var_108]
0x4596DE: push    ecx
0x4596DF: push    edx
0x4596E0: push    offset aSS_0; "%s%s"
0x4596E5: push    eax
0x4596E6: mov     [esp+ebp+240h+var_108], 0
0x4596EE: call    __sprintf
0x4596F3: add     esp, 1Ch
0x4596F6: test    ebx, ebx
0x4596F8: jz      short loc_459761
0x4596FA: mov     eax, [esp+224h+var_214]
0x4596FE: add     eax, 0Dh
0x459701: mov     edx, ebx
0x459703: sub     edx, eax
0x459705: mov     cl, [eax]
0x459707: mov     [edx+eax], cl
0x45970A: add     eax, 1
0x45970D: test    cl, cl
0x45970F: jnz     short loc_459705
0x459711: push    offset a_ess; ".ess"
0x459716: push    ebx; Str
0x459717: call    _strstr
0x45971C: add     esp, 8
0x45971F: test    eax, eax
0x459721: jz      short loc_459726
0x459723: mov     byte ptr [eax], 0
0x459726: mov     eax, ebx
0x459728: xor     edx, edx
0x45972A: lea     esi, [eax+1]
0x45972D: lea     ecx, [ecx+0]
0x459730: mov     cl, [eax]
0x459732: add     eax, 1
0x459735: test    cl, cl
0x459737: jnz     short loc_459730
0x459739: sub     eax, esi
0x45973B: jz      short loc_459761
0x45973D: lea     ecx, [ecx+0]
0x459740: cmp     byte ptr [ebx+edx], 2Eh ; '.'
0x459744: jnz     short loc_45974A
0x459746: mov     byte ptr [ebx+edx], 3Ah ; ':'
0x45974A: mov     eax, ebx
0x45974C: add     edx, 1
0x45974F: lea     esi, [eax+1]
0x459752: mov     cl, [eax]
0x459754: add     eax, 1
0x459757: test    cl, cl
0x459759: jnz     short loc_459752
0x45975B: sub     eax, esi
0x45975D: cmp     edx, eax
0x45975F: jb      short loc_459740
0x459761: mov     al, 1
0x459763: jmp     short loc_459767
0x459765: xor     al, al
0x459767: mov     ecx, [esp+224h+var_4]
0x45976E: pop     edi
0x45976F: pop     esi
0x459770: pop     ebp
0x459771: pop     ebx
0x459772: xor     ecx, esp
0x459774: call    @__security_check_cookie@4; __security_check_cookie(x)
0x459779: add     esp, 214h
0x45977F: retn    10h
