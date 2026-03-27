0x43ACA0: push    esi
0x43ACA1: push    edi
0x43ACA2: mov     esi, ecx
0x43ACA4: mov     edi, [esi+14h]
0x43ACA7: mov     eax, [edi+4]
0x43ACAA: push    eax; dwTlsIndex
0x43ACAB: call    ds:TlsGetValue
0x43ACB1: test    eax, eax
0x43ACB3: jnz     short loc_43ACBD
0x43ACB5: push    esi; a2
0x43ACB6: mov     ecx, edi; this
0x43ACB8: call    ThreadSpecificInterfaceManager_AddInterface
0x43ACBD: mov     edx, [esp+8+arg_0]
0x43ACC1: lea     ecx, [esp+8+Comperand]
0x43ACC5: push    ecx; Comperand
0x43ACC6: push    edx; int
0x43ACC7: mov     ecx, eax
0x43ACC9: call    sub_43A680
0x43ACCE: pop     edi
0x43ACCF: pop     esi
0x43ACD0: retn    8
