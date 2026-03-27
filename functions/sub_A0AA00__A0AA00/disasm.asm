0xA0AA00: mov     eax, dword_B40818
0xA0AA05: mov     ecx, eax
0xA0AA07: add     eax, 1
0xA0AA0A: test    ecx, ecx
0xA0AA0C: mov     dword_B40818, eax
0xA0AA11: jnz     short locret_A0AA25
0xA0AA13: push    offset sub_749060
0xA0AA18: push    offset sub_748D20
0xA0AA1D: call    sub_747C40
0xA0AA22: add     esp, 8
0xA0AA25: retn
