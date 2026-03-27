0x994C87: push    ebp
0x994C88: mov     ebp, esp
0x994C8A: push    ecx
0x994C8B: push    ecx
0x994C8C: fld     [ebp+arg_0]
0x994C8F: push    ecx
0x994C90: push    ecx
0x994C91: fstp    [esp+10h+X]; X
0x994C94: call    __fpclass
0x994C99: test    al, 90h
0x994C9B: pop     ecx
0x994C9C: pop     ecx
0x994C9D: jnz     short loc_994CE7
0x994C9F: fld     [ebp+arg_0]
0x994CA2: push    ecx
0x994CA3: push    ecx
0x994CA4: fstp    [esp+10h+X]; double
0x994CA7: call    __frnd
0x994CAC: fcomp   [ebp+arg_0]
0x994CAF: pop     ecx
0x994CB0: pop     ecx
0x994CB1: fnstsw  ax
0x994CB3: test    ah, 44h
0x994CB6: jp      short loc_994CE7
0x994CB8: fld     [ebp+arg_0]
0x994CBB: push    ecx
0x994CBC: fmul    ds:dbl_A2FAA0
0x994CC2: push    ecx
0x994CC3: fstp    [ebp+var_8]
0x994CC6: fld     [ebp+var_8]
0x994CC9: fstp    [esp+10h+X]; double
0x994CCC: call    __frnd
0x994CD1: fcomp   [ebp+var_8]
0x994CD4: pop     ecx
0x994CD5: pop     ecx
0x994CD6: fnstsw  ax
0x994CD8: test    ah, 44h
0x994CDB: jp      short loc_994CE2
0x994CDD: push    2
0x994CDF: pop     eax
0x994CE0: leave
0x994CE1: retn
0x994CE2: xor     eax, eax
0x994CE4: inc     eax
0x994CE5: leave
0x994CE6: retn
0x994CE7: xor     eax, eax
0x994CE9: leave
0x994CEA: retn
