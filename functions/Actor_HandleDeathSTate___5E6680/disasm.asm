0x5E6680: cmp     byte ptr ds:0B14E98h, 0
0x5E6687: push    ebp
0x5E6688: mov     ebp, [esp+4+newDeadState]
0x5E668C: push    esi
0x5E668D: push    edi
0x5E668E: mov     esi, ecx
0x5E6690: jz      short loc_5E66D2
0x5E6692: mov     eax, [esi]
0x5E6694: mov     edx, [eax+170h]
0x5E669A: push    ebx
0x5E669B: xor     ebx, ebx
0x5E669D: call    edx
0x5E669F: mov     edi, eax
0x5E66A1: test    edi, edi
0x5E66A3: jz      short loc_5E66B7
0x5E66A5: mov     eax, [esi]
0x5E66A7: mov     edx, [eax+190h]
0x5E66AD: mov     ecx, esi
0x5E66AF: call    edx
0x5E66B1: test    al, al
0x5E66B3: jz      short loc_5E66B7
0x5E66B5: mov     ebx, edi
0x5E66B7: mov     eax, [ebx+28h]
0x5E66BA: shr     eax, 1
0x5E66BC: test    al, 1
0x5E66BE: pop     ebx
0x5E66BF: jz      short loc_5E66D2
0x5E66C1: cmp     ebp, 2
0x5E66C4: jz      short loc_5E66CB
0x5E66C6: cmp     ebp, 1
0x5E66C9: jnz     short loc_5E66D2
0x5E66CB: mov     ebp, 6
0x5E66D0: jmp     short loc_5E6717
0x5E66D2: cmp     ebp, 2
0x5E66D5: jnz     short loc_5E6713
0x5E66D7: mov     ecx, [esi+58h]
0x5E66DA: test    ecx, ecx
0x5E66DC: jz      short loc_5E66FD
0x5E66DE: mov     edx, [ecx]
0x5E66E0: mov     eax, [edx+0E8h]
0x5E66E6: push    esi
0x5E66E7: call    eax
0x5E66E9: test    eax, eax
0x5E66EB: jz      short loc_5E66FD
0x5E66ED: mov     edx, [eax]
0x5E66EF: push    1
0x5E66F1: mov     ecx, eax
0x5E66F3: mov     eax, [edx+9Ch]
0x5E66F9: push    1
0x5E66FB: call    eax
0x5E66FD: lea     ecx, [esi+44h]; this
0x5E6700: call    ExtraDataList_GetContainerChanges
0x5E6705: test    eax, eax
0x5E6707: jz      short loc_5E6717
0x5E6709: push    esi
0x5E670A: mov     ecx, eax
0x5E670C: call    sub_4876C0
0x5E6711: jmp     short loc_5E6717
0x5E6713: test    ebp, ebp
0x5E6715: jz      short loc_5E6758
0x5E6717: mov     ecx, [esi+58h]
0x5E671A: test    ecx, ecx
0x5E671C: jz      short loc_5E6758
0x5E671E: mov     edx, [ecx]
0x5E6720: mov     eax, [edx+8]
0x5E6723: call    eax
0x5E6725: test    eax, eax
0x5E6727: jnz     short loc_5E6758
0x5E6729: mov     edi, [esi+58h]
0x5E672C: mov     edx, [edi]
0x5E672E: mov     eax, [edx+47Ch]
0x5E6734: mov     ecx, edi
0x5E6736: call    eax
0x5E6738: cmp     eax, 3
0x5E673B: jz      short loc_5E674E
0x5E673D: mov     edx, [edi]
0x5E673F: mov     eax, [edx+47Ch]
0x5E6745: mov     ecx, edi
0x5E6747: call    eax
0x5E6749: cmp     eax, 4
0x5E674C: jnz     short loc_5E6758
0x5E674E: push    0; a3
0x5E6750: push    esi; a2
0x5E6751: mov     ecx, edi; this
0x5E6753: call    sub_628630
0x5E6758: cmp     [esi+0B0h], ebp
0x5E675E: jz      short loc_5E676B
0x5E6760: mov     edx, [esi]
0x5E6762: mov     eax, [edx+40h]
0x5E6765: push    40h ; '@'
0x5E6767: mov     ecx, esi
0x5E6769: call    eax
0x5E676B: pop     edi
0x5E676C: mov     [esi+0B0h], ebp
0x5E6772: pop     esi
0x5E6773: pop     ebp
0x5E6774: retn    4
