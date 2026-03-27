0x8B1B40: sub     esp, 10h
0x8B1B43: mov     edx, [esp+10h+arg_0]
0x8B1B47: fld     dword ptr [edx+14h]
0x8B1B4A: mov     [esp+10h+var_10], ecx
0x8B1B4D: fadd    dword ptr [edx]
0x8B1B4F: fadd    dword ptr [edx+28h]
0x8B1B52: fcom    dword ptr ds:0A2FAA8h
0x8B1B58: fnstsw  ax
0x8B1B5A: test    ah, 41h
0x8B1B5D: jnz     short loc_8B1BA0
0x8B1B5F: fadd    dword ptr ds:0A2F948h
0x8B1B65: fsqrt
0x8B1B67: fld     dword ptr ds:0A3D65Ch
0x8B1B6D: fdiv    st, st(1)
0x8B1B6F: fld     dword ptr [edx+18h]
0x8B1B72: fsub    dword ptr [edx+24h]
0x8B1B75: fmul    st, st(1)
0x8B1B77: fstp    dword ptr [ecx]
0x8B1B79: fld     dword ptr [edx+20h]
0x8B1B7C: fsub    dword ptr [edx+8]
0x8B1B7F: fmul    st, st(1)
0x8B1B81: fstp    dword ptr [ecx+4]
0x8B1B84: fld     dword ptr [edx+4]
0x8B1B87: fsub    dword ptr [edx+10h]
0x8B1B8A: fmul    st, st(1)
0x8B1B8C: fstp    dword ptr [ecx+8]
0x8B1B8F: fstp    st
0x8B1B91: fmul    dword ptr ds:0A3D65Ch
0x8B1B97: fstp    dword ptr [ecx+0Ch]
0x8B1B9A: add     esp, 10h
0x8B1B9D: retn    4
0x8B1BA0: fstp    st
0x8B1BA2: push    ebx
0x8B1BA3: fld     dword ptr [edx+14h]
0x8B1BA6: push    ebp
0x8B1BA7: fcomp   dword ptr [edx]
0x8B1BA9: push    esi
0x8B1BAA: xor     esi, esi
0x8B1BAC: push    edi
0x8B1BAD: mov     [esp+20h+var_C], 1
0x8B1BB5: fnstsw  ax
0x8B1BB7: mov     [esp+20h+var_8], 2
0x8B1BBF: mov     [esp+20h+var_4], esi
0x8B1BC3: test    ah, 41h
0x8B1BC6: jnz     short loc_8B1BCD
0x8B1BC8: mov     esi, 1
0x8B1BCD: fld     dword ptr [edx+28h]
0x8B1BD0: lea     eax, [esi+esi*4]
0x8B1BD3: fcomp   dword ptr [edx+eax*4]
0x8B1BD6: fnstsw  ax
0x8B1BD8: test    ah, 41h
0x8B1BDB: jnz     short loc_8B1BE2
0x8B1BDD: mov     esi, 2
0x8B1BE2: mov     eax, [esp+esi*4+20h+var_C]
0x8B1BE6: mov     edi, [esp+eax*4+20h+var_C]
0x8B1BEA: lea     ebx, [edi+edi*4]
0x8B1BED: fld     dword ptr [edx+ebx*4]
0x8B1BF0: lea     ebp, [eax+eax*4]
0x8B1BF3: fadd    dword ptr [edx+ebp*4]
0x8B1BF6: lea     ecx, [esi+esi*4]
0x8B1BF9: lea     ebx, [edi+eax*4]
0x8B1BFC: lea     ebp, [eax+edi*4]
0x8B1BFF: fsubr   dword ptr [edx+ecx*4]
0x8B1C02: mov     ecx, [esp+20h+var_10]
0x8B1C06: fadd    dword ptr ds:0A2F948h
0x8B1C0C: fsqrt
0x8B1C0E: fld     dword ptr ds:0A3D65Ch
0x8B1C14: fdiv    st, st(1)
0x8B1C16: fxch    st(1)
0x8B1C18: fmul    dword ptr ds:0A3D65Ch
0x8B1C1E: fstp    dword ptr [ecx+esi*4]
0x8B1C21: fld     dword ptr [edx+ebx*4]
0x8B1C24: lea     ebx, [esi+eax*4]
0x8B1C27: fsub    dword ptr [edx+ebp*4]
0x8B1C2A: lea     ebp, [eax+esi*4]
0x8B1C2D: fmul    st, st(1)
0x8B1C2F: fstp    dword ptr [ecx+0Ch]
0x8B1C32: fld     dword ptr [edx+ebx*4]
0x8B1C35: fadd    dword ptr [edx+ebp*4]
0x8B1C38: fmul    st, st(1)
0x8B1C3A: fstp    dword ptr [ecx+eax*4]
0x8B1C3D: lea     eax, [esi+edi*4]
0x8B1C40: fld     dword ptr [edx+eax*4]
0x8B1C43: lea     esi, [edi+esi*4]
0x8B1C46: fadd    dword ptr [edx+esi*4]
0x8B1C49: fmul    st, st(1)
0x8B1C4B: fstp    dword ptr [ecx+edi*4]
0x8B1C4E: pop     edi
0x8B1C4F: pop     esi
0x8B1C50: pop     ebp
0x8B1C51: fstp    st
0x8B1C53: pop     ebx
0x8B1C54: add     esp, 10h
0x8B1C57: retn    4
