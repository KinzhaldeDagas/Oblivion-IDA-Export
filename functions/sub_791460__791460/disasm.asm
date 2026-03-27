0x791460: push    ecx
0x791461: push    ebx
0x791462: push    ebp
0x791463: mov     ebp, [esp+0Ch+arg_8]
0x791467: push    esi
0x791468: mov     esi, ecx
0x79146A: push    edi
0x79146B: mov     edi, [esi+4]
0x79146E: test    edi, edi
0x791470: jz      short loc_79148B
0x791472: mov     ebx, [esi+8]
0x791475: mov     ecx, ebx
0x791477: sub     ecx, edi
0x791479: mov     eax, 2AAAAAABh
0x79147E: imul    ecx
0x791480: sar     edx, 1
0x791482: mov     eax, edx
0x791484: shr     eax, 1Fh
0x791487: add     eax, edx
0x791489: jnz     short loc_791493
0x79148B: mov     ebx, [esp+14h+arg_4]
0x79148F: xor     edi, edi
0x791491: jmp     short loc_7914C1
0x791493: cmp     edi, ebx
0x791495: jbe     short loc_79149C
0x791497: call    __invalid_parameter_noinfo
0x79149C: mov     ebx, [esp+14h+arg_4]
0x7914A0: test    ebx, ebx
0x7914A2: jz      short loc_7914A8
0x7914A4: cmp     ebx, esi
0x7914A6: jz      short loc_7914AD
0x7914A8: call    __invalid_parameter_noinfo
0x7914AD: mov     ecx, ebp
0x7914AF: sub     ecx, edi
0x7914B1: mov     eax, 2AAAAAABh
0x7914B6: imul    ecx
0x7914B8: sar     edx, 1
0x7914BA: mov     edi, edx
0x7914BC: shr     edi, 1Fh
0x7914BF: add     edi, edx
0x7914C1: mov     ecx, [esp+14h+arg_C]
0x7914C5: push    ecx
0x7914C6: push    1
0x7914C8: push    ebp
0x7914C9: push    ebx
0x7914CA: mov     ecx, esi
0x7914CC: call    sub_790E90
0x7914D1: mov     ebx, [esi+4]
0x7914D4: cmp     ebx, [esi+8]
0x7914D7: jbe     short loc_7914DE
0x7914D9: call    __invalid_parameter_noinfo
0x7914DE: lea     edx, [edi+edi*2]
0x7914E1: lea     edi, [ebx+edx*4]
0x7914E4: cmp     edi, [esi+8]
0x7914E7: mov     [esp+14h+arg_8], ebx
0x7914EB: ja      short loc_7914F2
0x7914ED: cmp     edi, [esi+4]
0x7914F0: jnb     short loc_7914F7
0x7914F2: call    __invalid_parameter_noinfo
0x7914F7: mov     eax, [esp+14h+arg_0]
0x7914FB: mov     [eax+4], edi
0x7914FE: pop     edi
0x7914FF: mov     [eax], esi
0x791501: pop     esi
0x791502: pop     ebp
0x791503: pop     ebx
0x791504: pop     ecx
0x791505: retn    10h
