0x8F52C0: push    esi
0x8F52C1: mov     esi, [esp+4+arg_0]
0x8F52C5: mov     eax, [esi]
0x8F52C7: push    ecx
0x8F52C8: push    1
0x8F52CA: push    offset aMultisphere; "MultiSphere"
0x8F52CF: mov     ecx, esi
0x8F52D1: call    dword ptr [eax]
0x8F52D3: mov     edx, [esi]
0x8F52D5: mov     ecx, esi
0x8F52D7: call    dword ptr [edx+14h]
0x8F52DA: pop     esi
0x8F52DB: retn    4
