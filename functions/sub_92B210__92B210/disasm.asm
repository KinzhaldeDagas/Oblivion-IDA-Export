0x92B210: push    esi
0x92B211: mov     esi, [esp+4+arg_0]
0x92B215: mov     eax, [esi]
0x92B217: push    edi
0x92B218: mov     edi, ecx
0x92B21A: push    edi
0x92B21B: push    1
0x92B21D: push    offset aBvshape; "BvShape"
0x92B222: mov     ecx, esi
0x92B224: call    dword ptr [eax]
0x92B226: mov     eax, [edi+10h]
0x92B229: mov     edx, [esi]
0x92B22B: push    eax
0x92B22C: push    1
0x92B22E: push    offset aChild_0; "Child"
0x92B233: mov     ecx, esi
0x92B235: call    dword ptr [edx+8]
0x92B238: mov     edx, [esi]
0x92B23A: mov     ecx, esi
0x92B23C: call    dword ptr [edx+14h]
0x92B23F: pop     edi
0x92B240: pop     esi
0x92B241: retn    4
