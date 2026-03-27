0x628630: push    esi
0x628631: mov     esi, ecx
0x628633: mov     eax, [esi+2BCh]
0x628639: cmp     eax, 6
0x62863C: jz      short loc_6286A0
0x62863E: cmp     eax, 5
0x628641: jz      short loc_6286A0
0x628643: mov     ecx, [esp+4+arg_0]
0x628647: mov     eax, [ecx]
0x628649: mov     edx, [eax+284h]
0x62864F: push    2Fh ; '/'
0x628651: call    edx
0x628653: mov     [esp+4+arg_0], eax
0x628657: fild    [esp+4+arg_0]
0x62865B: fldz
0x62865D: fcom    st(1)
0x62865F: fnstsw  ax
0x628661: fstp    st(1)
0x628663: test    ah, 5
0x628666: jnp     short loc_62869E
0x628668: fld1
0x62866A: xor     eax, eax
0x62866C: cmp     [esp+4+arg_4], al
0x628670: fcomp   dword ptr [esi+2C0h]
0x628676: mov     dword ptr [esi+2C4h], 0
0x628680: setnz   al
0x628683: lea     eax, [eax+eax+1]
0x628687: mov     [esi+2BCh], eax
0x62868D: fnstsw  ax
0x62868F: test    ah, 41h
0x628692: jp      short loc_62869E
0x628694: fstp    dword ptr [esi+2C0h]
0x62869A: pop     esi
0x62869B: retn    8
0x62869E: fstp    st
0x6286A0: pop     esi
0x6286A1: retn    8
