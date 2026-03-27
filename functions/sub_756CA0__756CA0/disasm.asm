0x756CA0: sub     esp, 8
0x756CA3: push    ebx
0x756CA4: push    ebp
0x756CA5: mov     ebp, [esp+10h+arg_4]
0x756CA9: xor     ebx, ebx
0x756CAB: cmp     [ebp+48h], bx
0x756CAF: jbe     loc_756D97
0x756CB5: fld1
0x756CB7: push    esi
0x756CB8: fldz
0x756CBA: push    edi
0x756CBB: jmp     short loc_756CBF
0x756CBD: fxch    st(1)
0x756CBF: mov     edx, [ebp+5Ch]
0x756CC2: fxch    st(1)
0x756CC4: movzx   esi, bx
0x756CC7: fst     [esp+18h+var_8]
0x756CCB: lea     eax, ds:0[esi*8]
0x756CD2: sub     eax, esi
0x756CD4: movzx   edi, word ptr [edx+eax*4+18h]
0x756CD9: cmp     di, [ecx+1Ch]
0x756CDD: lea     edx, [edx+eax*4]
0x756CE0: jnz     short loc_756D07
0x756CE2: fld     dword ptr [edx+0Ch]
0x756CE5: fld     dword ptr [ecx+18h]
0x756CE8: fcompp
0x756CEA: fnstsw  ax
0x756CEC: test    ah, 41h
0x756CEF: jnz     short loc_756D07
0x756CF1: fld     st(1)
0x756CF3: fcomp   dword ptr [ecx+18h]
0x756CF6: fnstsw  ax
0x756CF8: test    ah, 44h
0x756CFB: jnp     short loc_756D07
0x756CFD: fld     dword ptr [edx+0Ch]
0x756D00: fdiv    dword ptr [ecx+18h]
0x756D03: fstp    [esp+18h+var_8]
0x756D07: cmp     di, [ecx+24h]
0x756D0B: fst     [esp+18h+arg_4]
0x756D0F: fld     dword ptr [edx+10h]
0x756D12: fsub    dword ptr [edx+0Ch]
0x756D15: fstp    [esp+18h+var_4]
0x756D19: jnz     short loc_756D42
0x756D1B: fld     [esp+18h+var_4]
0x756D1F: fld     dword ptr [ecx+20h]
0x756D22: fcomp   st(1)
0x756D24: fnstsw  ax
0x756D26: test    ah, 41h
0x756D29: jnz     short loc_756D40
0x756D2B: fld     st(2)
0x756D2D: fcomp   dword ptr [ecx+20h]
0x756D30: fnstsw  ax
0x756D32: test    ah, 44h
0x756D35: jnp     short loc_756D40
0x756D37: fdiv    dword ptr [ecx+20h]
0x756D3A: fstp    [esp+18h+arg_4]
0x756D3E: jmp     short loc_756D42
0x756D40: fstp    st
0x756D42: fld     [esp+18h+arg_4]
0x756D46: fld     [esp+18h+var_8]
0x756D4A: fcom    st(1)
0x756D4C: fnstsw  ax
0x756D4E: test    ah, 5
0x756D51: jp      short loc_756D57
0x756D53: fstp    st(1)
0x756D55: jmp     short loc_756D59
0x756D57: fstp    st
0x756D59: fstp    [esp+18h+arg_4]
0x756D5D: fld     [esp+18h+arg_4]
0x756D61: fld     dword ptr ds:0A86530h
0x756D67: fcom    st(1)
0x756D69: fnstsw  ax
0x756D6B: fstp    st(1)
0x756D6D: test    ah, 41h
0x756D70: jnz     short loc_756D78
0x756D72: fstp    [esp+18h+arg_4]
0x756D76: jmp     short loc_756D7A
0x756D78: fstp    st
0x756D7A: mov     eax, [ebp+4Ch]
0x756D7D: fld     [esp+18h+arg_4]
0x756D81: add     ebx, 1
0x756D84: fstp    dword ptr [eax+esi*4]
0x756D87: cmp     bx, [ebp+48h]
0x756D8B: jb      loc_756CBD
0x756D91: fstp    st
0x756D93: pop     edi
0x756D94: fstp    st
0x756D96: pop     esi
0x756D97: pop     ebp
0x756D98: pop     ebx
0x756D99: add     esp, 8
0x756D9C: retn    8
