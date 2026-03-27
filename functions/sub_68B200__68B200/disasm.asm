0x68B200: push    esi
0x68B201: mov     esi, ecx
0x68B203: cmp     byte ptr [esi+4], 1
0x68B207: jnz     short loc_68B230
0x68B209: cmp     dword ptr [esi], 0
0x68B20C: jnz     short loc_68B21A
0x68B20E: push    0Ch; Size
0x68B210: call    FormHeapAlloc
0x68B215: add     esp, 4
0x68B218: mov     [esi], eax
0x68B21A: mov     ecx, [esp+4+arg_0]
0x68B21E: mov     edx, [ecx]
0x68B220: mov     eax, [esi]
0x68B222: mov     [eax], edx
0x68B224: mov     edx, [ecx+4]
0x68B227: mov     [eax+4], edx
0x68B22A: mov     ecx, [ecx+8]
0x68B22D: mov     [eax+8], ecx
0x68B230: pop     esi
0x68B231: retn    4
