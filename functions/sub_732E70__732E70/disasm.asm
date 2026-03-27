0x732E70: push    esi
0x732E71: push    edi
0x732E72: mov     edi, [esp+8+arg_0]
0x732E76: push    edi
0x732E77: mov     esi, ecx
0x732E79: call    sub_729450
0x732E7E: mov     eax, [edi+21Ch]
0x732E84: mov     edx, [eax+4]
0x732E87: push    1
0x732E89: lea     ecx, [esp+0Ch+arg_0]
0x732E8D: push    ecx
0x732E8E: push    2
0x732E90: add     esi, 40h ; '@'
0x732E93: push    esi
0x732E94: push    eax
0x732E95: mov     [esp+1Ch+arg_0], 2
0x732E9D: call    edx
0x732E9F: add     esp, 14h
0x732EA2: pop     edi
0x732EA3: pop     esi
0x732EA4: retn    4
