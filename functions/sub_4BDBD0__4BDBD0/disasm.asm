0x4BDBD0: push    ebx
0x4BDBD1: push    esi
0x4BDBD2: push    edi
0x4BDBD3: mov     edi, ecx
0x4BDBD5: mov     ebx, [edi+14h]
0x4BDBD8: mov     eax, [ebx+4]
0x4BDBDB: push    eax; dwTlsIndex
0x4BDBDC: call    dword ptr ds:0A28150h
0x4BDBE2: test    eax, eax
0x4BDBE4: jnz     short loc_4BDBEE
0x4BDBE6: push    edi; a2
0x4BDBE7: mov     ecx, ebx; this
0x4BDBE9: call    ThreadSpecificInterfaceManager_AddInterface
0x4BDBEE: mov     esi, eax
0x4BDBF0: mov     eax, [esp+0Ch+arg_0]
0x4BDBF4: mov     ecx, [esi]
0x4BDBF6: mov     edx, [ecx]
0x4BDBF8: push    eax; int
0x4BDBF9: push    eax
0x4BDBFA: mov     eax, [edx+1Ch]
0x4BDBFD: call    eax
0x4BDBFF: push    eax; LONG
0x4BDC00: mov     ecx, esi
0x4BDC02: call    sub_4BD780
0x4BDC07: pop     edi
0x4BDC08: pop     esi
0x4BDC09: pop     ebx
0x4BDC0A: retn    4
