0x95DD70: sub     esp, 0Ch
0x95DD73: mov     ecx, [esp+0Ch+arg_4]
0x95DD77: mov     eax, [esp+0Ch+arg_C]
0x95DD7B: fld     dword ptr [eax+14h]
0x95DD7E: fmul    dword ptr [ecx+8]
0x95DD81: fld     dword ptr [eax+10h]
0x95DD84: fmul    dword ptr [ecx+4]
0x95DD87: faddp   st(1), st
0x95DD89: fld     dword ptr [eax+18h]
0x95DD8C: fmul    dword ptr [ecx+0Ch]
0x95DD8F: faddp   st(1), st
0x95DD91: fstp    [esp+0Ch+arg_4]
0x95DD95: fld     [esp+0Ch+arg_4]
0x95DD99: fmul    dword ptr [eax+34h]
0x95DD9C: fstp    [esp+0Ch+var_C]
0x95DD9F: fld     dword ptr [eax+20h]
0x95DDA2: fmul    dword ptr [ecx+8]
0x95DDA5: fld     dword ptr [eax+1Ch]
0x95DDA8: fmul    dword ptr [ecx+4]
0x95DDAB: faddp   st(1), st
0x95DDAD: fld     dword ptr [eax+24h]
0x95DDB0: fmul    dword ptr [ecx+0Ch]
0x95DDB3: faddp   st(1), st
0x95DDB5: fstp    [esp+0Ch+arg_4]
0x95DDB9: fld     [esp+0Ch+arg_4]
0x95DDBD: fmul    dword ptr [eax+38h]
0x95DDC0: fstp    [esp+0Ch+var_8]
0x95DDC4: fld     dword ptr [eax+2Ch]
0x95DDC7: fmul    dword ptr [ecx+8]
0x95DDCA: fld     dword ptr [eax+28h]
0x95DDCD: fmul    dword ptr [ecx+4]
0x95DDD0: faddp   st(1), st
0x95DDD2: fld     dword ptr [eax+30h]
0x95DDD5: fmul    dword ptr [ecx+0Ch]
0x95DDD8: faddp   st(1), st
0x95DDDA: fstp    [esp+0Ch+arg_4]
0x95DDDE: fld     [esp+0Ch+arg_4]
0x95DDE2: fmul    dword ptr [eax+3Ch]
0x95DDE5: fstp    [esp+0Ch+var_4]
0x95DDE9: fld     [esp+0Ch+var_8]
0x95DDED: fabs
0x95DDEF: fstp    [esp+0Ch+arg_4]
0x95DDF3: fld     [esp+0Ch+arg_4]
0x95DDF7: fld     [esp+0Ch+var_C]
0x95DDFA: fabs
0x95DDFC: fstp    [esp+0Ch+arg_4]
0x95DE00: fadd    [esp+0Ch+arg_4]
0x95DE04: fld     [esp+0Ch+var_4]
0x95DE08: fabs
0x95DE0A: fstp    [esp+0Ch+arg_4]
0x95DE0E: fadd    [esp+0Ch+arg_4]
0x95DE12: fstp    [esp+0Ch+arg_C]
0x95DE16: fld     dword ptr [eax+8]
0x95DE19: fmul    dword ptr [ecx+8]
0x95DE1C: fld     dword ptr [eax+4]
0x95DE1F: fmul    dword ptr [ecx+4]
0x95DE22: faddp   st(1), st
0x95DE24: fld     dword ptr [eax+0Ch]
0x95DE27: fmul    dword ptr [ecx+0Ch]
0x95DE2A: faddp   st(1), st
0x95DE2C: fstp    [esp+0Ch+arg_4]
0x95DE30: fld     [esp+0Ch+arg_4]
0x95DE34: fsub    dword ptr [ecx+10h]
0x95DE37: fstp    [esp+0Ch+arg_4]
0x95DE3B: fld     [esp+0Ch+arg_C]
0x95DE3F: fchs
0x95DE41: fstp    [esp+0Ch+arg_C]
0x95DE45: fld     [esp+0Ch+arg_4]
0x95DE49: fld     [esp+0Ch+arg_C]
0x95DE4D: fcom    st(1)
0x95DE4F: fnstsw  ax
0x95DE51: test    ah, 41h
0x95DE54: jp      short loc_95DE60
0x95DE56: fstp    st(1)
0x95DE58: mov     al, 1
0x95DE5A: fstp    st
0x95DE5C: add     esp, 0Ch
0x95DE5F: retn
0x95DE60: mov     eax, [esp+0Ch+arg_10]
0x95DE64: mov     edx, [esp+0Ch+arg_8]
0x95DE68: fld     dword ptr [eax]
0x95DE6A: fsub    dword ptr [edx]
0x95DE6C: fstp    [esp+0Ch+var_C]
0x95DE6F: fld     dword ptr [eax+4]
0x95DE72: fsub    dword ptr [edx+4]
0x95DE75: fstp    [esp+0Ch+var_8]
0x95DE79: fld     dword ptr [eax+8]
0x95DE7C: fsub    dword ptr [edx+8]
0x95DE7F: fstp    [esp+0Ch+var_4]
0x95DE83: fld     dword ptr [ecx+8]
0x95DE86: fmul    [esp+0Ch+var_8]
0x95DE8A: fld     [esp+0Ch+var_C]
0x95DE8D: fmul    dword ptr [ecx+4]
0x95DE90: faddp   st(1), st
0x95DE92: fld     [esp+0Ch+var_4]
0x95DE96: fmul    dword ptr [ecx+0Ch]
0x95DE99: faddp   st(1), st
0x95DE9B: fstp    [esp+0Ch+arg_4]
0x95DE9F: fldz
0x95DEA1: fld     [esp+0Ch+arg_4]
0x95DEA5: fcom    st(1)
0x95DEA7: fnstsw  ax
0x95DEA9: fstp    st(1)
0x95DEAB: test    ah, 41h
0x95DEAE: jp      short loc_95DEBC
0x95DEB0: fstp    st(2)
0x95DEB2: xor     al, al
0x95DEB4: fstp    st
0x95DEB6: fstp    st
0x95DEB8: add     esp, 0Ch
0x95DEBB: retn
0x95DEBC: fmul    [esp+0Ch+arg_0]
0x95DEC0: faddp   st(2), st
0x95DEC2: fcompp
0x95DEC4: fnstsw  ax
0x95DEC6: test    ah, 41h
0x95DEC9: jp      short loc_95DED4
0x95DECB: mov     eax, 1
0x95DED0: add     esp, 0Ch
0x95DED3: retn
0x95DED4: xor     eax, eax
0x95DED6: add     esp, 0Ch
0x95DED9: retn
