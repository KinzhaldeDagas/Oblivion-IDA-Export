0x88D6C0: fld     [esp+arg_0]
0x88D6C4: sub     esp, 8
0x88D6C7: fld     qword ptr ds:0A3D5B0h
0x88D6CD: push    esi
0x88D6CE: fcom    st(1)
0x88D6D0: mov     esi, ecx
0x88D6D2: fnstsw  ax
0x88D6D4: test    ah, 5
0x88D6D7: jp      short loc_88D6F0
0x88D6D9: call    unknown_libname_14
0x88D6DE: fstp    [esp+0Ch+arg_0]
0x88D6E2: fld     [esp+0Ch+arg_0]
0x88D6E6: fstp    [esp+0Ch+arg_0]
0x88D6EA: fld     [esp+0Ch+arg_0]
0x88D6EE: jmp     short loc_88D71A
0x88D6F0: fldz
0x88D6F2: fcomp   st(2)
0x88D6F4: fnstsw  ax
0x88D6F6: test    ah, 41h
0x88D6F9: jnz     short loc_88D718
0x88D6FB: call    unknown_libname_14
0x88D700: fstp    [esp+0Ch+arg_0]
0x88D704: fld     [esp+0Ch+arg_0]
0x88D708: fadd    qword ptr ds:0A3D5B0h
0x88D70E: fstp    [esp+0Ch+arg_0]
0x88D712: fld     [esp+0Ch+arg_0]
0x88D716: jmp     short loc_88D71A
0x88D718: fstp    st
0x88D71A: fadd    qword ptr ds:0A64218h
0x88D720: fstp    [esp+0Ch+arg_0]
0x88D724: fld     [esp+0Ch+arg_0]
0x88D728: fdiv    qword ptr ds:0A4D918h
0x88D72E: fstp    [esp+0Ch+arg_0]
0x88D732: fld     [esp+0Ch+arg_0]
0x88D736: fnstcw  word ptr [esp+0Ch+arg_0]
0x88D73A: movzx   eax, word ptr [esp+0Ch+arg_0]
0x88D73F: or      eax, 0C00h
0x88D744: mov     dword ptr [esp+0Ch+var_8], eax
0x88D748: fldcw   word ptr [esp+0Ch+var_8]
0x88D74C: fistp   [esp+0Ch+var_8]
0x88D750: mov     eax, dword ptr [esp+0Ch+var_8]
0x88D754: cmp     eax, 7
0x88D757: mov     [esi+0ACh], eax
0x88D75D: fldcw   word ptr [esp+0Ch+arg_0]
0x88D761: jbe     short loc_88D76D
0x88D763: mov     dword ptr [esi+0ACh], 0
0x88D76D: pop     esi
0x88D76E: add     esp, 8
0x88D771: retn    4
