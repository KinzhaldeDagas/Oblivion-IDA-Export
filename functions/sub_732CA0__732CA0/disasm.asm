0x732CA0: push    esi
0x732CA1: push    edi
0x732CA2: mov     edi, [esp+8+arg_0]
0x732CA6: push    edi
0x732CA7: mov     esi, ecx
0x732CA9: call    sub_7299A0
0x732CAE: movzx   edx, word ptr [esi+8]
0x732CB2: mov     eax, [edi+220h]
0x732CB8: push    1
0x732CBA: lea     ecx, [esp+0Ch+arg_0]
0x732CBE: push    ecx
0x732CBF: mov     ecx, [esi+40h]
0x732CC2: push    edx
0x732CC3: mov     edx, [eax+8]
0x732CC6: push    ecx
0x732CC7: push    eax
0x732CC8: mov     [esp+1Ch+arg_0], 1
0x732CD0: call    edx
0x732CD2: add     esp, 14h
0x732CD5: pop     edi
0x732CD6: pop     esi
0x732CD7: retn    4
