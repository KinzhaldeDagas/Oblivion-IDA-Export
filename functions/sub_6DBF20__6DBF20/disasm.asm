0x6DBF20: push    ecx
0x6DBF21: push    esi
0x6DBF22: mov     esi, [esp+8+arg_0]
0x6DBF26: push    edi
0x6DBF27: push    esi
0x6DBF28: mov     edi, ecx
0x6DBF2A: call    sub_6EC2B0
0x6DBF2F: mov     eax, [esi+21Ch]
0x6DBF35: push    1
0x6DBF37: lea     ecx, [esp+10h+arg_0]
0x6DBF3B: push    ecx
0x6DBF3C: push    2
0x6DBF3E: lea     edx, [edi+0Ch]
0x6DBF41: push    edx
0x6DBF42: push    eax
0x6DBF43: mov     eax, [eax+4]
0x6DBF46: mov     [esp+20h+arg_0], 2
0x6DBF4E: call    eax
0x6DBF50: mov     eax, [esi+21Ch]
0x6DBF56: push    1
0x6DBF58: lea     ecx, [esp+24h+arg_0]
0x6DBF5C: push    ecx
0x6DBF5D: push    4
0x6DBF5F: lea     edx, [esp+2Ch+var_4]
0x6DBF63: push    edx
0x6DBF64: push    eax
0x6DBF65: mov     eax, [eax+4]
0x6DBF68: mov     [esp+34h+arg_0], 4
0x6DBF70: call    eax
0x6DBF72: mov     ecx, [esp+34h+var_4]
0x6DBF76: push    1
0x6DBF78: lea     edx, [esp+38h+arg_0]
0x6DBF7C: push    edx
0x6DBF7D: mov     [edi+38h], ecx
0x6DBF80: mov     eax, [esi+21Ch]
0x6DBF86: mov     edx, [eax+4]
0x6DBF89: push    4
0x6DBF8B: lea     ecx, [edi+28h]
0x6DBF8E: push    ecx
0x6DBF8F: push    eax
0x6DBF90: mov     [esp+48h+arg_0], 4
0x6DBF98: call    edx
0x6DBF9A: mov     eax, [esi+21Ch]
0x6DBFA0: push    1
0x6DBFA2: lea     ecx, [esp+4Ch+arg_0]
0x6DBFA6: push    ecx
0x6DBFA7: push    4
0x6DBFA9: lea     edx, [edi+2Ch]
0x6DBFAC: push    edx
0x6DBFAD: push    eax
0x6DBFAE: mov     eax, [eax+4]
0x6DBFB1: mov     [esp+5Ch+arg_0], 4
0x6DBFB9: call    eax
0x6DBFBB: mov     eax, [esi+21Ch]
0x6DBFC1: mov     edx, [eax+4]
0x6DBFC4: add     esp, 50h
0x6DBFC7: push    1
0x6DBFC9: lea     ecx, [esp+10h+arg_0]
0x6DBFCD: push    ecx
0x6DBFCE: push    2
0x6DBFD0: add     edi, 30h ; '0'
0x6DBFD3: push    edi
0x6DBFD4: push    eax
0x6DBFD5: mov     [esp+20h+arg_0], 2
0x6DBFDD: call    edx
0x6DBFDF: add     esp, 14h
0x6DBFE2: mov     ecx, esi
0x6DBFE4: call    sub_712A20
0x6DBFE9: mov     ecx, esi
0x6DBFEB: call    sub_712A20
0x6DBFF0: pop     edi
0x6DBFF1: pop     esi
0x6DBFF2: pop     ecx
0x6DBFF3: retn    4
