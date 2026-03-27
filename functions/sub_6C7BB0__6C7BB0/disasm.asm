0x6C7BB0: push    ebp
0x6C7BB1: push    edi
0x6C7BB2: mov     edi, [esp+8+a2]
0x6C7BB6: push    edi; a2
0x6C7BB7: mov     ebp, ecx
0x6C7BB9: call    sub_700670
0x6C7BBE: test    al, al
0x6C7BC0: jnz     short loc_6C7BC9
0x6C7BC2: pop     edi
0x6C7BC3: xor     al, al
0x6C7BC5: pop     ebp
0x6C7BC6: retn    4
0x6C7BC9: mov     eax, [ebp+8]
0x6C7BCC: test    eax, eax
0x6C7BCE: jz      short loc_6C7BDA
0x6C7BD0: cmp     dword ptr [edi+8], 0
0x6C7BD4: jz      short loc_6C7BC2
0x6C7BD6: test    eax, eax
0x6C7BD8: jnz     short loc_6C7BE4
0x6C7BDA: cmp     dword ptr [edi+8], 0
0x6C7BDE: jnz     short loc_6C7BC2
0x6C7BE0: test    eax, eax
0x6C7BE2: jz      short loc_6C7BF9
0x6C7BE4: mov     ecx, [edi+8]
0x6C7BE7: test    ecx, ecx
0x6C7BE9: jz      short loc_6C7BF9
0x6C7BEB: push    ecx; Str2
0x6C7BEC: push    eax; Str1
0x6C7BED: call    __strcmp
0x6C7BF2: add     esp, 8
0x6C7BF5: test    eax, eax
0x6C7BF7: jnz     short loc_6C7BC2
0x6C7BF9: mov     eax, [ebp+0Ch]
0x6C7BFC: cmp     eax, [edi+0Ch]
0x6C7BFF: jnz     short loc_6C7BC2
0x6C7C01: mov     ecx, [ebp+10h]
0x6C7C04: cmp     ecx, [edi+10h]
0x6C7C07: jnz     short loc_6C7BC2
0x6C7C09: push    ebx
0x6C7C0A: xor     ebx, ebx
0x6C7C0C: test    eax, eax
0x6C7C0E: push    esi
0x6C7C0F: jbe     short loc_6C7C4E
0x6C7C11: xor     esi, esi
0x6C7C13: mov     edx, [edi+14h]
0x6C7C16: mov     ecx, [ebp+14h]
0x6C7C19: add     edx, esi
0x6C7C1B: push    edx
0x6C7C1C: add     ecx, esi
0x6C7C1E: call    sub_6C76C0
0x6C7C23: test    al, al
0x6C7C25: jz      loc_6C7D83
0x6C7C2B: mov     eax, [edi+18h]
0x6C7C2E: mov     ecx, [ebp+18h]
0x6C7C31: add     eax, esi
0x6C7C33: push    eax
0x6C7C34: add     ecx, esi
0x6C7C36: call    sub_6C7740
0x6C7C3B: test    al, al
0x6C7C3D: jz      loc_6C7D83
0x6C7C43: add     ebx, 1
0x6C7C46: add     esi, 10h
0x6C7C49: cmp     ebx, [ebp+0Ch]
0x6C7C4C: jb      short loc_6C7C13
0x6C7C4E: fld     dword ptr [ebp+1Ch]
0x6C7C51: fld     dword ptr [edi+1Ch]
0x6C7C54: fucompp
0x6C7C56: fnstsw  ax
0x6C7C58: test    ah, 44h
0x6C7C5B: jp      loc_6C7D83
0x6C7C61: mov     ecx, [ebp+20h]
0x6C7C64: test    ecx, ecx
0x6C7C66: jz      short loc_6C7C76
0x6C7C68: cmp     dword ptr [edi+20h], 0
0x6C7C6C: jz      loc_6C7D83
0x6C7C72: test    ecx, ecx
0x6C7C74: jnz     short loc_6C7C84
0x6C7C76: cmp     dword ptr [edi+20h], 0
0x6C7C7A: jnz     loc_6C7D83
0x6C7C80: test    ecx, ecx
0x6C7C82: jz      short loc_6C7C9B
0x6C7C84: mov     eax, [edi+20h]
0x6C7C87: test    eax, eax
0x6C7C89: jz      short loc_6C7C9B
0x6C7C8B: mov     edx, [ecx]
0x6C7C8D: push    eax
0x6C7C8E: mov     eax, [edx+2Ch]
0x6C7C91: call    eax
0x6C7C93: test    al, al
0x6C7C95: jz      loc_6C7D83
0x6C7C9B: mov     ecx, [ebp+24h]
0x6C7C9E: cmp     ecx, [edi+24h]
0x6C7CA1: jnz     loc_6C7D83
0x6C7CA7: fld     dword ptr [ebp+28h]
0x6C7CAA: fld     dword ptr [edi+28h]
0x6C7CAD: fucompp
0x6C7CAF: fnstsw  ax
0x6C7CB1: test    ah, 44h
0x6C7CB4: jp      loc_6C7D83
0x6C7CBA: fld     dword ptr [ebp+2Ch]
0x6C7CBD: fld     dword ptr [edi+2Ch]
0x6C7CC0: fucompp
0x6C7CC2: fnstsw  ax
0x6C7CC4: test    ah, 44h
0x6C7CC7: jp      loc_6C7D83
0x6C7CCD: fld     dword ptr [ebp+30h]
0x6C7CD0: fld     dword ptr [edi+30h]
0x6C7CD3: fucompp
0x6C7CD5: fnstsw  ax
0x6C7CD7: test    ah, 44h
0x6C7CDA: jp      loc_6C7D83
0x6C7CE0: mov     eax, [ebp+40h]
0x6C7CE3: test    eax, eax
0x6C7CE5: jz      short loc_6C7CF5
0x6C7CE7: cmp     dword ptr [edi+40h], 0
0x6C7CEB: jz      loc_6C7D83
0x6C7CF1: test    eax, eax
0x6C7CF3: jnz     short loc_6C7D03
0x6C7CF5: cmp     dword ptr [edi+40h], 0
0x6C7CF9: jnz     loc_6C7D83
0x6C7CFF: test    eax, eax
0x6C7D01: jz      short loc_6C7D19
0x6C7D03: mov     eax, [edi+40h]
0x6C7D06: test    eax, eax
0x6C7D08: jz      short loc_6C7D19
0x6C7D0A: mov     ecx, [ebp+40h]
0x6C7D0D: mov     edx, [ecx]
0x6C7D0F: push    eax
0x6C7D10: mov     eax, [edx+2Ch]
0x6C7D13: call    eax
0x6C7D15: test    al, al
0x6C7D17: jz      short loc_6C7D83
0x6C7D19: mov     eax, [ebp+5Ch]
0x6C7D1C: test    eax, eax
0x6C7D1E: jz      short loc_6C7D2A
0x6C7D20: cmp     dword ptr [edi+5Ch], 0
0x6C7D24: jz      short loc_6C7D83
0x6C7D26: test    eax, eax
0x6C7D28: jnz     short loc_6C7D34
0x6C7D2A: cmp     dword ptr [edi+5Ch], 0
0x6C7D2E: jnz     short loc_6C7D83
0x6C7D30: test    eax, eax
0x6C7D32: jz      short loc_6C7D69
0x6C7D34: mov     ecx, [edi+5Ch]
0x6C7D37: test    ecx, ecx
0x6C7D39: jz      short loc_6C7D69
0x6C7D3B: jmp     short loc_6C7D40
0x6C7D3D: align 10h
0x6C7D40: mov     dl, [eax]
0x6C7D42: cmp     dl, [ecx]
0x6C7D44: jnz     short loc_6C7D60
0x6C7D46: test    dl, dl
0x6C7D48: jz      short loc_6C7D5C
0x6C7D4A: mov     dl, [eax+1]
0x6C7D4D: cmp     dl, [ecx+1]
0x6C7D50: jnz     short loc_6C7D60
0x6C7D52: add     eax, 2
0x6C7D55: add     ecx, 2
0x6C7D58: test    dl, dl
0x6C7D5A: jnz     short loc_6C7D40
0x6C7D5C: xor     eax, eax
0x6C7D5E: jmp     short loc_6C7D65
0x6C7D60: sbb     eax, eax
0x6C7D62: sbb     eax, 0FFFFFFFFh
0x6C7D65: test    eax, eax
0x6C7D67: jnz     short loc_6C7D83
0x6C7D69: mov     ecx, [ebp+64h]
0x6C7D6C: mov     edi, [edi+64h]
0x6C7D6F: mov     edx, [ecx]
0x6C7D71: mov     eax, [edx+2Ch]
0x6C7D74: push    edi
0x6C7D75: call    eax
0x6C7D77: pop     esi
0x6C7D78: pop     ebx
0x6C7D79: test    al, al
0x6C7D7B: pop     edi
0x6C7D7C: setnz   al
0x6C7D7F: pop     ebp
0x6C7D80: retn    4
0x6C7D83: pop     esi
0x6C7D84: pop     ebx
0x6C7D85: pop     edi
0x6C7D86: xor     al, al
0x6C7D88: pop     ebp
0x6C7D89: retn    4
