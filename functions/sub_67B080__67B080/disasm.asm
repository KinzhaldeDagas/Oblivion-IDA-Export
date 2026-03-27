0x67B080: sub     esp, 10h
0x67B083: push    esi
0x67B084: mov     esi, [esp+14h+arg_0]
0x67B088: mov     ecx, esi; this
0x67B08A: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x67B08F: fstp    [esp+14h+var_4]
0x67B093: mov     ecx, esi
0x67B095: call    sub_6599D0
0x67B09A: fstp    [esp+14h+var_C]
0x67B09E: mov     esi, [esp+14h+arg_4]
0x67B0A2: mov     ecx, esi; this
0x67B0A4: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x67B0A9: fstp    [esp+14h+var_8]
0x67B0AD: mov     ecx, esi
0x67B0AF: call    sub_6599D0
0x67B0B4: fstp    [esp+14h+var_10]
0x67B0B8: fld     [esp+14h+var_10]
0x67B0BC: pop     esi
0x67B0BD: fld     [esp+10h+var_C]
0x67B0C1: fcom    st(1)
0x67B0C3: fnstsw  ax
0x67B0C5: test    ah, 5
0x67B0C8: jp      short loc_67B0D7
0x67B0CA: fstp    st(1)
0x67B0CC: mov     eax, 1
0x67B0D1: fstp    st
0x67B0D3: add     esp, 10h
0x67B0D6: retn
0x67B0D7: fcompp
0x67B0D9: fnstsw  ax
0x67B0DB: test    ah, 41h
0x67B0DE: jnz     short loc_67B0E7
0x67B0E0: or      eax, 0FFFFFFFFh
0x67B0E3: add     esp, 10h
0x67B0E6: retn
0x67B0E7: fld     [esp+10h+var_8]
0x67B0EB: fld     [esp+10h+var_4]
0x67B0EF: fcom    st(1)
0x67B0F1: fnstsw  ax
0x67B0F3: test    ah, 5
0x67B0F6: jnp     short loc_67B0CA
0x67B0F8: fcompp
0x67B0FA: fnstsw  ax
0x67B0FC: test    ah, 41h
0x67B0FF: jz      short loc_67B0E0
0x67B101: xor     eax, eax
0x67B103: add     esp, 10h
0x67B106: retn
