0x894BD0: push    esi
0x894BD1: mov     esi, ecx
0x894BD3: test    byte ptr [esi+1F4h], 1
0x894BDA: jnz     loc_894C61
0x894BE0: fld     dword ptr [esi+3A4h]
0x894BE6: fmul    qword ptr ds:0A2FAA0h
0x894BEC: fld     [esp+4+arg_0]
0x894BF0: fcom    st(1)
0x894BF2: fnstsw  ax
0x894BF4: test    ah, 41h
0x894BF7: jnz     short loc_894C05
0x894BF9: fstp    st
0x894BFB: fstp    [esp+4+arg_0]
0x894BFF: fld     [esp+4+arg_0]
0x894C03: jmp     short loc_894C07
0x894C05: fstp    st(1)
0x894C07: fldz
0x894C09: fcomp   st(1)
0x894C0B: fnstsw  ax
0x894C0D: test    ah, 1
0x894C10: jnz     short loc_894C1A
0x894C12: fstp    st
0x894C14: fld     dword ptr [esi+3A0h]
0x894C1A: fstp    [esp+4+arg_0]
0x894C1E: fld     [esp+4+arg_0]
0x894C22: fld     dword ptr [esi+3A8h]
0x894C28: fucompp
0x894C2A: fnstsw  ax
0x894C2C: test    ah, 44h
0x894C2F: jnp     short loc_894C61
0x894C31: cmp     dword ptr [esi+370h], 2
0x894C38: jnz     short loc_894C4D
0x894C3A: mov     eax, [esi+36Ch]
0x894C40: push    0
0x894C42: mov     [esi+370h], eax
0x894C48: call    sub_894940
0x894C4D: fld     [esp+4+arg_0]
0x894C51: mov     dword ptr [esi+3ACh], 2
0x894C5B: fstp    dword ptr [esi+3A8h]
0x894C61: pop     esi
0x894C62: retn    4
