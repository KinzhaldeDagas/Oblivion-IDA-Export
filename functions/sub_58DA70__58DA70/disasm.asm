0x58DA70: push    ecx
0x58DA71: push    ebx
0x58DA72: push    ebp
0x58DA73: mov     ebp, ecx
0x58DA75: xor     ebx, ebx
0x58DA77: cmp     [ebp+4], bl
0x58DA7A: push    esi
0x58DA7B: push    edi
0x58DA7C: jnz     short loc_58DAA1
0x58DA7E: cmp     [ebp+5], bl
0x58DA81: jnz     short loc_58DAA1
0x58DA83: mov     edx, [ebp+34h]
0x58DA86: cmp     edx, ebx
0x58DA88: mov     byte ptr [ebp+5], 1
0x58DA8C: jz      short loc_58DAA1
0x58DA8E: mov     edi, edi
0x58DA90: mov     ecx, [edx+8]
0x58DA93: lea     eax, [edx+8]
0x58DA96: mov     edx, [edx]
0x58DA98: call    sub_588B20
0x58DA9D: cmp     edx, ebx
0x58DA9F: jnz     short loc_58DA90
0x58DAA1: push    1; arg1
0x58DAA3: push    ebx; canCreate
0x58DAA4: call    InterfaceManager_GetSingleton
0x58DAA9: add     esp, 8
0x58DAAC: cmp     [eax+98h], ebp
0x58DAB2: jnz     short loc_58DAC0
0x58DAB4: mov     [eax+98h], ebx
0x58DABA: mov     [eax+9Ch], ebx
0x58DAC0: cmp     [eax+0A0h], ebp
0x58DAC6: jnz     short loc_58DAD4
0x58DAC8: mov     [eax+0A0h], ebx
0x58DACE: mov     [eax+0A4h], ebx
0x58DAD4: mov     ecx, ebp
0x58DAD6: mov     byte ptr [ebp+4], 1
0x58DADA: call    sub_589890
0x58DADF: push    ebx
0x58DAE0: push    ebx
0x58DAE1: mov     ecx, ebp
0x58DAE3: call    sub_58D1C0
0x58DAE8: cmp     [ebp+20h], ebx
0x58DAEB: jz      short loc_58DB2E
0x58DAED: lea     esi, [ebp+14h]
0x58DAF0: mov     eax, [esi+4]
0x58DAF3: mov     ecx, [eax]
0x58DAF5: cmp     ecx, ebx
0x58DAF7: mov     [esi+4], ecx
0x58DAFA: jz      short loc_58DB01
0x58DAFC: mov     [ecx+4], ebx
0x58DAFF: jmp     short loc_58DB04
0x58DB01: mov     [esi+8], ebx
0x58DB04: mov     edx, [esi]
0x58DB06: mov     edi, [eax+8]
0x58DB09: push    eax
0x58DB0A: mov     eax, [edx+8]
0x58DB0D: mov     ecx, esi
0x58DB0F: call    eax
0x58DB11: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x58DB15: cmp     edi, ebx
0x58DB17: jz      short loc_58DB29
0x58DB19: mov     ecx, edi; void *
0x58DB1B: call    sub_589BB0
0x58DB20: push    edi
0x58DB21: call    FormHeapFree
0x58DB26: add     esp, 4
0x58DB29: cmp     [ebp+20h], ebx
0x58DB2C: jnz     short loc_58DAF0
0x58DB2E: mov     eax, [ebp+24h]
0x58DB31: cmp     eax, ebx
0x58DB33: jz      short loc_58DB8A
0x58DB35: cmp     [eax+1Ch], ebx
0x58DB38: jz      short loc_58DB8A
0x58DB3A: push    3
0x58DB3C: call    nullsub_returnTrue_0arg
0x58DB41: mov     eax, [ebp+24h]
0x58DB44: mov     ecx, [eax+1Ch]
0x58DB47: mov     edx, [ecx]
0x58DB49: mov     edx, [edx+88h]
0x58DB4F: add     esp, 4
0x58DB52: push    eax
0x58DB53: lea     eax, [esp+18h+var_4]
0x58DB57: push    eax
0x58DB58: call    edx
0x58DB5A: mov     eax, [esp+14h+var_4]
0x58DB5E: cmp     eax, ebx
0x58DB60: jz      short loc_58DB80
0x58DB62: mov     esi, eax
0x58DB64: add     eax, 4
0x58DB67: push    eax; lpAddend
0x58DB68: call    dword ptr ds:0A2807Ch
0x58DB6E: test    eax, eax
0x58DB70: jnz     short loc_58DB80
0x58DB72: cmp     esi, ebx
0x58DB74: jz      short loc_58DB80
0x58DB76: mov     eax, [esi]
0x58DB78: mov     edx, [eax]
0x58DB7A: push    1
0x58DB7C: mov     ecx, esi
0x58DB7E: call    edx
0x58DB80: push    2
0x58DB82: call    nullsub_returnTrue_0arg
0x58DB87: add     esp, 4
0x58DB8A: cmp     [ebp+3Ch], ebx
0x58DB8D: jz      short loc_58DBCA
0x58DB8F: lea     esi, [ebp+30h]
0x58DB92: mov     eax, [esi+4]
0x58DB95: mov     ecx, [eax]
0x58DB97: cmp     ecx, ebx
0x58DB99: mov     [esi+4], ecx
0x58DB9C: jz      short loc_58DBA3
0x58DB9E: mov     [ecx+4], ebx
0x58DBA1: jmp     short loc_58DBA6
0x58DBA3: mov     [esi+8], ebx
0x58DBA6: mov     edx, [esi]
0x58DBA8: mov     edi, [eax+8]
0x58DBAB: push    eax
0x58DBAC: mov     eax, [edx+8]
0x58DBAF: mov     ecx, esi
0x58DBB1: call    eax
0x58DBB3: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x58DBB7: cmp     edi, ebx
0x58DBB9: jz      short loc_58DBC5
0x58DBBB: mov     edx, [edi]
0x58DBBD: mov     eax, [edx]
0x58DBBF: push    1
0x58DBC1: mov     ecx, edi
0x58DBC3: call    eax
0x58DBC5: cmp     [ebp+3Ch], ebx
0x58DBC8: jnz     short loc_58DB92
0x58DBCA: pop     edi
0x58DBCB: pop     esi
0x58DBCC: pop     ebp
0x58DBCD: pop     ebx
0x58DBCE: pop     ecx
0x58DBCF: retn
