0x51CC00: mov     eax, [ecx+28h]
0x51CC03: sub     esp, 8
0x51CC06: shr     eax, 7
0x51CC09: test    al, 1
0x51CC0B: push    ebx
0x51CC0C: mov     bl, [ecx+105h]
0x51CC12: jz      short loc_51CC6D
0x51CC14: add     ecx, 24h ; '$'
0x51CC17: call    TESActorBaseData_GetLevel
0x51CC1C: movzx   eax, ax
0x51CC1F: cmp     ax, 1
0x51CC23: jge     short loc_51CC2A
0x51CC25: mov     eax, 1
0x51CC2A: fld     dword ptr ds:0B362A4h
0x51CC30: movsx   ecx, ax
0x51CC33: mov     [esp+0Ch+var_8], ecx
0x51CC37: movzx   edx, bl
0x51CC3A: fild    [esp+0Ch+var_8]
0x51CC3E: mov     [esp+0Ch+var_8], edx
0x51CC42: pop     ebx
0x51CC43: fmulp   st(1), st
0x51CC45: fild    [esp+8+var_8]
0x51CC48: fnstcw  word ptr [esp+8+var_8]
0x51CC4B: movzx   eax, word ptr [esp+8+var_8]
0x51CC4F: faddp   st(1), st
0x51CC51: or      eax, 0C00h
0x51CC56: mov     [esp+8+var_4], eax
0x51CC5A: fldcw   word ptr [esp+8+var_4]
0x51CC5E: fistp   [esp+8+var_4]
0x51CC62: mov     al, byte ptr [esp+8+var_4]
0x51CC66: fldcw   word ptr [esp+8+var_8]
0x51CC69: add     esp, 8
0x51CC6C: retn
0x51CC6D: mov     al, bl
0x51CC6F: pop     ebx
0x51CC70: add     esp, 8
0x51CC73: retn
