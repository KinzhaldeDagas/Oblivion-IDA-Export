0x758CE0: push    esi
0x758CE1: push    edi
0x758CE2: mov     edi, [esp+8+arg_0]
0x758CE6: push    edi
0x758CE7: mov     esi, ecx
0x758CE9: call    sub_752CD0
0x758CEE: test    al, al
0x758CF0: jz      short loc_758D67
0x758CF2: mov     eax, [esi+18h]
0x758CF5: test    eax, eax
0x758CF7: jz      short loc_758D03
0x758CF9: cmp     dword ptr [edi+18h], 0
0x758CFD: jz      short loc_758D67
0x758CFF: test    eax, eax
0x758D01: jnz     short loc_758D0D
0x758D03: cmp     dword ptr [edi+18h], 0
0x758D07: jnz     short loc_758D67
0x758D09: test    eax, eax
0x758D0B: jz      short loc_758D23
0x758D0D: mov     eax, [edi+18h]
0x758D10: test    eax, eax
0x758D12: jz      short loc_758D23
0x758D14: mov     ecx, [esi+18h]
0x758D17: mov     edx, [ecx]
0x758D19: push    eax
0x758D1A: mov     eax, [edx+2Ch]
0x758D1D: call    eax
0x758D1F: test    al, al
0x758D21: jz      short loc_758D67
0x758D23: lea     ecx, [esi+1Ch]
0x758D26: push    ecx
0x758D27: lea     ecx, [edi+1Ch]
0x758D2A: call    sub_8AA390
0x758D2F: test    al, al
0x758D31: jnz     short loc_758D67
0x758D33: fld     dword ptr [edi+28h]
0x758D36: fld     dword ptr [esi+28h]
0x758D39: fucompp
0x758D3B: fnstsw  ax
0x758D3D: test    ah, 44h
0x758D40: jp      short loc_758D67
0x758D42: fld     dword ptr [edi+2Ch]
0x758D45: fld     dword ptr [esi+2Ch]
0x758D48: fucompp
0x758D4A: fnstsw  ax
0x758D4C: test    ah, 44h
0x758D4F: jp      short loc_758D67
0x758D51: fld     dword ptr [edi+30h]
0x758D54: fld     dword ptr [esi+30h]
0x758D57: fucompp
0x758D59: fnstsw  ax
0x758D5B: test    ah, 44h
0x758D5E: jp      short loc_758D67
0x758D60: pop     edi
0x758D61: mov     al, 1
0x758D63: pop     esi
0x758D64: retn    4
0x758D67: pop     edi
0x758D68: xor     al, al
0x758D6A: pop     esi
0x758D6B: retn    4
