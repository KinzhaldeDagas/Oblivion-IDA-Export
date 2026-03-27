0x4D74B0: cmp     dword ptr [ecx+1Ch], 0
0x4D74B4: jz      short loc_4D74C9
0x4D74B6: mov     eax, [ecx]
0x4D74B8: mov     edx, [eax+170h]
0x4D74BE: call    edx
0x4D74C0: cmp     byte ptr [eax+4], 20h ; ' '
0x4D74C4: jnz     short loc_4D74C9
0x4D74C6: mov     al, 1
0x4D74C8: retn
0x4D74C9: xor     al, al
0x4D74CB: retn
