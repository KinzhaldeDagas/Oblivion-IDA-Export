0x71B4D0: push    ebx
0x71B4D1: push    esi
0x71B4D2: push    edi
0x71B4D3: mov     edi, [esp+0Ch+arg_0]
0x71B4D7: mov     esi, ecx
0x71B4D9: push    0
0x71B4DB: mov     ecx, edi
0x71B4DD: call    sub_700B60
0x71B4E2: push    0
0x71B4E4: mov     ecx, edi
0x71B4E6: mov     [esi], eax
0x71B4E8: call    sub_700C00
0x71B4ED: lea     ebx, [edi+14h]
0x71B4F0: mov     [esi+10h], al
0x71B4F3: xor     eax, eax
0x71B4F5: mov     ecx, ebx
0x71B4F7: cmp     dword ptr [ecx], 0
0x71B4FA: jz      loc_71B5C6
0x71B500: add     eax, 1
0x71B503: add     ecx, 0Ch
0x71B506: cmp     eax, 4
0x71B509: jb      short loc_71B4F7
0x71B50B: xor     al, al
0x71B50D: mov     cl, 8
0x71B50F: sub     cl, al
0x71B511: mov     [esi+14h], cl
0x71B514: push    1
0x71B516: mov     ecx, edi
0x71B518: call    sub_700B60
0x71B51D: push    1
0x71B51F: mov     ecx, edi
0x71B521: mov     [esi+4], eax
0x71B524: call    sub_700C00
0x71B529: mov     [esi+11h], al
0x71B52C: xor     eax, eax
0x71B52E: mov     ecx, ebx
0x71B530: cmp     dword ptr [ecx], 1
0x71B533: jz      loc_71B5D2
0x71B539: add     eax, 1
0x71B53C: add     ecx, 0Ch
0x71B53F: cmp     eax, 4
0x71B542: jb      short loc_71B530
0x71B544: xor     al, al
0x71B546: mov     cl, 8
0x71B548: sub     cl, al
0x71B54A: mov     [esi+15h], cl
0x71B54D: push    2
0x71B54F: mov     ecx, edi
0x71B551: call    sub_700B60
0x71B556: push    2
0x71B558: mov     ecx, edi
0x71B55A: mov     [esi+8], eax
0x71B55D: call    sub_700C00
0x71B562: mov     [esi+12h], al
0x71B565: xor     eax, eax
0x71B567: mov     ecx, ebx
0x71B569: lea     esp, [esp+0]
0x71B570: cmp     dword ptr [ecx], 2
0x71B573: jz      short loc_71B5DE
0x71B575: add     eax, 1
0x71B578: add     ecx, 0Ch
0x71B57B: cmp     eax, 4
0x71B57E: jb      short loc_71B570
0x71B580: xor     al, al
0x71B582: mov     cl, 8
0x71B584: sub     cl, al
0x71B586: mov     [esi+16h], cl
0x71B589: push    3
0x71B58B: mov     ecx, edi
0x71B58D: call    sub_700B60
0x71B592: push    3
0x71B594: mov     ecx, edi
0x71B596: mov     [esi+0Ch], eax
0x71B599: call    sub_700C00
0x71B59E: mov     [esi+13h], al
0x71B5A1: xor     eax, eax
0x71B5A3: mov     ecx, ebx
0x71B5A5: cmp     dword ptr [ecx], 3
0x71B5A8: jz      short loc_71B5E7
0x71B5AA: add     eax, 1
0x71B5AD: add     ecx, 0Ch
0x71B5B0: cmp     eax, 4
0x71B5B3: jb      short loc_71B5A5
0x71B5B5: xor     al, al
0x71B5B7: mov     cl, 8
0x71B5B9: sub     cl, al
0x71B5BB: pop     edi
0x71B5BC: mov     [esi+17h], cl
0x71B5BF: mov     eax, esi
0x71B5C1: pop     esi
0x71B5C2: pop     ebx
0x71B5C3: retn    4
0x71B5C6: lea     eax, [eax+eax*2]
0x71B5C9: mov     al, [edi+eax*4+1Ch]
0x71B5CD: jmp     loc_71B50D
0x71B5D2: lea     edx, [eax+eax*2]
0x71B5D5: mov     al, [edi+edx*4+1Ch]
0x71B5D9: jmp     loc_71B546
0x71B5DE: lea     edx, [eax+eax*2]
0x71B5E1: mov     al, [edi+edx*4+1Ch]
0x71B5E5: jmp     short loc_71B582
0x71B5E7: lea     edx, [eax+eax*2]
0x71B5EA: mov     al, [edi+edx*4+1Ch]
0x71B5EE: mov     cl, 8
0x71B5F0: sub     cl, al
0x71B5F2: pop     edi
0x71B5F3: mov     [esi+17h], cl
0x71B5F6: mov     eax, esi
0x71B5F8: pop     esi
0x71B5F9: pop     ebx
0x71B5FA: retn    4
