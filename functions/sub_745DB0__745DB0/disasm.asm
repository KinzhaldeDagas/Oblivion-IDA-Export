0x745DB0: push    esi
0x745DB1: lea     eax, [edx+8Ch]
0x745DB7: mov     ecx, 11Eh
0x745DBC: xor     esi, esi
0x745DBE: mov     edi, edi
0x745DC0: mov     [eax], si
0x745DC3: add     eax, 4
0x745DC6: sub     ecx, 1
0x745DC9: jnz     short loc_745DC0
0x745DCB: lea     eax, [edx+980h]
0x745DD1: mov     ecx, 1Eh
0x745DD6: mov     [eax], si
0x745DD9: add     eax, 4
0x745DDC: sub     ecx, 1
0x745DDF: jnz     short loc_745DD6
0x745DE1: lea     eax, [edx+0A74h]
0x745DE7: mov     ecx, 13h
0x745DEC: lea     esp, [esp+0]
0x745DF0: mov     [eax], si
0x745DF3: add     eax, 4
0x745DF6: sub     ecx, 1
0x745DF9: jnz     short loc_745DF0
0x745DFB: mov     [edx+16A4h], esi
0x745E01: mov     [edx+16A0h], esi
0x745E07: mov     [edx+16A8h], esi
0x745E0D: mov     [edx+1698h], esi
0x745E13: mov     word ptr [edx+48Ch], 1
0x745E1C: pop     esi
0x745E1D: retn
