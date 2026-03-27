0x88DF30: mov     edx, [ecx+0A4h]
0x88DF36: push    esi
0x88DF37: xor     esi, esi
0x88DF39: xor     eax, eax
0x88DF3B: cmp     edx, esi
0x88DF3D: jbe     short loc_88DF51
0x88DF3F: push    edi
0x88DF40: mov     edi, [ecx+0A0h]
0x88DF46: mov     [edi+eax*4], esi
0x88DF49: add     eax, 1
0x88DF4C: cmp     eax, edx
0x88DF4E: jb      short loc_88DF40
0x88DF50: pop     edi
0x88DF51: fld     dword ptr ds:0A6D2D8h
0x88DF57: mov     [ecx+0B4h], esi
0x88DF5D: fst     dword ptr [ecx+0B8h]
0x88DF63: mov     [ecx+0BCh], esi
0x88DF69: fst     dword ptr [ecx+0C0h]
0x88DF6F: mov     [ecx+0C4h], esi
0x88DF75: fst     dword ptr [ecx+0C8h]
0x88DF7B: mov     [ecx+0CCh], esi
0x88DF81: fst     dword ptr [ecx+0D0h]
0x88DF87: mov     [ecx+0D4h], esi
0x88DF8D: fst     dword ptr [ecx+0D8h]
0x88DF93: mov     [ecx+0DCh], esi
0x88DF99: fst     dword ptr [ecx+0E0h]
0x88DF9F: mov     [ecx+0E4h], esi
0x88DFA5: fst     dword ptr [ecx+0E8h]
0x88DFAB: mov     [ecx+0ECh], esi
0x88DFB1: fst     dword ptr [ecx+0F0h]
0x88DFB7: mov     [ecx+0F4h], esi
0x88DFBD: fstp    dword ptr [ecx+0F8h]
0x88DFC3: pop     esi
0x88DFC4: retn
