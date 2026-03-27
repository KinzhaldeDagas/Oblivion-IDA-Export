0x88EAC0: push    esi
0x88EAC1: push    edi
0x88EAC2: mov     edi, [esp+8+arg_0]
0x88EAC6: push    edi
0x88EAC7: mov     esi, ecx
0x88EAC9: call    sub_89E950
0x88EACE: mov     cl, al
0x88EAD0: test    cl, cl
0x88EAD2: jz      short loc_88EB0F
0x88EAD4: fld     dword ptr [edi+18h]
0x88EAD7: fld     dword ptr [esi+18h]
0x88EADA: fucompp
0x88EADC: fnstsw  ax
0x88EADE: test    ah, 44h
0x88EAE1: jp      short loc_88EAEA
0x88EAE3: mov     eax, 1
0x88EAE8: jmp     short loc_88EAEC
0x88EAEA: xor     eax, eax
0x88EAEC: fld     dword ptr [edi+14h]
0x88EAEF: and     cl, al
0x88EAF1: fld     dword ptr [esi+14h]
0x88EAF4: fucompp
0x88EAF6: fnstsw  ax
0x88EAF8: test    ah, 44h
0x88EAFB: jp      short loc_88EB0B
0x88EAFD: mov     eax, 1
0x88EB02: and     cl, al
0x88EB04: pop     edi
0x88EB05: mov     al, cl
0x88EB07: pop     esi
0x88EB08: retn    4
0x88EB0B: xor     eax, eax
0x88EB0D: and     cl, al
0x88EB0F: pop     edi
0x88EB10: mov     al, cl
0x88EB12: pop     esi
0x88EB13: retn    4
