0x413490: push    ecx
0x413491: xor     eax, eax
0x413493: push    esi
0x413494: mov     esi, [esp+8+arg_0]
0x413498: push    eax; a3
0x413499: mov     [esp+0Ch+var_4], eax
0x41349D: mov     [esi], eax
0x41349F: mov     [esi+4], ax
0x4134A3: mov     [esi+6], ax
0x4134A7: mov     eax, [ecx+4]
0x4134AA: push    eax; a2
0x4134AB: mov     ecx, esi; this
0x4134AD: call    BSStringT_Set
0x4134B2: mov     eax, esi
0x4134B4: pop     esi
0x4134B5: pop     ecx
0x4134B6: retn    4
