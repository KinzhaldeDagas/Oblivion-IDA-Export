0x714BF0: push    esi
0x714BF1: push    edi
0x714BF2: mov     edi, [esp+8+arg_0]
0x714BF6: mov     eax, [edi+220h]
0x714BFC: mov     edx, [eax+8]
0x714BFF: mov     esi, ecx
0x714C01: push    1
0x714C03: lea     ecx, [esp+0Ch+arg_0]
0x714C07: push    ecx
0x714C08: push    4
0x714C0A: push    esi
0x714C0B: push    eax
0x714C0C: mov     [esp+1Ch+arg_0], 4
0x714C14: call    edx
0x714C16: mov     eax, [edi+220h]
0x714C1C: mov     edx, [eax+8]
0x714C1F: push    1
0x714C21: lea     ecx, [esp+20h+arg_0]
0x714C25: push    ecx
0x714C26: push    4
0x714C28: add     esi, 4
0x714C2B: push    esi
0x714C2C: push    eax
0x714C2D: mov     [esp+30h+arg_0], 4
0x714C35: call    edx
0x714C37: add     esp, 28h
0x714C3A: pop     edi
0x714C3B: pop     esi
0x714C3C: retn    4
