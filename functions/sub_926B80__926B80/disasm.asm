0x926B80: push    ecx
0x926B81: push    esi
0x926B82: push    edi
0x926B83: mov     edi, [esp+0Ch+arg_0]
0x926B87: push    edi
0x926B88: mov     esi, ecx
0x926B8A: call    sub_8B30D0
0x926B8F: mov     eax, [edi+21Ch]
0x926B95: mov     esi, [esi+4]
0x926B98: push    1
0x926B9A: lea     ecx, [esp+10h+var_4]
0x926B9E: push    ecx
0x926B9F: push    1
0x926BA1: lea     edx, [esp+18h+arg_0]
0x926BA5: push    edx
0x926BA6: push    eax
0x926BA7: mov     eax, [eax+4]
0x926BAA: mov     [esp+20h+var_4], 1
0x926BB2: call    eax
0x926BB4: mov     edi, [edi+21Ch]
0x926BBA: mov     eax, [edi+4]
0x926BBD: push    1
0x926BBF: lea     ecx, [esp+24h+var_4]
0x926BC3: push    ecx
0x926BC4: push    1
0x926BC6: lea     edx, [esi+91h]
0x926BCC: push    edx
0x926BCD: push    edi
0x926BCE: mov     [esp+34h+var_4], 1
0x926BD6: call    eax
0x926BD8: add     esp, 28h
0x926BDB: push    0
0x926BDD: mov     ecx, esi
0x926BDF: call    sub_924960
0x926BE4: pop     edi
0x926BE5: pop     esi
0x926BE6: pop     ecx
0x926BE7: retn    4
