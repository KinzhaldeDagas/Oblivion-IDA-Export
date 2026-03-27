0x77DB20: sub     esp, 8
0x77DB23: mov     eax, [esp+8+arg_4]
0x77DB27: push    ebx
0x77DB28: push    ebp
0x77DB29: push    esi
0x77DB2A: push    edi
0x77DB2B: mov     edi, [esp+18h+arg_0]
0x77DB2F: mov     esi, [edi+8]
0x77DB32: mov     ebx, ecx
0x77DB34: xor     ecx, ecx
0x77DB36: cmp     eax, [edi+1Ch]
0x77DB39: mov     [esp+18h+var_4], ebx
0x77DB3D: mov     [esp+18h+var_8], ecx
0x77DB41: jnb     short loc_77DB4F
0x77DB43: mov     edx, [edi+20h]
0x77DB46: mov     eax, [edx+eax*4]
0x77DB49: mov     [esp+18h+arg_0], eax
0x77DB4D: jmp     short loc_77DB53
0x77DB4F: mov     [esp+18h+arg_0], ecx
0x77DB53: cmp     esi, ecx
0x77DB55: jnz     short loc_77DB61
0x77DB57: mov     esi, [esp+18h+arg_0]
0x77DB5B: or      esi, 80000000h
0x77DB61: cmp     [edi+10h], cl
0x77DB64: mov     [esp+18h+arg_4], ecx
0x77DB68: jz      short loc_77DB78
0x77DB6A: or      esi, 40000000h
0x77DB70: mov     [esp+18h+arg_4], 80000000h
0x77DB78: lea     ecx, [esp+18h+var_8]
0x77DB7C: push    ecx
0x77DB7D: lea     ebp, [ebx+0Ch]
0x77DB80: push    esi
0x77DB81: mov     ecx, ebp
0x77DB83: call    NiTMap_GetAt
0x77DB88: test    al, al
0x77DB8A: jz      short loc_77DB98
0x77DB8C: mov     ebx, [esp+18h+var_8]
0x77DB90: test    ebx, ebx
0x77DB92: jnz     short loc_77DBBC
0x77DB94: mov     ebx, [esp+18h+var_4]
0x77DB98: mov     edx, [esp+18h+arg_4]
0x77DB9C: mov     eax, [ebx+8]
0x77DB9F: push    0
0x77DBA1: push    edx
0x77DBA2: push    esi
0x77DBA3: push    eax
0x77DBA4: push    10000h
0x77DBA9: call    sub_77D900
0x77DBAE: add     esp, 14h
0x77DBB1: mov     ebx, eax
0x77DBB3: push    ebx; a3
0x77DBB4: push    esi; a2
0x77DBB5: mov     ecx, ebp; this
0x77DBB7: call    NiTMap_SetAt
0x77DBBC: mov     ecx, [edi+1Ch]
0x77DBBF: mov     eax, [edi+18h]
0x77DBC2: mov     esi, [esp+18h+arg_0]
0x77DBC6: cmp     ecx, 1
0x77DBC9: setnbe  cl
0x77DBCC: imul    eax, esi
0x77DBCF: push    ecx
0x77DBD0: push    eax
0x77DBD1: mov     ecx, ebx
0x77DBD3: call    sub_77D720
0x77DBD8: mov     ecx, eax
0x77DBDA: mov     eax, [ecx+0Ch]
0x77DBDD: xor     edx, edx
0x77DBDF: div     esi
0x77DBE1: mov     [edi+34h], eax
0x77DBE4: pop     edi
0x77DBE5: pop     esi
0x77DBE6: pop     ebp
0x77DBE7: mov     eax, ecx
0x77DBE9: pop     ebx
0x77DBEA: add     esp, 8
0x77DBED: retn    8
