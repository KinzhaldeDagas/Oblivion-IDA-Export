0x89FDA0: push    ebx
0x89FDA1: push    ebp
0x89FDA2: mov     ebp, [esp+8+arg_0]
0x89FDA6: push    esi
0x89FDA7: mov     esi, ecx
0x89FDA9: push    edi
0x89FDAA: mov     ecx, ebp
0x89FDAC: call    sub_7124A0
0x89FDB1: mov     ecx, ebp
0x89FDB3: mov     edi, eax
0x89FDB5: call    sub_7124A0
0x89FDBA: mov     ebx, eax
0x89FDBC: mov     eax, [esi]
0x89FDBE: mov     edx, [eax+74h]
0x89FDC1: lea     ecx, [esp+10h+arg_0]
0x89FDC5: push    ecx
0x89FDC6: mov     ecx, esi
0x89FDC8: call    edx
0x89FDCA: test    eax, eax
0x89FDCC: jz      short loc_89FDF6
0x89FDCE: test    edi, edi
0x89FDD0: jz      short loc_89FDF6
0x89FDD2: test    ebx, ebx
0x89FDD4: mov     ecx, [edi+8]
0x89FDD7: mov     [eax+4], ecx
0x89FDDA: jz      short loc_89FDF1
0x89FDDC: mov     ebx, [ebx+8]
0x89FDDF: push    ebp
0x89FDE0: mov     ecx, esi
0x89FDE2: mov     [eax+8], ebx
0x89FDE5: call    sub_89D6C0
0x89FDEA: pop     edi
0x89FDEB: pop     esi
0x89FDEC: pop     ebp
0x89FDED: pop     ebx
0x89FDEE: retn    4
0x89FDF1: xor     ebx, ebx
0x89FDF3: mov     [eax+8], ebx
0x89FDF6: push    ebp
0x89FDF7: mov     ecx, esi
0x89FDF9: call    sub_89D6C0
0x89FDFE: pop     edi
0x89FDFF: pop     esi
0x89FE00: pop     ebp
0x89FE01: pop     ebx
0x89FE02: retn    4
