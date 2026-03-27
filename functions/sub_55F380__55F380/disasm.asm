0x55F380: push    esi
0x55F381: push    edi
0x55F382: mov     esi, ecx
0x55F384: mov     edi, [esi+14h]
0x55F387: mov     eax, [edi+4]
0x55F38A: push    eax; dwTlsIndex
0x55F38B: call    dword ptr ds:0A28150h
0x55F391: test    eax, eax
0x55F393: jnz     short loc_55F39D
0x55F395: push    esi; a2
0x55F396: mov     ecx, edi; this
0x55F398: call    ThreadSpecificInterfaceManager_AddInterface
0x55F39D: mov     ecx, dword ptr [esp+8+arg_C]
0x55F3A1: push    ecx; char
0x55F3A2: mov     ecx, [esp+0Ch+Comperand]
0x55F3A6: lea     edx, [esp+0Ch+arg_8]
0x55F3AA: push    edx; int
0x55F3AB: mov     edx, [esp+10h+arg_0]
0x55F3AF: push    ecx; Comperand
0x55F3B0: push    edx; LONG
0x55F3B1: mov     ecx, eax
0x55F3B3: call    sub_55F120
0x55F3B8: pop     edi
0x55F3B9: pop     esi
0x55F3BA: retn    10h
