0x453450: push    ecx
0x453451: mov     edx, [esp+4+arg_0]
0x453455: mov     ecx, [ecx]
0x453457: lea     eax, [esp+4+var_4]
0x45345A: push    eax
0x45345B: push    edx
0x45345C: mov     [esp+0Ch+var_4], 0
0x453464: call    NiTMap_GetAt
0x453469: cmp     [esp+4+var_4], 0
0x45346D: setnz   al
0x453470: pop     ecx
0x453471: retn    4
