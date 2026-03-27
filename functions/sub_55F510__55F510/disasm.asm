0x55F510: push    ebx
0x55F511: push    esi
0x55F512: push    edi
0x55F513: mov     edi, ecx
0x55F515: mov     ebx, [edi+14h]
0x55F518: mov     eax, [ebx+4]
0x55F51B: push    eax; dwTlsIndex
0x55F51C: call    dword ptr ds:0A28150h
0x55F522: test    eax, eax
0x55F524: jnz     short loc_55F52E
0x55F526: push    edi; a2
0x55F527: mov     ecx, ebx; this
0x55F529: call    ThreadSpecificInterfaceManager_AddInterface
0x55F52E: mov     esi, eax
0x55F530: mov     eax, [esp+0Ch+Comperand]
0x55F534: mov     ecx, [esi]
0x55F536: mov     edx, [ecx]
0x55F538: push    eax; Comperand
0x55F539: push    eax
0x55F53A: mov     eax, [edx+1Ch]
0x55F53D: call    eax
0x55F53F: push    eax; LONG
0x55F540: mov     ecx, esi
0x55F542: call    sub_55F270
0x55F547: pop     edi
0x55F548: pop     esi
0x55F549: pop     ebx
0x55F54A: retn    4
