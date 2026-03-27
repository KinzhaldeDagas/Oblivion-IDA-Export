0x559930: push    ebx
0x559931: push    esi
0x559932: mov     esi, ecx
0x559934: mov     ebx, [esi+8]
0x559937: cmp     [esi+4], ebx
0x55993A: push    edi
0x55993B: jbe     short loc_559942
0x55993D: call    __invalid_parameter_noinfo
0x559942: mov     edi, [esi+4]
0x559945: cmp     edi, [esi+8]
0x559948: jbe     short loc_55994F
0x55994A: call    __invalid_parameter_noinfo
0x55994F: cmp     edi, ebx
0x559951: jz      short loc_559972
0x559953: mov     eax, [esi+8]
0x559956: push    edi
0x559957: push    eax
0x559958: push    ebx
0x559959: call    sub_558610
0x55995E: mov     ecx, [esi+8]
0x559961: add     esp, 0Ch
0x559964: push    ecx
0x559965: mov     edi, eax
0x559967: push    edi
0x559968: mov     ecx, esi
0x55996A: call    sub_557740
0x55996F: mov     [esi+8], edi
0x559972: pop     edi
0x559973: pop     esi
0x559974: pop     ebx
0x559975: retn
