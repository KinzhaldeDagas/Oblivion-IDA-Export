0x4046A0: sub     esp, 8
0x4046A3: push    ebx
0x4046A4: push    ebp
0x4046A5: mov     ebx, ecx
0x4046A7: cmp     dword ptr [ebx+18F0h], 0
0x4046AE: push    esi
0x4046AF: push    edi
0x4046B0: mov     [esp+18h+var_4], 0
0x4046B8: jle     short loc_40472F
0x4046BA: lea     eax, [ebx+8]
0x4046BD: mov     [esp+18h+var_8], eax
0x4046C1: lea     ebp, [ebx+30h]
0x4046C4: lea     edi, [ebp+50h]
0x4046C7: mov     ecx, 14h
0x4046CC: mov     esi, ebp
0x4046CE: rep movsd
0x4046D0: mov     ecx, [esp+18h+var_8]
0x4046D4: mov     eax, [ecx]
0x4046D6: mov     edx, [eax]
0x4046D8: push    eax
0x4046D9: mov     eax, [edx+1Ch]
0x4046DC: call    eax
0x4046DE: test    eax, eax
0x4046E0: jz      short loc_4046F6
0x4046E2: cmp     eax, 1
0x4046E5: jz      short loc_4046F6
0x4046E7: push    50h ; 'P'
0x4046E9: push    0
0x4046EB: push    ebp
0x4046EC: call    __memset
0x4046F1: add     esp, 0Ch
0x4046F4: jmp     short loc_404711
0x4046F6: mov     esi, [esp+1Ch+var_C]
0x4046FA: mov     eax, [esi]
0x4046FC: mov     ecx, [eax]
0x4046FE: mov     edx, [ecx+64h]
0x404701: push    eax
0x404702: call    edx
0x404704: mov     eax, [esi]
0x404706: mov     ecx, [eax]
0x404708: mov     edx, [ecx+24h]
0x40470B: push    ebp
0x40470C: push    50h ; 'P'
0x40470E: push    eax
0x40470F: call    edx
0x404711: mov     eax, [esp+1Ch+var_8]
0x404715: add     [esp+1Ch+var_C], 4
0x40471A: add     eax, 1
0x40471D: add     ebp, 0A0h ; ' '
0x404723: cmp     eax, [ebx+18F0h]
0x404729: mov     [esp+1Ch+var_8], eax
0x40472D: jl      short loc_4046C4
0x40472F: mov     eax, [ebx+28h]
0x404732: test    eax, eax
0x404734: jz      short loc_40478A
0x404736: lea     ebp, [ebx+18F4h]
0x40473C: lea     edi, [ebx+19F4h]
0x404742: mov     ecx, 40h ; '@'
0x404747: mov     esi, ebp
0x404749: rep movsd
0x40474B: mov     ecx, [eax]
0x40474D: mov     edx, [ecx+1Ch]
0x404750: push    eax
0x404751: call    edx
0x404753: test    eax, eax
0x404755: jz      short loc_40476E
0x404757: cmp     eax, 1
0x40475A: jz      short loc_40476E
0x40475C: push    100h
0x404761: push    0
0x404763: push    ebp
0x404764: call    __memset
0x404769: add     esp, 0Ch
0x40476C: jmp     short loc_40478A
0x40476E: mov     eax, [ebx+28h]
0x404771: mov     ecx, [eax]
0x404773: mov     edx, [ecx+64h]
0x404776: push    eax
0x404777: call    edx
0x404779: mov     eax, [ebx+28h]
0x40477C: mov     ecx, [eax]
0x40477E: mov     edx, [ecx+24h]
0x404781: push    ebp
0x404782: push    100h
0x404787: push    eax
0x404788: call    edx
0x40478A: cmp     dword ptr [ebx+2Ch], 0
0x40478E: jz      loc_40483A
0x404794: mov     eax, [ebx+1B20h]
0x40479A: mov     ecx, [ebx+1B24h]
0x4047A0: mov     edx, [ebx+1B28h]
0x4047A6: mov     [ebx+1B34h], eax
0x4047AC: mov     eax, [ebx+1B2Ch]
0x4047B2: lea     esi, [ebx+1B20h]
0x4047B8: mov     [ebx+1B38h], ecx
0x4047BE: mov     ecx, [esi+10h]
0x4047C1: mov     [ebx+1B3Ch], edx
0x4047C7: mov     [ebx+1B40h], eax
0x4047CD: xor     eax, eax
0x4047CF: mov     [ebx+1B44h], ecx
0x4047D5: mov     [ebx+1B50h], eax
0x4047DB: mov     [ebx+1B54h], eax
0x4047E1: mov     eax, [ebx+2Ch]
0x4047E4: mov     edx, [eax]
0x4047E6: push    eax
0x4047E7: mov     eax, [edx+1Ch]
0x4047EA: call    eax
0x4047EC: test    eax, eax
0x4047EE: jz      short loc_404813
0x4047F0: cmp     eax, 1
0x4047F3: jz      short loc_404813
0x4047F5: xor     eax, eax
0x4047F7: mov     [esi], eax
0x4047F9: mov     [esi+4], eax
0x4047FC: mov     [esi+8], eax
0x4047FF: pop     edi
0x404800: mov     [esi+0Ch], eax
0x404803: mov     [esi+10h], eax
0x404806: pop     esi
0x404807: pop     ebp
0x404808: mov     ecx, ebx
0x40480A: pop     ebx
0x40480B: add     esp, 8
0x40480E: jmp     loc_403C30
0x404813: mov     eax, [ebx+2Ch]
0x404816: mov     ecx, [eax]
0x404818: mov     edx, [ecx+64h]
0x40481B: push    eax
0x40481C: call    edx
0x40481E: mov     eax, [ebx+2Ch]
0x404821: mov     ecx, [eax]
0x404823: mov     edx, [ecx+24h]
0x404826: push    esi
0x404827: push    14h
0x404829: push    eax
0x40482A: call    edx
0x40482C: pop     edi
0x40482D: pop     esi
0x40482E: pop     ebp
0x40482F: mov     ecx, ebx
0x404831: pop     ebx
0x404832: add     esp, 8
0x404835: jmp     loc_403C30
0x40483A: pop     edi
0x40483B: pop     esi
0x40483C: pop     ebp
0x40483D: pop     ebx
0x40483E: add     esp, 8
0x404841: retn
