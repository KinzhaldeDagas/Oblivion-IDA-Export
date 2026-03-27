0x749280: mov     eax, ds:0B40818h
0x749285: push    esi
0x749286: mov     esi, ecx
0x749288: mov     ecx, eax
0x74928A: add     eax, 1
0x74928D: test    ecx, ecx
0x74928F: mov     ds:0B40818h, eax
0x749294: jnz     short loc_7492A8
0x749296: push    offset sub_749060
0x74929B: push    offset sub_748D20
0x7492A0: call    sub_747C40
0x7492A5: add     esp, 8
0x7492A8: mov     eax, esi
0x7492AA: pop     esi
0x7492AB: retn
