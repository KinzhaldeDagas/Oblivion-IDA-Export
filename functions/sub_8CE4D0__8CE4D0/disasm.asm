0x8CE4D0: push    ebp
0x8CE4D1: mov     ebp, esp
0x8CE4D3: and     esp, 0FFFFFFF0h
0x8CE4D6: sub     esp, 214h
0x8CE4DC: mov     eax, ds:0B30AACh
0x8CE4E1: xor     eax, esp
0x8CE4E3: mov     [esp+214h+var_4], eax
0x8CE4EA: mov     eax, [ebp+arg_0]
0x8CE4ED: push    ebx
0x8CE4EE: mov     ebx, ecx
0x8CE4F0: test    ebx, ebx
0x8CE4F2: push    esi
0x8CE4F3: push    edi
0x8CE4F4: mov     [esp+220h+var_214], eax
0x8CE4F8: jz      short loc_8CE4FF
0x8CE4FA: mov     ecx, [ebx+8]
0x8CE4FD: jmp     short loc_8CE501
0x8CE4FF: xor     ecx, ecx
0x8CE501: mov     edx, [ecx]
0x8CE503: mov     eax, [edx+20h]
0x8CE506: call    eax
0x8CE508: mov     edi, eax
0x8CE50A: lea     ebx, [ebx+0]
0x8CE510: cmp     edi, 0FFFFFFFFh
0x8CE513: jz      short loc_8CE564
0x8CE515: test    ebx, ebx
0x8CE517: jz      short loc_8CE536
0x8CE519: mov     ecx, [ebx+8]
0x8CE51C: test    ecx, ecx
0x8CE51E: jz      short loc_8CE536
0x8CE520: mov     edx, [ecx]
0x8CE522: mov     edx, [edx+28h]
0x8CE525: lea     eax, [esp+220h+var_210]
0x8CE529: push    eax
0x8CE52A: push    edi
0x8CE52B: call    edx
0x8CE52D: test    eax, eax
0x8CE52F: jz      short loc_8CE536
0x8CE531: mov     esi, [eax+8]
0x8CE534: jmp     short loc_8CE538
0x8CE536: xor     esi, esi
0x8CE538: test    ebx, ebx
0x8CE53A: jz      short loc_8CE541
0x8CE53C: mov     ecx, [ebx+8]
0x8CE53F: jmp     short loc_8CE543
0x8CE541: xor     ecx, ecx
0x8CE543: mov     eax, [ecx]
0x8CE545: mov     edx, [eax+24h]
0x8CE548: push    edi
0x8CE549: call    edx
0x8CE54B: test    esi, esi
0x8CE54D: mov     edi, eax
0x8CE54F: jz      short loc_8CE564
0x8CE551: mov     ecx, [esp+220h+var_214]
0x8CE555: mov     eax, [esi]
0x8CE557: mov     edx, [eax+90h]
0x8CE55D: push    ecx
0x8CE55E: mov     ecx, esi
0x8CE560: call    edx
0x8CE562: jmp     short loc_8CE510
0x8CE564: mov     ecx, [esp+220h+var_4]
0x8CE56B: pop     edi
0x8CE56C: pop     esi
0x8CE56D: pop     ebx
0x8CE56E: xor     ecx, esp
0x8CE570: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CE575: mov     esp, ebp
0x8CE577: pop     ebp
0x8CE578: retn    4
