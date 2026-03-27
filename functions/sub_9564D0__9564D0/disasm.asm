0x9564D0: push    esi
0x9564D1: mov     esi, ecx
0x9564D3: mov     eax, [esi+8]
0x9564D6: mov     ecx, ds:0BA7D98h
0x9564DC: mov     edx, [ecx]
0x9564DE: push    edi
0x9564DF: shl     eax, 1
0x9564E1: push    25h ; '%'
0x9564E3: push    eax
0x9564E4: call    dword ptr [edx]
0x9564E6: mov     ecx, [esi+10h]
0x9564E9: mov     edi, eax
0x9564EB: mov     eax, [esi+8]
0x9564EE: push    eax
0x9564EF: push    ecx
0x9564F0: add     eax, edi
0x9564F2: push    eax
0x9564F3: call    sub_8B1890
0x9564F8: mov     edx, [esi+8]
0x9564FB: shl     edx, 1
0x9564FD: mov     [esi+8], edx
0x956500: mov     ecx, ds:0BA7D98h
0x956506: mov     edx, [esi+10h]
0x956509: mov     eax, [ecx]
0x95650B: add     esp, 0Ch
0x95650E: push    edx
0x95650F: call    dword ptr [eax+4]
0x956512: mov     [esi+10h], edi
0x956515: pop     edi
0x956516: pop     esi
0x956517: retn
