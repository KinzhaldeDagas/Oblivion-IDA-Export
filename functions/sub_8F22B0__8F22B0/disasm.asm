0x8F22B0: sub     esp, 8
0x8F22B3: mov     [esp+8+var_8], 0
0x8F22BA: lea     ebx, [ebx+0]
0x8F22C0: fld     [esp+8+var_8]
0x8F22C3: fistp   [esp+8+var_4]
0x8F22C7: mov     eax, [esp+8+var_4]
0x8F22CB: test    eax, eax
0x8F22CD: jnz     short loc_8F22F2
0x8F22CF: fld     [esp+8+var_8]
0x8F22D2: fadd    dword ptr ds:0A34BA0h
0x8F22D8: fst     [esp+8+var_8]
0x8F22DB: fcomp   dword ptr ds:0A56E28h
0x8F22E1: fnstsw  ax
0x8F22E3: test    ah, 5
0x8F22E6: jnp     short loc_8F22C0
0x8F22E8: fld     dword ptr ds:0A2F948h
0x8F22EE: add     esp, 8
0x8F22F1: retn
0x8F22F2: fld     [esp+8+var_8]
0x8F22F5: add     esp, 8
0x8F22F8: retn
