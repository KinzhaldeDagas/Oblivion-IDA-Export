0x53C100: sub     esp, 8
0x53C103: fld     dword ptr [ecx+5Ch]
0x53C106: fstp    [esp+8+var_8]
0x53C109: fld     dword ptr [ecx+5Ch]
0x53C10C: fsub    dword ptr [ecx+60h]
0x53C10F: fstp    [esp+8+var_4]
0x53C113: fld     [esp+8+var_8]
0x53C116: fld     st
0x53C118: fld     qword ptr ds:0A3F418h
0x53C11E: fld     st
0x53C120: fsubrp  st(2), st
0x53C122: fxch    st(1)
0x53C124: fstp    [esp+8+var_8]
0x53C127: fld     [esp+8+var_4]
0x53C12B: fld     st
0x53C12D: fsubp   st(2), st
0x53C12F: fxch    st(1)
0x53C131: fstp    [esp+8+var_4]
0x53C135: fld     dword ptr ds:0A3F420h
0x53C13B: fcomp   dword ptr [ecx+74h]
0x53C13E: fnstsw  ax
0x53C140: test    ah, 5
0x53C143: jp      short loc_53C14F
0x53C145: fstp    st
0x53C147: fstp    st
0x53C149: fldz
0x53C14B: add     esp, 8
0x53C14E: retn
0x53C14F: fld     dword ptr [ecx+74h]
0x53C152: fcomp   st(2)
0x53C154: fnstsw  ax
0x53C156: test    ah, 41h
0x53C159: jp      short loc_53C17E
0x53C15B: fld     dword ptr [ecx+74h]
0x53C15E: fcomp   st(1)
0x53C160: fnstsw  ax
0x53C162: test    ah, 1
0x53C165: jnz     short loc_53C17E
0x53C167: fld     dword ptr [ecx+74h]
0x53C16A: fsub    st, st(1)
0x53C16C: fxch    st(2)
0x53C16E: fsubrp  st(1), st
0x53C170: fdivp   st(1), st
0x53C172: fstp    [esp+8+var_4]
0x53C176: fld     [esp+8+var_4]
0x53C17A: add     esp, 8
0x53C17D: retn
0x53C17E: fstp    st
0x53C180: fld     dword ptr [ecx+74h]
0x53C183: fld     [esp+8+var_8]
0x53C186: fcom    st(1)
0x53C188: fnstsw  ax
0x53C18A: fstp    st(1)
0x53C18C: test    ah, 41h
0x53C18F: jp      short loc_53C1BE
0x53C191: fld     dword ptr [ecx+74h]
0x53C194: fld     [esp+8+var_4]
0x53C198: fcom    st(1)
0x53C19A: fnstsw  ax
0x53C19C: fstp    st(1)
0x53C19E: test    ah, 1
0x53C1A1: jnz     short loc_53C1BC
0x53C1A3: fstp    st(2)
0x53C1A5: fld     st(1)
0x53C1A7: fsub    dword ptr [ecx+74h]
0x53C1AA: fxch    st(2)
0x53C1AC: fsubrp  st(1), st
0x53C1AE: fdivp   st(1), st
0x53C1B0: fstp    [esp+8+var_4]
0x53C1B4: fld     [esp+8+var_4]
0x53C1B8: add     esp, 8
0x53C1BB: retn
0x53C1BC: fstp    st
0x53C1BE: fld     dword ptr [ecx+74h]
0x53C1C1: fcomp   st(2)
0x53C1C3: fnstsw  ax
0x53C1C5: fstp    st(1)
0x53C1C7: test    ah, 41h
0x53C1CA: jnz     loc_53C147
0x53C1D0: fld     dword ptr [ecx+74h]
0x53C1D3: fcompp
0x53C1D5: fnstsw  ax
0x53C1D7: test    ah, 5
0x53C1DA: jp      loc_53C149
0x53C1E0: fld1
0x53C1E2: add     esp, 8
0x53C1E5: retn
