0x43A5F0: push    0FFFFFFFFh
0x43A5F2: push    offset SEH_43A5F0
0x43A5F7: mov     eax, large fs:0
0x43A5FD: push    eax
0x43A5FE: push    esi
0x43A5FF: push    edi
0x43A600: mov     eax, ___security_cookie
0x43A605: xor     eax, esp
0x43A607: push    eax
0x43A608: lea     eax, [esp+18h+var_C]
0x43A60C: mov     large fs:0, eax
0x43A612: mov     esi, ecx
0x43A614: mov     edi, [esi+14h]
0x43A617: mov     eax, [edi+4]
0x43A61A: push    eax; dwTlsIndex
0x43A61B: mov     [esp+1Ch+var_4], 0
0x43A623: call    ds:TlsGetValue
0x43A629: test    eax, eax
0x43A62B: jnz     short loc_43A635
0x43A62D: push    esi; a2
0x43A62E: mov     ecx, edi; this
0x43A630: call    ThreadSpecificInterfaceManager_AddInterface
0x43A635: lea     ecx, [esp+18h+a2]
0x43A639: push    ecx; a2
0x43A63A: mov     ecx, eax; this
0x43A63C: call    sub_436710
0x43A641: mov     esi, [esp+18h+a2]
0x43A645: test    esi, esi
0x43A647: mov     [esp+18h+var_4], 0FFFFFFFFh
0x43A64F: jz      short loc_43A669
0x43A651: lea     edx, [esi+8]
0x43A654: push    edx; lpAddend
0x43A655: call    ds:InterlockedDecrement
0x43A65B: test    eax, eax
0x43A65D: jnz     short loc_43A669
0x43A65F: mov     eax, [esi]
0x43A661: mov     edx, [eax]
0x43A663: push    1
0x43A665: mov     ecx, esi
0x43A667: call    edx
0x43A669: mov     ecx, dword ptr [esp+18h+var_C]
0x43A66D: mov     large fs:0, ecx
0x43A674: pop     ecx
0x43A675: pop     edi
0x43A676: pop     esi
0x43A677: add     esp, 0Ch
0x43A67A: retn    4
