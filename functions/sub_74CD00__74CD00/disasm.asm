0x74CD00: push    esi
0x74CD01: push    edi
0x74CD02: mov     edi, [esp+8+arg_0]
0x74CD06: push    edi
0x74CD07: mov     esi, ecx
0x74CD09: call    sub_753060
0x74CD0E: mov     eax, [edi+220h]
0x74CD14: push    1
0x74CD16: lea     ecx, [esp+0Ch+arg_0]
0x74CD1A: push    ecx
0x74CD1B: push    4
0x74CD1D: lea     edx, [esi+54h]
0x74CD20: push    edx
0x74CD21: push    eax
0x74CD22: mov     eax, [eax+8]
0x74CD25: mov     [esp+1Ch+arg_0], 4
0x74CD2D: call    eax
0x74CD2F: mov     edi, [edi+220h]
0x74CD35: mov     edx, [edi+8]
0x74CD38: push    1
0x74CD3A: lea     ecx, [esp+20h+arg_0]
0x74CD3E: push    ecx
0x74CD3F: push    4
0x74CD41: add     esi, 58h ; 'X'
0x74CD44: push    esi
0x74CD45: push    edi
0x74CD46: mov     [esp+30h+arg_0], 4
0x74CD4E: call    edx
0x74CD50: add     esp, 28h
0x74CD53: pop     edi
0x74CD54: pop     esi
0x74CD55: retn    4
