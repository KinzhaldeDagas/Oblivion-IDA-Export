0x606B50: mov     eax, [esp+arg_0]
0x606B54: push    esi; int
0x606B55: mov     esi, ecx
0x606B57: mov     ecx, [esi+3Ch]
0x606B5A: push    eax
0x606B5B: call    BSSimpleList_Remove
0x606B60: mov     esi, [esi+3Ch]
0x606B63: cmp     dword ptr [esi+4], 0
0x606B67: jnz     short loc_606B77
0x606B69: cmp     dword ptr [esi], 0
0x606B6C: jnz     short loc_606B77
0x606B6E: mov     ecx, [esp+4+arg_4]; int
0x606B72: call    sub_5EAE70
0x606B77: pop     esi
0x606B78: retn    8
