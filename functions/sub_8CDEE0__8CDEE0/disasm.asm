0x8CDEE0: push    esi
0x8CDEE1: mov     esi, [esp+4+arg_0]
0x8CDEE5: mov     eax, [esi]
0x8CDEE7: push    ecx
0x8CDEE8: push    1
0x8CDEEA: push    offset aBoxshape; "BoxShape"
0x8CDEEF: mov     ecx, esi
0x8CDEF1: call    dword ptr [eax]
0x8CDEF3: mov     edx, [esi]
0x8CDEF5: mov     ecx, esi
0x8CDEF7: call    dword ptr [edx+14h]
0x8CDEFA: pop     esi
0x8CDEFB: retn    4
