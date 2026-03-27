0x9148A0: push    esi
0x9148A1: mov     esi, [esp+4+arg_0]
0x9148A5: mov     eax, [esi]
0x9148A7: push    ecx
0x9148A8: push    1
0x9148AA: push    offset aTriangleshp; "TriangleShp"
0x9148AF: mov     ecx, esi
0x9148B1: call    dword ptr [eax]
0x9148B3: mov     edx, [esi]
0x9148B5: mov     ecx, esi
0x9148B7: call    dword ptr [edx+14h]
0x9148BA: pop     esi
0x9148BB: retn    4
