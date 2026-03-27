0x8F2290: push    esi
0x8F2291: mov     esi, [esp+4+arg_0]
0x8F2295: mov     eax, [esi]
0x8F2297: push    ecx
0x8F2298: push    1
0x8F229A: push    offset aCylinder; "Cylinder"
0x8F229F: mov     ecx, esi
0x8F22A1: call    dword ptr [eax]
0x8F22A3: mov     edx, [esi]
0x8F22A5: mov     ecx, esi
0x8F22A7: call    dword ptr [edx+14h]
0x8F22AA: pop     esi
0x8F22AB: retn    4
