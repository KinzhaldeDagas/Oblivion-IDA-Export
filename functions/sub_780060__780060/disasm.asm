0x780060: push    esi
0x780061: xor     esi, esi
0x780063: cmp     ds:0B28CB0h, esi
0x780069: jbe     short loc_7800D4
0x78006B: lea     edx, [ecx+0D2Ch]
0x780071: lea     eax, [ecx+92Ch]
0x780077: mov     ecx, [eax-0Ch]
0x78007A: mov     [eax-8], ecx
0x78007D: mov     ecx, [eax-4]
0x780080: mov     [eax], ecx
0x780082: mov     ecx, [eax+4]
0x780085: mov     [eax+8], ecx
0x780088: mov     ecx, [eax+0Ch]
0x78008B: mov     [eax+10h], ecx
0x78008E: mov     ecx, [eax+14h]
0x780091: mov     [eax+18h], ecx
0x780094: mov     ecx, [eax+1Ch]
0x780097: mov     [eax+20h], ecx
0x78009A: mov     ecx, [eax+24h]
0x78009D: mov     [eax+28h], ecx
0x7800A0: mov     ecx, [eax+2Ch]
0x7800A3: mov     [eax+30h], ecx
0x7800A6: mov     ecx, [edx-0Ch]
0x7800A9: mov     [edx-8], ecx
0x7800AC: mov     ecx, [edx-4]
0x7800AF: mov     [edx], ecx
0x7800B1: mov     ecx, [edx+4]
0x7800B4: mov     [edx+8], ecx
0x7800B7: mov     ecx, [edx+0Ch]
0x7800BA: mov     [edx+10h], ecx
0x7800BD: mov     ecx, [edx+14h]
0x7800C0: mov     [edx+18h], ecx
0x7800C3: add     esi, 1
0x7800C6: add     eax, 40h ; '@'
0x7800C9: add     edx, 28h ; '('
0x7800CC: cmp     esi, ds:0B28CB0h
0x7800D2: jb      short loc_780077
0x7800D4: pop     esi
0x7800D5: retn
