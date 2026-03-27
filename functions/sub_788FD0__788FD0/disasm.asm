0x788FD0: mov     eax, [ecx+4]
0x788FD3: sub     esp, 8
0x788FD6: test    eax, eax
0x788FD8: jz      short loc_78900D
0x788FDA: push    ebx
0x788FDB: push    esi
0x788FDC: lea     esi, [eax+58h]
0x788FDF: push    edi
0x788FE0: mov     edi, [esi+8]
0x788FE3: cmp     [esi+4], edi
0x788FE6: jbe     short loc_788FED
0x788FE8: call    __invalid_parameter_noinfo
0x788FED: mov     ebx, [esi+4]
0x788FF0: cmp     ebx, [esi+8]
0x788FF3: jbe     short loc_788FFA
0x788FF5: call    __invalid_parameter_noinfo
0x788FFA: push    edi; Src
0x788FFB: push    esi; int
0x788FFC: push    ebx; Dst
0x788FFD: push    esi; int
0x788FFE: lea     eax, [esp+24h+var_8]
0x789002: push    eax; int
0x789003: mov     ecx, esi
0x789005: call    sub_439050
0x78900A: pop     edi
0x78900B: pop     esi
0x78900C: pop     ebx
0x78900D: add     esp, 8
0x789010: retn
