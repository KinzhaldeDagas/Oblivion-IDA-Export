0x433FD0: push    ebx
0x433FD1: push    esi
0x433FD2: push    edi
0x433FD3: mov     edi, ecx
0x433FD5: mov     ebx, [edi+14h]
0x433FD8: mov     eax, [ebx+4]
0x433FDB: push    eax; dwTlsIndex
0x433FDC: call    ds:TlsGetValue
0x433FE2: test    eax, eax
0x433FE4: jnz     short loc_433FEE
0x433FE6: push    edi; a2
0x433FE7: mov     ecx, ebx; this
0x433FE9: call    ThreadSpecificInterfaceManager_AddInterface
0x433FEE: mov     edx, [esp+0Ch+arg_0]
0x433FF2: mov     esi, eax
0x433FF4: mov     eax, [esp+0Ch+arg_4]
0x433FF8: mov     ecx, [esi]
0x433FFA: mov     edi, [ecx]
0x433FFC: push    eax; int
0x433FFD: push    edx; int
0x433FFE: push    eax
0x433FFF: push    edx
0x434000: mov     edx, [edi+1Ch]
0x434003: call    edx
0x434005: push    eax; LONG
0x434006: mov     ecx, esi
0x434008: call    sub_433380
0x43400D: pop     edi
0x43400E: pop     esi
0x43400F: pop     ebx
0x434010: retn    8
