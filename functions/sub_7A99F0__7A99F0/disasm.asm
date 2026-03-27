0x7A99F0: mov     eax, [esp+arg_0]
0x7A99F4: cmp     eax, 3
0x7A99F7: jnb     locret_7A9A8A
0x7A99FD: lea     edx, [eax+eax*4]
0x7A9A00: cmp     byte ptr [ecx+edx*4+0CCh], 0
0x7A9A08: push    edi
0x7A9A09: lea     edi, [ecx+edx*4]
0x7A9A0C: jz      short loc_7A9A89
0x7A9A0E: lea     eax, [eax+eax*4+32h]
0x7A9A12: push    esi
0x7A9A13: lea     esi, [ecx+eax*4]
0x7A9A16: mov     eax, [esi]
0x7A9A18: test    eax, eax
0x7A9A1A: jz      short loc_7A9A88
0x7A9A1C: mov     ecx, [eax]
0x7A9A1E: push    1
0x7A9A20: push    4
0x7A9A22: lea     edx, [esp+10h+arg_0]
0x7A9A26: push    edx
0x7A9A27: push    eax
0x7A9A28: mov     eax, [ecx+1Ch]
0x7A9A2B: call    eax
0x7A9A2D: test    eax, eax
0x7A9A2F: jnz     short loc_7A9A6C
0x7A9A31: mov     eax, [esp+8+arg_0]
0x7A9A35: test    eax, eax
0x7A9A37: jnz     short loc_7A9A52
0x7A9A39: fld1
0x7A9A3B: pop     esi
0x7A9A3C: fstp    dword ptr [edi+0D0h]
0x7A9A42: mov     [edi+0D4h], eax
0x7A9A48: mov     [edi+0CCh], al
0x7A9A4E: pop     edi
0x7A9A4F: retn    4
0x7A9A52: fldz
0x7A9A54: pop     esi
0x7A9A55: fstp    dword ptr [edi+0D0h]
0x7A9A5B: mov     [edi+0D4h], eax
0x7A9A61: mov     byte ptr [edi+0CCh], 0
0x7A9A68: pop     edi
0x7A9A69: retn    4
0x7A9A6C: cmp     eax, 1
0x7A9A6F: jz      short loc_7A9A88
0x7A9A71: mov     eax, [esi]
0x7A9A73: mov     ecx, [eax]
0x7A9A75: mov     edx, [ecx+8]
0x7A9A78: push    eax
0x7A9A79: call    edx
0x7A9A7B: mov     dword ptr [esi], 0
0x7A9A81: mov     byte ptr [edi+0CCh], 0
0x7A9A88: pop     esi
0x7A9A89: pop     edi
0x7A9A8A: retn    4
