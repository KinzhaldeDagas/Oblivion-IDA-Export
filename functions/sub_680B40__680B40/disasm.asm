0x680B40: push    esi
0x680B41: mov     esi, ecx
0x680B43: xor     eax, eax
0x680B45: cmp     [esi+0Ch], eax
0x680B48: jz      short loc_680BA9
0x680B4A: mov     ecx, [esi+4]
0x680B4D: push    edi
0x680B4E: mov     edi, [ecx+8]
0x680B51: movzx   edx, word ptr [edi]
0x680B54: cmp     dx, ds:0B3BF04h
0x680B5B: jnb     short loc_680B69
0x680B5D: movzx   eax, dx
0x680B60: shl     eax, 4
0x680B63: add     eax, ds:0B3BF00h
0x680B69: fld     dword ptr [eax]
0x680B6B: fld     [esp+8+arg_0]
0x680B6F: fcompp
0x680B71: fnstsw  ax
0x680B73: test    ah, 41h
0x680B76: jnz     short loc_680BA6
0x680B78: mov     eax, [ecx]
0x680B7A: test    eax, eax
0x680B7C: mov     [esi+4], eax
0x680B7F: jz      short loc_680B8A
0x680B81: mov     dword ptr [eax+4], 0
0x680B88: jmp     short loc_680B91
0x680B8A: mov     dword ptr [esi+8], 0
0x680B91: mov     eax, [esi]
0x680B93: mov     edx, [eax+8]
0x680B96: push    ecx
0x680B97: mov     ecx, esi
0x680B99: call    edx
0x680B9B: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x680B9F: mov     eax, edi
0x680BA1: pop     edi
0x680BA2: pop     esi
0x680BA3: retn    4
0x680BA6: xor     eax, eax
0x680BA8: pop     edi
0x680BA9: pop     esi
0x680BAA: retn    4
