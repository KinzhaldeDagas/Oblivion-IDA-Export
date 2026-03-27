0x88DB30: push    ebx
0x88DB31: push    ebp
0x88DB32: mov     ebp, [esp+8+arg_0]
0x88DB36: push    esi
0x88DB37: mov     esi, ecx
0x88DB39: mov     ecx, [esi+94h]
0x88DB3F: xor     eax, eax
0x88DB41: test    ecx, ecx
0x88DB43: push    edi
0x88DB44: jle     short loc_88DB5E
0x88DB46: mov     edx, [esi+90h]
0x88DB4C: lea     esp, [esp+0]
0x88DB50: cmp     [edx], ebp
0x88DB52: jz      short loc_88DBCF
0x88DB54: add     eax, 1
0x88DB57: add     edx, 4
0x88DB5A: cmp     eax, ecx
0x88DB5C: jl      short loc_88DB50
0x88DB5E: or      edi, 0FFFFFFFFh
0x88DB61: push    ecx
0x88DB62: test    edi, edi
0x88DB64: mov     eax, esp
0x88DB66: setnl   bl
0x88DB69: push    ebp
0x88DB6A: mov     ecx, esi
0x88DB6C: mov     [eax], bl
0x88DB6E: call    sub_88D7D0
0x88DB73: test    bl, bl
0x88DB75: jz      short loc_88DBC8
0x88DB77: mov     eax, ds:0BA7A08h
0x88DB7C: test    eax, eax
0x88DB7E: jz      short loc_88DB8D
0x88DB80: push    1
0x88DB82: push    ebp
0x88DB83: push    esi
0x88DB84: call    eax
0x88DB86: add     esp, 0Ch
0x88DB89: test    al, al
0x88DB8B: jz      short loc_88DBC8
0x88DB8D: mov     eax, [esi+90h]
0x88DB93: or      edx, 0FFFFFFFFh
0x88DB96: add     [esi+94h], edx
0x88DB9C: mov     ecx, [esi+94h]
0x88DBA2: mov     ecx, [eax+ecx*4]
0x88DBA5: mov     [eax+edi*4], ecx
0x88DBA8: cmp     [esi+0A4h], edi
0x88DBAE: jle     short loc_88DBC8
0x88DBB0: add     [esi+0A4h], edx
0x88DBB6: mov     eax, [esi+0A4h]
0x88DBBC: mov     esi, [esi+0A0h]
0x88DBC2: mov     edx, [esi+eax*4]
0x88DBC5: mov     [esi+edi*4], edx
0x88DBC8: pop     edi
0x88DBC9: pop     esi
0x88DBCA: pop     ebp
0x88DBCB: pop     ebx
0x88DBCC: retn    4
0x88DBCF: mov     edi, eax
0x88DBD1: jmp     short loc_88DB61
