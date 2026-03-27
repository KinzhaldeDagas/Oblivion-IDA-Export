0x4ACE30: cmp     byte ptr [esp+arg_C], 0
0x4ACE35: fld     [esp+arg_18]
0x4ACE39: fld     [esp+arg_10]
0x4ACE3D: fld     [esp+arg_8]
0x4ACE41: jz      loc_4ACF0C
0x4ACE47: fld     st(1)
0x4ACE49: fadd    st, st(3)
0x4ACE4B: fcomp   st(1)
0x4ACE4D: fnstsw  ax
0x4ACE4F: test    ah, 41h
0x4ACE52: jz      loc_4ACF0C
0x4ACE58: fstp    st(1)
0x4ACE5A: fstp    st(1)
0x4ACE5C: fstp    st
0x4ACE5E: fldz
0x4ACE60: fld     [esp+arg_14]
0x4ACE64: fcom    st(1)
0x4ACE66: fnstsw  ax
0x4ACE68: fldz
0x4ACE6A: test    ah, 41h
0x4ACE6D: fld     dword ptr ds:0A41AC8h
0x4ACE73: jnz     short loc_4ACEBF
0x4ACE75: fld     [esp+arg_1C]
0x4ACE79: fsub    [esp+arg_20]
0x4ACE7D: fld     st(2)
0x4ACE7F: fucomp  st(1)
0x4ACE81: fnstsw  ax
0x4ACE83: test    ah, 44h
0x4ACE86: jnp     short loc_4ACEBD
0x4ACE88: fstp    [esp+arg_C]
0x4ACE8C: fld     [esp+arg_C]
0x4ACE90: fabs
0x4ACE92: fstp    [esp+arg_C]
0x4ACE96: fld     [esp+arg_C]
0x4ACE9A: fld1
0x4ACE9C: fdivrp  st(4), st
0x4ACE9E: fmulp   st(3), st
0x4ACEA0: fxch    st(2)
0x4ACEA2: fstp    [esp+arg_C]
0x4ACEA6: fxch    st(1)
0x4ACEA8: fcom    [esp+arg_C]
0x4ACEAC: fnstsw  ax
0x4ACEAE: test    ah, 41h
0x4ACEB1: jnz     short loc_4ACEC9
0x4ACEB3: fxch    st(1)
0x4ACEB5: fxch    st(1)
0x4ACEB7: fstp    [esp+arg_C]
0x4ACEBB: jmp     short loc_4ACECB
0x4ACEBD: fstp    st
0x4ACEBF: fstp    st(2)
0x4ACEC1: fxch    st(1)
0x4ACEC3: fstp    [esp+arg_C]
0x4ACEC7: jmp     short loc_4ACECB
0x4ACEC9: fstp    st
0x4ACECB: fld     [esp+arg_0]
0x4ACECF: fld     [esp+arg_C]
0x4ACED3: fmul    [esp+arg_4]
0x4ACED7: fstp    [esp+arg_C]
0x4ACEDB: fsub    [esp+arg_C]
0x4ACEDF: fstp    [esp+arg_C]
0x4ACEE3: fld     [esp+arg_C]
0x4ACEE7: fcom    st(1)
0x4ACEE9: fnstsw  ax
0x4ACEEB: fstp    st(1)
0x4ACEED: test    ah, 5
0x4ACEF0: jp      short loc_4ACEFF
0x4ACEF2: fstp    st
0x4ACEF4: fstp    [esp+arg_0]
0x4ACEF8: fld     [esp+arg_0]
0x4ACEFC: retn    24h ; '$'
0x4ACEFF: fstp    st(1)
0x4ACF01: fstp    [esp+arg_0]
0x4ACF05: fld     [esp+arg_0]
0x4ACF09: retn    24h ; '$'
0x4ACF0C: fcom    st(1)
0x4ACF0E: fnstsw  ax
0x4ACF10: test    ah, 5
0x4ACF13: jp      short loc_4ACF4B
0x4ACF15: fstp    st(2)
0x4ACF17: fstp    st(1)
0x4ACF19: fdivr   [esp+arg_4]
0x4ACF1D: fld     [esp+arg_1C]
0x4ACF21: fld     st
0x4ACF23: fmulp   st(2), st
0x4ACF25: fld     [esp+arg_0]
0x4ACF29: faddp   st(2), st
0x4ACF2B: fxch    st(1)
0x4ACF2D: fstp    [esp+arg_C]
0x4ACF31: fld     [esp+arg_C]
0x4ACF35: fcom    st(1)
0x4ACF37: fnstsw  ax
0x4ACF39: test    ah, 41h
0x4ACF3C: jnz     short loc_4ACEFF
0x4ACF3E: fstp    st
0x4ACF40: fstp    [esp+arg_0]
0x4ACF44: fld     [esp+arg_0]
0x4ACF48: retn    24h ; '$'
0x4ACF4B: fsubrp  st(1), st
0x4ACF4D: fcom    st(1)
0x4ACF4F: fnstsw  ax
0x4ACF51: test    ah, 5
0x4ACF54: jp      short loc_4ACF69
0x4ACF56: fstp    st
0x4ACF58: fstp    st
0x4ACF5A: fld     [esp+arg_1C]
0x4ACF5E: fstp    [esp+arg_0]
0x4ACF62: fld     [esp+arg_0]
0x4ACF66: retn    24h ; '$'
0x4ACF69: fsubrp  st(1), st
0x4ACF6B: fld     [esp+arg_14]
0x4ACF6F: fcom    st(1)
0x4ACF71: fnstsw  ax
0x4ACF73: fstp    st(1)
0x4ACF75: test    ah, 41h
0x4ACF78: jnz     short loc_4ACFD1
0x4ACF7A: fld     [esp+arg_0]
0x4ACF7E: sub     esp, 8
0x4ACF81: fld     [esp+8+arg_1C]
0x4ACF85: fld     [esp+8+arg_20]
0x4ACF89: fld     st
0x4ACF8B: fsubp   st(2), st
0x4ACF8D: fxch    st(1)
0x4ACF8F: fstp    [esp+8+arg_C]
0x4ACF93: fld     [esp+8+arg_C]
0x4ACF97: fabs
0x4ACF99: fstp    [esp+8+arg_C]
0x4ACF9D: fld     [esp+8+arg_C]
0x4ACFA1: fld     [esp+8+arg_4]
0x4ACFA5: fdivrp  st(4), st
0x4ACFA7: fmulp   st(3), st
0x4ACFA9: fxch    st(1)
0x4ACFAB: fsubrp  st(2), st
0x4ACFAD: fxch    st(1)
0x4ACFAF: fstp    [esp+8+arg_C]
0x4ACFB3: fld     [esp+8+arg_C]
0x4ACFB7: fstp    [esp+8+var_4]; float
0x4ACFBB: fstp    [esp+8+var_8]; float
0x4ACFBE: call    Min_Float
0x4ACFC3: fstp    [esp+8+arg_0]
0x4ACFC7: add     esp, 8
0x4ACFCA: fld     [esp+arg_0]
0x4ACFCE: retn    24h ; '$'
0x4ACFD1: fstp    st
0x4ACFD3: fld     [esp+arg_20]
0x4ACFD7: fstp    [esp+arg_0]
0x4ACFDB: fld     [esp+arg_0]
0x4ACFDF: retn    24h ; '$'
