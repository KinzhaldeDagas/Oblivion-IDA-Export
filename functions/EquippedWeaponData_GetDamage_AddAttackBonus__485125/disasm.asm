0x485125: mov     edx, [esi]
0x485127: mov     eax, [edx+284h]
0x48512D: push    2Ah ; '*'
0x48512F: mov     ecx, esi
0x485131: call    eax
0x485133: mov     [esp+4+arg_24], eax
0x485137: fild    [esp+4+arg_24]
0x48513B: pop     edi
0x48513C: pop     esi
0x48513D: pop     ebx
0x48513E: fadd    [esp-8+arg_4]
0x485141: fstp    [esp-8+arg_24]
0x485145: fld     [esp-8+arg_24]
0x485149: add     esp, 18h
0x48514C: retn    8
