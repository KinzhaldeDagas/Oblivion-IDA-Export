0x413410: mov     edx, [esp+arg_0]
0x413414: push    ebx
0x413415: xor     al, al
0x413417: cmp     edx, 1
0x41341A: push    esi
0x41341B: jnz     short EffectItem_SetRange___TestOnTarget
0x41341D: mov     esi, [ecx+1Ch]
0x413420: mov     ebx, [esi+58h]
0x413423: shr     ebx, 5
0x413426: test    dl, bl
0x413428: jnz     short EffectItem_SetRange___SetRange
0x41342A: pop     esi
0x41342B: pop     ebx
0x41342C: retn    4
0x41342F: cmp     edx, 2
0x413432: jnz     short EffectItem_SetRange___TestOnSelf
0x413434: mov     esi, [ecx+1Ch]
0x413437: mov     ebx, [esi+58h]
0x41343A: shr     ebx, 6
0x41343D: test    bl, 1
0x413440: jnz     short EffectItem_SetRange___SetRange
0x413442: pop     esi
0x413443: pop     ebx
0x413444: retn    4
0x413447: test    edx, edx
0x413449: jnz     short EffectItem_SetRange___Done
0x41344B: mov     esi, [ecx+1Ch]
0x41344E: mov     ebx, [esi+58h]
0x413451: shr     ebx, 4
0x413454: test    bl, 1
0x413457: jz      short EffectItem_SetRange___Done
0x413459: fld     ds:flt_A30634
0x41345F: mov     [ecx+10h], edx
0x413462: fstp    dword ptr [ecx+20h]
0x413465: mov     al, 1
0x413467: pop     esi
0x413468: pop     ebx
0x413469: retn    4
