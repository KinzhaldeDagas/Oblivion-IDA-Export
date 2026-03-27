0x6429E0: push    esi
0x6429E1: mov     esi, ecx
0x6429E3: mov     eax, [esi+28h]
0x6429E6: mov     ecx, [eax+58h]
0x6429E9: test    ecx, ecx
0x6429EB: jz      short loc_642A25
0x6429ED: mov     edx, [ecx]
0x6429EF: mov     eax, [esi+2Ch]
0x6429F2: mov     edx, [edx+264h]
0x6429F8: push    eax
0x6429F9: call    edx
0x6429FB: mov     eax, [esi+28h]
0x6429FE: mov     ecx, [eax+58h]
0x642A01: mov     edx, [ecx]
0x642A03: mov     eax, [edx+254h]
0x642A09: push    0
0x642A0B: call    eax
0x642A0D: cmp     dword ptr [esi+2Ch], 0
0x642A11: jnz     short loc_642A25
0x642A13: mov     ecx, [esi+28h]
0x642A16: mov     ecx, [ecx+58h]
0x642A19: mov     edx, [ecx]
0x642A1B: mov     eax, [edx+258h]
0x642A21: push    1
0x642A23: call    eax
0x642A25: mov     ecx, [esi+30h]
0x642A28: mov     edx, [ecx]
0x642A2A: mov     eax, [esi+28h]
0x642A2D: mov     edx, [edx+10h]
0x642A30: push    eax
0x642A31: call    edx
0x642A33: pop     esi
0x642A34: retn
