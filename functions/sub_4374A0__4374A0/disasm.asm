0x4374A0: test    byte ptr [ecx+34h], 8
0x4374A4: jnz     short loc_4374AB
0x4374A6: jmp     sub_436F30
0x4374AB: cmp     dword ptr [ecx+1Ch], 0
0x4374AF: jz      short loc_4374C8
0x4374B1: mov     eax, [ecx+1Ch]
0x4374B4: movzx   edx, word ptr [eax+0Ch]
0x4374B8: push    esi
0x4374B9: mov     esi, [eax+10h]
0x4374BC: xor     eax, eax
0x4374BE: cmp     edx, esi
0x4374C0: setz    al
0x4374C3: test    al, al
0x4374C5: pop     esi
0x4374C6: jz      short locret_4374DD
0x4374C8: cmp     dword ptr [ecx+0Ch], 0
0x4374CC: jnz     short loc_4374A6
0x4374CE: mov     eax, ioManager
0x4374D3: mov     edx, [eax]
0x4374D5: push    ecx
0x4374D6: mov     ecx, eax
0x4374D8: mov     eax, [edx+3Ch]
0x4374DB: call    eax
0x4374DD: retn
