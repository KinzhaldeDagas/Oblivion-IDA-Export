0x98B0AD: mov     ecx, [esp+arg_4]
0x98B0B1: mov     eax, [ecx]
0x98B0B3: push    esi
0x98B0B4: mov     esi, [esp+4+arg_0]
0x98B0B8: add     eax, esi
0x98B0BA: cmp     dword ptr [ecx+4], 0
0x98B0BE: jl      short loc_98B0D0
0x98B0C0: mov     edx, [ecx+4]
0x98B0C3: mov     ecx, [ecx+8]
0x98B0C6: mov     esi, [edx+esi]
0x98B0C9: mov     ecx, [esi+ecx]
0x98B0CC: add     ecx, edx
0x98B0CE: add     eax, ecx
0x98B0D0: pop     esi
0x98B0D1: retn
