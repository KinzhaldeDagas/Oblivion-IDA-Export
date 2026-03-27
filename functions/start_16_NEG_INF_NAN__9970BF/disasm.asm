0x9970BF: movlpd  xmm2, [esp+arg_0]
0x9970C5: movlpd  xmm0, [esp+arg_0]
0x9970CB: movd    eax, xmm2
0x9970CF: psrlq   xmm2, 20h ; ' '
0x9970D4: movd    ecx, xmm2
0x9970D8: and     ecx, 0FFFFFh
0x9970DE: or      eax, ecx
0x9970E0: cmp     eax, 0
0x9970E3: jz      short start_16___NEG_NORMAL_INFINITY
0x9970E5: mov     edx, 3E8h
0x9970EA: jmp     short start_16___CALL_LIBM_ERROR_3
