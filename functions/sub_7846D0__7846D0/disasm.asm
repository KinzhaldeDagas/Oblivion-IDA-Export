0x7846D0: push    esi
0x7846D1: mov     esi, ecx
0x7846D3: cmp     dword ptr [esi], 0
0x7846D6: jnz     short loc_7846DD
0x7846D8: call    __invalid_parameter_noinfo
0x7846DD: mov     eax, [esi+4]
0x7846E0: cmp     byte ptr [eax+2Dh], 0
0x7846E4: jz      short loc_7846EC
0x7846E6: pop     esi
0x7846E7: jmp     __invalid_parameter_noinfo
0x7846EC: mov     ecx, [eax+8]
0x7846EF: cmp     byte ptr [ecx+2Dh], 0
0x7846F3: jnz     short loc_78470F
0x7846F5: mov     eax, [ecx]
0x7846F7: cmp     byte ptr [eax+2Dh], 0
0x7846FB: jnz     short loc_78470A
0x7846FD: lea     ecx, [ecx+0]
0x784700: mov     ecx, eax
0x784702: mov     eax, [ecx]
0x784704: cmp     byte ptr [eax+2Dh], 0
0x784708: jz      short loc_784700
0x78470A: mov     [esi+4], ecx
0x78470D: pop     esi
0x78470E: retn
0x78470F: mov     eax, [eax+4]
0x784712: cmp     byte ptr [eax+2Dh], 0
0x784716: jnz     short loc_78472E
0x784718: mov     ecx, [esi+4]
0x78471B: cmp     ecx, [eax+8]
0x78471E: jnz     short loc_78472E
0x784720: mov     [esi+4], eax
0x784723: mov     edx, eax
0x784725: mov     eax, [edx+4]
0x784728: cmp     byte ptr [eax+2Dh], 0
0x78472C: jz      short loc_784718
0x78472E: mov     [esi+4], eax
0x784731: pop     esi
0x784732: retn
