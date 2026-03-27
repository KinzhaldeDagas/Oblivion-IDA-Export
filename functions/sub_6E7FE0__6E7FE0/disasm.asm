0x6E7FE0: cmp     dword ptr [ecx+10h], 0
0x6E7FE4: jz      short loc_6E7FEB
0x6E7FE6: xor     al, al
0x6E7FE8: retn    4
0x6E7FEB: mov     al, [ecx+0Ch]
0x6E7FEE: cmp     al, ds:0A7C6ACh
0x6E7FF4: setnz   al
0x6E7FF7: retn    4
