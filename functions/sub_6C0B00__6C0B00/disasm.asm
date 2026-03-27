0x6C0B00: push    esi
0x6C0B01: mov     esi, [esp+4+arg_4]
0x6C0B05: push    edi
0x6C0B06: mov     edi, [esp+8+arg_0]
0x6C0B0A: push    esi
0x6C0B0B: push    edi
0x6C0B0C: call    sub_6BE360
0x6C0B11: add     esp, 8
0x6C0B14: test    al, al
0x6C0B16: jnz     short loc_6C0B1B
0x6C0B18: pop     edi
0x6C0B19: pop     esi
0x6C0B1A: retn
0x6C0B1B: fld     dword ptr [edi+14h]
0x6C0B1E: fld     dword ptr [esi+14h]
0x6C0B21: fucompp
0x6C0B23: fnstsw  ax
0x6C0B25: test    ah, 44h
0x6C0B28: jp      short loc_6C0B70
0x6C0B2A: fld     dword ptr [edi+18h]
0x6C0B2D: fld     dword ptr [esi+18h]
0x6C0B30: fucompp
0x6C0B32: fnstsw  ax
0x6C0B34: test    ah, 44h
0x6C0B37: jp      short loc_6C0B70
0x6C0B39: fld     dword ptr [edi+1Ch]
0x6C0B3C: fld     dword ptr [esi+1Ch]
0x6C0B3F: fucompp
0x6C0B41: fnstsw  ax
0x6C0B43: test    ah, 44h
0x6C0B46: jp      short loc_6C0B70
0x6C0B48: lea     eax, [esi+20h]
0x6C0B4B: push    eax
0x6C0B4C: lea     ecx, [edi+20h]
0x6C0B4F: call    sub_73B770
0x6C0B54: test    al, al
0x6C0B56: jz      short loc_6C0B70
0x6C0B58: add     esi, 30h ; '0'
0x6C0B5B: push    esi
0x6C0B5C: lea     ecx, [edi+30h]
0x6C0B5F: call    sub_73B770
0x6C0B64: test    al, al
0x6C0B66: jz      short loc_6C0B70
0x6C0B68: pop     edi
0x6C0B69: mov     eax, 1
0x6C0B6E: pop     esi
0x6C0B6F: retn
0x6C0B70: pop     edi
0x6C0B71: xor     eax, eax
0x6C0B73: pop     esi
0x6C0B74: retn
