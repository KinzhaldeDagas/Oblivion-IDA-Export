0x95E0E0: sub     esp, 0Ch
0x95E0E3: mov     ecx, [esp+0Ch+arg_4]
0x95E0E7: mov     eax, [esp+0Ch+arg_C]
0x95E0EB: fld     dword ptr [eax+4]
0x95E0EE: fmul    dword ptr [ecx+8]
0x95E0F1: fld     dword ptr [eax]
0x95E0F3: fmul    dword ptr [ecx+4]
0x95E0F6: faddp   st(1), st
0x95E0F8: fld     dword ptr [eax+8]
0x95E0FB: fmul    dword ptr [ecx+0Ch]
0x95E0FE: faddp   st(1), st
0x95E100: fstp    [esp+0Ch+arg_4]
0x95E104: fld     [esp+0Ch+arg_4]
0x95E108: fsub    dword ptr [ecx+10h]
0x95E10B: fstp    [esp+0Ch+arg_4]
0x95E10F: fldz
0x95E111: fld     [esp+0Ch+arg_4]
0x95E115: fcom    st(1)
0x95E117: fnstsw  ax
0x95E119: test    ah, 1
0x95E11C: jz      short loc_95E198
0x95E11E: mov     eax, [esp+0Ch+arg_10]
0x95E122: fld     dword ptr [eax+4]
0x95E125: fmul    dword ptr [ecx+8]
0x95E128: fld     dword ptr [eax]
0x95E12A: fmul    dword ptr [ecx+4]
0x95E12D: faddp   st(1), st
0x95E12F: fld     dword ptr [eax+8]
0x95E132: fmul    dword ptr [ecx+0Ch]
0x95E135: faddp   st(1), st
0x95E137: fstp    [esp+0Ch+arg_4]
0x95E13B: fld     [esp+0Ch+arg_4]
0x95E13F: fsub    dword ptr [ecx+10h]
0x95E142: fstp    [esp+0Ch+arg_4]
0x95E146: fld     [esp+0Ch+arg_4]
0x95E14A: fcom    st(2)
0x95E14C: fnstsw  ax
0x95E14E: test    ah, 1
0x95E151: jnz     short loc_95E15F
0x95E153: fstp    st(2)
0x95E155: mov     al, 1
0x95E157: fstp    st
0x95E159: fstp    st
0x95E15B: add     esp, 0Ch
0x95E15E: retn
0x95E15F: mov     eax, [esp+0Ch+arg_14]
0x95E163: fld     dword ptr [eax+4]
0x95E166: fmul    dword ptr [ecx+8]
0x95E169: fld     dword ptr [eax]
0x95E16B: fmul    dword ptr [ecx+4]
0x95E16E: faddp   st(1), st
0x95E170: fld     dword ptr [eax+8]
0x95E173: fmul    dword ptr [ecx+0Ch]
0x95E176: faddp   st(1), st
0x95E178: fstp    [esp+0Ch+arg_4]
0x95E17C: fld     [esp+0Ch+arg_4]
0x95E180: fsub    dword ptr [ecx+10h]
0x95E183: fstp    [esp+0Ch+arg_4]
0x95E187: fld     [esp+0Ch+arg_4]
0x95E18B: fcom    st(3)
0x95E18D: fnstsw  ax
0x95E18F: test    ah, 1
0x95E192: jnz     short loc_95E1A2
0x95E194: fstp    st(3)
0x95E196: fstp    st(1)
0x95E198: fstp    st(1)
0x95E19A: mov     al, 1
0x95E19C: fstp    st
0x95E19E: add     esp, 0Ch
0x95E1A1: retn
0x95E1A2: mov     eax, [esp+0Ch+arg_18]
0x95E1A6: mov     edx, [esp+0Ch+arg_8]
0x95E1AA: fld     dword ptr [eax]
0x95E1AC: fsub    dword ptr [edx]
0x95E1AE: fstp    [esp+0Ch+var_C]
0x95E1B1: fld     dword ptr [eax+4]
0x95E1B4: fsub    dword ptr [edx+4]
0x95E1B7: fstp    [esp+0Ch+var_8]
0x95E1BB: fld     dword ptr [eax+8]
0x95E1BE: fsub    dword ptr [edx+8]
0x95E1C1: fstp    [esp+0Ch+var_4]
0x95E1C5: fld     dword ptr [ecx+8]
0x95E1C8: fmul    [esp+0Ch+var_8]
0x95E1CC: fld     dword ptr [ecx+4]
0x95E1CF: fmul    [esp+0Ch+var_C]
0x95E1D2: faddp   st(1), st
0x95E1D4: fld     dword ptr [ecx+0Ch]
0x95E1D7: fmul    [esp+0Ch+var_4]
0x95E1DB: faddp   st(1), st
0x95E1DD: fstp    [esp+0Ch+arg_4]
0x95E1E1: fld     [esp+0Ch+arg_4]
0x95E1E5: fcom    st(4)
0x95E1E7: fnstsw  ax
0x95E1E9: fstp    st(4)
0x95E1EB: test    ah, 41h
0x95E1EE: jp      short loc_95E1FE
0x95E1F0: fstp    st(3)
0x95E1F2: xor     al, al
0x95E1F4: fstp    st(1)
0x95E1F6: fstp    st(1)
0x95E1F8: fstp    st
0x95E1FA: add     esp, 0Ch
0x95E1FD: retn
0x95E1FE: fld     [esp+0Ch+arg_0]
0x95E202: fchs
0x95E204: fmulp   st(4), st
0x95E206: fxch    st(3)
0x95E208: fstp    [esp+0Ch+arg_4]
0x95E20C: fld     [esp+0Ch+arg_4]
0x95E210: fcom    st(2)
0x95E212: fnstsw  ax
0x95E214: fstp    st(2)
0x95E216: test    ah, 41h
0x95E219: jnp     short loc_95E233
0x95E21B: fcomp   st(1)
0x95E21D: fnstsw  ax
0x95E21F: test    ah, 1
0x95E222: jz      short loc_95E242
0x95E224: fcompp
0x95E226: fnstsw  ax
0x95E228: test    ah, 41h
0x95E22B: jnp     short loc_95E246
0x95E22D: xor     eax, eax
0x95E22F: add     esp, 0Ch
0x95E232: retn
0x95E233: fstp    st(1)
0x95E235: mov     eax, 1
0x95E23A: fstp    st(1)
0x95E23C: fstp    st
0x95E23E: add     esp, 0Ch
0x95E241: retn
0x95E242: fstp    st
0x95E244: fstp    st
0x95E246: mov     eax, 1
0x95E24B: add     esp, 0Ch
0x95E24E: retn
