0x941DD0: push    ecx
0x941DD1: push    ebx
0x941DD2: mov     ebx, ecx
0x941DD4: mov     ecx, ds:0BA7FC0h
0x941DDA: push    ebp
0x941DDB: mov     ebp, [esp+0Ch+arg_4]
0x941DDF: inc     ecx
0x941DE0: test    ebp, ebp
0x941DE2: push    esi
0x941DE3: mov     ds:0BA7FC0h, ecx
0x941DE9: mov     [esp+10h+var_4], offset unk_BA7FC4
0x941DF1: jz      short loc_941E2C
0x941DF3: push    edi
0x941DF4: push    0FFFFFFFFh
0x941DF6: lea     edi, [ebx+24h]
0x941DF9: push    ebp
0x941DFA: mov     ecx, edi
0x941DFC: call    sub_8B1550
0x941E01: mov     esi, eax
0x941E03: cmp     esi, 0FFFFFFFFh
0x941E06: jnz     short loc_941E15
0x941E08: mov     esi, [ebx+28h]
0x941E0B: inc     esi
0x941E0C: push    esi
0x941E0D: push    ebp
0x941E0E: mov     ecx, edi
0x941E10: call    sub_8B0E80
0x941E15: test    esi, esi
0x941E17: pop     edi
0x941E18: jz      short loc_941E2C
0x941E1A: push    esi; Args
0x941E1B: lea     eax, [esp+14h+var_4]
0x941E1F: push    offset a04i; "#%04i"
0x941E24: push    eax; int
0x941E25: call    sub_8B1990
0x941E2A: jmp     short loc_941E80
0x941E2C: push    offset aNull_2; "null"
0x941E31: call    sub_8B1860
0x941E36: mov     esi, eax
0x941E38: mov     eax, [esp+14h+var_4]
0x941E3C: mov     ecx, [eax-8]
0x941E3F: add     esp, 4
0x941E42: cmp     ecx, esi
0x941E44: jl      short loc_941E4D
0x941E46: mov     ecx, [eax-4]
0x941E49: test    ecx, ecx
0x941E4B: jle     short loc_941E6A
0x941E4D: lea     ecx, [eax-0Ch]
0x941E50: dec     dword ptr [ecx+8]
0x941E53: jns     short loc_941E5A
0x941E55: call    sub_8B1930
0x941E5A: push    esi
0x941E5B: call    sub_8B1950
0x941E60: add     esp, 4
0x941E63: add     eax, 0Ch
0x941E66: mov     [esp+10h+var_4], eax
0x941E6A: lea     ecx, [esi+1]
0x941E6D: push    ecx
0x941E6E: push    offset aNull_2; "null"
0x941E73: push    eax
0x941E74: call    sub_8B1890
0x941E79: mov     edx, [esp+1Ch+var_4]
0x941E7D: mov     [edx-0Ch], esi
0x941E80: mov     eax, [esp+1Ch+var_4]
0x941E84: mov     ecx, [eax-4]
0x941E87: mov     esi, [esp+1Ch+arg_0]
0x941E8B: add     eax, 0FFFFFFF4h
0x941E8E: add     esp, 0Ch
0x941E91: inc     ecx
0x941E92: mov     [eax+8], ecx
0x941E95: mov     ecx, [esp+10h+var_4]
0x941E99: add     eax, 0Ch
0x941E9C: add     ecx, 0FFFFFFF4h
0x941E9F: mov     [esi], eax
0x941EA1: dec     dword ptr [ecx+8]
0x941EA4: jns     short loc_941EAB
0x941EA6: call    sub_8B1930
0x941EAB: mov     eax, esi
0x941EAD: pop     esi
0x941EAE: pop     ebp
0x941EAF: pop     ebx
0x941EB0: pop     ecx
0x941EB1: retn    8
