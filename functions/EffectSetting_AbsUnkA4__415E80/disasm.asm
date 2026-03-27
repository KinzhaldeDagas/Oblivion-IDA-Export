0x415E80: push    ecx
0x415E81: push    esi
0x415E82: mov     esi, ecx
0x415E84: fild    dword ptr [esi+0A4h]
0x415E8A: fabs
0x415E8C: fstp    [esp+8+var_4]
0x415E90: fld     [esp+8+var_4]
0x415E94: call    Double_To_SInt32
0x415E99: mov     [esi+0A4h], eax
0x415E9F: pop     esi
0x415EA0: pop     ecx
0x415EA1: retn
