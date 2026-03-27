0x7738C0: xor     eax, eax
0x7738C2: add     ecx, 14h
0x7738C5: cmp     dword ptr [ecx], 13h
0x7738C8: jz      short locret_7738DA
0x7738CA: add     eax, 1
0x7738CD: add     ecx, 0Ch
0x7738D0: cmp     eax, 4
0x7738D3: jb      short loc_7738C5
0x7738D5: mov     eax, 4
0x7738DA: retn
