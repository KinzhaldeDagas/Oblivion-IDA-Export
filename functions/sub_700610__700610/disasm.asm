0x700610: push    ebx
0x700611: push    esi
0x700612: push    edi
0x700613: mov     edi, [esp+0Ch+arg_0]
0x700617: mov     esi, ecx
0x700619: mov     eax, [esi]
0x70061B: mov     edx, [eax+18h]
0x70061E: push    edi
0x70061F: call    edx
0x700621: mov     ebx, eax
0x700623: mov     eax, [esi]
0x700625: mov     edx, [eax+38h]
0x700628: push    edi
0x700629: mov     ecx, esi
0x70062B: call    edx
0x70062D: pop     edi
0x70062E: pop     esi
0x70062F: mov     eax, ebx
0x700631: pop     ebx
0x700632: retn    4
