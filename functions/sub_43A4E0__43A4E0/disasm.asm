0x43A4E0: push    ebx
0x43A4E1: mov     ebx, [esp+4+arg_8]
0x43A4E5: push    ebp
0x43A4E6: mov     ebp, [esp+8+Comperand]
0x43A4EA: push    esi
0x43A4EB: push    edi
0x43A4EC: mov     edi, [esp+10h+arg_4]
0x43A4F0: mov     esi, ecx
0x43A4F2: mov     eax, [edi]
0x43A4F4: push    eax; int
0x43A4F5: push    ebp; Comperand
0x43A4F6: mov     ecx, esi
0x43A4F8: call    sub_43A260
0x43A4FD: test    al, al
0x43A4FF: jz      short loc_43A560
0x43A501: mov     ecx, [esi+18h]
0x43A504: test    ecx, 0FFFFFFFEh
0x43A50A: jz      loc_43A5C1
0x43A510: mov     eax, [esi+18h]
0x43A513: and     eax, 0FFFFFFFEh
0x43A516: mov     edx, [eax+8]
0x43A519: test    dl, 1
0x43A51C: jnz     short loc_43A4F2
0x43A51E: mov     ecx, [esi]
0x43A520: mov     eax, [ecx]
0x43A522: mov     edx, [edi]
0x43A524: mov     eax, [eax+20h]
0x43A527: push    edx
0x43A528: call    eax
0x43A52A: mov     eax, [esi+18h]
0x43A52D: mov     ecx, [esi]
0x43A52F: mov     edx, [ecx]
0x43A531: mov     edx, [edx+24h]
0x43A534: and     eax, 0FFFFFFFEh
0x43A537: mov     eax, [eax]
0x43A539: push    eax
0x43A53A: call    edx
0x43A53C: mov     [edi], eax
0x43A53E: mov     eax, [esi+18h]
0x43A541: and     eax, 0FFFFFFFEh
0x43A544: mov     ecx, [eax+4]
0x43A547: mov     [ebx], ecx
0x43A549: mov     ecx, [esi+18h]
0x43A54C: and     ecx, 0FFFFFFFEh
0x43A54F: mov     edx, [ecx+8]
0x43A552: mov     al, 1
0x43A554: test    al, dl
0x43A556: jz      short loc_43A5C3
0x43A558: mov     dword ptr [ebx], 0
0x43A55E: jmp     short loc_43A4F2
0x43A560: mov     eax, [esi+14h]
0x43A563: test    eax, 0FFFFFFFEh
0x43A568: jz      short loc_43A5C1
0x43A56A: mov     eax, [esi+14h]
0x43A56D: and     eax, 0FFFFFFFEh
0x43A570: mov     ecx, [eax+8]
0x43A573: test    cl, 1
0x43A576: jnz     loc_43A4F2
0x43A57C: mov     ecx, [esi]
0x43A57E: mov     edx, [ecx]
0x43A580: mov     eax, [edi]
0x43A582: mov     edx, [edx+20h]
0x43A585: push    eax
0x43A586: call    edx
0x43A588: mov     eax, [esi+14h]
0x43A58B: mov     ecx, [esi]
0x43A58D: mov     edx, [ecx]
0x43A58F: mov     edx, [edx+24h]
0x43A592: and     eax, 0FFFFFFFEh
0x43A595: mov     eax, [eax]
0x43A597: push    eax
0x43A598: call    edx
0x43A59A: mov     [edi], eax
0x43A59C: mov     eax, [esi+14h]
0x43A59F: and     eax, 0FFFFFFFEh
0x43A5A2: mov     ecx, [eax+4]
0x43A5A5: mov     [ebx], ecx
0x43A5A7: mov     ecx, [esi+14h]
0x43A5AA: and     ecx, 0FFFFFFFEh
0x43A5AD: mov     edx, [ecx+8]
0x43A5B0: mov     al, 1
0x43A5B2: test    al, dl
0x43A5B4: jz      short loc_43A5C3
0x43A5B6: mov     dword ptr [ebx], 0
0x43A5BC: jmp     loc_43A4F2
0x43A5C1: xor     al, al
0x43A5C3: mov     ecx, [esi+4]
0x43A5C6: mov     dword ptr [ecx], 0
0x43A5CC: mov     edx, [esi+8]
0x43A5CF: pop     edi
0x43A5D0: mov     dword ptr [edx], 0
0x43A5D6: mov     ecx, [esi+0Ch]
0x43A5D9: pop     esi
0x43A5DA: pop     ebp
0x43A5DB: mov     dword ptr [ecx], 0
0x43A5E1: pop     ebx
0x43A5E2: retn    0Ch
