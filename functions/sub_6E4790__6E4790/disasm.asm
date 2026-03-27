0x6E4790: sub     esp, 8
0x6E4793: push    ebx
0x6E4794: push    esi
0x6E4795: mov     esi, [esp+10h+a2]
0x6E4799: push    edi
0x6E479A: push    esi; a2
0x6E479B: mov     edi, ecx
0x6E479D: call    sub_7008A0
0x6E47A2: mov     eax, [esi+21Ch]
0x6E47A8: push    1
0x6E47AA: lea     ecx, [esp+18h+var_8]
0x6E47AE: push    ecx
0x6E47AF: mov     ebx, 4
0x6E47B4: push    ebx
0x6E47B5: lea     edx, [esp+20h+a2]
0x6E47B9: push    edx
0x6E47BA: push    eax
0x6E47BB: mov     eax, [eax+4]
0x6E47BE: mov     [esp+28h+var_8], ebx
0x6E47C2: call    eax
0x6E47C4: add     esp, 14h
0x6E47C7: cmp     [esp+14h+a2], 0
0x6E47CC: jbe     short loc_6E480F
0x6E47CE: mov     eax, [esi+21Ch]
0x6E47D4: push    1
0x6E47D6: lea     ecx, [esp+18h+var_8]
0x6E47DA: push    ecx
0x6E47DB: push    ebx
0x6E47DC: lea     edx, [esp+20h+var_4]
0x6E47E0: push    edx
0x6E47E1: push    eax
0x6E47E2: mov     eax, [eax+4]
0x6E47E5: mov     [esp+28h+var_8], ebx
0x6E47E9: call    eax
0x6E47EB: mov     ecx, [esp+28h+a2]
0x6E47EF: mov     ebx, [esp+28h+var_4]
0x6E47F3: mov     eax, ds:0B3D0D0h[ebx*4]
0x6E47FA: push    ecx
0x6E47FB: push    esi
0x6E47FC: call    eax ; dword_B3D0D0
0x6E47FE: mov     edx, [esp+30h+a2]
0x6E4802: add     esp, 1Ch
0x6E4805: push    ebx
0x6E4806: push    edx
0x6E4807: push    eax
0x6E4808: mov     ecx, edi
0x6E480A: call    sub_6E4640
0x6E480F: pop     edi
0x6E4810: pop     esi
0x6E4811: pop     ebx
0x6E4812: add     esp, 8
0x6E4815: retn    4
