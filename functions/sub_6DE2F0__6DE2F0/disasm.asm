0x6DE2F0: push    ecx
0x6DE2F1: push    ebp
0x6DE2F2: push    esi
0x6DE2F3: mov     ebp, ecx
0x6DE2F5: push    edi
0x6DE2F6: mov     edi, [esp+10h+arg_0]
0x6DE2FA: lea     eax, [ebp+4]
0x6DE2FD: push    eax
0x6DE2FE: mov     ecx, edi
0x6DE300: call    sub_713620
0x6DE305: cmp     dword ptr [edi+0D8h], 0A010068h
0x6DE30F: jb      short loc_6DE33C
0x6DE311: cmp     dword ptr [edi+4], 0Ah
0x6DE315: jnb     short loc_6DE33C
0x6DE317: mov     eax, [edi+21Ch]
0x6DE31D: push    1
0x6DE31F: lea     ecx, [esp+14h+arg_0]
0x6DE323: push    ecx
0x6DE324: push    4
0x6DE326: lea     edx, [esp+1Ch+var_4]
0x6DE32A: push    edx
0x6DE32B: push    eax
0x6DE32C: mov     eax, [eax+4]
0x6DE32F: mov     [esp+24h+arg_0], 4
0x6DE337: call    eax
0x6DE339: add     esp, 14h
0x6DE33C: mov     esi, [esp+10h+arg_4]
0x6DE340: xor     ecx, ecx
0x6DE342: mov     eax, esi
0x6DE344: mov     edx, 0Ch
0x6DE349: mul     edx
0x6DE34B: seto    cl
0x6DE34E: neg     ecx
0x6DE350: or      ecx, eax
0x6DE352: push    ecx; Size
0x6DE353: call    FormHeapAlloc
0x6DE358: push    1
0x6DE35A: lea     edx, [esp+18h+arg_0]
0x6DE35E: push    edx
0x6DE35F: lea     edx, [esi+esi*2]
0x6DE362: add     edx, edx
0x6DE364: add     edx, edx
0x6DE366: push    edx
0x6DE367: mov     [ebp+0], eax
0x6DE36A: mov     ecx, [edi+21Ch]
0x6DE370: push    eax
0x6DE371: mov     eax, [ecx+4]
0x6DE374: push    ecx
0x6DE375: mov     [esp+28h+arg_0], 4
0x6DE37D: call    eax
0x6DE37F: add     esp, 18h
0x6DE382: pop     edi
0x6DE383: pop     esi
0x6DE384: pop     ebp
0x6DE385: pop     ecx
0x6DE386: retn    8
