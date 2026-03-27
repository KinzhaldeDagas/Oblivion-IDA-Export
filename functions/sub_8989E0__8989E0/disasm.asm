0x8989E0: push    esi
0x8989E1: mov     esi, [ecx+0D4h]
0x8989E7: xor     eax, eax
0x8989E9: test    esi, esi
0x8989EB: push    edi
0x8989EC: jle     short loc_898A04
0x8989EE: mov     edx, [ecx+0D0h]
0x8989F4: mov     edi, [esp+8+arg_0]
0x8989F8: cmp     [edx], edi
0x8989FA: jz      short loc_898A19
0x8989FC: inc     eax
0x8989FD: add     edx, 4
0x898A00: cmp     eax, esi
0x898A02: jl      short loc_8989F8
0x898A04: mov     edx, [ecx+0D0h]
0x898A0A: pop     edi
0x898A0B: or      eax, 0FFFFFFFFh
0x898A0E: pop     esi
0x898A0F: mov     dword ptr [edx+eax*4], 0
0x898A16: retn    4
0x898A19: mov     ecx, [ecx+0D0h]
0x898A1F: pop     edi
0x898A20: pop     esi
0x898A21: mov     dword ptr [ecx+eax*4], 0
0x898A28: retn    4
