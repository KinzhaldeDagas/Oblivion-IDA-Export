0x6DEE40: push    esi
0x6DEE41: push    edi
0x6DEE42: mov     edi, [esp+8+arg_0]
0x6DEE46: push    edi
0x6DEE47: mov     esi, ecx
0x6DEE49: call    sub_6EC5B0
0x6DEE4E: mov     eax, [edi+220h]
0x6DEE54: mov     edx, [eax+8]
0x6DEE57: push    1
0x6DEE59: lea     ecx, [esp+0Ch+arg_0]
0x6DEE5D: push    ecx
0x6DEE5E: push    2
0x6DEE60: add     esi, 40h ; '@'
0x6DEE63: push    esi
0x6DEE64: push    eax
0x6DEE65: mov     [esp+1Ch+arg_0], 2
0x6DEE6D: call    edx
0x6DEE6F: add     esp, 14h
0x6DEE72: pop     edi
0x6DEE73: pop     esi
0x6DEE74: retn    4
