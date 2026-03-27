0x55F4C0: push    ebx
0x55F4C1: push    esi
0x55F4C2: push    edi
0x55F4C3: mov     edi, ecx
0x55F4C5: mov     ebx, [edi+14h]
0x55F4C8: mov     eax, [ebx+4]
0x55F4CB: push    eax; dwTlsIndex
0x55F4CC: call    dword ptr ds:0A28150h
0x55F4D2: test    eax, eax
0x55F4D4: jnz     short loc_55F4DE
0x55F4D6: push    edi; a2
0x55F4D7: mov     ecx, ebx; this
0x55F4D9: call    ThreadSpecificInterfaceManager_AddInterface
0x55F4DE: mov     edx, dword ptr [esp+0Ch+arg_8]
0x55F4E2: mov     esi, eax
0x55F4E4: mov     ecx, [esi]
0x55F4E6: push    edx; char
0x55F4E7: mov     edx, [ecx]
0x55F4E9: lea     eax, [esp+10h+arg_4]
0x55F4ED: push    eax; int
0x55F4EE: mov     eax, [esp+14h+Comperand]
0x55F4F2: push    eax; Comperand
0x55F4F3: push    eax
0x55F4F4: mov     eax, [edx+1Ch]
0x55F4F7: call    eax
0x55F4F9: push    eax; LONG
0x55F4FA: mov     ecx, esi
0x55F4FC: call    sub_55F120
0x55F501: pop     edi
0x55F502: pop     esi
0x55F503: pop     ebx
0x55F504: retn    0Ch
