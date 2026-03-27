0x898990: push    esi
0x898991: mov     esi, [ecx+0ECh]
0x898997: xor     eax, eax
0x898999: test    esi, esi
0x89899B: push    edi
0x89899C: jle     short loc_8989B4
0x89899E: mov     edx, [ecx+0E8h]
0x8989A4: mov     edi, [esp+8+arg_0]
0x8989A8: cmp     [edx], edi
0x8989AA: jz      short loc_8989C9
0x8989AC: inc     eax
0x8989AD: add     edx, 4
0x8989B0: cmp     eax, esi
0x8989B2: jl      short loc_8989A8
0x8989B4: mov     edx, [ecx+0E8h]
0x8989BA: pop     edi
0x8989BB: or      eax, 0FFFFFFFFh
0x8989BE: pop     esi
0x8989BF: mov     dword ptr [edx+eax*4], 0
0x8989C6: retn    4
0x8989C9: mov     ecx, [ecx+0E8h]
0x8989CF: pop     edi
0x8989D0: pop     esi
0x8989D1: mov     dword ptr [ecx+eax*4], 0
0x8989D8: retn    4
