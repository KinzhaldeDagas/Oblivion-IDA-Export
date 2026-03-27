0x73E2B0: sub     esp, 24h
0x73E2B3: push    ebx
0x73E2B4: mov     ebx, [esp+28h+a2]
0x73E2B8: push    ebp
0x73E2B9: push    ebx; a2
0x73E2BA: mov     ebp, ecx
0x73E2BC: call    sub_7008A0
0x73E2C1: mov     eax, [ebx+21Ch]
0x73E2C7: push    1
0x73E2C9: lea     ecx, [esp+30h+a2]
0x73E2CD: push    ecx
0x73E2CE: push    4
0x73E2D0: lea     edx, [esp+38h+var_24]
0x73E2D4: push    edx
0x73E2D5: push    eax
0x73E2D6: mov     eax, [eax+4]
0x73E2D9: mov     [esp+40h+a2], 4
0x73E2E1: call    eax
0x73E2E3: add     esp, 14h
0x73E2E6: cmp     [esp+2Ch+var_24], 0
0x73E2EB: mov     [esp+2Ch+a2], 0
0x73E2F3: jbe     loc_73E42A
0x73E2F9: push    esi
0x73E2FA: push    edi
0x73E2FB: add     ebp, 8
0x73E2FE: mov     edi, edi
0x73E300: fldz
0x73E302: mov     eax, [ebx+21Ch]
0x73E308: push    1
0x73E30A: fst     [esp+38h+var_10]
0x73E30E: lea     ecx, [esp+38h+var_20]
0x73E312: fst     [esp+38h+var_C]
0x73E316: push    ecx
0x73E317: fst     [esp+3Ch+var_8]
0x73E31B: mov     esi, 2
0x73E320: fstp    [esp+3Ch+var_4]
0x73E324: push    esi
0x73E325: lea     edx, [esp+40h+var_1C]
0x73E329: push    edx
0x73E32A: push    eax
0x73E32B: mov     eax, [eax+4]
0x73E32E: mov     [esp+48h+var_20], esi
0x73E332: call    eax
0x73E334: mov     eax, [ebx+21Ch]
0x73E33A: push    1
0x73E33C: lea     ecx, [esp+4Ch+var_20]
0x73E340: push    ecx
0x73E341: push    esi
0x73E342: lea     edx, [esp+54h+var_1A]
0x73E346: push    edx
0x73E347: push    eax
0x73E348: mov     eax, [eax+4]
0x73E34B: mov     [esp+5Ch+var_20], esi
0x73E34F: call    eax
0x73E351: mov     eax, [ebx+21Ch]
0x73E357: push    1
0x73E359: lea     ecx, [esp+60h+var_20]
0x73E35D: push    ecx
0x73E35E: push    esi
0x73E35F: lea     edx, [esp+68h+var_18]
0x73E363: push    edx
0x73E364: push    eax
0x73E365: mov     eax, [eax+4]
0x73E368: mov     [esp+70h+var_20], esi
0x73E36C: call    eax
0x73E36E: mov     eax, [ebx+21Ch]
0x73E374: push    1
0x73E376: lea     ecx, [esp+74h+var_20]
0x73E37A: push    ecx
0x73E37B: push    esi
0x73E37C: lea     edx, [esp+7Ch+var_16]
0x73E380: push    edx
0x73E381: push    eax
0x73E382: mov     eax, [eax+4]
0x73E385: mov     [esp+84h+var_20], esi
0x73E389: call    eax
0x73E38B: mov     eax, [ebx+21Ch]
0x73E391: add     esp, 50h
0x73E394: push    1
0x73E396: lea     ecx, [esp+38h+var_20]
0x73E39A: push    ecx
0x73E39B: push    esi
0x73E39C: lea     edx, [esp+40h+var_14]
0x73E3A0: push    edx
0x73E3A1: push    eax
0x73E3A2: mov     eax, [eax+4]
0x73E3A5: mov     [esp+48h+var_20], esi
0x73E3A9: call    eax
0x73E3AB: mov     eax, [ebx+21Ch]
0x73E3B1: push    1
0x73E3B3: lea     ecx, [esp+4Ch+var_20]
0x73E3B7: push    ecx
0x73E3B8: push    esi
0x73E3B9: lea     edx, [esp+54h+var_12]
0x73E3BD: push    edx
0x73E3BE: push    eax
0x73E3BF: mov     eax, [eax+4]
0x73E3C2: mov     [esp+5Ch+var_20], esi
0x73E3C6: call    eax
0x73E3C8: add     esp, 28h
0x73E3CB: push    ebx
0x73E3CC: lea     ecx, [esp+38h+var_10]
0x73E3D0: call    sub_715420
0x73E3D5: mov     eax, [ebp+4]
0x73E3D8: cmp     [ebp+8], eax
0x73E3DB: jnz     short loc_73E3F2
0x73E3DD: test    eax, eax
0x73E3DF: jbe     short loc_73E3E5
0x73E3E1: add     eax, eax
0x73E3E3: jmp     short loc_73E3EA
0x73E3E5: mov     eax, 1
0x73E3EA: push    eax
0x73E3EB: mov     ecx, ebp
0x73E3ED: call    sub_73DD70
0x73E3F2: mov     eax, [ebp+8]
0x73E3F5: mov     edx, [ebp+0]
0x73E3F8: lea     ecx, ds:0[eax*8]
0x73E3FF: sub     ecx, eax
0x73E401: mov     eax, [esp+34h+a2]
0x73E405: lea     edi, [edx+ecx*4]
0x73E408: mov     ecx, 7
0x73E40D: lea     esi, [esp+34h+var_1C]
0x73E411: rep movsd
0x73E413: add     dword ptr [ebp+8], 1
0x73E417: add     eax, 1
0x73E41A: cmp     eax, [esp+34h+var_24]
0x73E41E: mov     [esp+34h+a2], eax
0x73E422: jb      loc_73E300
0x73E428: pop     edi
0x73E429: pop     esi
0x73E42A: mov     ecx, ebx
0x73E42C: call    sub_712A20
0x73E431: pop     ebp
0x73E432: pop     ebx
0x73E433: add     esp, 24h
0x73E436: retn    4
