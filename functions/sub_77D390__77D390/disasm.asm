0x77D390: xor     edx, edx
0x77D392: mov     [ecx], edx
0x77D394: mov     [ecx+8], edx
0x77D397: mov     [ecx+0Ch], edx
0x77D39A: mov     [ecx+10h], edx
0x77D39D: mov     [ecx+14h], edx
0x77D3A0: mov     [ecx+4], edx
0x77D3A3: mov     [ecx+18h], edx
0x77D3A6: mov     [ecx+1Ch], edx
0x77D3A9: mov     [ecx+20h], edx
0x77D3AC: mov     [ecx+24h], edx
0x77D3AF: mov     [ecx+28h], edx
0x77D3B2: xor     eax, eax
0x77D3B4: cmp     [ecx+36h], dx
0x77D3B8: jbe     short loc_77D3D4
0x77D3BA: push    esi
0x77D3BB: push    edi
0x77D3BC: lea     esp, [esp+0]
0x77D3C0: mov     edi, [ecx+30h]
0x77D3C3: movzx   esi, ax
0x77D3C6: add     eax, 1
0x77D3C9: mov     [edi+esi*4], edx
0x77D3CC: cmp     ax, [ecx+36h]
0x77D3D0: jb      short loc_77D3C0
0x77D3D2: pop     edi
0x77D3D3: pop     esi
0x77D3D4: mov     [ecx+36h], dx
0x77D3D8: mov     [ecx+38h], dx
0x77D3DC: mov     [ecx+3Ch], edx
0x77D3DF: mov     [ecx+40h], edx
0x77D3E2: retn
