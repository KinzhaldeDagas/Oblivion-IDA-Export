0x484F80: sub     esp, 18h
0x484F83: fld     dword ptr ds:0A30634h
0x484F89: push    ebx
0x484F8A: push    esi
0x484F8B: fstp    [esp+20h+var_18]
0x484F8F: mov     esi, [esp+20h+arg_0]
0x484F93: mov     ebx, ecx
0x484F95: push    edi
0x484F96: mov     edi, [ebx+8]
0x484F99: mov     al, [edi+4]
0x484F9C: cmp     al, 21h ; '!'
0x484F9E: jnz     EquippedWeaponData_GetDamage___CheckIsAmmo
