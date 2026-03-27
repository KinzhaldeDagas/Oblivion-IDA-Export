0x6D5C30: push    ebx
0x6D5C31: push    esi
0x6D5C32: push    edi
0x6D5C33: mov     ebx, ecx
0x6D5C35: call    sub_6EC220
0x6D5C3A: xor     eax, eax
0x6D5C3C: lea     edi, [ebx+0Ch]
0x6D5C3F: mov     ecx, 8
0x6D5C44: lea     esi, [esp+0Ch+arg_0]
0x6D5C48: rep movsd
0x6D5C4A: mov     dword ptr [ebx], offset ??_7NiTransformInterpolator@@6B@; const NiTransformInterpolator::`vftable'
0x6D5C50: mov     [ebx+2Ch], eax
0x6D5C53: pop     edi
0x6D5C54: mov     [ebx+30h], ax
0x6D5C58: mov     [ebx+32h], ax
0x6D5C5C: mov     [ebx+34h], ax
0x6D5C60: pop     esi
0x6D5C61: mov     eax, ebx
0x6D5C63: pop     ebx
0x6D5C64: retn    20h ; ' '
