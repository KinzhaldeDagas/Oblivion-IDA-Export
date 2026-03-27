0x43C030: push    ecx
0x43C031: push    esi
0x43C032: push    edi
0x43C033: mov     esi, ecx
0x43C035: mov     edi, [esi+14h]
0x43C038: mov     eax, [edi+4]
0x43C03B: push    eax; dwTlsIndex
0x43C03C: mov     [esp+10h+var_4], 0
0x43C044: call    ds:TlsGetValue
0x43C04A: test    eax, eax
0x43C04C: jnz     short loc_43C056
0x43C04E: push    esi; a2
0x43C04F: mov     ecx, edi; this
0x43C051: call    ThreadSpecificInterfaceManager_AddInterface
0x43C056: mov     esi, [esp+0Ch+a2]
0x43C05A: push    esi
0x43C05B: mov     ecx, eax
0x43C05D: call    IOManager_43A940
0x43C062: pop     edi
0x43C063: mov     eax, esi
0x43C065: pop     esi
0x43C066: pop     ecx
0x43C067: retn    4
