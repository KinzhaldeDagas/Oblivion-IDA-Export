0x6D6FE0: sub     esp, 8
0x6D6FE3: push    esi
0x6D6FE4: mov     esi, [esp+0Ch+arg_0]
0x6D6FE8: push    edi
0x6D6FE9: push    esi
0x6D6FEA: mov     edi, ecx
0x6D6FEC: call    sub_6ECB70
0x6D6FF1: mov     eax, [esi+21Ch]
0x6D6FF7: push    1
0x6D6FF9: lea     ecx, [esp+14h+var_8]
0x6D6FFD: push    ecx
0x6D6FFE: push    1
0x6D7000: lea     edx, [esp+1Ch+arg_0]
0x6D7004: push    edx
0x6D7005: push    eax
0x6D7006: mov     eax, [eax+4]
0x6D7009: mov     [esp+24h+var_8], 1
0x6D7011: call    eax
0x6D7013: cmp     byte ptr [esp+24h+arg_0], 0
0x6D7018: push    1
0x6D701A: setnz   cl
0x6D701D: lea     edx, [esp+28h+var_8]
0x6D7021: push    edx
0x6D7022: mov     [edi+48h], cl
0x6D7025: mov     eax, [esi+21Ch]
0x6D702B: mov     edx, [eax+4]
0x6D702E: push    4
0x6D7030: lea     ecx, [edi+4Ch]
0x6D7033: push    ecx
0x6D7034: push    eax
0x6D7035: mov     [esp+38h+var_8], 4
0x6D703D: call    edx
0x6D703F: mov     eax, [esi+21Ch]
0x6D7045: push    1
0x6D7047: lea     ecx, [esp+3Ch+var_8]
0x6D704B: push    ecx
0x6D704C: push    4
0x6D704E: lea     edx, [esp+44h+var_4]
0x6D7052: push    edx
0x6D7053: push    eax
0x6D7054: mov     eax, [eax+4]
0x6D7057: mov     [esp+4Ch+var_8], 4
0x6D705F: call    eax
0x6D7061: mov     ecx, [esp+4Ch+var_4]
0x6D7065: add     esp, 3Ch
0x6D7068: mov     [edi+50h], ecx
0x6D706B: cmp     dword ptr [esi+0D8h], 0A010068h
0x6D7075: jnb     short loc_6D707E
0x6D7077: mov     ecx, esi
0x6D7079: call    sub_712A20
0x6D707E: pop     edi
0x6D707F: pop     esi
0x6D7080: add     esp, 8
0x6D7083: retn    4
