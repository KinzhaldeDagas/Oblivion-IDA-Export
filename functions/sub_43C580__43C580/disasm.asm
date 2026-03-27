0x43C580: push    ebx
0x43C581: push    esi
0x43C582: push    edi
0x43C583: mov     edi, ecx
0x43C585: mov     ebx, [edi+14h]
0x43C588: mov     eax, [ebx+4]
0x43C58B: push    eax; dwTlsIndex
0x43C58C: call    ds:TlsGetValue
0x43C592: test    eax, eax
0x43C594: jnz     short loc_43C59E
0x43C596: push    edi; a2
0x43C597: mov     ecx, ebx; this
0x43C599: call    ThreadSpecificInterfaceManager_AddInterface
0x43C59E: mov     edx, [esp+0Ch+arg_4]
0x43C5A2: mov     esi, eax
0x43C5A4: mov     eax, [esp+0Ch+arg_0]
0x43C5A8: mov     ecx, [esi]
0x43C5AA: push    edx; int
0x43C5AB: mov     edx, [ecx]
0x43C5AD: push    eax; int
0x43C5AE: push    eax
0x43C5AF: mov     eax, [edx+1Ch]
0x43C5B2: call    eax
0x43C5B4: push    eax; Comperand
0x43C5B5: mov     ecx, esi
0x43C5B7: call    sub_43A780
0x43C5BC: pop     edi
0x43C5BD: pop     esi
0x43C5BE: pop     ebx
0x43C5BF: retn    8
