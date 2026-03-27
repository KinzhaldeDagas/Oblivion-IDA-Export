0x79A890: push    ebx
0x79A891: mov     ebx, [esp+4+arg_0]
0x79A895: push    ebp
0x79A896: push    esi
0x79A897: mov     esi, [esp+0Ch+arg_4]
0x79A89B: mov     ebp, [esp+0Ch+arg_8]
0x79A89F: mov     ecx, esi
0x79A8A1: sub     ecx, ebx
0x79A8A3: mov     eax, 92492493h
0x79A8A8: imul    ecx
0x79A8AA: add     edx, ecx
0x79A8AC: sar     edx, 5
0x79A8AF: mov     eax, edx
0x79A8B1: shr     eax, 1Fh
0x79A8B4: add     eax, edx
0x79A8B6: lea     ecx, ds:0[eax*8]
0x79A8BD: sub     ecx, eax
0x79A8BF: add     ecx, ecx
0x79A8C1: add     ecx, ecx
0x79A8C3: add     ecx, ecx
0x79A8C5: mov     eax, ebp
0x79A8C7: sub     eax, ecx
0x79A8C9: cmp     ebx, esi
0x79A8CB: mov     edx, esi
0x79A8CD: jz      short loc_79A8E6
0x79A8CF: sub     ebp, esi
0x79A8D1: push    edi
0x79A8D2: sub     edx, 38h ; '8'
0x79A8D5: cmp     edx, ebx
0x79A8D7: lea     edi, [edx+ebp]
0x79A8DA: mov     ecx, 0Eh
0x79A8DF: mov     esi, edx
0x79A8E1: rep movsd
0x79A8E3: jnz     short loc_79A8D2
0x79A8E5: pop     edi
0x79A8E6: pop     esi
0x79A8E7: pop     ebp
0x79A8E8: pop     ebx
0x79A8E9: retn
