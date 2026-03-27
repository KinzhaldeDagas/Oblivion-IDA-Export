0x6F2930: push    ebx
0x6F2931: mov     ebx, [esp+4+arg_0]
0x6F2935: push    esi
0x6F2936: mov     esi, [esp+8+arg_4]
0x6F293A: cmp     ebx, esi
0x6F293C: jz      short loc_6F2968
0x6F293E: push    edi
0x6F293F: mov     edi, [esp+0Ch+arg_8]
0x6F2943: mov     eax, [esi-20h]
0x6F2946: push    0FFFFFFFFh
0x6F2948: sub     esi, 20h ; ' '
0x6F294B: push    0
0x6F294D: lea     ecx, [esi+4]
0x6F2950: sub     edi, 20h ; ' '
0x6F2953: push    ecx
0x6F2954: lea     ecx, [edi+4]
0x6F2957: mov     [edi], eax
0x6F2959: call    sub_414420
0x6F295E: cmp     esi, ebx
0x6F2960: jnz     short loc_6F2943
0x6F2962: mov     eax, edi
0x6F2964: pop     edi
0x6F2965: pop     esi
0x6F2966: pop     ebx
0x6F2967: retn
0x6F2968: mov     eax, [esp+8+arg_8]
0x6F296C: pop     esi
0x6F296D: pop     ebx
0x6F296E: retn
