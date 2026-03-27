0x9124B0: push    ebp
0x9124B1: mov     ebp, esp
0x9124B3: and     esp, 0FFFFFFF0h
0x9124B6: sub     esp, 2Ch
0x9124B9: mov     eax, [ebp+arg_0]
0x9124BC: mov     ecx, [eax]
0x9124BE: add     ecx, 4
0x9124C1: mov     [eax], ecx
0x9124C3: mov     edx, [ecx]
0x9124C5: add     ecx, 4
0x9124C8: mov     [eax], ecx
0x9124CA: mov     ecx, [ecx]
0x9124CC: push    esi
0x9124CD: mov     esi, [ebp+arg_C]
0x9124D0: lea     eax, [esp+30h+var_8]
0x9124D4: push    eax
0x9124D5: lea     eax, [esp+34h+var_20]
0x9124D9: push    eax
0x9124DA: lea     eax, [ecx+8]
0x9124DD: add     ecx, 5
0x9124E0: shl     ecx, 4
0x9124E3: shl     eax, 4
0x9124E6: add     ecx, esi
0x9124E8: add     eax, esi
0x9124EA: push    eax
0x9124EB: push    ecx
0x9124EC: lea     ecx, [edx+8]
0x9124EF: add     edx, 5
0x9124F2: shl     ecx, 4
0x9124F5: add     ecx, esi
0x9124F7: shl     edx, 4
0x9124FA: push    ecx
0x9124FB: add     edx, esi
0x9124FD: push    edx
0x9124FE: call    sub_943230
0x912503: mov     ecx, [ebp+arg_4]
0x912506: mov     eax, [ecx]
0x912508: lea     edx, [eax+10h]
0x91250B: mov     [ecx], edx
0x91250D: mov     ecx, [eax]
0x91250F: mov     [esp+48h+var_10], ecx
0x912513: mov     edx, [eax+4]
0x912516: mov     eax, [ebp+arg_14]
0x912519: mov     ecx, [ebp+arg_10]
0x91251C: push    eax
0x91251D: mov     [esp+4Ch+var_C], edx
0x912521: push    ecx
0x912522: lea     edx, [esp+50h+var_20]
0x912526: push    edx
0x912527: call    sub_8F1B60
0x91252C: mov     eax, [esi+0B8h]
0x912532: add     esp, 24h
0x912535: inc     eax
0x912536: mov     [esi+0B8h], eax
0x91253C: pop     esi
0x91253D: mov     esp, ebp
0x91253F: pop     ebp
0x912540: retn    18h
