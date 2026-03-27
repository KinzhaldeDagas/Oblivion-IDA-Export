0x6CFC20: sub     esp, 8
0x6CFC23: push    esi
0x6CFC24: mov     esi, ecx
0x6CFC26: mov     al, [esi+8]
0x6CFC29: shr     al, 5
0x6CFC2C: test    al, 1
0x6CFC2E: jnz     loc_6CFCF0
0x6CFC34: fld     dword ptr ds:0A7DEB4h
0x6CFC3A: push    edi
0x6CFC3B: fstp    dword ptr [esi+14h]
0x6CFC3E: xor     edi, edi
0x6CFC40: cmp     [esi+44h], di
0x6CFC44: fld     dword ptr ds:0A7DEB4h
0x6CFC4A: fchs
0x6CFC4C: fstp    dword ptr [esi+18h]
0x6CFC4F: jbe     short loc_6CFCBC
0x6CFC51: fld     dword ptr ds:0A7DEB4h
0x6CFC57: mov     edx, [esi+3Ch]
0x6CFC5A: movzx   eax, di
0x6CFC5D: fld     st
0x6CFC5F: lea     ecx, [eax+eax*2]
0x6CFC62: fchs
0x6CFC64: shl     ecx, 4
0x6CFC67: fstp    [esp+10h+var_4]
0x6CFC6B: add     ecx, edx
0x6CFC6D: lea     edx, [esp+10h+var_4]
0x6CFC71: fstp    [esp+10h+var_8]
0x6CFC75: mov     eax, [ecx]
0x6CFC77: mov     eax, [eax+80h]
0x6CFC7D: push    edx
0x6CFC7E: lea     edx, [esp+14h+var_8]
0x6CFC82: push    edx
0x6CFC83: call    eax
0x6CFC85: fld     [esp+10h+var_8]
0x6CFC89: fld     dword ptr [esi+14h]
0x6CFC8C: fcomp   st(1)
0x6CFC8E: fnstsw  ax
0x6CFC90: test    ah, 41h
0x6CFC93: jnz     short loc_6CFC9A
0x6CFC95: fstp    dword ptr [esi+14h]
0x6CFC98: jmp     short loc_6CFC9C
0x6CFC9A: fstp    st
0x6CFC9C: fld     [esp+10h+var_4]
0x6CFCA0: fld     dword ptr [esi+18h]
0x6CFCA3: fcomp   st(1)
0x6CFCA5: fnstsw  ax
0x6CFCA7: test    ah, 5
0x6CFCAA: jp      short loc_6CFCB1
0x6CFCAC: fstp    dword ptr [esi+18h]
0x6CFCAF: jmp     short loc_6CFCB3
0x6CFCB1: fstp    st
0x6CFCB3: add     edi, 1
0x6CFCB6: cmp     di, [esi+44h]
0x6CFCBA: jb      short loc_6CFC51
0x6CFCBC: fld     dword ptr [esi+14h]
0x6CFCBF: pop     edi
0x6CFCC0: fld     dword ptr ds:0A7DEB4h
0x6CFCC6: fld     st
0x6CFCC8: fucomp  st(2)
0x6CFCCA: fnstsw  ax
0x6CFCCC: fstp    st(1)
0x6CFCCE: test    ah, 44h
0x6CFCD1: jp      short loc_6CFCEE
0x6CFCD3: fld     dword ptr [esi+18h]
0x6CFCD6: fxch    st(1)
0x6CFCD8: fchs
0x6CFCDA: fucompp
0x6CFCDC: fnstsw  ax
0x6CFCDE: test    ah, 44h
0x6CFCE1: jp      short loc_6CFCF0
0x6CFCE3: mov     ecx, esi
0x6CFCE5: pop     esi
0x6CFCE6: add     esp, 8
0x6CFCE9: jmp     sub_6D0510
0x6CFCEE: fstp    st
0x6CFCF0: pop     esi
0x6CFCF1: add     esp, 8
0x6CFCF4: retn
