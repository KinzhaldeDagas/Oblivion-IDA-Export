0x56A9C0: mov     eax, [esp+arg_0]
0x56A9C4: lea     edx, [eax-1000h]
0x56A9CA: cmp     edx, 170h
0x56A9D0: push    esi
0x56A9D1: mov     esi, eax
0x56A9D3: ja      short loc_56A9DD
0x56A9D5: lea     esi, [eax-1000h]
0x56A9DB: jmp     short loc_56A9E9
0x56A9DD: cmp     eax, 170h
0x56A9E2: ja      short loc_56A9E9
0x56A9E4: add     eax, 1000h
0x56A9E9: cmp     esi, 170h
0x56A9EF: ja      short def_56AA1C; jumptable 0056AA1C default case, cases 4098-4157,4159,4161,4162,4169-4186,4188-4196,4201,4204-4206,4209-4342
0x56A9F1: xor     edx, edx
0x56A9F3: cmp     eax, 1136h
0x56A9F8: mov     [ecx+8], edx
0x56A9FB: mov     [ecx+0Ch], edx
0x56A9FE: mov     [ecx+10h], edx
0x56AA01: mov     [ecx+8], si
0x56AA05: jg      short def_56AA1C; jumptable 0056AA1C default case, cases 4098-4157,4159,4161,4162,4169-4186,4188-4196,4201,4204-4206,4209-4342
0x56AA07: jz      short loc_56AA58; jumptable 0056AA1C cases 4158,4160,4163-4168,4187,4197-4200,4202,4207,4208
0x56AA09: add     eax, 0FFFFEFFFh; switch 247 cases
0x56AA0E: cmp     eax, 0F6h
0x56AA13: ja      short def_56AA1C; jumptable 0056AA1C default case, cases 4098-4157,4159,4161,4162,4169-4186,4188-4196,4201,4204-4206,4209-4342
0x56AA15: movzx   eax, ds:byte_56AA80[eax]
0x56AA1C: jmp     ds:jpt_56AA1C[eax*4]; switch jump
0x56AA23: mov     al, [ecx]; jumptable 0056AA1C case 4097
0x56AA25: and     al, 1Fh
0x56AA27: or      al, 80h
0x56AA29: test    al, 4
0x56AA2B: mov     [ecx], al
0x56AA2D: jnz     short def_56AA1C; jumptable 0056AA1C default case, cases 4098-4157,4159,4161,4162,4169-4186,4188-4196,4201,4204-4206,4209-4342
0x56AA2F: fld     dword ptr ds:0A2FE7Ch
0x56AA35: pop     esi
0x56AA36: fstp    dword ptr [ecx+4]
0x56AA39: retn    4
0x56AA3C: mov     al, [ecx]; jumptable 0056AA1C case 4203
0x56AA3E: and     al, 1Fh
0x56AA40: or      al, 20h
0x56AA42: test    al, 4
0x56AA44: mov     [ecx], al
0x56AA46: jnz     short def_56AA1C; jumptable 0056AA1C default case, cases 4098-4157,4159,4161,4162,4169-4186,4188-4196,4201,4204-4206,4209-4342
0x56AA48: fldz
0x56AA4A: pop     esi
0x56AA4B: fstp    dword ptr [ecx+4]
0x56AA4E: retn    4
0x56AA51: mov     dword ptr [ecx+0Ch], 21h ; '!'; jumptable 0056AA1C case 4343
0x56AA58: and     byte ptr [ecx], 1Fh; jumptable 0056AA1C cases 4158,4160,4163-4168,4187,4197-4200,4202,4207,4208
0x56AA5B: test    byte ptr [ecx], 4
0x56AA5E: jnz     short def_56AA1C; jumptable 0056AA1C default case, cases 4098-4157,4159,4161,4162,4169-4186,4188-4196,4201,4204-4206,4209-4342
0x56AA60: fld1
0x56AA62: fstp    dword ptr [ecx+4]
0x56AA65: pop     esi; jumptable 0056AA1C default case, cases 4098-4157,4159,4161,4162,4169-4186,4188-4196,4201,4204-4206,4209-4342
0x56AA66: retn    4
