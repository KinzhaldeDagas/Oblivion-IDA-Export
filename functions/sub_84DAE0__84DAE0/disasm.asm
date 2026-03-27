0x84DAE0: push    0FFFFFFFFh
0x84DAE2: push    offset SEH_882120
0x84DAE7: mov     eax, large fs:0
0x84DAED: push    eax
0x84DAEE: push    ebx
0x84DAEF: push    ebp
0x84DAF0: push    esi
0x84DAF1: push    edi
0x84DAF2: mov     eax, ds:0B30AACh
0x84DAF7: xor     eax, esp
0x84DAF9: push    eax
0x84DAFA: lea     eax, [esp+20h+var_C]
0x84DAFE: mov     large fs:0, eax
0x84DB04: mov     ebx, ecx
0x84DB06: mov     esi, [esp+20h+arg_8]
0x84DB0A: mov     eax, [esi+10h]
0x84DB0D: mov     edi, ds:0B456ACh
0x84DB13: push    eax
0x84DB14: call    sub_848C40
0x84DB19: mov     esi, [esi+0Ch]
0x84DB1C: push    esi
0x84DB1D: mov     ecx, ebx
0x84DB1F: call    sub_848E50
0x84DB24: mov     eax, [edi+24h]
0x84DB27: mov     ebp, [esp+20h+arg_C]
0x84DB2B: mov     esi, [eax]
0x84DB2D: mov     edx, [ebp+0]
0x84DB30: mov     eax, [edx+88h]
0x84DB36: push    0
0x84DB38: mov     ecx, ebp
0x84DB3A: mov     [esp+24h+arg_8], esi
0x84DB3E: call    eax
0x84DB40: mov     esi, [esi+4]
0x84DB43: cmp     esi, eax
0x84DB45: mov     [esp+20h+arg_C], eax
0x84DB49: jz      short loc_84DB86
0x84DB4B: test    esi, esi
0x84DB4D: jz      short loc_84DB6F
0x84DB4F: lea     ecx, [esi+4]
0x84DB52: push    ecx; lpAddend
0x84DB53: call    dword ptr ds:0A2807Ch
0x84DB59: test    eax, eax
0x84DB5B: jnz     short loc_84DB6B
0x84DB5D: test    esi, esi
0x84DB5F: jz      short loc_84DB6B
0x84DB61: mov     edx, [esi]
0x84DB63: mov     eax, [edx]
0x84DB65: push    1
0x84DB67: mov     ecx, esi
0x84DB69: call    eax
0x84DB6B: mov     eax, [esp+20h+arg_C]
0x84DB6F: test    eax, eax
0x84DB71: mov     esi, [esp+20h+arg_8]
0x84DB75: mov     [esi+4], eax
0x84DB78: jz      short loc_84DB8A
0x84DB7A: add     eax, 4
0x84DB7D: push    eax; lpAddend
0x84DB7E: call    dword ptr ds:0A28078h
0x84DB84: jmp     short loc_84DB8A
0x84DB86: mov     esi, [esp+20h+arg_8]
0x84DB8A: test    esi, esi
0x84DB8C: jz      short loc_84DBA9
0x84DB8E: cmp     byte ptr ds:0B42CDDh, 0
0x84DB95: jz      short loc_84DBA9
0x84DB97: mov     edx, [ebp+0]
0x84DB9A: mov     eax, [edx+78h]
0x84DB9D: mov     ecx, ebp
0x84DB9F: call    eax
0x84DBA1: push    eax
0x84DBA2: mov     ecx, esi
0x84DBA4: call    sub_7715E0
0x84DBA9: mov     ecx, [edi+24h]
0x84DBAC: mov     esi, [ecx+4]
0x84DBAF: mov     edx, [ebp+0]
0x84DBB2: mov     eax, [edx+8Ch]
0x84DBB8: push    0
0x84DBBA: mov     ecx, ebp
0x84DBBC: mov     [esp+24h+arg_8], esi
0x84DBC0: call    eax
0x84DBC2: test    eax, eax
0x84DBC4: jz      short loc_84DBDB
0x84DBC6: mov     edx, [ebp+0]
0x84DBC9: mov     eax, [edx+8Ch]
0x84DBCF: push    0
0x84DBD1: mov     ecx, ebp
0x84DBD3: call    eax
0x84DBD5: mov     [esp+20h+arg_C], eax
0x84DBD9: jmp     short loc_84DBFA
0x84DBDB: test    dword ptr [ebp+1Ch], 80h
0x84DBE2: jbe     short loc_84DBF0
0x84DBE4: mov     ecx, ds:0B430F0h
0x84DBEA: mov     [esp+20h+arg_C], ecx
0x84DBEE: jmp     short loc_84DBFA
0x84DBF0: mov     edx, ds:0B430DCh
0x84DBF6: mov     [esp+20h+arg_C], edx
0x84DBFA: mov     esi, [esi+4]
0x84DBFD: cmp     esi, [esp+20h+arg_C]
0x84DC01: jz      short loc_84DC3E
0x84DC03: test    esi, esi
0x84DC05: jz      short loc_84DC23
0x84DC07: lea     eax, [esi+4]
0x84DC0A: push    eax; lpAddend
0x84DC0B: call    dword ptr ds:0A2807Ch
0x84DC11: test    eax, eax
0x84DC13: jnz     short loc_84DC23
0x84DC15: test    esi, esi
0x84DC17: jz      short loc_84DC23
0x84DC19: mov     edx, [esi]
0x84DC1B: mov     eax, [edx]
0x84DC1D: push    1
0x84DC1F: mov     ecx, esi
0x84DC21: call    eax
0x84DC23: mov     eax, [esp+20h+arg_C]
0x84DC27: test    eax, eax
0x84DC29: mov     esi, [esp+20h+arg_8]
0x84DC2D: mov     [esi+4], eax
0x84DC30: jz      short loc_84DC42
0x84DC32: add     eax, 4
0x84DC35: push    eax; lpAddend
0x84DC36: call    dword ptr ds:0A28078h
0x84DC3C: jmp     short loc_84DC42
0x84DC3E: mov     esi, [esp+20h+arg_8]
0x84DC42: test    esi, esi
0x84DC44: jz      short loc_84DC61
0x84DC46: cmp     byte ptr ds:0B42CDDh, 0
0x84DC4D: jz      short loc_84DC61
0x84DC4F: mov     edx, [ebp+0]
0x84DC52: mov     eax, [edx+78h]
0x84DC55: mov     ecx, ebp
0x84DC57: call    eax
0x84DC59: push    eax
0x84DC5A: mov     ecx, esi
0x84DC5C: call    sub_7715E0
0x84DC61: mov     esi, 1
0x84DC66: add     [edi+60h], esi
0x84DC69: mov     [esp+20h+arg_8], edi
0x84DC6D: mov     edx, [ebx+38h]
0x84DC70: lea     ecx, [esp+20h+arg_8]
0x84DC74: push    ecx
0x84DC75: push    edx
0x84DC76: lea     ecx, [ebx+40h]
0x84DC79: mov     [esp+28h+var_4], 0
0x84DC81: call    sub_76CE40
0x84DC86: or      eax, 0FFFFFFFFh
0x84DC89: add     [edi+60h], eax
0x84DC8C: mov     [esp+20h+var_4], eax
0x84DC90: jnz     short loc_84DC99
0x84DC92: mov     ecx, edi
0x84DC94: call    sub_7604D0
0x84DC99: add     [ebx+38h], esi
0x84DC9C: mov     ecx, [esp+20h+var_C]
0x84DCA0: mov     large fs:0, ecx
0x84DCA7: pop     ecx
0x84DCA8: pop     edi
0x84DCA9: pop     esi
0x84DCAA: pop     ebp
0x84DCAB: pop     ebx
0x84DCAC: add     esp, 0Ch
0x84DCAF: retn    10h
