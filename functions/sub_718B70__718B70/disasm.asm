0x718B70: push    esi
0x718B71: push    edi
0x718B72: mov     edi, [esp+8+arg_0]
0x718B76: push    edi
0x718B77: mov     esi, ecx
0x718B79: call    sub_711B90
0x718B7E: push    edi
0x718B7F: lea     ecx, [esi+24h]
0x718B82: call    sub_709430
0x718B87: mov     edi, [edi+21Ch]
0x718B8D: mov     ecx, [edi+4]
0x718B90: push    1
0x718B92: lea     eax, [esp+0Ch+arg_0]
0x718B96: push    eax
0x718B97: push    4
0x718B99: add     esi, 30h ; '0'
0x718B9C: push    esi
0x718B9D: push    edi
0x718B9E: mov     [esp+1Ch+arg_0], 4
0x718BA6: call    ecx
0x718BA8: add     esp, 14h
0x718BAB: pop     edi
0x718BAC: pop     esi
0x718BAD: retn    4
