0x556CA0: mov     eax, [esp+arg_4]
0x556CA4: mov     ecx, [esp+Src]
0x556CA8: mov     edx, [esp+Dst]
0x556CAC: sub     eax, ecx
0x556CAE: test    eax, eax
0x556CB0: push    esi; MaxCount
0x556CB1: lea     esi, [eax+edx]
0x556CB4: jle     short loc_556CC2
0x556CB6: push    eax; Src
0x556CB7: push    ecx; Src
0x556CB8: push    eax; DstSize
0x556CB9: push    edx; Dst
0x556CBA: call    _memmove_s
0x556CBF: add     esp, 10h
0x556CC2: mov     eax, esi
0x556CC4: pop     esi
0x556CC5: retn
