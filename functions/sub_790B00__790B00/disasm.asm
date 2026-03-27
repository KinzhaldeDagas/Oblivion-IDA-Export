0x790B00: mov     ecx, ds:0B429E4h
0x790B06: mov     eax, ds:0B429E0h
0x790B0B: sub     esp, 8
0x790B0E: cmp     eax, ecx
0x790B10: push    ebx
0x790B11: push    esi
0x790B12: push    edi
0x790B13: mov     ebx, ecx
0x790B15: jbe     short loc_790B27
0x790B17: call    __invalid_parameter_noinfo
0x790B1C: mov     ecx, ds:0B429E4h
0x790B22: mov     eax, ds:0B429E0h
0x790B27: cmp     eax, ecx
0x790B29: mov     esi, offset unk_B429DC
0x790B2E: mov     edi, eax
0x790B30: jbe     short loc_790B37
0x790B32: call    __invalid_parameter_noinfo
0x790B37: push    ebx; Src
0x790B38: push    esi; int
0x790B39: push    edi; Dst
0x790B3A: mov     eax, offset unk_B429DC
0x790B3F: push    eax; int
0x790B40: lea     eax, [esp+24h+var_8]
0x790B44: push    eax; int
0x790B45: mov     ecx, offset unk_B429DC
0x790B4A: call    sub_439050
0x790B4F: pop     edi
0x790B50: pop     esi
0x790B51: pop     ebx
0x790B52: add     esp, 8
0x790B55: retn
