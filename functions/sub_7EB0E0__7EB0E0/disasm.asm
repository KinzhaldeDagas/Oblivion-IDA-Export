0x7EB0E0: fldz
0x7EB0E2: fcom    dword ptr ds:0B46124h
0x7EB0E8: fnstsw  ax
0x7EB0EA: test    ah, 5
0x7EB0ED: jnp     short loc_7EB0FF
0x7EB0EF: fcomp   dword ptr ds:0B46120h
0x7EB0F5: fnstsw  ax
0x7EB0F7: test    ah, 5
0x7EB0FA: jnp     short loc_7EB101
0x7EB0FC: xor     eax, eax
0x7EB0FE: retn
0x7EB0FF: fstp    st
0x7EB101: mov     eax, 1
0x7EB106: retn
