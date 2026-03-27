0x737730: mov     eax, [esp+arg_0]
0x737734: push    offset a_bmp; ".bmp"
0x737739: push    eax
0x73773A: call    j_CRT_strcmp
0x73773F: add     esp, 8
0x737742: test    eax, eax
0x737744: setz    al
0x737747: retn    4
