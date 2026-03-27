0x901B80: mov     al, [ecx+84h]
0x901B86: test    al, al
0x901B88: jz      short loc_901B8F
0x901B8A: jmp     sub_93F080
0x901B8F: mov     edx, [esp+arg_0]
0x901B93: push    edx
0x901B94: add     ecx, 30h ; '0'
0x901B97: push    ecx
0x901B98: call    sub_933E10
0x901B9D: add     esp, 8
0x901BA0: retn    4
