0x6AF750: mov     eax, 1
0x6AF755: add     [ecx+4], eax
0x6AF758: cmp     dword ptr [ecx+10h], 0
0x6AF75C: jnz     short loc_6AF768
0x6AF75E: add     [ecx+8], eax
0x6AF761: mov     dword ptr [ecx+10h], 8
0x6AF768: mov     eax, [ecx+8]
0x6AF76B: mov     edx, [ecx+10h]
0x6AF76E: push    esi
0x6AF76F: mov     esi, [ecx+0Ch]
0x6AF772: and     eax, 0FFFh
0x6AF777: mov     eax, [esi+eax*4]
0x6AF77A: push    edi
0x6AF77B: mov     edi, [ecx+14h]
0x6AF77E: and     eax, [edi+edx*4]
0x6AF781: add     edx, 0FFFFFFFFh
0x6AF784: mov     [ecx+10h], edx
0x6AF787: mov     ecx, edx
0x6AF789: pop     edi
0x6AF78A: shr     eax, cl
0x6AF78C: pop     esi
0x6AF78D: retn
