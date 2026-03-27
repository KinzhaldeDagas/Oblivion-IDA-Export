0x663EB0: push    ecx
0x663EB1: mov     edx, [esp+4+arg_0]
0x663EB5: or      al, 0FFh
0x663EB7: test    edx, edx
0x663EB9: mov     [esp+4+var_1], al
0x663EBD: jz      short loc_663ED7
0x663EBF: mov     edx, [edx+0Ch]
0x663EC2: lea     eax, [esp+4+var_1]
0x663EC6: push    eax
0x663EC7: push    edx
0x663EC8: add     ecx, 788h
0x663ECE: call    sub_4D6760
0x663ED3: mov     al, [esp+4+var_1]
0x663ED7: pop     ecx
0x663ED8: retn    4
