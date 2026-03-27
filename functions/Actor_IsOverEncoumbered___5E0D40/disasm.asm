0x5E0D40: sub     esp, 8
0x5E0D43: push    esi
0x5E0D44: mov     esi, ecx
0x5E0D46: mov     eax, [esi]
0x5E0D48: mov     edx, [eax+288h]
0x5E0D4E: push    0
0x5E0D50: call    edx
0x5E0D52: push    ecx
0x5E0D53: fstp    [esp+14h+var_14]; float
0x5E0D56: call    Calc_ActorBaseEncumbrance
0x5E0D5B: mov     eax, [esi]
0x5E0D5D: fstp    [esp+14h+var_8]
0x5E0D61: mov     edx, [eax+284h]
0x5E0D67: add     esp, 4
0x5E0D6A: push    0Bh
0x5E0D6C: mov     ecx, esi
0x5E0D6E: call    edx
0x5E0D70: mov     [esp+14h+var_10], eax
0x5E0D74: fild    [esp+14h+var_10]
0x5E0D78: pop     esi
0x5E0D79: fld     [esp+10h+var_C]
0x5E0D7D: fcompp
0x5E0D7F: fnstsw  ax
0x5E0D81: test    ah, 5
0x5E0D84: jp      short loc_5E0D8F
0x5E0D86: mov     eax, 1
0x5E0D8B: add     esp, 8
0x5E0D8E: retn
0x5E0D8F: xor     eax, eax
0x5E0D91: add     esp, 8
0x5E0D94: retn
