0x535460: push    esi
0x535461: mov     esi, ecx
0x535463: mov     ecx, [esi+1A0h]
0x535469: test    ecx, ecx
0x53546B: jz      short loc_53547E
0x53546D: mov     eax, [ecx+8]
0x535470: test    eax, eax
0x535472: jz      short loc_53547E
0x535474: add     eax, 14h
0x535477: jz      short loc_53547E
0x535479: mov     edx, [eax+1Ch]
0x53547C: jmp     short loc_535480
0x53547E: xor     edx, edx
0x535480: mov     eax, [esp+4+arg_0]
0x535484: mov     [esi+1A8h], eax
0x53548A: movzx   edx, dx
0x53548D: shl     eax, 10h
0x535490: or      edx, eax
0x535492: test    ecx, ecx
0x535494: pop     esi
0x535495: jz      short loc_5354A6
0x535497: mov     eax, [ecx+8]
0x53549A: test    eax, eax
0x53549C: jz      short loc_5354A6
0x53549E: add     eax, 14h
0x5354A1: jz      short loc_5354A6
0x5354A3: mov     [eax+1Ch], edx
0x5354A6: mov     eax, [ecx]
0x5354A8: mov     edx, [eax+80h]
0x5354AE: call    edx
0x5354B0: retn    4
