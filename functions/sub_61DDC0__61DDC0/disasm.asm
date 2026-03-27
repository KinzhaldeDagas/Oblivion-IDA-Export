0x61DDC0: cmp     dword ptr [ecx+6Ch], 0Dh
0x61DDC4: jnz     short locret_61DDE5
0x61DDC6: fld     dword ptr [ecx+44h]
0x61DDC9: fsub    dword ptr [ecx+0D4h]
0x61DDCF: fld     dword ptr [ecx+0D8h]
0x61DDD5: fcompp
0x61DDD7: fnstsw  ax
0x61DDD9: test    ah, 5
0x61DDDC: jp      short locret_61DDE5
0x61DDDE: push    0
0x61DDE0: call    sub_619920
0x61DDE5: retn
