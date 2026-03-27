0x989EB9: push    [esp+Size]; Size
0x989EBD: push    [esp+4+Count]; Count
0x989EC1: push    [esp+8+Memory]; Memory
0x989EC5: call    __recalloc
0x989ECA: mov     edi, eax
0x989ECC: add     esp, 0Ch
0x989ECF: test    edi, edi
0x989ED1: jnz     short loc_989F00
0x989ED3: cmp     [esp+Size], eax
0x989ED7: jz      short loc_989F00
0x989ED9: cmp     dword_BA9E0C, eax
0x989EDF: jbe     short loc_989F00
0x989EE1: push    esi; dwMilliseconds
0x989EE2: call    ds:Sleep
0x989EE8: lea     eax, [esi+3E8h]
0x989EEE: cmp     eax, dword_BA9E0C
0x989EF4: jbe     short loc_989EF9
0x989EF6: or      eax, 0FFFFFFFFh
0x989EF9: cmp     eax, 0FFFFFFFFh
0x989EFC: mov     esi, eax
0x989EFE: jnz     short unknown_libname_78___unknown_libname_79
0x989F00: mov     eax, edi
0x989F02: pop     edi
0x989F03: pop     esi
0x989F04: retn
