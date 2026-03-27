0x7008A0: push    ecx
0x7008A1: push    esi
0x7008A2: push    edi
0x7008A3: mov     edi, [esp+0Ch+arg_0]
0x7008A7: mov     eax, [edi+0D8h]
0x7008AD: cmp     eax, 5000006h
0x7008B2: mov     esi, ecx
0x7008B4: jb      short loc_7008FA
0x7008B6: cmp     eax, 0A010072h
0x7008BB: jnb     short loc_7008FA
0x7008BD: mov     eax, [edi+21Ch]
0x7008C3: push    ebx
0x7008C4: push    1
0x7008C6: lea     ecx, [esp+14h+arg_0]
0x7008CA: push    ecx
0x7008CB: push    4
0x7008CD: lea     edx, [esp+1Ch+var_4]
0x7008D1: push    edx
0x7008D2: push    eax
0x7008D3: mov     eax, [eax+4]
0x7008D6: mov     [esp+24h+arg_0], 4
0x7008DE: call    eax
0x7008E0: mov     ecx, [esp+24h+var_4]
0x7008E4: mov     ebx, [esi]
0x7008E6: add     esp, 14h
0x7008E9: push    ecx
0x7008EA: mov     ecx, edi
0x7008EC: call    sub_712550
0x7008F1: mov     edx, [ebx+48h]
0x7008F4: push    eax
0x7008F5: mov     ecx, esi
0x7008F7: call    edx
0x7008F9: pop     ebx
0x7008FA: pop     edi
0x7008FB: pop     esi
0x7008FC: pop     ecx
0x7008FD: retn    4
