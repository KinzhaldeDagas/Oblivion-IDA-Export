0x974E40: fld     dword ptr [ebx+edx*4]
0x974E43: mov     ecx, [esp+arg_4]
0x974E47: mov     eax, [esp+arg_8]
0x974E4B: sub     esp, 0Ch
0x974E4E: push    ebp
0x974E4F: mov     ebp, [esp+10h+arg_0]
0x974E53: fadd    dword ptr [ebp+edx*4+30h]
0x974E57: fstp    [esp+edx*4+10h+var_C]
0x974E5B: fld     dword ptr [ebx+esi*4]
0x974E5E: fadd    dword ptr [ebp+esi*4+30h]
0x974E62: fstp    [esp+esi*4+10h+var_C]
0x974E66: fld     dword ptr [edi+ecx*4]
0x974E69: fmul    [esp+edx*4+10h+var_C]
0x974E6D: fld     dword ptr [edi+edx*4]
0x974E70: fmul    dword ptr [eax+ecx*4]
0x974E73: fcompp
0x974E75: fnstsw  ax
0x974E77: fld     dword ptr [edi+ecx*4]
0x974E7A: fmul    [esp+esi*4+10h+var_C]
0x974E7E: test    ah, 41h
0x974E81: mov     eax, [esp+10h+arg_8]
0x974E85: fld     dword ptr [eax+ecx*4]
0x974E88: fmul    dword ptr [edi+esi*4]
0x974E8B: fcompp
0x974E8D: fnstsw  ax
0x974E8F: jp      loc_97506D
0x974E95: test    ah, 41h
0x974E98: mov     eax, [esp+10h+arg_8]
0x974E9C: jp      short loc_974EE8
0x974E9E: fld     dword ptr [ebp+ecx*4+30h]
0x974EA2: pop     ebp
0x974EA3: fstp    dword ptr [ebx+ecx*4]
0x974EA6: fld     dword ptr [edi+ecx*4]
0x974EA9: fld1
0x974EAB: fdivrp  st(1), st
0x974EAD: fstp    [esp+0Ch+arg_4]
0x974EB1: fld     dword ptr [edi+edx*4]
0x974EB4: fmul    dword ptr [eax+ecx*4]
0x974EB7: fld     [esp+0Ch+arg_4]
0x974EBB: fld     st
0x974EBD: fmulp   st(2), st
0x974EBF: fxch    st(1)
0x974EC1: fsubr   dword ptr [ebx+edx*4]
0x974EC4: fstp    dword ptr [ebx+edx*4]
0x974EC7: fld     dword ptr [ebx+esi*4]
0x974ECA: fld     dword ptr [eax+ecx*4]
0x974ECD: fmul    dword ptr [edi+esi*4]
0x974ED0: fmul    st, st(2)
0x974ED2: fsubp   st(1), st
0x974ED4: fstp    dword ptr [ebx+esi*4]
0x974ED7: fld     dword ptr [eax+ecx*4]
0x974EDA: mov     ecx, [esp+0Ch+arg_C]
0x974EDE: fchs
0x974EE0: fmulp   st(1), st
0x974EE2: fstp    dword ptr [ecx]
0x974EE4: add     esp, 0Ch
0x974EE7: retn
0x974EE8: fld     dword ptr [edi+ecx*4]
0x974EEB: fld     dword ptr [edi+esi*4]
0x974EEE: fmul    st, st
0x974EF0: fld     st(1)
0x974EF2: fmulp   st(2), st
0x974EF4: faddp   st(1), st
0x974EF6: fstp    [esp+10h+arg_4]
0x974EFA: fld     dword ptr [edi+ecx*4]
0x974EFD: fmul    dword ptr [eax+ecx*4]
0x974F00: fld     dword ptr [edi+esi*4]
0x974F03: fmul    [esp+esi*4+10h+var_C]
0x974F07: fld     [esp+edx*4+10h+var_C]
0x974F0B: fld     [esp+10h+arg_4]
0x974F0F: fld     st
0x974F11: fmulp   st(2), st
0x974F13: fld     st(2)
0x974F15: fadd    st, st(4)
0x974F17: fmul    dword ptr [edi+edx*4]
0x974F1A: fsubp   st(2), st
0x974F1C: fxch    st(1)
0x974F1E: fstp    [esp+10h+arg_4]
0x974F22: fld     [esp+10h+arg_4]
0x974F26: fld     st(1)
0x974F28: fadd    st, st
0x974F2A: fmul    dword ptr [ebp+edx*4+30h]
0x974F2E: fcomp   st(1)
0x974F30: fnstsw  ax
0x974F32: test    ah, 1
0x974F35: jnz     loc_974FE2
0x974F3B: fdiv    st, st(1)
0x974F3D: mov     eax, [esp+10h+arg_8]
0x974F41: fstp    [esp+10h+arg_4]
0x974F45: fld     [esp+edx*4+10h+var_C]
0x974F49: fld     [esp+10h+arg_4]
0x974F4D: fld     st
0x974F4F: fsubp   st(2), st
0x974F51: fxch    st(1)
0x974F53: fstp    [esp+10h+arg_4]
0x974F57: fld     dword ptr [edi+edx*4]
0x974F5A: fld     [esp+10h+arg_4]
0x974F5E: fld     st
0x974F60: fmulp   st(2), st
0x974F62: fxch    st(1)
0x974F64: faddp   st(5), st
0x974F66: fxch    st(4)
0x974F68: faddp   st(3), st
0x974F6A: fxch    st(2)
0x974F6C: fstp    [esp+10h+arg_4]
0x974F70: fld     dword ptr [edi+edx*4]
0x974F73: fld     [esp+10h+arg_4]
0x974F77: fld     st
0x974F79: fchs
0x974F7B: fld     st(2)
0x974F7D: fmulp   st(3), st
0x974F7F: fxch    st(2)
0x974F81: faddp   st(3), st
0x974F83: fxch    st(2)
0x974F85: fstp    [esp+10h+arg_4]
0x974F89: fdiv    [esp+10h+arg_4]
0x974F8D: fstp    [esp+10h+arg_4]
0x974F91: fld     dword ptr [eax+ecx*4]
0x974F94: fld     [esp+esi*4+10h+var_C]
0x974F98: mov     eax, [esp+10h+arg_10]
0x974F9C: fld     st(4)
0x974F9E: fmulp   st(5), st
0x974FA0: fld     st(1)
0x974FA2: fmulp   st(2), st
0x974FA4: fxch    st(4)
0x974FA6: faddp   st(1), st
0x974FA8: fld     st(3)
0x974FAA: fmulp   st(4), st
0x974FAC: faddp   st(3), st
0x974FAE: fld     [esp+10h+arg_4]
0x974FB2: fld     st
0x974FB4: fmulp   st(2), st
0x974FB6: fxch    st(3)
0x974FB8: faddp   st(1), st
0x974FBA: fadd    dword ptr [eax]
0x974FBC: fstp    dword ptr [eax]
0x974FBE: mov     eax, [esp+10h+arg_C]
0x974FC2: fxch    st(1)
0x974FC4: fstp    dword ptr [eax]
0x974FC6: fld     dword ptr [ebp+ecx*4+30h]
0x974FCA: fstp    dword ptr [ebx+ecx*4]
0x974FCD: fsub    dword ptr [ebp+edx*4+30h]
0x974FD1: fstp    dword ptr [ebx+edx*4]
0x974FD4: fld     dword ptr [ebp+esi*4+30h]
0x974FD8: pop     ebp
0x974FD9: fchs
0x974FDB: fstp    dword ptr [ebx+esi*4]
0x974FDE: add     esp, 0Ch
0x974FE1: retn
0x974FE2: fstp    st
0x974FE4: mov     eax, [esp+10h+arg_8]
0x974FE8: fld     dword ptr [edi+edx*4]
0x974FEB: fmul    dword ptr [eax+edx*4]
0x974FEE: faddp   st(3), st
0x974FF0: fxch    st(2)
0x974FF2: faddp   st(1), st
0x974FF4: fstp    [esp+10h+arg_4]
0x974FF8: fld     dword ptr [edi+edx*4]
0x974FFB: fld     [esp+10h+arg_4]
0x974FFF: fld     st
0x975001: fchs
0x975003: fld     st(2)
0x975005: fmulp   st(3), st
0x975007: fxch    st(2)
0x975009: faddp   st(3), st
0x97500B: fxch    st(2)
0x97500D: fstp    [esp+10h+arg_8]
0x975011: fdiv    [esp+10h+arg_8]
0x975015: fstp    [esp+10h+arg_4]
0x975019: fld     dword ptr [eax+ecx*4]
0x97501C: fld     dword ptr [eax+edx*4]
0x97501F: fld     [esp+esi*4+10h+var_C]
0x975023: mov     eax, [esp+10h+arg_10]
0x975027: fld     st(1)
0x975029: fmulp   st(2), st
0x97502B: fld     st(2)
0x97502D: fmulp   st(3), st
0x97502F: fxch    st(1)
0x975031: faddp   st(2), st
0x975033: fmul    st, st
0x975035: faddp   st(1), st
0x975037: fld     [esp+10h+arg_4]
0x97503B: fld     st
0x97503D: fmulp   st(3), st
0x97503F: fxch    st(1)
0x975041: faddp   st(2), st
0x975043: fld     dword ptr [eax]
0x975045: faddp   st(2), st
0x975047: fxch    st(1)
0x975049: fstp    dword ptr [eax]
0x97504B: mov     eax, [esp+10h+arg_C]
0x97504F: fstp    dword ptr [eax]
0x975051: fld     dword ptr [ebp+ecx*4+30h]
0x975055: fstp    dword ptr [ebx+ecx*4]
0x975058: fld     dword ptr [ebp+edx*4+30h]
0x97505C: fstp    dword ptr [ebx+edx*4]
0x97505F: fld     dword ptr [ebp+esi*4+30h]
0x975063: pop     ebp
0x975064: fchs
0x975066: fstp    dword ptr [ebx+esi*4]
0x975069: add     esp, 0Ch
0x97506C: retn
0x97506D: fld     dword ptr [edi+ecx*4]
0x975070: test    ah, 41h
0x975073: mov     eax, [esp+10h+arg_8]
0x975077: jp      loc_9751F3
0x97507D: fld     dword ptr [edi+edx*4]
0x975080: fmul    st, st
0x975082: fld     st(1)
0x975084: fmulp   st(2), st
0x975086: faddp   st(1), st
0x975088: fstp    [esp+10h+arg_4]
0x97508C: fld     dword ptr [edi+ecx*4]
0x97508F: fmul    dword ptr [eax+ecx*4]
0x975092: fld     dword ptr [edi+edx*4]
0x975095: fmul    [esp+edx*4+10h+var_C]
0x975099: faddp   st(1), st
0x97509B: fld     [esp+10h+arg_4]
0x97509F: fld     st
0x9750A1: fmul    [esp+esi*4+10h+var_C]
0x9750A5: fld     dword ptr [edi+esi*4]
0x9750A8: fmul    st, st(3)
0x9750AA: fsubp   st(1), st
0x9750AC: fstp    [esp+10h+arg_4]
0x9750B0: fld     [esp+10h+arg_4]
0x9750B4: fld     st(1)
0x9750B6: fadd    st, st
0x9750B8: fmul    dword ptr [ebp+esi*4+30h]
0x9750BC: fcomp   st(1)
0x9750BE: fnstsw  ax
0x9750C0: test    ah, 1
0x9750C3: mov     eax, [esp+10h+arg_8]
0x9750C7: jnz     loc_97516C
0x9750CD: fdiv    st, st(1)
0x9750CF: fstp    [esp+10h+arg_4]
0x9750D3: fld     [esp+esi*4+10h+var_C]
0x9750D7: fld     [esp+10h+arg_4]
0x9750DB: fld     st
0x9750DD: fsubp   st(2), st
0x9750DF: fxch    st(1)
0x9750E1: fstp    [esp+10h+arg_4]
0x9750E5: fld     dword ptr [edi+esi*4]
0x9750E8: fld     [esp+10h+arg_4]
0x9750EC: fld     st
0x9750EE: fmulp   st(2), st
0x9750F0: fxch    st(1)
0x9750F2: faddp   st(4), st
0x9750F4: fxch    st(3)
0x9750F6: fstp    [esp+10h+arg_4]
0x9750FA: fld     dword ptr [edi+esi*4]
0x9750FD: fld     [esp+10h+arg_4]
0x975101: fld     st
0x975103: fchs
0x975105: fld     st(2)
0x975107: fmulp   st(3), st
0x975109: fxch    st(2)
0x97510B: faddp   st(4), st
0x97510D: fxch    st(3)
0x97510F: fstp    [esp+10h+arg_4]
0x975113: fdiv    [esp+10h+arg_4]
0x975117: fstp    [esp+10h+arg_4]
0x97511B: fld     dword ptr [eax+ecx*4]
0x97511E: fld     [esp+edx*4+10h+var_C]
0x975122: mov     eax, [esp+10h+arg_10]
0x975126: fld     st(1)
0x975128: fmulp   st(2), st
0x97512A: fmul    st, st
0x97512C: faddp   st(1), st
0x97512E: fld     st(3)
0x975130: fmulp   st(4), st
0x975132: faddp   st(3), st
0x975134: fld     [esp+10h+arg_4]
0x975138: fld     st
0x97513A: fmulp   st(3), st
0x97513C: fxch    st(3)
0x97513E: faddp   st(2), st
0x975140: fld     dword ptr [eax]
0x975142: faddp   st(2), st
0x975144: fxch    st(1)
0x975146: fstp    dword ptr [eax]
0x975148: fxch    st(1)
0x97514A: mov     eax, [esp+10h+arg_C]
0x97514E: fstp    dword ptr [eax]
0x975150: fld     dword ptr [ebp+ecx*4+30h]
0x975154: fstp    dword ptr [ebx+ecx*4]
0x975157: fld     dword ptr [ebp+edx*4+30h]
0x97515B: fchs
0x97515D: fstp    dword ptr [ebx+edx*4]
0x975160: fsub    dword ptr [ebp+esi*4+30h]
0x975164: pop     ebp
0x975165: fstp    dword ptr [ebx+esi*4]
0x975168: add     esp, 0Ch
0x97516B: retn
0x97516C: fstp    st
0x97516E: fld     dword ptr [edi+esi*4]
0x975171: fmul    dword ptr [eax+esi*4]
0x975174: faddp   st(2), st
0x975176: fxch    st(1)
0x975178: fstp    [esp+10h+arg_4]
0x97517C: fld     dword ptr [edi+esi*4]
0x97517F: fld     [esp+10h+arg_4]
0x975183: fld     st
0x975185: fchs
0x975187: fld     st(2)
0x975189: fmulp   st(3), st
0x97518B: fxch    st(2)
0x97518D: faddp   st(3), st
0x97518F: fxch    st(2)
0x975191: fstp    [esp+10h+arg_8]
0x975195: fdiv    [esp+10h+arg_8]
0x975199: fstp    [esp+10h+arg_4]
0x97519D: fld     dword ptr [eax+ecx*4]
0x9751A0: fld     [esp+edx*4+10h+var_C]
0x9751A4: fld     dword ptr [eax+esi*4]
0x9751A7: fld     st(2)
0x9751A9: fmulp   st(3), st
0x9751AB: mov     eax, [esp+10h+arg_10]
0x9751AF: fld     st(1)
0x9751B1: fmulp   st(2), st
0x9751B3: fxch    st(2)
0x9751B5: faddp   st(1), st
0x9751B7: fld     st(1)
0x9751B9: fmulp   st(2), st
0x9751BB: faddp   st(1), st
0x9751BD: fld     [esp+10h+arg_4]
0x9751C1: fld     st
0x9751C3: fmulp   st(3), st
0x9751C5: fxch    st(1)
0x9751C7: faddp   st(2), st
0x9751C9: fld     dword ptr [eax]
0x9751CB: faddp   st(2), st
0x9751CD: fxch    st(1)
0x9751CF: fstp    dword ptr [eax]
0x9751D1: mov     eax, [esp+10h+arg_C]
0x9751D5: fstp    dword ptr [eax]
0x9751D7: fld     dword ptr [ebp+ecx*4+30h]
0x9751DB: fstp    dword ptr [ebx+ecx*4]
0x9751DE: fld     dword ptr [ebp+edx*4+30h]
0x9751E2: fchs
0x9751E4: fstp    dword ptr [ebx+edx*4]
0x9751E7: fld     dword ptr [ebp+esi*4+30h]
0x9751EB: pop     ebp
0x9751EC: fstp    dword ptr [ebx+esi*4]
0x9751EF: add     esp, 0Ch
0x9751F2: retn
0x9751F3: fmul    st, st
0x9751F5: fld     dword ptr [edi+esi*4]
0x9751F8: fmul    st, st
0x9751FA: fld     st
0x9751FC: fadd    st, st(2)
0x9751FE: fstp    [esp+10h+arg_4]
0x975202: fld     dword ptr [edi+ecx*4]
0x975205: fmul    dword ptr [eax+ecx*4]
0x975208: fld     dword ptr [edi+esi*4]
0x97520B: fmul    [esp+esi*4+10h+var_C]
0x97520F: fld     [esp+edx*4+10h+var_C]
0x975213: fld     [esp+10h+arg_4]
0x975217: fld     st
0x975219: fmulp   st(2), st
0x97521B: fld     st(2)
0x97521D: fadd    st, st(4)
0x97521F: fmul    dword ptr [edi+edx*4]
0x975222: fsubp   st(2), st
0x975224: fxch    st(1)
0x975226: fstp    [esp+10h+arg_4]
0x97522A: fldz
0x97522C: fld     [esp+10h+arg_4]
0x975230: fcom    st(1)
0x975232: fnstsw  ax
0x975234: test    ah, 1
0x975237: jnz     loc_975390
0x97523D: fstp    st(5)
0x97523F: fstp    st(5)
0x975241: fstp    st(4)
0x975243: fld     st(3)
0x975245: fadd    st, st
0x975247: fmul    dword ptr [ebp+edx*4+30h]
0x97524B: fcomp   st(3)
0x97524D: fnstsw  ax
0x97524F: test    ah, 1
0x975252: jnz     loc_975307
0x975258: fld     st(3)
0x97525A: mov     eax, [esp+10h+arg_8]
0x97525E: fdivp   st(3), st
0x975260: fxch    st(2)
0x975262: fstp    [esp+10h+arg_4]
0x975266: fld     [esp+edx*4+10h+var_C]
0x97526A: fld     [esp+10h+arg_4]
0x97526E: fld     st
0x975270: fsubp   st(2), st
0x975272: fxch    st(1)
0x975274: fstp    [esp+10h+arg_4]
0x975278: fld     dword ptr [edi+edx*4]
0x97527B: fld     [esp+10h+arg_4]
0x97527F: fld     st
0x975281: fmulp   st(2), st
0x975283: fxch    st(1)
0x975285: faddp   st(3), st
0x975287: fxch    st(2)
0x975289: faddp   st(3), st
0x97528B: fxch    st(2)
0x97528D: fstp    [esp+10h+arg_4]
0x975291: fld     dword ptr [edi+edx*4]
0x975294: fld     [esp+10h+arg_4]
0x975298: fld     st
0x97529A: fchs
0x97529C: fld     st(2)
0x97529E: fmulp   st(3), st
0x9752A0: fxch    st(2)
0x9752A2: faddp   st(5), st
0x9752A4: fxch    st(4)
0x9752A6: fstp    [esp+10h+arg_4]
0x9752AA: fdiv    [esp+10h+arg_4]
0x9752AE: fstp    [esp+10h+arg_4]
0x9752B2: fld     dword ptr [eax+ecx*4]
0x9752B5: fld     [esp+esi*4+10h+var_C]
0x9752B9: mov     eax, [esp+10h+arg_10]
0x9752BD: fld     st(2)
0x9752BF: fmulp   st(3), st
0x9752C1: fld     st(1)
0x9752C3: fmulp   st(2), st
0x9752C5: fxch    st(2)
0x9752C7: faddp   st(1), st
0x9752C9: fld     st(1)
0x9752CB: fmulp   st(2), st
0x9752CD: faddp   st(1), st
0x9752CF: fld     [esp+10h+arg_4]
0x9752D3: fld     st
0x9752D5: fmulp   st(4), st
0x9752D7: fxch    st(1)
0x9752D9: faddp   st(3), st
0x9752DB: fld     dword ptr [eax]
0x9752DD: faddp   st(3), st
0x9752DF: fxch    st(2)
0x9752E1: fstp    dword ptr [eax]
0x9752E3: mov     eax, [esp+10h+arg_C]
0x9752E7: fxch    st(1)
0x9752E9: fstp    dword ptr [eax]
0x9752EB: fld     dword ptr [ebp+ecx*4+30h]
0x9752EF: fstp    dword ptr [ebx+ecx*4]
0x9752F2: fsub    dword ptr [ebp+edx*4+30h]
0x9752F6: fstp    dword ptr [ebx+edx*4]
0x9752F9: fld     dword ptr [ebp+esi*4+30h]
0x9752FD: pop     ebp
0x9752FE: fchs
0x975300: fstp    dword ptr [ebx+esi*4]
0x975303: add     esp, 0Ch
0x975306: retn
0x975307: fstp    st(2)
0x975309: mov     eax, [esp+10h+arg_8]
0x97530D: fld     dword ptr [edi+edx*4]
0x975310: fmul    dword ptr [eax+edx*4]
0x975313: faddp   st(1), st
0x975315: faddp   st(1), st
0x975317: fstp    [esp+10h+arg_4]
0x97531B: fld     dword ptr [edi+edx*4]
0x97531E: fld     [esp+10h+arg_4]
0x975322: fld     st
0x975324: fchs
0x975326: fld     st(2)
0x975328: fmulp   st(3), st
0x97532A: fxch    st(2)
0x97532C: faddp   st(3), st
0x97532E: fxch    st(2)
0x975330: fstp    [esp+10h+arg_8]
0x975334: fdiv    [esp+10h+arg_8]
0x975338: fstp    [esp+10h+arg_4]
0x97533C: fld     dword ptr [eax+ecx*4]
0x97533F: fld     dword ptr [eax+edx*4]
0x975342: fld     [esp+esi*4+10h+var_C]
0x975346: mov     eax, [esp+10h+arg_10]
0x97534A: fld     st(1)
0x97534C: fmulp   st(2), st
0x97534E: fld     st(2)
0x975350: fmulp   st(3), st
0x975352: fxch    st(1)
0x975354: faddp   st(2), st
0x975356: fmul    st, st
0x975358: faddp   st(1), st
0x97535A: fld     [esp+10h+arg_4]
0x97535E: fld     st
0x975360: fmulp   st(3), st
0x975362: fxch    st(1)
0x975364: faddp   st(2), st
0x975366: fld     dword ptr [eax]
0x975368: faddp   st(2), st
0x97536A: fxch    st(1)
0x97536C: fstp    dword ptr [eax]
0x97536E: mov     eax, [esp+10h+arg_C]
0x975372: fstp    dword ptr [eax]
0x975374: fld     dword ptr [ebp+ecx*4+30h]
0x975378: fstp    dword ptr [ebx+ecx*4]
0x97537B: fld     dword ptr [ebp+edx*4+30h]
0x97537F: fstp    dword ptr [ebx+edx*4]
0x975382: fld     dword ptr [ebp+esi*4+30h]
0x975386: pop     ebp
0x975387: fchs
0x975389: fstp    dword ptr [ebx+esi*4]
0x97538C: add     esp, 0Ch
0x97538F: retn
0x975390: fstp    st(2)
0x975392: fstp    st(1)
0x975394: fld     dword ptr [edi+edx*4]
0x975397: fmul    st, st
0x975399: faddp   st(5), st
0x97539B: fxch    st(4)
0x97539D: fstp    [esp+10h+arg_4]
0x9753A1: fld     dword ptr [edi+edx*4]
0x9753A4: fmul    [esp+edx*4+10h+var_C]
0x9753A8: faddp   st(2), st
0x9753AA: fld     [esp+10h+arg_4]
0x9753AE: fld     st
0x9753B0: fmul    [esp+esi*4+10h+var_C]
0x9753B4: fld     dword ptr [edi+esi*4]
0x9753B7: fmul    st, st(4)
0x9753B9: fsubp   st(1), st
0x9753BB: fstp    [esp+10h+arg_4]
0x9753BF: fld     [esp+10h+arg_4]
0x9753C3: fcom    st(5)
0x9753C5: fnstsw  ax
0x9753C7: fstp    st(5)
0x9753C9: test    ah, 1
0x9753CC: jnz     loc_9754F0
0x9753D2: fstp    st(1)
0x9753D4: fld     st
0x9753D6: fadd    st, st(1)
0x9753D8: fmul    dword ptr [ebp+esi*4+30h]
0x9753DC: fcomp   st(4)
0x9753DE: fnstsw  ax
0x9753E0: test    ah, 1
0x9753E3: mov     eax, [esp+10h+arg_8]
0x9753E7: jnz     loc_97546E
0x9753ED: fld     st
0x9753EF: fdivp   st(4), st
0x9753F1: fxch    st(3)
0x9753F3: fstp    [esp+10h+arg_4]
0x9753F7: fld     [esp+esi*4+10h+var_C]
0x9753FB: fld     [esp+10h+arg_4]
0x9753FF: fld     st
0x975401: fsubp   st(2), st
0x975403: fxch    st(1)
0x975405: fstp    [esp+10h+arg_4]
0x975409: fld     dword ptr [edi+esi*4]
0x97540C: fld     [esp+10h+arg_4]
0x975410: fld     st
0x975412: fmulp   st(2), st
0x975414: fxch    st(1)
0x975416: faddp   st(3), st
0x975418: fxch    st(2)
0x97541A: fstp    [esp+10h+arg_4]
0x97541E: fld     [esp+10h+arg_4]
0x975422: fld     st
0x975424: fchs
0x975426: fxch    st(5)
0x975428: faddp   st(4), st
0x97542A: fxch    st(3)
0x97542C: fstp    [esp+10h+arg_4]
0x975430: fld     [esp+10h+arg_4]
0x975434: fdivp   st(4), st
0x975436: fxch    st(3)
0x975438: fstp    [esp+10h+arg_4]
0x97543C: fld     dword ptr [eax+ecx*4]
0x97543F: fld     [esp+edx*4+10h+var_C]
0x975443: mov     eax, [esp+10h+arg_10]
0x975447: fld     st(1)
0x975449: fmulp   st(2), st
0x97544B: fmul    st, st
0x97544D: faddp   st(1), st
0x97544F: fld     st(1)
0x975451: fmulp   st(2), st
0x975453: faddp   st(1), st
0x975455: fld     [esp+10h+arg_4]
0x975459: fld     st
0x97545B: fmulp   st(3), st
0x97545D: fxch    st(1)
0x97545F: faddp   st(2), st
0x975461: fld     dword ptr [eax]
0x975463: faddp   st(2), st
0x975465: fxch    st(1)
0x975467: fstp    dword ptr [eax]
0x975469: jmp     loc_97514A
0x97546E: fstp    st(3)
0x975470: fld     dword ptr [edi+esi*4]
0x975473: fmul    dword ptr [eax+esi*4]
0x975476: faddp   st(1), st
0x975478: fstp    [esp+10h+arg_4]
0x97547C: fld     [esp+10h+arg_4]
0x975480: fld     st
0x975482: fchs
0x975484: fxch    st(3)
0x975486: faddp   st(2), st
0x975488: fxch    st(1)
0x97548A: fstp    [esp+10h+arg_8]
0x97548E: fld     [esp+10h+arg_8]
0x975492: fdivp   st(2), st
0x975494: fxch    st(1)
0x975496: fstp    [esp+10h+arg_4]
0x97549A: fld     dword ptr [eax+ecx*4]
0x97549D: fld     [esp+edx*4+10h+var_C]
0x9754A1: fld     dword ptr [eax+esi*4]
0x9754A4: fld     st(2)
0x9754A6: fmulp   st(3), st
0x9754A8: mov     eax, [esp+10h+arg_10]
0x9754AC: fld     st(1)
0x9754AE: fmulp   st(2), st
0x9754B0: fxch    st(2)
0x9754B2: faddp   st(1), st
0x9754B4: fld     st(1)
0x9754B6: fmulp   st(2), st
0x9754B8: faddp   st(1), st
0x9754BA: fld     [esp+10h+arg_4]
0x9754BE: fld     st
0x9754C0: fmulp   st(3), st
0x9754C2: fxch    st(1)
0x9754C4: faddp   st(2), st
0x9754C6: fld     dword ptr [eax]
0x9754C8: faddp   st(2), st
0x9754CA: fxch    st(1)
0x9754CC: fstp    dword ptr [eax]
0x9754CE: mov     eax, [esp+10h+arg_C]
0x9754D2: fstp    dword ptr [eax]
0x9754D4: fld     dword ptr [ebp+ecx*4+30h]
0x9754D8: fstp    dword ptr [ebx+ecx*4]
0x9754DB: fld     dword ptr [ebp+edx*4+30h]
0x9754DF: fchs
0x9754E1: fstp    dword ptr [ebx+edx*4]
0x9754E4: fld     dword ptr [ebp+esi*4+30h]
0x9754E8: pop     ebp
0x9754E9: fstp    dword ptr [ebx+esi*4]
0x9754EC: add     esp, 0Ch
0x9754EF: retn
0x9754F0: fstp    st(4)
0x9754F2: mov     eax, [esp+10h+arg_8]
0x9754F6: faddp   st(1), st
0x9754F8: fstp    [esp+10h+arg_4]
0x9754FC: fld     [esp+10h+arg_4]
0x975500: fld     st
0x975502: fchs
0x975504: fxch    st(3)
0x975506: faddp   st(2), st
0x975508: fxch    st(1)
0x97550A: fstp    [esp+10h+arg_4]
0x97550E: fld     [esp+10h+arg_4]
0x975512: fdivp   st(2), st
0x975514: fxch    st(1)
0x975516: fstp    [esp+10h+arg_4]
0x97551A: fld     dword ptr [eax+ecx*4]
0x97551D: fld     [esp+edx*4+10h+var_C]
0x975521: fld     [esp+esi*4+10h+var_C]
0x975525: mov     eax, [esp+10h+arg_10]
0x975529: fld     st(2)
0x97552B: fmulp   st(3), st
0x97552D: fld     st(1)
0x97552F: fmulp   st(2), st
0x975531: fxch    st(2)
0x975533: faddp   st(1), st
0x975535: fld     st(1)
0x975537: fmulp   st(2), st
0x975539: faddp   st(1), st
0x97553B: fld     [esp+10h+arg_4]
0x97553F: fld     st
0x975541: fmulp   st(3), st
0x975543: fxch    st(1)
0x975545: faddp   st(2), st
0x975547: fld     dword ptr [eax]
0x975549: faddp   st(2), st
0x97554B: fxch    st(1)
0x97554D: fstp    dword ptr [eax]
0x97554F: mov     eax, [esp+10h+arg_C]
0x975553: fstp    dword ptr [eax]
0x975555: fld     dword ptr [ebp+ecx*4+30h]
0x975559: fstp    dword ptr [ebx+ecx*4]
0x97555C: fld     dword ptr [ebp+edx*4+30h]
0x975560: fchs
0x975562: fstp    dword ptr [ebx+edx*4]
0x975565: fld     dword ptr [ebp+esi*4+30h]
0x975569: pop     ebp
0x97556A: fchs
0x97556C: fstp    dword ptr [ebx+esi*4]
0x97556F: add     esp, 0Ch
0x975572: retn
