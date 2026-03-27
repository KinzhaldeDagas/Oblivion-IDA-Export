0x6F3470: push    ebx
0x6F3471: push    ebp
0x6F3472: mov     ebp, [esp+8+arg_4]
0x6F3476: test    ebp, ebp
0x6F3478: push    esi
0x6F3479: mov     esi, ecx
0x6F347B: jz      short loc_6F3483
0x6F347D: cmp     ebp, [esp+0Ch+arg_C]
0x6F3481: jz      short loc_6F3488
0x6F3483: call    __invalid_parameter_noinfo
0x6F3488: mov     ebx, [esp+0Ch+arg_8]
0x6F348C: mov     eax, [esp+0Ch+arg_10]
0x6F3490: cmp     ebx, eax
0x6F3492: jz      short loc_6F34B9
0x6F3494: mov     ecx, [esi+8]
0x6F3497: push    edi
0x6F3498: push    ebx
0x6F3499: push    ecx
0x6F349A: push    eax
0x6F349B: call    sub_6F30C0
0x6F34A0: mov     edx, [esp+1Ch+arg_0]
0x6F34A4: push    edx
0x6F34A5: mov     edi, eax
0x6F34A7: mov     eax, [esi+8]
0x6F34AA: push    esi
0x6F34AB: push    eax
0x6F34AC: push    edi
0x6F34AD: call    sub_557030
0x6F34B2: add     esp, 1Ch
0x6F34B5: mov     [esi+8], edi
0x6F34B8: pop     edi
0x6F34B9: mov     eax, [esp+0Ch+arg_0]
0x6F34BD: pop     esi
0x6F34BE: mov     [eax], ebp
0x6F34C0: pop     ebp
0x6F34C1: mov     [eax+4], ebx
0x6F34C4: pop     ebx
0x6F34C5: retn    14h
