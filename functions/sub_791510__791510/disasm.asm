0x791510: push    ecx
0x791511: push    ebx
0x791512: push    ebp
0x791513: mov     ebp, [esp+0Ch+arg_8]
0x791517: push    esi
0x791518: mov     esi, ecx
0x79151A: push    edi
0x79151B: mov     edi, [esi+4]
0x79151E: test    edi, edi
0x791520: jz      short loc_79153C
0x791522: mov     ebx, [esi+8]
0x791525: mov     ecx, ebx
0x791527: sub     ecx, edi
0x791529: mov     eax, 2AAAAAABh
0x79152E: imul    ecx
0x791530: sar     edx, 2
0x791533: mov     eax, edx
0x791535: shr     eax, 1Fh
0x791538: add     eax, edx
0x79153A: jnz     short loc_791544
0x79153C: mov     ebx, [esp+14h+arg_4]
0x791540: xor     edi, edi
0x791542: jmp     short loc_791573
0x791544: cmp     edi, ebx
0x791546: jbe     short loc_79154D
0x791548: call    __invalid_parameter_noinfo
0x79154D: mov     ebx, [esp+14h+arg_4]
0x791551: test    ebx, ebx
0x791553: jz      short loc_791559
0x791555: cmp     ebx, esi
0x791557: jz      short loc_79155E
0x791559: call    __invalid_parameter_noinfo
0x79155E: mov     ecx, ebp
0x791560: sub     ecx, edi
0x791562: mov     eax, 2AAAAAABh
0x791567: imul    ecx
0x791569: sar     edx, 2
0x79156C: mov     edi, edx
0x79156E: shr     edi, 1Fh
0x791571: add     edi, edx
0x791573: mov     ecx, [esp+14h+arg_C]
0x791577: push    ecx
0x791578: push    1
0x79157A: push    ebp
0x79157B: push    ebx
0x79157C: mov     ecx, esi
0x79157E: call    sub_791140
0x791583: mov     ebx, [esi+4]
0x791586: cmp     ebx, [esi+8]
0x791589: jbe     short loc_791590
0x79158B: call    __invalid_parameter_noinfo
0x791590: lea     edx, [edi+edi*2]
0x791593: lea     edi, [ebx+edx*8]
0x791596: cmp     edi, [esi+8]
0x791599: mov     [esp+14h+arg_8], ebx
0x79159D: ja      short loc_7915A4
0x79159F: cmp     edi, [esi+4]
0x7915A2: jnb     short loc_7915A9
0x7915A4: call    __invalid_parameter_noinfo
0x7915A9: mov     eax, [esp+14h+arg_0]
0x7915AD: mov     [eax+4], edi
0x7915B0: pop     edi
0x7915B1: mov     [eax], esi
0x7915B3: pop     esi
0x7915B4: pop     ebp
0x7915B5: pop     ebx
0x7915B6: pop     ecx
0x7915B7: retn    10h
