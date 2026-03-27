0x8A0500: test    ecx, ecx
0x8A0502: jz      short locret_8A052D
0x8A0504: push    esi
0x8A0505: mov     esi, [ecx+8]
0x8A0508: test    esi, esi
0x8A050A: jz      short loc_8A052C
0x8A050C: push    edi
0x8A050D: mov     edi, [esp+8+arg_0]
0x8A0511: test    edi, edi
0x8A0513: jz      short loc_8A051C
0x8A0515: mov     ecx, edi
0x8A0517: call    sub_8BC720
0x8A051C: mov     ecx, [esi+14h]
0x8A051F: test    ecx, ecx
0x8A0521: jz      short loc_8A0528
0x8A0523: call    sub_8BC730
0x8A0528: mov     [esi+14h], edi
0x8A052B: pop     edi
0x8A052C: pop     esi
0x8A052D: retn    4
