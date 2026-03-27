0x78E600: push    ecx
0x78E601: fldz
0x78E603: push    esi
0x78E604: push    edi
0x78E605: fstp    [esp+0Ch+var_4]
0x78E609: mov     edi, [ecx+14h]
0x78E60C: xor     esi, esi
0x78E60E: cmp     edi, 4
0x78E611: jl      short loc_78E672
0x78E613: lea     edx, [edi-4]
0x78E616: shr     edx, 2
0x78E619: add     edx, 1
0x78E61C: lea     eax, [ecx+8]
0x78E61F: lea     esi, ds:0[edx*4]
0x78E626: fld     dword ptr [eax-8]
0x78E629: add     eax, 10h
0x78E62C: sub     edx, 1
0x78E62F: fld     dword ptr [eax-14h]
0x78E632: fld     dword ptr [eax-10h]
0x78E635: fld     dword ptr [eax-0Ch]
0x78E638: fld     st(3)
0x78E63A: fmulp   st(4), st
0x78E63C: fld     [esp+0Ch+var_4]
0x78E640: faddp   st(4), st
0x78E642: fxch    st(3)
0x78E644: fstp    [esp+0Ch+var_4]
0x78E648: fld     [esp+0Ch+var_4]
0x78E64C: fld     st(2)
0x78E64E: fmulp   st(3), st
0x78E650: faddp   st(2), st
0x78E652: fxch    st(1)
0x78E654: fstp    [esp+0Ch+var_4]
0x78E658: fld     st
0x78E65A: fmulp   st(1), st
0x78E65C: fadd    [esp+0Ch+var_4]
0x78E660: fstp    [esp+0Ch+var_4]
0x78E664: fld     st
0x78E666: fmulp   st(1), st
0x78E668: fadd    [esp+0Ch+var_4]
0x78E66C: fstp    [esp+0Ch+var_4]
0x78E670: jnz     short loc_78E626
0x78E672: cmp     esi, edi
0x78E674: jge     short loc_78E68A
0x78E676: fld     dword ptr [ecx+esi*4]
0x78E679: add     esi, 1
0x78E67C: cmp     esi, edi
0x78E67E: fmul    st, st
0x78E680: fadd    [esp+0Ch+var_4]
0x78E684: fstp    [esp+0Ch+var_4]
0x78E688: jl      short loc_78E676
0x78E68A: fld     [esp+0Ch+var_4]
0x78E68E: call    __CIsqrt
0x78E693: fstp    [esp+0Ch+var_4]
0x78E697: fld     [esp+0Ch+var_4]
0x78E69B: pop     edi
0x78E69C: pop     esi
0x78E69D: pop     ecx
0x78E69E: retn
