0x96C550: sub     esp, 10h
0x96C553: mov     eax, [esp+10h+arg_10]
0x96C557: mov     ecx, [esp+10h+arg_8]
0x96C55B: fld     dword ptr [eax]
0x96C55D: fsub    dword ptr [ecx]
0x96C55F: fstp    [esp+10h+var_C]
0x96C563: fld     dword ptr [eax+4]
0x96C566: fsub    dword ptr [ecx+4]
0x96C569: fstp    [esp+10h+var_8]
0x96C56D: fld     dword ptr [eax+8]
0x96C570: mov     eax, [esp+10h+arg_4]
0x96C574: fsub    dword ptr [ecx+8]
0x96C577: mov     ecx, [esp+10h+arg_C]
0x96C57B: fstp    [esp+10h+var_4]
0x96C57F: fld     [esp+10h+var_8]
0x96C583: fld     st
0x96C585: fld     [esp+10h+var_C]
0x96C589: fld     st
0x96C58B: fld     [esp+10h+var_4]
0x96C58F: fld     st
0x96C591: fld     st(2)
0x96C593: fmulp   st(3), st
0x96C595: fld     st(4)
0x96C597: fmulp   st(5), st
0x96C599: fxch    st(2)
0x96C59B: faddp   st(4), st
0x96C59D: fld     st(1)
0x96C59F: fmulp   st(2), st
0x96C5A1: fxch    st(3)
0x96C5A3: faddp   st(1), st
0x96C5A5: fstp    [esp+10h+var_10]
0x96C5A8: fld     dword ptr [ecx+4]
0x96C5AB: fsub    dword ptr [eax+4]
0x96C5AE: fstp    [esp+10h+var_C]
0x96C5B2: fld     dword ptr [ecx+8]
0x96C5B5: fsub    dword ptr [eax+8]
0x96C5B8: fstp    [esp+10h+var_8]
0x96C5BC: fld     dword ptr [ecx+0Ch]
0x96C5BF: fsub    dword ptr [eax+0Ch]
0x96C5C2: fstp    [esp+10h+var_4]
0x96C5C6: fld     [esp+10h+var_8]
0x96C5CA: fld     st
0x96C5CC: fld     [esp+10h+var_C]
0x96C5D0: fld     [esp+10h+var_4]
0x96C5D4: fld     st(1)
0x96C5D6: fmulp   st(2), st
0x96C5D8: fld     st(2)
0x96C5DA: fmulp   st(3), st
0x96C5DC: fxch    st(1)
0x96C5DE: faddp   st(2), st
0x96C5E0: fmul    st, st
0x96C5E2: faddp   st(1), st
0x96C5E4: fstp    [esp+10h+arg_10]
0x96C5E8: fld     dword ptr [eax+10h]
0x96C5EB: fadd    dword ptr [ecx+10h]
0x96C5EE: fstp    [esp+10h+arg_8]
0x96C5F2: fld     [esp+10h+arg_8]
0x96C5F6: fmul    st, st
0x96C5F8: fstp    [esp+10h+arg_8]
0x96C5FC: fldz
0x96C5FE: fld     [esp+10h+var_10]
0x96C601: fcom    st(1)
0x96C603: fnstsw  ax
0x96C605: test    ah, 41h
0x96C608: jnz     short loc_96C670
0x96C60A: fxch    st(2)
0x96C60C: fmulp   st(5), st
0x96C60E: fld     [esp+10h+var_C]
0x96C612: fmulp   st(3), st
0x96C614: fxch    st(4)
0x96C616: faddp   st(2), st
0x96C618: fld     [esp+10h+var_4]
0x96C61C: fmulp   st(3), st
0x96C61E: fxch    st(1)
0x96C620: faddp   st(2), st
0x96C622: fxch    st(1)
0x96C624: fstp    [esp+10h+arg_4]
0x96C628: fld     [esp+10h+arg_4]
0x96C62C: fcom    st(2)
0x96C62E: fnstsw  ax
0x96C630: fstp    st(2)
0x96C632: test    ah, 41h
0x96C635: jp      short loc_96C67C
0x96C637: fld     [esp+10h+arg_0]
0x96C63B: fld     st
0x96C63D: fchs
0x96C63F: fmul    st, st(2)
0x96C641: fcomp   st(3)
0x96C643: fnstsw  ax
0x96C645: test    ah, 41h
0x96C648: jp      short loc_96C65E
0x96C64A: fstp    st
0x96C64C: fld     [esp+10h+arg_10]
0x96C650: fmul    st, st(1)
0x96C652: fld     st(2)
0x96C654: fmulp   st(3), st
0x96C656: fsubrp  st(2), st
0x96C658: fmul    [esp+10h+arg_8]
0x96C65C: jmp     short loc_96C688
0x96C65E: fld     st
0x96C660: fmulp   st(2), st
0x96C662: fxch    st(2)
0x96C664: fadd    st, st
0x96C666: faddp   st(1), st
0x96C668: fmulp   st(1), st
0x96C66A: fadd    [esp+10h+arg_10]
0x96C66E: jmp     short loc_96C684
0x96C670: fstp    st(1)
0x96C672: fstp    st
0x96C674: fstp    st(3)
0x96C676: fstp    st
0x96C678: fstp    st
0x96C67A: jmp     short loc_96C67E
0x96C67C: fstp    st(1)
0x96C67E: fstp    st
0x96C680: fld     [esp+10h+arg_10]
0x96C684: fld     [esp+10h+arg_8]
0x96C688: fcompp
0x96C68A: fnstsw  ax
0x96C68C: test    ah, 1
0x96C68F: jnz     short loc_96C69A
0x96C691: mov     eax, 1
0x96C696: add     esp, 10h
0x96C699: retn
0x96C69A: xor     eax, eax
0x96C69C: add     esp, 10h
0x96C69F: retn
