0x6A4560: mov     eax, [esp+arg_0]
0x6A4564: push    esi
0x6A4565: push    eax
0x6A4566: mov     esi, ecx
0x6A4568: call    nullsub_returnvVoid_1arg
0x6A456D: mov     ecx, [esi+3Ch]
0x6A4570: test    ecx, ecx
0x6A4572: pop     esi
0x6A4573: jz      short locret_6A457A
0x6A4575: call    ScriptEventList_Preload?
0x6A457A: retn    4
