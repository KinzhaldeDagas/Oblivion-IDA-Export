0x7EE330: mov     edx, [esp+arg_0]
0x7EE334: push    esi
0x7EE335: mov     esi, ecx
0x7EE337: mov     ecx, [esp+4+arg_4]
0x7EE33B: lea     eax, [esp+4+arg_4]
0x7EE33F: push    eax
0x7EE340: push    ecx
0x7EE341: push    edx
0x7EE342: mov     ecx, esi
0x7EE344: call    sub_7ECC60
0x7EE349: test    al, al
0x7EE34B: jnz     short loc_7EE37B
0x7EE34D: mov     eax, [esp+4+arg_4]
0x7EE351: test    eax, eax
0x7EE353: jz      short loc_7EE36E
0x7EE355: lea     ecx, [esp+4+arg_0]
0x7EE359: push    ecx
0x7EE35A: push    eax
0x7EE35B: lea     ecx, [esi+6Ch]
0x7EE35E: call    sub_589640
0x7EE363: mov     dword ptr [esi+24h], 0
0x7EE36A: pop     esi
0x7EE36B: retn    8
0x7EE36E: lea     edx, [esp+4+arg_0]
0x7EE372: push    edx
0x7EE373: lea     ecx, [esi+6Ch]
0x7EE376: call    sub_5B1E20
0x7EE37B: mov     dword ptr [esi+24h], 0
0x7EE382: pop     esi
0x7EE383: retn    8
