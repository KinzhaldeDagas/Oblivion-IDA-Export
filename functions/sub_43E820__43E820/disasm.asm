0x43E820: sub     esp, 3ECh
0x43E826: mov     eax, ___security_cookie
0x43E82B: xor     eax, esp
0x43E82D: mov     [esp+3ECh+var_4], eax
0x43E834: push    ebx
0x43E835: push    esi
0x43E836: mov     esi, [esp+3F4h+arg_0]
0x43E83D: mov     al, [esi]
0x43E83F: test    al, al
0x43E841: push    edi
0x43E842: mov     ebx, ecx
0x43E844: lea     edi, [esp+3F8h+Comperand]
0x43E848: jz      short loc_43E86A
0x43E84A: lea     ebx, [ebx+0]
0x43E850: movsx   eax, al
0x43E853: push    eax; C
0x43E854: call    _tolower
0x43E859: add     esi, 1
0x43E85C: mov     [edi], al
0x43E85E: mov     al, [esi]
0x43E860: add     esp, 4
0x43E863: add     edi, 1
0x43E866: test    al, al
0x43E868: jnz     short loc_43E850
0x43E86A: mov     esi, [ebx+14h]
0x43E86D: mov     byte ptr [edi], 0
0x43E870: mov     eax, [esi+4]
0x43E873: push    eax; dwTlsIndex
0x43E874: call    ds:TlsGetValue
0x43E87A: test    eax, eax
0x43E87C: jnz     short loc_43E886
0x43E87E: push    ebx; a2
0x43E87F: mov     ecx, esi; this
0x43E881: call    ThreadSpecificInterfaceManager_AddInterface
0x43E886: mov     esi, eax
0x43E888: mov     ecx, [esi]
0x43E88A: mov     eax, [ecx]
0x43E88C: mov     eax, [eax+1Ch]
0x43E88F: lea     edx, [esp+3F8h+Comperand]
0x43E893: push    edx; Comperand
0x43E894: push    edx
0x43E895: call    eax
0x43E897: push    eax; LONG
0x43E898: mov     ecx, esi
0x43E89A: call    sub_55F270
0x43E89F: mov     ecx, [esp+3F8h+var_4]
0x43E8A6: pop     edi
0x43E8A7: pop     esi
0x43E8A8: pop     ebx
0x43E8A9: xor     ecx, esp
0x43E8AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43E8B0: add     esp, 3ECh
0x43E8B6: retn    4
