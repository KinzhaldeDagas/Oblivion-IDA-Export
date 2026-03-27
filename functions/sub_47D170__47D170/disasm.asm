0x47D170: mov     edx, [esp+arg_0]
0x47D174: fldz
0x47D176: sub     edx, [ecx+14h]
0x47D179: mov     eax, ds:0B39DB0h
0x47D17E: sub     esp, 8
0x47D181: mov     ds:0B39DB4h, eax
0x47D186: mov     ds:0B39DB0h, edx
0x47D18C: cmp     byte ptr [ecx], 0
0x47D18F: jnz     loc_47D24D
0x47D195: fcomp   dword ptr [ecx+4]
0x47D198: fnstsw  ax
0x47D19A: test    ah, 44h
0x47D19D: jnp     short loc_47D1F0
0x47D19F: fld     dword ptr [ecx+8]
0x47D1A2: fadd    dword ptr [ecx+4]
0x47D1A5: fstp    [esp+8+arg_0]
0x47D1A9: fld     [esp+8+arg_0]
0x47D1AD: fnstcw  word ptr [esp+8+arg_0]
0x47D1B1: movzx   eax, word ptr [esp+8+arg_0]
0x47D1B6: fld     st
0x47D1B8: or      eax, 0C00h
0x47D1BD: mov     dword ptr [esp+8+var_8], eax
0x47D1C0: fldcw   word ptr [esp+8+var_8]
0x47D1C3: fistp   [esp+8+var_8]
0x47D1C6: mov     eax, dword ptr [esp+8+var_8]
0x47D1C9: mov     edx, eax
0x47D1CB: test    edx, edx
0x47D1CD: fldcw   word ptr [esp+8+arg_0]
0x47D1D1: mov     [esp+8+arg_0], edx
0x47D1D5: fild    [esp+8+arg_0]
0x47D1D9: jge     short loc_47D1E1
0x47D1DB: fadd    dword ptr ds:0A2FC78h
0x47D1E1: mov     edx, [ecx+10h]
0x47D1E4: fsubp   st(1), st
0x47D1E6: add     edx, eax
0x47D1E8: fstp    dword ptr [ecx+8]
0x47D1EB: fld     dword ptr [ecx+4]
0x47D1EE: jmp     short loc_47D238
0x47D1F0: push    esi
0x47D1F1: mov     esi, edx
0x47D1F3: sub     esi, [ecx+10h]
0x47D1F6: jnz     short loc_47D1FF
0x47D1F8: mov     esi, 1
0x47D1FD: jmp     short loc_47D225
0x47D1FF: mov     eax, esi
0x47D201: test    eax, eax
0x47D203: mov     [esp+0Ch+arg_0], eax
0x47D207: fild    [esp+0Ch+arg_0]
0x47D20B: jge     short loc_47D213
0x47D20D: fadd    dword ptr ds:0A2FC78h
0x47D213: fcomp   dword ptr ds:0A3D14Ch
0x47D219: fnstsw  ax
0x47D21B: test    ah, 41h
0x47D21E: jnz     short loc_47D225
0x47D220: mov     esi, 0A6h ; '¦'
0x47D225: test    esi, esi
0x47D227: mov     [esp+0Ch+arg_0], esi
0x47D22B: fild    [esp+0Ch+arg_0]
0x47D22F: jge     short loc_47D237
0x47D231: fadd    dword ptr ds:0A2FC78h
0x47D237: pop     esi
0x47D238: fmul    qword ptr ds:0A30E40h
0x47D23E: mov     [ecx+10h], edx
0x47D241: fstp    dword ptr [ecx+0Ch]
0x47D244: fld     dword ptr [ecx+0Ch]
0x47D247: fmul    dword ptr ds:0B06704h
0x47D24D: fstp    dword ptr [ecx+0Ch]
0x47D250: add     esp, 8
0x47D253: retn    4
