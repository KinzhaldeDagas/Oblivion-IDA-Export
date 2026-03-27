0x40F640: cmp     eax, 10h
0x40F643: jbe     short loc_40F680
0x40F645: cmp     eax, 40h ; '@'
0x40F648: jbe     short loc_40F672
0x40F64A: cmp     eax, 80h ; '€'
0x40F64F: jbe     short loc_40F66C
0x40F651: cmp     eax, 100h
0x40F656: jbe     short loc_40F666
0x40F658: mov     ecx, 200h
0x40F65D: cmp     ecx, eax
0x40F65F: sbb     eax, eax
0x40F661: and     eax, ecx
0x40F663: add     eax, ecx
0x40F665: retn
0x40F666: mov     eax, 100h
0x40F66B: retn
0x40F66C: mov     eax, 80h ; '€'
0x40F671: retn
0x40F672: mov     edx, 20h ; ' '
0x40F677: cmp     edx, eax
0x40F679: sbb     eax, eax
0x40F67B: and     eax, edx
0x40F67D: add     eax, edx
0x40F67F: retn
0x40F680: cmp     eax, 4
0x40F683: jbe     short loc_40F693
0x40F685: mov     ecx, 8
0x40F68A: cmp     ecx, eax
0x40F68C: sbb     eax, eax
0x40F68E: and     eax, ecx
0x40F690: add     eax, ecx
0x40F692: retn
0x40F693: cmp     eax, 2
0x40F696: jbe     short locret_40F69D
0x40F698: mov     eax, 4
0x40F69D: retn
