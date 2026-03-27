0x8DBC40: push    esi
0x8DBC41: push    edi
0x8DBC42: mov     edi, [esp+8+arg_0]
0x8DBC46: mov     eax, [edi]
0x8DBC48: mov     esi, ecx
0x8DBC4A: push    esi
0x8DBC4B: push    8
0x8DBC4D: push    0
0x8DBC4F: mov     ecx, edi
0x8DBC51: call    dword ptr [eax]
0x8DBC53: mov     eax, [esi+50h]
0x8DBC56: test    eax, eax
0x8DBC58: js      short loc_8DBC82
0x8DBC5A: mov     edx, [edi]
0x8DBC5C: and     eax, 3FFFFFFFh
0x8DBC61: lea     eax, [eax+eax*4]
0x8DBC64: shl     eax, 2
0x8DBC67: push    eax
0x8DBC68: mov     eax, [esi+4Ch]
0x8DBC6B: lea     ecx, [eax+eax*4]
0x8DBC6E: mov     eax, [esi+48h]
0x8DBC71: shl     ecx, 2
0x8DBC74: push    ecx
0x8DBC75: push    eax
0x8DBC76: push    8
0x8DBC78: push    offset aProps; "Props"
0x8DBC7D: mov     ecx, edi
0x8DBC7F: call    dword ptr [edx+4]
0x8DBC82: mov     eax, [esi+38h]
0x8DBC85: test    eax, eax
0x8DBC87: js      short loc_8DBCAB
0x8DBC89: mov     ecx, [esi+30h]
0x8DBC8C: mov     edx, [edi]
0x8DBC8E: and     eax, 3FFFFFFFh
0x8DBC93: shl     eax, 5
0x8DBC96: push    eax
0x8DBC97: mov     eax, [esi+34h]
0x8DBC9A: shl     eax, 5
0x8DBC9D: push    eax
0x8DBC9E: push    ecx
0x8DBC9F: push    8
0x8DBCA1: push    offset aContactpts; "ContactPts"
0x8DBCA6: mov     ecx, edi
0x8DBCA8: call    dword ptr [edx+4]
0x8DBCAB: mov     eax, [esi+24h]
0x8DBCAE: test    eax, eax
0x8DBCB0: js      short loc_8DBCCE
0x8DBCB2: mov     ecx, [esi+1Ch]
0x8DBCB5: mov     edx, [edi]
0x8DBCB7: and     eax, 3FFFFFFFh
0x8DBCBC: push    eax
0x8DBCBD: mov     eax, [esi+20h]
0x8DBCC0: push    eax
0x8DBCC1: push    ecx
0x8DBCC2: push    8
0x8DBCC4: push    offset aContactids; "ContactIds"
0x8DBCC9: mov     ecx, edi
0x8DBCCB: call    dword ptr [edx+4]
0x8DBCCE: mov     edx, [edi]
0x8DBCD0: mov     ecx, edi
0x8DBCD2: call    dword ptr [edx+14h]
0x8DBCD5: pop     edi
0x8DBCD6: pop     esi
0x8DBCD7: retn    4
