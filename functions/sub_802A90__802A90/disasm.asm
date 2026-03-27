0x802A90: mov     eax, [esp+arg_0]
0x802A94: xor     edx, edx
0x802A96: cmp     eax, edx
0x802A98: jz      short loc_802AAD
0x802A9A: push    esi
0x802A9B: mov     esi, [eax]
0x802A9D: mov     [ecx+18h], esi
0x802AA0: mov     esi, [eax+4]
0x802AA3: mov     [ecx+1Ch], esi
0x802AA6: mov     eax, [eax+8]
0x802AA9: mov     [ecx+20h], eax
0x802AAC: pop     esi
0x802AAD: mov     eax, [ecx+8]
0x802AB0: and     dword ptr [eax+1Ch], 0FFFFFBFFh
0x802AB7: mov     [eax+24h], edx
0x802ABA: mov     eax, [ecx+8]
0x802ABD: and     dword ptr [eax+1Ch], 0FFFFF7FFh
0x802AC4: mov     [eax+24h], edx
0x802AC7: mov     ecx, [ecx+8]
0x802ACA: and     dword ptr [ecx+1Ch], 0FFFFEFFFh
0x802AD1: mov     [ecx+24h], edx
0x802AD4: retn    4
