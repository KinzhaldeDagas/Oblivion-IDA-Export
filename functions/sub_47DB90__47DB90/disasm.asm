0x47DB90: push    ebx
0x47DB91: mov     ebx, [esp+4+arg_0]
0x47DB95: push    esi
0x47DB96: push    edi
0x47DB97: mov     edi, ecx
0x47DB99: mov     eax, [edi]
0x47DB9B: mov     edx, [eax+4]
0x47DB9E: push    ebx
0x47DB9F: call    edx
0x47DBA1: mov     ecx, [edi+8]
0x47DBA4: mov     esi, [ecx+eax*4]
0x47DBA7: test    esi, esi
0x47DBA9: jz      short loc_47DBC8
0x47DBAB: jmp     short loc_47DBB0
0x47DBAD: align 10h
0x47DBB0: mov     eax, [esi+4]
0x47DBB3: mov     edx, [edi]
0x47DBB5: mov     edx, [edx+8]
0x47DBB8: push    eax
0x47DBB9: push    ebx
0x47DBBA: mov     ecx, edi
0x47DBBC: call    edx
0x47DBBE: test    al, al
0x47DBC0: jnz     short loc_47DBD0
0x47DBC2: mov     esi, [esi]
0x47DBC4: test    esi, esi
0x47DBC6: jnz     short loc_47DBB0
0x47DBC8: pop     edi
0x47DBC9: pop     esi
0x47DBCA: xor     al, al
0x47DBCC: pop     ebx
0x47DBCD: retn    8
0x47DBD0: mov     ecx, [esi+8]
0x47DBD3: mov     eax, [esp+0Ch+arg_4]
0x47DBD7: mov     [eax], ecx
0x47DBD9: mov     edx, [esi+0Ch]
0x47DBDC: mov     [eax+4], edx
0x47DBDF: mov     ecx, [esi+10h]
0x47DBE2: pop     edi
0x47DBE3: pop     esi
0x47DBE4: mov     [eax+8], ecx
0x47DBE7: mov     al, 1
0x47DBE9: pop     ebx
0x47DBEA: retn    8
