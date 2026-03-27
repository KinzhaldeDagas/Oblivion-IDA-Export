0x434870: push    ecx
0x434871: mov     ecx, [ecx+4]
0x434874: lea     edx, [esp+4+var_4]
0x434877: push    edx
0x434878: mov     edx, [esp+8+arg_0]
0x43487C: mov     [esp+8+var_4], 0
0x434884: mov     eax, [ecx]
0x434886: mov     eax, [eax+4]
0x434889: push    edx
0x43488A: call    eax
0x43488C: neg     al
0x43488E: sbb     eax, eax
0x434890: and     eax, [esp+4+var_4]
0x434893: pop     ecx
0x434894: retn    4
