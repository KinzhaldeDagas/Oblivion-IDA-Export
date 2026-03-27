0x918660: push    esi
0x918661: mov     esi, ecx
0x918663: mov     ecx, [esi+10h]
0x918666: push    5
0x918668: call    sub_918440
0x91866D: mov     ecx, [esi+10h]
0x918670: push    0C1h ; 'Á'
0x918675: call    sub_9181B0
0x91867A: mov     eax, [esp+4+arg_0]
0x91867E: mov     ecx, [esi+10h]
0x918681: push    eax
0x918682: call    sub_918440
0x918687: xor     eax, eax
0x918689: pop     esi
0x91868A: retn    4
