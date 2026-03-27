0x9156A0: push    esi
0x9156A1: mov     esi, [esp+4+arg_0]
0x9156A5: mov     eax, [esi]
0x9156A7: push    ecx
0x9156A8: push    1
0x9156AA: push    offset aCollection; "Collection"
0x9156AF: mov     ecx, esi
0x9156B1: call    dword ptr [eax]
0x9156B3: mov     edx, [esi]
0x9156B5: mov     ecx, esi
0x9156B7: call    dword ptr [edx+14h]
0x9156BA: pop     esi
0x9156BB: retn    4
