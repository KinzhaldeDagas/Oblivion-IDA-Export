0x43E3E0: push    ebx
0x43E3E1: push    esi
0x43E3E2: push    edi
0x43E3E3: mov     edi, ecx
0x43E3E5: mov     ebx, [edi+14h]
0x43E3E8: mov     eax, [ebx+4]
0x43E3EB: push    eax; dwTlsIndex
0x43E3EC: call    ds:TlsGetValue
0x43E3F2: test    eax, eax
0x43E3F4: jnz     short loc_43E3FE
0x43E3F6: push    edi; a2
0x43E3F7: mov     ecx, ebx; this
0x43E3F9: call    ThreadSpecificInterfaceManager_AddInterface
0x43E3FE: mov     edx, [esp+0Ch+arg_4]
0x43E402: mov     esi, eax
0x43E404: mov     eax, [esp+0Ch+arg_0]
0x43E408: mov     ecx, [esi]
0x43E40A: push    edx; int
0x43E40B: mov     edx, [ecx]
0x43E40D: push    eax; int
0x43E40E: push    eax
0x43E40F: mov     eax, [edx+1Ch]
0x43E412: call    eax
0x43E414: push    eax; Comperand
0x43E415: mov     ecx, esi
0x43E417: call    sub_43C5D0
0x43E41C: pop     edi
0x43E41D: pop     esi
0x43E41E: pop     ebx
0x43E41F: retn    8
