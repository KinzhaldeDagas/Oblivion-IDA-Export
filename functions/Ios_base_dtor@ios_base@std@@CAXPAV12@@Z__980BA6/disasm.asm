0x980BA6: push    esi
0x980BA7: mov     esi, [esp+4+arg_0]
0x980BAB: cmp     dword ptr [esi+4], 0
0x980BAF: jbe     short loc_980BC6
0x980BB1: mov     eax, [esi+4]
0x980BB4: dec     ds:byte_BA9BB4[eax]
0x980BBA: mov     eax, [esi+4]
0x980BBD: cmp     ds:byte_BA9BB4[eax], 0
0x980BC4: jg      short loc_980BE2
0x980BC6: push    esi; this
0x980BC7: call    ?_Tidy@ios_base@std@@AAAXXZ
0x980BCC: mov     esi, [esi+24h]
0x980BCF: test    esi, esi
0x980BD1: pop     ecx
0x980BD2: jz      short loc_980BE2
0x980BD4: mov     ecx, esi
0x980BD6: call    sub_6F6E10
0x980BDB: push    esi
0x980BDC: call    FormHeapFree
0x980BE1: pop     ecx
0x980BE2: pop     esi
0x980BE3: retn
