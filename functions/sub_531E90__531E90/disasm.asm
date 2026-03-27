0x531E90: push    esi
0x531E91: mov     esi, ecx
0x531E93: mov     ecx, [esi]
0x531E95: test    ecx, ecx
0x531E97: push    edi
0x531E98: mov     edi, [esp+8+arg_0]
0x531E9C: jz      short loc_531ECA
0x531E9E: mov     eax, [ecx]
0x531EA0: mov     edx, [eax+5Ch]
0x531EA3: push    edi
0x531EA4: call    edx
0x531EA6: test    edi, edi
0x531EA8: jz      short loc_531ECA
0x531EAA: push    ebx
0x531EAB: mov     ebx, [esi]
0x531EAD: push    19h
0x531EAF: push    2Eh ; '.'
0x531EB1: push    2Eh ; '.'
0x531EB3: push    0FFh
0x531EB8: call    sub_8AEB80
0x531EBD: add     esp, 10h
0x531EC0: push    eax
0x531EC1: push    ebx
0x531EC2: mov     ecx, edi
0x531EC4: call    sub_88BB60
0x531EC9: pop     ebx
0x531ECA: mov     ecx, [esi+4]
0x531ECD: test    ecx, ecx
0x531ECF: jz      short loc_531EFC
0x531ED1: mov     eax, [ecx]
0x531ED3: mov     edx, [eax+5Ch]
0x531ED6: push    edi
0x531ED7: call    edx
0x531ED9: test    edi, edi
0x531EDB: jz      short loc_531EFC
0x531EDD: mov     esi, [esi+4]
0x531EE0: push    19h
0x531EE2: push    2Eh ; '.'
0x531EE4: push    2Eh ; '.'
0x531EE6: push    0FFh
0x531EEB: call    sub_8AEB80
0x531EF0: add     esp, 10h
0x531EF3: push    eax
0x531EF4: push    esi
0x531EF5: mov     ecx, edi
0x531EF7: call    sub_88BB60
0x531EFC: pop     edi
0x531EFD: pop     esi
0x531EFE: retn    4
