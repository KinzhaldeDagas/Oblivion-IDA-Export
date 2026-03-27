0x5465B5: fld     dword ptr ds:0B36700h
0x5465BB: fadd    [esp+arg_1C]
0x5465BF: fadd    [esp+arg_4C]
0x5465C3: fadd    [esp+arg_4]
0x5465C7: fadd    [esp+arg_8]
0x5465CB: fstp    [esp+arg_4C]
0x5465CF: fld     [esp+arg_4C]
0x5465D3: fcom    st(2)
0x5465D5: fnstsw  ax
0x5465D7: fstp    st(2)
0x5465D9: test    ah, 5
0x5465DC: jp      short loc_5465F2
0x5465DE: fcomp   st(1)
0x5465E0: fnstsw  ax
0x5465E2: test    ah, 5
0x5465E5: jp      short loc_5465F4
0x5465E7: fstp    st
0x5465E9: mov     eax, 1
0x5465EE: add     esp, 10h
0x5465F1: retn
0x5465F2: fstp    st
0x5465F4: add     esp, 10h
0x5465F7: jmp     Double_To_SInt32
