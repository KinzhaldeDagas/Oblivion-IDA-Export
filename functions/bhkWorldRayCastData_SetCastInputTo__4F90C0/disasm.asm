0x4F90C0: push    ebp
0x4F90C1: mov     ebp, esp
0x4F90C3: and     esp, 0FFFFFFF0h
0x4F90C6: sub     esp, 20h
0x4F90C9: mov     eax, ds:0B30AACh
0x4F90CE: xor     eax, esp
0x4F90D0: mov     [esp+20h+var_4], eax
0x4F90D4: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x4F90DB: mov     eax, ecx
0x4F90DD: mov     ecx, [ebp+a2]
0x4F90E0: fld     dword ptr [ecx]
0x4F90E2: fld     qword ptr ds:0A39088h
0x4F90E8: fmul    st(1), st
0x4F90EA: fxch    st(1)
0x4F90EC: fstp    [esp+20h+var_20]
0x4F90EF: fld     dword ptr [ecx+4]
0x4F90F2: fmul    st, st(1)
0x4F90F4: fstp    [esp+20h+var_20+4]
0x4F90F8: fmul    dword ptr [ecx+8]
0x4F90FB: mov     ecx, [esp+20h+var_4]
0x4F90FF: movaps  xmmword ptr [eax+60h], xmm0
0x4F9103: xor     ecx, esp
0x4F9105: fstp    [esp+20h+var_20+8]
0x4F9109: movaps  xmm0, xmmword ptr [esp+20h+var_20]
0x4F910D: movaps  xmmword ptr [eax+10h], xmm0
0x4F9111: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F9116: mov     esp, ebp
0x4F9118: pop     ebp
0x4F9119: retn    4
