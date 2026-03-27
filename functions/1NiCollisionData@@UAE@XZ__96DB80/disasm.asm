0x96DB80: push    esi
0x96DB81: mov     esi, ecx
0x96DB83: mov     eax, [esi+40h]
0x96DB86: push    eax
0x96DB87: mov     dword ptr [esi], offset ??_7NiCollisionData@@6B@; const NiCollisionData::`vftable'
0x96DB8D: call    FormHeapFree
0x96DB92: mov     ecx, [esi+44h]
0x96DB95: push    ecx
0x96DB96: call    FormHeapFree
0x96DB9B: mov     ecx, [esi+2Ch]
0x96DB9E: add     esp, 8
0x96DBA1: test    ecx, ecx
0x96DBA3: jz      short loc_96DBAE
0x96DBA5: mov     edx, [ecx]
0x96DBA7: mov     eax, [edx+8]
0x96DBAA: push    1
0x96DBAC: call    eax
0x96DBAE: mov     ecx, [esi+30h]
0x96DBB1: test    ecx, ecx
0x96DBB3: jz      short loc_96DBBE
0x96DBB5: mov     edx, [ecx]
0x96DBB7: mov     eax, [edx+8]
0x96DBBA: push    1
0x96DBBC: call    eax
0x96DBBE: mov     ecx, esi
0x96DBC0: call    sub_96D870
0x96DBC5: mov     ecx, esi
0x96DBC7: pop     esi
0x96DBC8: jmp     sub_711C80
