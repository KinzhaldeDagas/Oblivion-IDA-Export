0x8A76E0: mov     edx, [ecx+28h]
0x8A76E3: mov     eax, [ecx+2Ch]
0x8A76E6: push    ebx
0x8A76E7: push    esi
0x8A76E8: push    edi
0x8A76E9: lea     esi, [edx-10h]
0x8A76EC: sub     eax, edx
0x8A76EE: lea     edx, [ecx+20h]
0x8A76F1: mov     edi, esi
0x8A76F3: mov     ebx, [edi]
0x8A76F5: mov     [edx], ebx
0x8A76F7: mov     ebx, [edi+4]
0x8A76FA: mov     [edx+4], ebx
0x8A76FD: mov     ebx, [edi+8]
0x8A7700: push    14h
0x8A7702: add     eax, 10h
0x8A7705: mov     [edx+8], ebx
0x8A7708: mov     edi, [edi+0Ch]
0x8A770B: push    eax
0x8A770C: push    esi
0x8A770D: mov     [edx+0Ch], edi
0x8A7710: call    sub_8A75D0
0x8A7715: pop     edi
0x8A7716: pop     esi
0x8A7717: pop     ebx
0x8A7718: retn    4
