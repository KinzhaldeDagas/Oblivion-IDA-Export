0x997347: movlpd  xmm2, [esp+arg_0]
0x99734D: movlpd  xmm0, [esp+arg_0]
0x997353: movd    eax, xmm2
0x997357: psrlq   xmm2, 20h ; ' '
0x99735C: movd    ecx, xmm2
0x997360: and     ecx, 0FFFFFh
0x997366: or      eax, ecx
0x997368: cmp     eax, 0
0x99736B: jz      short start_17___NEG_NORMAL_INFINITY_0
0x99736D: mov     edx, 3E9h
0x997372: jmp     short start_17___CALL_LIBM_ERROR_4
