0x918710: mov     eax, [esp+arg_0]
0x918714: push    esi
0x918715: mov     esi, ecx
0x918717: push    eax
0x918718: lea     ecx, [esi-8]
0x91871B: call    sub_9186D0
0x918720: test    eax, eax
0x918722: jl      short loc_918757
0x918724: mov     ecx, [esi+30h]
0x918727: mov     edx, [esi+34h]
0x91872A: push    edi
0x91872B: mov     edi, [ecx+eax*4]
0x91872E: mov     ecx, [esi+30h]
0x918731: dec     edx
0x918732: mov     [esi+34h], edx
0x918735: mov     edx, [ecx+edx*4]
0x918738: mov     [ecx+eax*4], edx
0x91873B: push    edi
0x91873C: lea     ecx, [esi+1Ch]
0x91873F: call    sub_947F40
0x918744: test    edi, edi
0x918746: jz      short loc_918750
0x918748: mov     eax, [edi]
0x91874A: push    1
0x91874C: mov     ecx, edi
0x91874E: call    dword ptr [eax]
0x918750: pop     edi
0x918751: xor     eax, eax
0x918753: pop     esi
0x918754: retn    4
0x918757: xor     eax, eax
0x918759: pop     esi
0x91875A: retn    4
