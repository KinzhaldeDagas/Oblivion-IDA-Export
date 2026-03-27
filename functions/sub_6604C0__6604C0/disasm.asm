0x6604C0: sub     esp, 0Ch
0x6604C3: cmp     byte ptr [ecx+588h], 0
0x6604CA: jnz     short loc_66050F
0x6604CC: mov     eax, ds:0B3BB0Ch
0x6604D1: test    eax, eax
0x6604D3: jz      short loc_66050F
0x6604D5: mov     ecx, [eax+88h]
0x6604DB: mov     edx, [eax+8Ch]
0x6604E1: mov     eax, [eax+90h]
0x6604E7: mov     [esp+0Ch+var_4], eax
0x6604EB: fld     [esp+0Ch+var_4]
0x6604EF: fsub    qword ptr ds:0A3F3A0h
0x6604F5: mov     eax, [esp+0Ch+arg_0]
0x6604F9: mov     [eax], ecx
0x6604FB: mov     [eax+4], edx
0x6604FE: fstp    [esp+0Ch+var_4]
0x660502: mov     ecx, [esp+0Ch+var_4]
0x660506: mov     [eax+8], ecx
0x660509: add     esp, 0Ch
0x66050C: retn    4
0x66050F: push    esi
0x660510: mov     esi, [esp+10h+arg_0]
0x660514: push    esi
0x660515: call    sub_5EE660
0x66051A: mov     eax, esi
0x66051C: pop     esi
0x66051D: add     esp, 0Ch
0x660520: retn    4
