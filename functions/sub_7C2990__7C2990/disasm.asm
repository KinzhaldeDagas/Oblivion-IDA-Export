0x7C2990: push    ecx
0x7C2991: fld     [esp+4+arg_0]
0x7C2995: fld     st
0x7C2997: call    Double_To_SInt32
0x7C299C: mov     [esp+4+var_4], eax
0x7C299F: fild    [esp+4+var_4]
0x7C29A2: fstp    [esp+4+var_4]
0x7C29A5: fld     [esp+4+var_4]
0x7C29A8: fld     st
0x7C29AA: fsubp   st(2), st
0x7C29AC: fldz
0x7C29AE: fcom    st(2)
0x7C29B0: fnstsw  ax
0x7C29B2: fstp    st(2)
0x7C29B4: test    ah, 41h
0x7C29B7: fld1
0x7C29B9: jnp     short loc_7C29BD
0x7C29BB: fsub    st(1), st
0x7C29BD: fxch    st(1)
0x7C29BF: push    esi
0x7C29C0: fstp    [esp+8+var_4]
0x7C29C4: fld     [esp+8+var_4]
0x7C29C8: call    Double_To_SInt32
0x7C29CD: fld     [esp+8+arg_4]
0x7C29D1: fld     st
0x7C29D3: mov     esi, eax
0x7C29D5: call    Double_To_SInt32
0x7C29DA: mov     [esp+8+arg_0], eax
0x7C29DE: fild    [esp+8+arg_0]
0x7C29E2: fstp    [esp+8+arg_0]
0x7C29E6: fld     [esp+8+arg_0]
0x7C29EA: fld     st
0x7C29EC: fsubp   st(2), st
0x7C29EE: fxch    st(1)
0x7C29F0: fcomp   st(3)
0x7C29F2: fnstsw  ax
0x7C29F4: fstp    st(2)
0x7C29F6: test    ah, 1
0x7C29F9: jnz     short loc_7C29FF
0x7C29FB: fstp    st
0x7C29FD: jmp     short loc_7C2A01
0x7C29FF: fsubp   st(1), st
0x7C2A01: fstp    [esp+8+arg_0]
0x7C2A05: fld     [esp+8+arg_0]
0x7C2A09: call    Double_To_SInt32
0x7C2A0E: shl     esi, 10h
0x7C2A11: and     eax, 0FFFFh
0x7C2A16: or      eax, esi
0x7C2A18: pop     esi
0x7C2A19: pop     ecx
0x7C2A1A: retn
