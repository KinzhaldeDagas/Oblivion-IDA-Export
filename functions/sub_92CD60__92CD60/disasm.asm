0x92CD60: mov     edx, [esp+arg_0]
0x92CD64: mov     eax, [edx+4]
0x92CD67: test    eax, eax
0x92CD69: jle     locret_92CE5C
0x92CD6F: mov     eax, [edx]
0x92CD71: movaps  xmm0, xmmword ptr [eax]
0x92CD74: mov     ecx, [esp+arg_4]
0x92CD78: movaps  xmmword ptr [ecx], xmm0
0x92CD7B: mov     eax, [edx]
0x92CD7D: movaps  xmm0, xmmword ptr [eax]
0x92CD80: movaps  xmmword ptr [ecx+10h], xmm0
0x92CD84: mov     eax, [edx+4]
0x92CD87: push    edi
0x92CD88: xor     edi, edi
0x92CD8A: test    eax, eax
0x92CD8C: jle     loc_92CE5B
0x92CD92: push    esi
0x92CD93: xor     esi, esi
0x92CD95: mov     eax, [edx]
0x92CD97: fld     dword ptr [esi+eax]
0x92CD9A: fld     dword ptr [ecx]
0x92CD9C: fst     [esp+8+arg_0]
0x92CDA0: fcomp   st(1)
0x92CDA2: fnstsw  ax
0x92CDA4: test    ah, 5
0x92CDA7: jp      short loc_92CDAF
0x92CDA9: fstp    st
0x92CDAB: fld     [esp+8+arg_0]
0x92CDAF: fstp    dword ptr [ecx]
0x92CDB1: mov     eax, [edx]
0x92CDB3: fld     dword ptr [esi+eax]
0x92CDB6: fld     dword ptr [ecx+10h]
0x92CDB9: fst     [esp+8+arg_0]
0x92CDBD: fcomp   st(1)
0x92CDBF: fnstsw  ax
0x92CDC1: test    ah, 41h
0x92CDC4: jnz     short loc_92CDCC
0x92CDC6: fstp    st
0x92CDC8: fld     [esp+8+arg_0]
0x92CDCC: fstp    dword ptr [ecx+10h]
0x92CDCF: mov     eax, [edx]
0x92CDD1: fld     dword ptr [esi+eax+4]
0x92CDD5: fld     dword ptr [ecx+4]
0x92CDD8: fst     [esp+8+arg_0]
0x92CDDC: fcomp   st(1)
0x92CDDE: fnstsw  ax
0x92CDE0: test    ah, 5
0x92CDE3: jp      short loc_92CDEB
0x92CDE5: fstp    st
0x92CDE7: fld     [esp+8+arg_0]
0x92CDEB: fstp    dword ptr [ecx+4]
0x92CDEE: mov     eax, [edx]
0x92CDF0: fld     dword ptr [esi+eax+4]
0x92CDF4: fld     dword ptr [ecx+14h]
0x92CDF7: fst     [esp+8+arg_0]
0x92CDFB: fcomp   st(1)
0x92CDFD: fnstsw  ax
0x92CDFF: test    ah, 41h
0x92CE02: jnz     short loc_92CE0A
0x92CE04: fstp    st
0x92CE06: fld     [esp+8+arg_0]
0x92CE0A: fstp    dword ptr [ecx+14h]
0x92CE0D: mov     eax, [edx]
0x92CE0F: fld     dword ptr [esi+eax+8]
0x92CE13: fld     dword ptr [ecx+8]
0x92CE16: fst     [esp+8+arg_0]
0x92CE1A: fcomp   st(1)
0x92CE1C: fnstsw  ax
0x92CE1E: test    ah, 5
0x92CE21: jp      short loc_92CE29
0x92CE23: fstp    st
0x92CE25: fld     [esp+8+arg_0]
0x92CE29: fstp    dword ptr [ecx+8]
0x92CE2C: mov     eax, [edx]
0x92CE2E: fld     dword ptr [esi+eax+8]
0x92CE32: fld     dword ptr [ecx+18h]
0x92CE35: fst     [esp+8+arg_0]
0x92CE39: fcomp   st(1)
0x92CE3B: fnstsw  ax
0x92CE3D: test    ah, 41h
0x92CE40: jnz     short loc_92CE48
0x92CE42: fstp    st
0x92CE44: fld     [esp+8+arg_0]
0x92CE48: fstp    dword ptr [ecx+18h]
0x92CE4B: mov     eax, [edx+4]
0x92CE4E: inc     edi
0x92CE4F: add     esi, 10h
0x92CE52: cmp     edi, eax
0x92CE54: jl      loc_92CD95
0x92CE5A: pop     esi
0x92CE5B: pop     edi
0x92CE5C: retn
