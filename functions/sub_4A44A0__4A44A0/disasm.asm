0x4A44A0: push    esi
0x4A44A1: mov     esi, ecx
0x4A44A3: test    esi, esi
0x4A44A5: jz      short loc_4A44BA
0x4A44A7: mov     ecx, [esi]
0x4A44A9: test    ecx, ecx
0x4A44AB: jz      short loc_4A44BA
0x4A44AD: mov     eax, [ecx]
0x4A44AF: mov     edx, [eax+1Ch]
0x4A44B2: call    edx
0x4A44B4: test    al, al
0x4A44B6: jnz     short loc_4A44A7
0x4A44B8: pop     esi
0x4A44B9: retn
0x4A44BA: mov     al, 1
0x4A44BC: pop     esi
0x4A44BD: retn
