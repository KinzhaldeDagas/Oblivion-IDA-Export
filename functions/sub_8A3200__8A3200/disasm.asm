0x8A3200: movsx   ecx, byte ptr [ecx+0D3h]
0x8A3207: xor     eax, eax
0x8A3209: cmp     ecx, 7; switch 8 cases
0x8A320C: ja      short def_8A320E
0x8A320E: jmp     ds:jpt_8A320E[ecx*4]; switch jump
0x8A3215: mov     eax, offset aInvalid_0; jumptable 008A320E case 0
0x8A321A: retn
0x8A321B: mov     eax, offset aFixed_0; jumptable 008A320E case 1
0x8A3220: retn
0x8A3221: mov     eax, offset aKeyframed_0; jumptable 008A320E case 2
0x8A3226: retn
0x8A3227: mov     eax, offset aDebris; jumptable 008A320E case 3
0x8A322C: retn
0x8A322D: mov     eax, offset aMoving; jumptable 008A320E case 4
0x8A3232: retn
0x8A3233: mov     eax, offset aCritical; jumptable 008A320E case 5
0x8A3238: retn
0x8A3239: mov     eax, offset aBullet; jumptable 008A320E case 6
0x8A323E: retn
0x8A323F: mov     eax, offset aUser; jumptable 008A320E case 7
