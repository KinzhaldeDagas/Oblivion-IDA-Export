0x74DEB0: push    ecx
0x74DEB1: push    esi
0x74DEB2: mov     esi, [esp+8+arg_4]
0x74DEB6: mov     edx, [esi+54h]
0x74DEB9: test    edx, edx
0x74DEBB: jz      loc_74DF97
0x74DEC1: mov     eax, [esi+60h]
0x74DEC4: push    edi
0x74DEC5: xor     edi, edi
0x74DEC7: cmp     [esi+48h], di
0x74DECB: mov     [esp+0Ch+var_4], eax
0x74DECF: jbe     loc_74DF96
0x74DED5: fld     [esp+0Ch+arg_0]
0x74DED9: push    ebx
0x74DEDA: fld     qword ptr ds:0A3F3E8h
0x74DEE0: mov     ebx, ds:0B40A78h
0x74DEE6: fldz
0x74DEE8: push    ebp
0x74DEE9: movzx   eax, di
0x74DEEC: fld     st(2)
0x74DEEE: lea     ecx, ds:0[eax*4]
0x74DEF5: lea     ebp, ds:0[eax*8]
0x74DEFC: sub     ebp, eax
0x74DEFE: test    bl, 1
0x74DF01: mov     eax, [esi+5Ch]
0x74DF04: fsub    dword ptr [eax+ebp*4+14h]
0x74DF08: mov     eax, [esp+14h+var_4]
0x74DF0C: fstp    [esp+14h+arg_4]
0x74DF10: fld     [esp+14h+arg_4]
0x74DF14: fmul    dword ptr [ecx+eax]
0x74DF17: fadd    dword ptr [ecx+edx]
0x74DF1A: fstp    [esp+14h+arg_4]
0x74DF1E: fld     [esp+14h+arg_4]
0x74DF22: fst     dword ptr [ecx+edx]
0x74DF25: jnz     short loc_74DF38
0x74DF27: fld     dword ptr ds:0B3F9A4h
0x74DF2D: or      ebx, 1
0x74DF30: fmul    st, st(3)
0x74DF32: fstp    dword ptr ds:0B40A74h
0x74DF38: fld     dword ptr ds:0B40A74h
0x74DF3E: fcomp   st(1)
0x74DF40: fnstsw  ax
0x74DF42: test    ah, 5
0x74DF45: jp      short loc_74DF4E
0x74DF47: fstp    st
0x74DF49: fst     dword ptr [ecx+edx]
0x74DF4C: jmp     short loc_74DF7B
0x74DF4E: fld     dword ptr ds:0B3F9A0h
0x74DF54: fcom    st(1)
0x74DF56: fnstsw  ax
0x74DF58: fstp    st(1)
0x74DF5A: test    ah, 5
0x74DF5D: jp      short loc_74DF79
0x74DF5F: fsubr   dword ptr [ecx+edx]
0x74DF62: fstp    dword ptr [ecx+edx]
0x74DF65: fld     dword ptr [ecx+edx]
0x74DF68: fld     dword ptr ds:0B3F9A0h
0x74DF6E: fcom    st(1)
0x74DF70: fnstsw  ax
0x74DF72: fstp    st(1)
0x74DF74: test    ah, 5
0x74DF77: jnp     short loc_74DF5F
0x74DF79: fstp    st
0x74DF7B: add     edi, 1
0x74DF7E: cmp     di, [esi+48h]
0x74DF82: jb      loc_74DEE9
0x74DF88: fstp    st(2)
0x74DF8A: pop     ebp
0x74DF8B: fstp    st
0x74DF8D: mov     ds:0B40A78h, ebx
0x74DF93: fstp    st
0x74DF95: pop     ebx
0x74DF96: pop     edi
0x74DF97: pop     esi
0x74DF98: pop     ecx
0x74DF99: retn    8
