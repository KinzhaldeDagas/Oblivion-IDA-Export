0x8F58D0: push    esi
0x8F58D1: mov     esi, ecx
0x8F58D3: mov     ecx, [esi+1Ch]
0x8F58D6: push    edi
0x8F58D7: xor     edi, edi
0x8F58D9: cmp     ecx, edi
0x8F58DB: jge     short loc_8F58E6
0x8F58DD: mov     [esi+10h], edi
0x8F58E0: mov     [esi+14h], edi
0x8F58E3: pop     edi
0x8F58E4: pop     esi
0x8F58E5: retn
0x8F58E6: mov     eax, [esi+20h]
0x8F58E9: push    ebx
0x8F58EA: mov     ebx, [esi+10h]
0x8F58ED: sub     ebx, ecx
0x8F58EF: cmp     ebx, eax
0x8F58F1: jle     short loc_8F5906
0x8F58F3: pop     ebx
0x8F58F4: mov     [esi+10h], edi
0x8F58F7: mov     [esi+14h], edi
0x8F58FA: or      eax, 0FFFFFFFFh
0x8F58FD: pop     edi
0x8F58FE: mov     [esi+1Ch], eax
0x8F5901: mov     [esi+20h], eax
0x8F5904: pop     esi
0x8F5905: retn
0x8F5906: cmp     ecx, edi
0x8F5908: jle     short loc_8F595E
0x8F590A: push    ebp
0x8F590B: mov     ebp, ebx
0x8F590D: and     ebp, 800001FFh
0x8F5913: jns     short loc_8F591D
0x8F5915: dec     ebp
0x8F5916: or      ebp, 0FFFFFE00h
0x8F591C: inc     ebp
0x8F591D: jz      short loc_8F5926
0x8F591F: mov     edi, 200h
0x8F5924: sub     edi, ebp
0x8F5926: mov     eax, [esi+0Ch]
0x8F5929: add     ecx, eax
0x8F592B: push    ebx
0x8F592C: push    ecx
0x8F592D: add     eax, edi
0x8F592F: push    eax
0x8F5930: call    j_unknown_libname_16
0x8F5935: xor     ecx, ecx
0x8F5937: add     esp, 0Ch
0x8F593A: test    ebp, ebp
0x8F593C: setnz   cl
0x8F593F: mov     eax, ebx
0x8F5941: cdq
0x8F5942: and     edx, 1FFh
0x8F5948: add     eax, edx
0x8F594A: sar     eax, 9
0x8F594D: add     ecx, eax
0x8F594F: shl     ecx, 9
0x8F5952: mov     eax, ecx
0x8F5954: mov     [esi+1Ch], edi
0x8F5957: mov     [esi+10h], eax
0x8F595A: mov     [esi+14h], eax
0x8F595D: pop     ebp
0x8F595E: pop     ebx
0x8F595F: pop     edi
0x8F5960: pop     esi
0x8F5961: retn
