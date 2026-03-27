0x757350: push    ebx
0x757351: mov     ebx, [esp+4+arg_0]
0x757355: push    esi
0x757356: push    edi
0x757357: push    ebx
0x757358: mov     edi, ecx
0x75735A: call    sub_75E920
0x75735F: lea     esi, [edi+30h]
0x757362: push    ebx
0x757363: mov     ecx, esi
0x757365: call    sub_709430
0x75736A: mov     eax, [esi]
0x75736C: mov     [esi], eax
0x75736E: mov     ecx, [esi+4]
0x757371: mov     [esi+4], ecx
0x757374: mov     edx, [esi+8]
0x757377: mov     [esi+8], edx
0x75737A: mov     eax, [esi]
0x75737C: lea     ecx, [edi+3Ch]
0x75737F: mov     [ecx], eax
0x757381: mov     edx, [esi+4]
0x757384: mov     [ecx+4], edx
0x757387: mov     eax, [esi+8]
0x75738A: mov     [ecx+8], eax
0x75738D: call    sub_43F350
0x757392: fstp    st
0x757394: pop     edi
0x757395: pop     esi
0x757396: pop     ebx
0x757397: retn    4
