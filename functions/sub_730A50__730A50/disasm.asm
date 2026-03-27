0x730A50: push    esi
0x730A51: push    edi
0x730A52: mov     edi, [esp+8+Size]
0x730A56: push    edi; Size
0x730A57: mov     esi, ecx
0x730A59: call    sub_721610
0x730A5E: mov     eax, [edi+21Ch]
0x730A64: mov     edx, [eax+4]
0x730A67: push    1
0x730A69: lea     ecx, [esp+0Ch+Size]
0x730A6D: push    ecx
0x730A6E: push    4
0x730A70: add     esi, 0Ch
0x730A73: push    esi
0x730A74: push    eax
0x730A75: mov     [esp+1Ch+Size], 4
0x730A7D: call    edx
0x730A7F: add     esp, 14h
0x730A82: pop     edi
0x730A83: pop     esi
0x730A84: retn    4
