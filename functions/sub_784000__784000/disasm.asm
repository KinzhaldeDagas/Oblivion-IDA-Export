0x784000: push    esi
0x784001: mov     esi, ecx
0x784003: mov     eax, [esi+4]
0x784006: test    eax, eax
0x784008: push    edi
0x784009: mov     edi, [esp+8+arg_0]
0x78400D: jz      short loc_784029
0x78400F: mov     ecx, [esi+8]
0x784012: sub     ecx, eax
0x784014: mov     eax, 2AAAAAABh
0x784019: imul    ecx
0x78401B: sar     edx, 2
0x78401E: mov     eax, edx
0x784020: shr     eax, 1Fh
0x784023: add     eax, edx
0x784025: cmp     edi, eax
0x784027: jb      short loc_78402E
0x784029: call    __invalid_parameter_noinfo
0x78402E: mov     ecx, [esi+4]
0x784031: lea     eax, [edi+edi*2]
0x784034: pop     edi
0x784035: lea     eax, [ecx+eax*8]
0x784038: pop     esi
0x784039: retn    4
