0x8AABE0: sub     esp, 0Ch
0x8AABE3: fldz
0x8AABE5: mov     edx, [ecx+50h]
0x8AABE8: test    edx, edx
0x8AABEA: fst     [esp+0Ch+var_C]
0x8AABED: fstp    [esp+0Ch+var_8]
0x8AABF1: jz      short loc_8AAC5D
0x8AABF3: push    esi
0x8AABF4: mov     esi, [ecx+44h]
0x8AABF7: fld     dword ptr [esi]
0x8AABF9: fstp    [esp+10h+var_4]
0x8AABFD: fld     dword ptr [ecx+14h]
0x8AAC00: fstp    [esp+10h+var_C]
0x8AAC04: fld     dword ptr [ecx+18h]
0x8AAC07: fstp    [esp+10h+var_8]
0x8AAC0B: fld     [esp+10h+var_C]
0x8AAC0F: fld     [esp+10h+var_4]
0x8AAC13: fcom    st(1)
0x8AAC15: fnstsw  ax
0x8AAC17: fld     dword ptr ds:0A7DEB4h
0x8AAC1D: test    ah, 5
0x8AAC20: jnp     short loc_8AAC6E
0x8AAC22: fld     st
0x8AAC24: fucomp  st(3)
0x8AAC26: fnstsw  ax
0x8AAC28: fstp    st(2)
0x8AAC2A: test    ah, 44h
0x8AAC2D: jnp     short loc_8AAC70
0x8AAC2F: fstp    st
0x8AAC31: lea     eax, [edx+edx*2]
0x8AAC34: fld     dword ptr [esi+eax*4-0Ch]
0x8AAC38: pop     esi
0x8AAC39: fstp    [esp+0Ch+var_4]
0x8AAC3D: fld     [esp+0Ch+var_8]
0x8AAC41: fld     [esp+0Ch+var_4]
0x8AAC45: fcom    st(1)
0x8AAC47: fnstsw  ax
0x8AAC49: test    ah, 5
0x8AAC4C: jnp     short loc_8AAC76
0x8AAC4E: fxch    st(2)
0x8AAC50: fchs
0x8AAC52: fucompp
0x8AAC54: fnstsw  ax
0x8AAC56: test    ah, 44h
0x8AAC59: jnp     short loc_8AAC7A
0x8AAC5B: fstp    st
0x8AAC5D: fld     [esp+0Ch+var_C]
0x8AAC60: fstp    dword ptr [ecx+14h]
0x8AAC63: fld     [esp+0Ch+var_8]
0x8AAC67: fstp    dword ptr [ecx+18h]
0x8AAC6A: add     esp, 0Ch
0x8AAC6D: retn
0x8AAC6E: fstp    st(2)
0x8AAC70: fstp    [esp+10h+var_C]
0x8AAC74: jmp     short loc_8AAC31
0x8AAC76: fstp    st(2)
0x8AAC78: fstp    st
0x8AAC7A: fstp    [esp+0Ch+var_8]
0x8AAC7E: fld     [esp+0Ch+var_C]
0x8AAC81: fstp    dword ptr [ecx+14h]
0x8AAC84: fld     [esp+0Ch+var_8]
0x8AAC88: fstp    dword ptr [ecx+18h]
0x8AAC8B: add     esp, 0Ch
0x8AAC8E: retn
