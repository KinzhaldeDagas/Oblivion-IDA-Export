0x6B72E0: push    ecx
0x6B72E1: mov     eax, ecx
0x6B72E3: mov     ecx, ds:0B3C214h
0x6B72E9: test    ecx, ecx
0x6B72EB: jz      short loc_6B72FD
0x6B72ED: mov     eax, [eax]
0x6B72EF: push    eax
0x6B72F0: call    sub_6ABAC0
0x6B72F5: fstp    [esp+4+var_4]
0x6B72F8: fld     [esp+4+var_4]
0x6B72FB: pop     ecx
0x6B72FC: retn
0x6B72FD: fldz
0x6B72FF: fstp    [esp+4+var_4]
0x6B7302: fld     [esp+4+var_4]
0x6B7305: pop     ecx
0x6B7306: retn
