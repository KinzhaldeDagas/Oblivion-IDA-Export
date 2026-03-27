0x85DAC0: push    0FFFFFFFFh
0x85DAC2: push    offset SEH_85E160
0x85DAC7: mov     eax, large fs:0
0x85DACD: push    eax
0x85DACE: push    ebx
0x85DACF: push    ebp
0x85DAD0: push    esi
0x85DAD1: push    edi
0x85DAD2: mov     eax, ds:0B30AACh
0x85DAD7: xor     eax, esp
0x85DAD9: push    eax
0x85DADA: lea     eax, [esp+20h+var_C]
0x85DADE: mov     large fs:0, eax
0x85DAE4: mov     esi, ecx
0x85DAE6: mov     ebx, [esp+20h+arg_8]
0x85DAEA: mov     eax, [ebx+10h]
0x85DAED: mov     edi, ds:0B477E0h
0x85DAF3: push    eax
0x85DAF4: call    sub_848C40
0x85DAF9: mov     ebp, [ebx+0Ch]
0x85DAFC: push    ebp
0x85DAFD: mov     ecx, esi
0x85DAFF: call    sub_848E50
0x85DB04: mov     ebx, [ebx+10h]
0x85DB07: mov     ecx, [esp+20h+arg_0]
0x85DB0B: mov     eax, [esi]
0x85DB0D: mov     edx, [eax+0BCh]
0x85DB13: push    ebx
0x85DB14: push    ebp
0x85DB15: push    ecx
0x85DB16: mov     ecx, esi
0x85DB18: call    edx
0x85DB1A: mov     eax, [edi+24h]
0x85DB1D: mov     ebp, [esp+20h+arg_C]
0x85DB21: mov     ebx, [eax]
0x85DB23: mov     edx, [ebp+0]
0x85DB26: mov     eax, [edx+88h]
0x85DB2C: push    0
0x85DB2E: mov     ecx, ebp
0x85DB30: mov     [esp+24h+arg_8], ebx
0x85DB34: call    eax
0x85DB36: mov     ebx, [ebx+4]
0x85DB39: cmp     ebx, eax
0x85DB3B: mov     [esp+20h+arg_0], eax
0x85DB3F: jz      short loc_85DB7A
0x85DB41: test    ebx, ebx
0x85DB43: jz      short loc_85DB65
0x85DB45: lea     ecx, [ebx+4]
0x85DB48: push    ecx; lpAddend
0x85DB49: call    dword ptr ds:0A2807Ch
0x85DB4F: test    eax, eax
0x85DB51: jnz     short loc_85DB61
0x85DB53: test    ebx, ebx
0x85DB55: jz      short loc_85DB61
0x85DB57: mov     edx, [ebx]
0x85DB59: mov     eax, [edx]
0x85DB5B: push    1
0x85DB5D: mov     ecx, ebx
0x85DB5F: call    eax
0x85DB61: mov     eax, [esp+20h+arg_0]
0x85DB65: test    eax, eax
0x85DB67: mov     ecx, [esp+20h+arg_8]
0x85DB6B: mov     [ecx+4], eax
0x85DB6E: jz      short loc_85DB7A
0x85DB70: add     eax, 4
0x85DB73: push    eax; lpAddend
0x85DB74: call    dword ptr ds:0A28078h
0x85DB7A: mov     edx, [esp+20h+arg_8]
0x85DB7E: push    ebp
0x85DB7F: push    edx
0x85DB80: mov     ecx, esi
0x85DB82: call    sub_848FA0
0x85DB87: mov     eax, [edi+24h]
0x85DB8A: mov     ebx, [eax+4]
0x85DB8D: push    0
0x85DB8F: push    ebp
0x85DB90: mov     ecx, esi
0x85DB92: mov     [esp+28h+arg_8], ebx
0x85DB96: call    sub_848FD0
0x85DB9B: mov     ebx, [ebx+4]
0x85DB9E: cmp     ebx, eax
0x85DBA0: mov     [esp+20h+arg_0], eax
0x85DBA4: jz      short loc_85DBDF
0x85DBA6: test    ebx, ebx
0x85DBA8: jz      short loc_85DBCA
0x85DBAA: lea     ecx, [ebx+4]
0x85DBAD: push    ecx; lpAddend
0x85DBAE: call    dword ptr ds:0A2807Ch
0x85DBB4: test    eax, eax
0x85DBB6: jnz     short loc_85DBC6
0x85DBB8: test    ebx, ebx
0x85DBBA: jz      short loc_85DBC6
0x85DBBC: mov     edx, [ebx]
0x85DBBE: mov     eax, [edx]
0x85DBC0: push    1
0x85DBC2: mov     ecx, ebx
0x85DBC4: call    eax
0x85DBC6: mov     eax, [esp+20h+arg_0]
0x85DBCA: test    eax, eax
0x85DBCC: mov     ecx, [esp+20h+arg_8]
0x85DBD0: mov     [ecx+4], eax
0x85DBD3: jz      short loc_85DBDF
0x85DBD5: add     eax, 4
0x85DBD8: push    eax; lpAddend
0x85DBD9: call    dword ptr ds:0A28078h
0x85DBDF: mov     edx, [esp+20h+arg_8]
0x85DBE3: push    ebp
0x85DBE4: push    edx
0x85DBE5: mov     ecx, esi
0x85DBE7: call    sub_848FA0
0x85DBEC: cmp     byte ptr [esp+20h+arg_10], 0
0x85DBF1: jnz     short loc_85DC2E
0x85DBF3: mov     ebx, 1
0x85DBF8: add     [edi+60h], ebx
0x85DBFB: mov     [esp+20h+arg_10], edi
0x85DBFF: mov     ecx, [esi+38h]
0x85DC02: lea     eax, [esp+20h+arg_10]
0x85DC06: push    eax
0x85DC07: push    ecx
0x85DC08: lea     ecx, [esi+40h]
0x85DC0B: mov     [esp+28h+var_4], 0
0x85DC13: call    sub_76CE40
0x85DC18: or      eax, 0FFFFFFFFh
0x85DC1B: add     [edi+60h], eax
0x85DC1E: mov     [esp+20h+var_4], eax
0x85DC22: jnz     short loc_85DC2B
0x85DC24: mov     ecx, edi
0x85DC26: call    sub_7604D0
0x85DC2B: add     [esi+38h], ebx
0x85DC2E: mov     ecx, [esp+20h+var_C]
0x85DC32: mov     large fs:0, ecx
0x85DC39: pop     ecx
0x85DC3A: pop     edi
0x85DC3B: pop     esi
0x85DC3C: pop     ebp
0x85DC3D: pop     ebx
0x85DC3E: add     esp, 0Ch
0x85DC41: retn    14h
