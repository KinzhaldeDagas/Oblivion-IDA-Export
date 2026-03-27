0x5E13A0: cmp     dword ptr [ecx+58h], 0
0x5E13A4: jz      short loc_5E13C6
0x5E13A6: mov     ecx, [ecx+58h]
0x5E13A9: mov     eax, [ecx]
0x5E13AB: mov     edx, [eax+2C0h]
0x5E13B1: call    edx
0x5E13B3: mov     cx, ax
0x5E13B6: and     cx, 0A01h
0x5E13BB: xor     eax, eax
0x5E13BD: cmp     cx, 201h
0x5E13C2: setz    al
0x5E13C5: retn
0x5E13C6: xor     eax, eax
0x5E13C8: retn
