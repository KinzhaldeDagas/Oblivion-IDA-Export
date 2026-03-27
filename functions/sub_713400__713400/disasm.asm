0x713400: sub     esp, 8
0x713403: push    ebx
0x713404: push    ebp
0x713405: push    esi
0x713406: mov     esi, ecx
0x713408: push    edi
0x713409: lea     ebp, [esi+0C8h]
0x71340F: push    1
0x713411: mov     ecx, ebp
0x713413: call    NiTArray_SetSize
0x713418: lea     eax, [esp+18h+var_8]
0x71341C: xor     edi, edi
0x71341E: push    eax
0x71341F: push    edi
0x713420: mov     ecx, ebp
0x713422: mov     [esp+20h+var_8], edi
0x713426: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71342B: cmp     [esi+1F8h], edi
0x713431: mov     [esp+18h+var_8], edi
0x713435: jbe     loc_7134C8
0x71343B: jmp     short loc_713440
0x71343D: align 10h
0x713440: mov     ecx, [esi+1F0h]
0x713446: mov     ecx, [ecx+edi*4]
0x713449: mov     edx, [ecx]
0x71344B: mov     eax, [edx+44h]
0x71344E: call    eax
0x713450: mov     ebx, eax
0x713452: test    ebx, ebx
0x713454: mov     [esp+18h+var_4], ebx
0x713458: jz      short loc_7134B5
0x71345A: movzx   edx, word ptr [esi+0D2h]
0x713461: xor     eax, eax
0x713463: test    edx, edx
0x713465: jbe     short loc_713484
0x713467: mov     ecx, [esi+0CCh]
0x71346D: lea     ecx, [ecx+0]
0x713470: cmp     ebx, [ecx]
0x713472: jz      short loc_713480
0x713474: add     eax, 1
0x713477: add     ecx, 4
0x71347A: cmp     eax, edx
0x71347C: jb      short loc_713470
0x71347E: jmp     short loc_713484
0x713480: test    eax, eax
0x713482: jnz     short loc_7134B5
0x713484: movzx   edi, word ptr [ebp+0Ah]
0x713488: movzx   ecx, word ptr [ebp+8]
0x71348C: cmp     edi, ecx
0x71348E: jb      short loc_71349E
0x713490: movzx   edx, word ptr [ebp+0Eh]
0x713494: add     edx, edi
0x713496: push    edx
0x713497: mov     ecx, ebp
0x713499: call    NiTArray_SetSize
0x71349E: lea     eax, [esp+18h+var_4]
0x7134A2: push    eax
0x7134A3: push    edi
0x7134A4: mov     ecx, ebp
0x7134A6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7134AB: mov     edi, [esp+18h+var_8]
0x7134AF: mov     dword ptr [ebx], 0
0x7134B5: add     edi, 1
0x7134B8: cmp     edi, [esi+1F8h]
0x7134BE: mov     [esp+18h+var_8], edi
0x7134C2: jb      loc_713440
0x7134C8: xor     ebx, ebx
0x7134CA: cmp     [esi+1F8h], ebx
0x7134D0: jbe     short loc_713509
0x7134D2: mov     ecx, [esi+1F0h]
0x7134D8: mov     ecx, [ecx+ebx*4]
0x7134DB: mov     edx, [ecx]
0x7134DD: mov     eax, [edx+44h]
0x7134E0: call    eax
0x7134E2: mov     edi, eax
0x7134E4: test    edi, edi
0x7134E6: jz      short loc_7134FE
0x7134E8: mov     ecx, [esi+1F0h]
0x7134EE: mov     ecx, [ecx+ebx*4]
0x7134F1: mov     edx, [ecx]
0x7134F3: mov     eax, [edx+40h]
0x7134F6: mov     ebp, [edi]
0x7134F8: call    eax
0x7134FA: add     eax, ebp
0x7134FC: mov     [edi], eax
0x7134FE: add     ebx, 1
0x713501: cmp     ebx, [esi+1F8h]
0x713507: jb      short loc_7134D2
0x713509: pop     edi
0x71350A: pop     esi
0x71350B: pop     ebp
0x71350C: pop     ebx
0x71350D: add     esp, 8
0x713510: retn
