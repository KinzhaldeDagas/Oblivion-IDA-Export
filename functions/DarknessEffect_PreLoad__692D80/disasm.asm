0x692D80: push    esi
0x692D81: mov     esi, [esp+4+arg_0]
0x692D85: push    esi
0x692D86: call    nullsub_returnvVoid_1arg
0x692D8B: mov     eax, [esi+3Ch]
0x692D8E: test    eax, eax
0x692D90: pop     esi
0x692D91: jz      short locret_692DA2
0x692D93: fld1
0x692D95: push    ecx
0x692D96: fstp    [esp+4+var_4]; float
0x692D99: push    eax; int
0x692D9A: call    sub_7B8440
0x692D9F: add     esp, 8
0x692DA2: retn    4
