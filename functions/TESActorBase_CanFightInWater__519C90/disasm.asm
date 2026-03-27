0x519C90: mov     al, [ecx+4]
0x519C93: cmp     al, 24h ; '$'
0x519C95: jnz     short TESActorBase_CanFightInWater___Return_1
0x519C97: mov     edx, [ecx+28h]
0x519C9A: shr     edx, 4
0x519C9D: test    dl, 1
0x519CA0: jnz     short loc_519CAB
0x519CA2: test    byte ptr [ecx+28h], 1
0x519CA6: jnz     short loc_519CAB
