0x7962F0: push    esi
0x7962F1: push    edi
0x7962F2: mov     edi, [esp+8+arg_0]
0x7962F6: lea     esi, [ecx+88h]
0x7962FC: push    edi; int
0x7962FD: mov     ecx, esi; int
0x7962FF: call    sub_785F30
0x796304: lea     eax, [edi+4]
0x796307: push    eax; int
0x796308: mov     ecx, esi; int
0x79630A: call    sub_785F30
0x79630F: add     edi, 8
0x796312: push    edi; int
0x796313: mov     ecx, esi; int
0x796315: call    sub_785F30
0x79631A: pop     edi
0x79631B: pop     esi
0x79631C: retn    4
