0x78F690: sub     esp, 8
0x78F693: push    esi
0x78F694: mov     esi, [ecx+18h]
0x78F697: test    esi, esi
0x78F699: jz      short loc_78F715
0x78F69B: mov     eax, [ecx+1Ch]
0x78F69E: cmp     eax, 1
0x78F6A1: jle     short loc_78F715
0x78F6A3: fldz
0x78F6A5: add     eax, 0FFFFFFFFh
0x78F6A8: xor     edx, edx
0x78F6AA: fstp    dword ptr [ecx+28h]
0x78F6AD: test    eax, eax
0x78F6AF: jle     short loc_78F715
0x78F6B1: lea     eax, [esi+5Ch]
0x78F6B4: fld     dword ptr [eax-4]
0x78F6B7: add     edx, 1
0x78F6BA: fsub    dword ptr [eax-4Ch]
0x78F6BD: add     eax, 48h ; 'H'
0x78F6C0: fld     dword ptr [eax-50h]
0x78F6C3: fsub    dword ptr [eax-98h]
0x78F6C9: fld     dword ptr [eax-48h]
0x78F6CC: fsub    dword ptr [eax-90h]
0x78F6D2: fld     st(2)
0x78F6D4: fmulp   st(3), st
0x78F6D6: fld     st(1)
0x78F6D8: fmulp   st(2), st
0x78F6DA: fxch    st(2)
0x78F6DC: faddp   st(1), st
0x78F6DE: fld     st(1)
0x78F6E0: fmulp   st(2), st
0x78F6E2: faddp   st(1), st
0x78F6E4: fstp    [esp+0Ch+var_8]
0x78F6E8: mov     esi, [esp+0Ch+var_8]
0x78F6EC: fld     dword ptr [eax-8Ch]
0x78F6F2: fadd    dword ptr [eax-44h]
0x78F6F5: sar     esi, 1
0x78F6F7: add     esi, 1FC00000h
0x78F6FD: mov     [esp+0Ch+var_4], esi
0x78F701: fmul    [esp+0Ch+var_4]
0x78F705: fadd    dword ptr [ecx+28h]
0x78F708: fstp    dword ptr [ecx+28h]
0x78F70B: mov     esi, [ecx+1Ch]
0x78F70E: sub     esi, 1
0x78F711: cmp     edx, esi
0x78F713: jl      short loc_78F6B4
0x78F715: pop     esi
0x78F716: add     esp, 8
0x78F719: retn
