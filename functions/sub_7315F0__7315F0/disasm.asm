0x7315F0: mov     eax, ds:0B3FFB4h
0x7315F5: push    esi
0x7315F6: mov     esi, ecx
0x7315F8: mov     ecx, eax
0x7315FA: add     eax, 1
0x7315FD: test    ecx, ecx
0x7315FF: mov     ds:0B3FFB4h, eax
0x731604: jnz     short loc_731618
0x731606: push    offset sub_731290
0x73160B: push    offset sub_730D80
0x731610: call    sub_747C20
0x731615: add     esp, 8
0x731618: mov     eax, esi
0x73161A: pop     esi
0x73161B: retn
