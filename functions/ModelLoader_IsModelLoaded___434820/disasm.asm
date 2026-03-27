0x434820: push    ecx
0x434821: mov     ecx, [ecx]
0x434823: lea     edx, [esp+4+var_4]
0x434826: push    edx
0x434827: mov     edx, [esp+8+arg_0]
0x43482B: mov     [esp+8+var_4], 0
0x434833: mov     eax, [ecx]
0x434835: mov     eax, [eax+4]
0x434838: push    edx
0x434839: call    eax
0x43483B: neg     al
0x43483D: sbb     eax, eax
0x43483F: and     eax, [esp+4+var_4]
0x434842: pop     ecx
0x434843: retn    4
