0x4D8A60: sub     esp, 0Ch
0x4D8A63: mov     eax, [ecx+2Ch]
0x4D8A66: fld     [esp+0Ch+arg_0]
0x4D8A6A: mov     edx, [ecx+30h]
0x4D8A6D: push    esi
0x4D8A6E: mov     esi, [ecx+34h]
0x4D8A71: mov     [esp+10h+var_4], esi
0x4D8A75: fstp    [esp+10h+var_4]
0x4D8A79: mov     [ecx+2Ch], eax
0x4D8A7C: mov     eax, [esp+10h+var_4]
0x4D8A80: mov     [ecx+30h], edx
0x4D8A83: mov     edx, [ecx]
0x4D8A85: mov     [ecx+34h], eax
0x4D8A88: pop     esi
0x4D8A89: add     esp, 0Ch
0x4D8A8C: mov     [esp+arg_0], 4
0x4D8A94: mov     eax, [edx+40h]
0x4D8A97: jmp     eax
