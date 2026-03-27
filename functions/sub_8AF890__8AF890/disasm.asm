0x8AF890: push    ecx
0x8AF891: mov     eax, [ecx+14h]
0x8AF894: cmp     eax, 1
0x8AF897: mov     byte ptr [esp+4+var_4], 0
0x8AF89B: jle     short loc_8AF8B1
0x8AF89D: mov     edx, [esp+4+var_4]
0x8AF8A0: push    edx
0x8AF8A1: dec     eax
0x8AF8A2: push    eax
0x8AF8A3: mov     eax, [ecx+10h]
0x8AF8A6: push    0
0x8AF8A8: push    eax
0x8AF8A9: call    sub_8AF760
0x8AF8AE: add     esp, 10h
0x8AF8B1: pop     ecx
0x8AF8B2: retn
