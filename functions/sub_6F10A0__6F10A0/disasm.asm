0x6F10A0: push    esi
0x6F10A1: mov     esi, ecx
0x6F10A3: mov     eax, [esi+4]
0x6F10A6: test    eax, eax
0x6F10A8: push    edi
0x6F10A9: mov     edi, [esp+8+arg_0]
0x6F10AD: jz      short loc_6F10C8
0x6F10AF: mov     ecx, [esi+8]
0x6F10B2: sub     ecx, eax
0x6F10B4: mov     eax, 2AAAAAABh
0x6F10B9: imul    ecx
0x6F10BB: sar     edx, 1
0x6F10BD: mov     eax, edx
0x6F10BF: shr     eax, 1Fh
0x6F10C2: add     eax, edx
0x6F10C4: cmp     edi, eax
0x6F10C6: jb      short loc_6F10CD
0x6F10C8: call    __invalid_parameter_noinfo
0x6F10CD: mov     ecx, [esi+4]
0x6F10D0: lea     eax, [edi+edi*2]
0x6F10D3: pop     edi
0x6F10D4: lea     eax, [ecx+eax*4]
0x6F10D7: pop     esi
0x6F10D8: retn    4
