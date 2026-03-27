0x75BDF0: push    esi
0x75BDF1: push    edi
0x75BDF2: mov     edi, [esp+8+arg_0]
0x75BDF6: push    edi
0x75BDF7: mov     esi, ecx
0x75BDF9: call    sub_752CD0
0x75BDFE: test    al, al
0x75BE00: jnz     short loc_75BE09
0x75BE02: pop     edi
0x75BE03: xor     al, al
0x75BE05: pop     esi
0x75BE06: retn    4
0x75BE09: mov     al, [edi+18h]
0x75BE0C: cmp     al, [esi+18h]
0x75BE0F: jnz     short loc_75BE02
0x75BE11: mov     eax, [edi+1Ch]
0x75BE14: test    eax, eax
0x75BE16: jz      short loc_75BE22
0x75BE18: cmp     dword ptr [esi+1Ch], 0
0x75BE1C: jz      short loc_75BE02
0x75BE1E: test    eax, eax
0x75BE20: jnz     short loc_75BE2C
0x75BE22: cmp     dword ptr [esi+1Ch], 0
0x75BE26: jnz     short loc_75BE02
0x75BE28: test    eax, eax
0x75BE2A: jz      short loc_75BE41
0x75BE2C: mov     esi, [esi+1Ch]
0x75BE2F: test    esi, esi
0x75BE31: jz      short loc_75BE41
0x75BE33: mov     ecx, eax
0x75BE35: mov     edx, [ecx]
0x75BE37: mov     eax, [edx+2Ch]
0x75BE3A: push    esi
0x75BE3B: call    eax
0x75BE3D: test    al, al
0x75BE3F: jz      short loc_75BE02
0x75BE41: pop     edi
0x75BE42: mov     al, 1
0x75BE44: pop     esi
0x75BE45: retn    4
