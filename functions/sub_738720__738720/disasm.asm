0x738720: push    esi
0x738721: mov     esi, ecx
0x738723: mov     eax, [esi+8]
0x738726: push    edi
0x738727: mov     edi, [esp+8+arg_0]
0x73872B: push    eax
0x73872C: mov     ecx, edi
0x73872E: call    sub_713720
0x738733: mov     eax, [edi+220h]
0x738739: mov     edx, [eax+8]
0x73873C: push    1
0x73873E: lea     ecx, [esp+0Ch+arg_0]
0x738742: push    ecx
0x738743: push    4
0x738745: add     esi, 0Ch
0x738748: push    esi
0x738749: push    eax
0x73874A: mov     [esp+1Ch+arg_0], 4
0x738752: call    edx
0x738754: add     esp, 14h
0x738757: pop     edi
0x738758: pop     esi
0x738759: retn    4
