0x49FFC0: fldz
0x49FFC2: fcomp   dword ptr [ecx+2Ch]
0x49FFC5: fnstsw  ax
0x49FFC7: test    ah, 44h
0x49FFCA: jnp     short loc_49FFD2
0x49FFCC: mov     eax, 1
0x49FFD1: retn
0x49FFD2: xor     eax, eax
0x49FFD4: retn
