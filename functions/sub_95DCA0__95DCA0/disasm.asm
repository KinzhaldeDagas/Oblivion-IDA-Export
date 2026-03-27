0x95DCA0: sub     esp, 0Ch
0x95DCA3: mov     eax, [esp+0Ch+arg_C]
0x95DCA7: mov     ecx, [esp+0Ch+arg_4]
0x95DCAB: fld     dword ptr [eax+8]
0x95DCAE: fmul    dword ptr [ecx+8]
0x95DCB1: fld     dword ptr [eax+4]
0x95DCB4: fmul    dword ptr [ecx+4]
0x95DCB7: faddp   st(1), st
0x95DCB9: fld     dword ptr [eax+0Ch]
0x95DCBC: fmul    dword ptr [ecx+0Ch]
0x95DCBF: faddp   st(1), st
0x95DCC1: fstp    [esp+0Ch+arg_4]
0x95DCC5: fld     [esp+0Ch+arg_4]
0x95DCC9: fsub    dword ptr [ecx+10h]
0x95DCCC: fstp    [esp+0Ch+arg_4]
0x95DCD0: fld     dword ptr [eax+10h]
0x95DCD3: fchs
0x95DCD5: fstp    [esp+0Ch+arg_C]
0x95DCD9: fld     [esp+0Ch+arg_4]
0x95DCDD: fld     [esp+0Ch+arg_C]
0x95DCE1: fcom    st(1)
0x95DCE3: fnstsw  ax
0x95DCE5: test    ah, 41h
0x95DCE8: jp      short loc_95DCF4
0x95DCEA: fstp    st(1)
0x95DCEC: mov     al, 1
0x95DCEE: fstp    st
0x95DCF0: add     esp, 0Ch
0x95DCF3: retn
0x95DCF4: mov     eax, [esp+0Ch+arg_10]
0x95DCF8: mov     edx, [esp+0Ch+arg_8]
0x95DCFC: fld     dword ptr [eax]
0x95DCFE: fsub    dword ptr [edx]
0x95DD00: fstp    [esp+0Ch+var_C]
0x95DD03: fld     dword ptr [eax+4]
0x95DD06: fsub    dword ptr [edx+4]
0x95DD09: fstp    [esp+0Ch+var_8]
0x95DD0D: fld     dword ptr [eax+8]
0x95DD10: fsub    dword ptr [edx+8]
0x95DD13: fstp    [esp+0Ch+var_4]
0x95DD17: fld     dword ptr [ecx+8]
0x95DD1A: fmul    [esp+0Ch+var_8]
0x95DD1E: fld     [esp+0Ch+var_C]
0x95DD21: fmul    dword ptr [ecx+4]
0x95DD24: faddp   st(1), st
0x95DD26: fld     dword ptr [ecx+0Ch]
0x95DD29: fmul    [esp+0Ch+var_4]
0x95DD2D: faddp   st(1), st
0x95DD2F: fstp    [esp+0Ch+arg_4]
0x95DD33: fldz
0x95DD35: fld     [esp+0Ch+arg_4]
0x95DD39: fcom    st(1)
0x95DD3B: fnstsw  ax
0x95DD3D: fstp    st(1)
0x95DD3F: test    ah, 41h
0x95DD42: jp      short loc_95DD50
0x95DD44: fstp    st(2)
0x95DD46: xor     al, al
0x95DD48: fstp    st
0x95DD4A: fstp    st
0x95DD4C: add     esp, 0Ch
0x95DD4F: retn
0x95DD50: fmul    [esp+0Ch+arg_0]
0x95DD54: faddp   st(2), st
0x95DD56: fcompp
0x95DD58: fnstsw  ax
0x95DD5A: test    ah, 41h
0x95DD5D: jp      short loc_95DD68
0x95DD5F: mov     eax, 1
0x95DD64: add     esp, 0Ch
0x95DD67: retn
0x95DD68: xor     eax, eax
0x95DD6A: add     esp, 0Ch
0x95DD6D: retn
