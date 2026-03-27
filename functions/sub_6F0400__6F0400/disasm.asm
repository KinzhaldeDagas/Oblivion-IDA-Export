0x6F0400: push    ebx
0x6F0401: push    ebp
0x6F0402: push    esi
0x6F0403: mov     esi, ecx
0x6F0405: mov     ecx, [esi+4]
0x6F0408: test    ecx, ecx
0x6F040A: push    edi
0x6F040B: jnz     short loc_6F0411
0x6F040D: xor     eax, eax
0x6F040F: jmp     short loc_6F0424
0x6F0411: mov     edx, [esi+8]
0x6F0414: sub     edx, ecx
0x6F0416: mov     eax, 2AAAAAABh
0x6F041B: imul    edx
0x6F041D: mov     eax, edx
0x6F041F: shr     eax, 1Fh
0x6F0422: add     eax, edx
0x6F0424: mov     ebx, [esp+10h+arg_0]
0x6F0428: cmp     eax, ebx
0x6F042A: jnb     short loc_6F046B
0x6F042C: test    ecx, ecx
0x6F042E: jnz     short loc_6F0434
0x6F0430: xor     edi, edi
0x6F0432: jmp     short loc_6F0447
0x6F0434: mov     edx, [esi+8]
0x6F0437: sub     edx, ecx
0x6F0439: mov     eax, 2AAAAAABh
0x6F043E: imul    edx
0x6F0440: mov     edi, edx
0x6F0442: shr     edi, 1Fh
0x6F0445: add     edi, edx
0x6F0447: mov     ebp, [esi+8]
0x6F044A: cmp     ecx, ebp
0x6F044C: jbe     short loc_6F0453
0x6F044E: call    __invalid_parameter_noinfo
0x6F0453: lea     eax, [esp+10h+arg_4]
0x6F0457: push    eax
0x6F0458: sub     ebx, edi
0x6F045A: push    ebx
0x6F045B: push    ebp
0x6F045C: push    esi
0x6F045D: mov     ecx, esi
0x6F045F: call    sub_6F0160
0x6F0464: pop     edi
0x6F0465: pop     esi
0x6F0466: pop     ebp
0x6F0467: pop     ebx
0x6F0468: retn    0Ch
0x6F046B: test    ecx, ecx
0x6F046D: jz      short loc_6F04C8
0x6F046F: mov     edi, [esi+8]
0x6F0472: mov     edx, edi
0x6F0474: sub     edx, ecx
0x6F0476: mov     eax, 2AAAAAABh
0x6F047B: imul    edx
0x6F047D: mov     eax, edx
0x6F047F: shr     eax, 1Fh
0x6F0482: add     eax, edx
0x6F0484: cmp     ebx, eax
0x6F0486: jnb     short loc_6F04C8
0x6F0488: cmp     ecx, edi
0x6F048A: jbe     short loc_6F0491
0x6F048C: call    __invalid_parameter_noinfo
0x6F0491: mov     ebp, [esi+4]
0x6F0494: cmp     ebp, [esi+8]
0x6F0497: jbe     short loc_6F049E
0x6F0499: call    __invalid_parameter_noinfo
0x6F049E: lea     ecx, [ebx+ebx*2]
0x6F04A1: lea     ebx, [ebp+ecx*2+0]
0x6F04A5: cmp     ebx, [esi+8]
0x6F04A8: mov     [esp+10h+arg_8], ebp
0x6F04AC: ja      short loc_6F04B3
0x6F04AE: cmp     ebx, [esi+4]
0x6F04B1: jnb     short loc_6F04B8
0x6F04B3: call    __invalid_parameter_noinfo
0x6F04B8: push    edi
0x6F04B9: push    esi
0x6F04BA: push    ebx
0x6F04BB: push    esi
0x6F04BC: lea     edx, [esp+20h+arg_4]
0x6F04C0: push    edx
0x6F04C1: mov     ecx, esi
0x6F04C3: call    sub_556D00
0x6F04C8: pop     edi
0x6F04C9: pop     esi
0x6F04CA: pop     ebp
0x6F04CB: pop     ebx
0x6F04CC: retn    0Ch
