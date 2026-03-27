0x67D4F0: call    sub_567D20
0x67D4F5: mov     ecx, ds:0B33B00h
0x67D4FB: add     ax, 0Ch
0x67D4FF: cmp     byte ptr [ecx+7Ch], 6Ch ; 'l'
0x67D503: movzx   eax, ax
0x67D506: jb      short loc_67D50C
0x67D508: add     eax, 10h
0x67D50B: retn
0x67D50C: add     eax, 8
0x67D50F: retn
