0x7DF580: push    ecx
0x7DF581: push    esi
0x7DF582: xor     esi, esi
0x7DF584: call    _rand
0x7DF589: mov     [esp+8+var_4], eax
0x7DF58D: fild    [esp+8+var_4]
0x7DF591: fdiv    qword ptr ds:0A3D5A8h
0x7DF597: fstp    [esp+8+var_4]
0x7DF59B: fld     dword ptr ds:0A3D65Ch
0x7DF5A1: fld     [esp+8+var_4]
0x7DF5A5: fcom    st(1)
0x7DF5A7: fnstsw  ax
0x7DF5A9: fstp    st(1)
0x7DF5AB: test    ah, 1
0x7DF5AE: jnz     short loc_7DF5DD
0x7DF5B0: fld     dword ptr ds:0B2D63Ch
0x7DF5B6: fcomp   st(1)
0x7DF5B8: fnstsw  ax
0x7DF5BA: test    ah, 5
0x7DF5BD: jp      short loc_7DF5D2
0x7DF5BF: fld     dword ptr ds:0B2D644h[esi*8]
0x7DF5C6: add     esi, 1
0x7DF5C9: fcomp   st(1)
0x7DF5CB: fnstsw  ax
0x7DF5CD: test    ah, 5
0x7DF5D0: jnp     short loc_7DF5BF
0x7DF5D2: fstp    st
0x7DF5D4: fld     dword ptr ds:0B2D630h[esi*8]
0x7DF5DB: jmp     short loc_7DF618
0x7DF5DD: fld1
0x7DF5DF: fld     st
0x7DF5E1: fsubrp  st(2), st
0x7DF5E3: fxch    st(1)
0x7DF5E5: fstp    [esp+8+var_4]
0x7DF5E9: fld     [esp+8+var_4]
0x7DF5ED: fld     dword ptr ds:0B2D63Ch
0x7DF5F3: fcomp   st(1)
0x7DF5F5: fnstsw  ax
0x7DF5F7: test    ah, 5
0x7DF5FA: jp      short loc_7DF60F
0x7DF5FC: fld     dword ptr ds:0B2D644h[esi*8]
0x7DF603: add     esi, 1
0x7DF606: fcomp   st(1)
0x7DF608: fnstsw  ax
0x7DF60A: test    ah, 5
0x7DF60D: jnp     short loc_7DF5FC
0x7DF60F: fstp    st
0x7DF611: fsub    dword ptr ds:0B2D630h[esi*8]
0x7DF618: fstp    [esp+8+var_4]
0x7DF61C: pop     esi
0x7DF61D: fld     [esp+4+var_4]
0x7DF620: fmul    [esp+4+arg_4]
0x7DF624: fadd    [esp+4+arg_0]
0x7DF628: fstp    [esp+4+arg_4]
0x7DF62C: fld     [esp+4+arg_4]
0x7DF630: pop     ecx
0x7DF631: retn
