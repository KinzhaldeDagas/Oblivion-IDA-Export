0x68C170: push    ecx
0x68C171: push    esi
0x68C172: push    edi
0x68C173: mov     edi, [esp+0Ch+arg_0]
0x68C177: lea     eax, [esp+0Ch+var_4]
0x68C17B: push    eax
0x68C17C: push    edi
0x68C17D: mov     esi, ecx
0x68C17F: mov     [esp+14h+var_4], 0
0x68C187: call    sub_68BF60
0x68C18C: test    al, al
0x68C18E: jz      short loc_68C19D
0x68C190: mov     ecx, [esp+0Ch+var_4]
0x68C194: push    ecx
0x68C195: push    edi
0x68C196: mov     ecx, esi
0x68C198: call    sub_68BE80
0x68C19D: pop     edi
0x68C19E: pop     esi
0x68C19F: pop     ecx
0x68C1A0: retn    4
