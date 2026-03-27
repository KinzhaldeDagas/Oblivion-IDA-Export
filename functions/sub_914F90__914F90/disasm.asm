0x914F90: push    esi
0x914F91: mov     esi, [esp+4+arg_0]
0x914F95: mov     eax, [esi]
0x914F97: push    ecx
0x914F98: push    1
0x914F9A: push    offset aPlaneshape; "PlaneShape"
0x914F9F: mov     ecx, esi
0x914FA1: call    dword ptr [eax]
0x914FA3: mov     edx, [esi]
0x914FA5: mov     ecx, esi
0x914FA7: call    dword ptr [edx+14h]
0x914FAA: pop     esi
0x914FAB: retn    4
