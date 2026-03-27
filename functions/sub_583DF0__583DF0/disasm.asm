0x583DF0: mov     eax, ds:0B3A6E0h
0x583DF5: mov     ecx, [eax+1Ch]
0x583DF8: mov     eax, [ecx+24h]
0x583DFB: test    eax, eax
0x583DFD: jz      short locret_583E2B
0x583DFF: cmp     word ptr [eax+0B6h], 0
0x583E07: jbe     short locret_583E2B
0x583E09: mov     edx, [eax+0B0h]
0x583E0F: mov     ecx, [edx]
0x583E11: test    ecx, ecx
0x583E13: jz      short locret_583E2B
0x583E15: push    2
0x583E17: call    NiNode_GetNiPropertyByID
0x583E1C: test    eax, eax
0x583E1E: jz      short locret_583E2B
0x583E20: fild    [esp+arg_0]
0x583E24: add     dword ptr [eax+54h], 1
0x583E28: fstp    dword ptr [eax+50h]
0x583E2B: retn
