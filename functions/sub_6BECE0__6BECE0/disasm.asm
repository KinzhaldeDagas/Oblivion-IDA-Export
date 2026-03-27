0x6BECE0: sub     esp, 30h
0x6BECE3: fld     [esp+30h+arg_0]
0x6BECE7: mov     eax, [esp+30h+arg_4]
0x6BECEB: fld     st
0x6BECED: mov     ecx, [eax+4]
0x6BECF0: fld1
0x6BECF2: mov     edx, [eax+8]
0x6BECF5: fsubrp  st(1), st
0x6BECF7: mov     [esp+30h+var_20], ecx
0x6BECFB: mov     ecx, [eax+0Ch]
0x6BECFE: mov     [esp+30h+var_1C], edx
0x6BED02: mov     edx, [eax+10h]
0x6BED05: fstp    [esp+30h+arg_0]
0x6BED09: mov     eax, [esp+30h+arg_8]
0x6BED0D: fld     [esp+30h+var_20]
0x6BED11: mov     [esp+30h+var_18], ecx
0x6BED15: fld     [esp+30h+arg_0]
0x6BED19: mov     ecx, [eax+4]
0x6BED1C: fld     st
0x6BED1E: mov     [esp+30h+var_14], edx
0x6BED22: fmulp   st(2), st
0x6BED24: mov     edx, [eax+8]
0x6BED27: fxch    st(1)
0x6BED29: mov     [esp+30h+var_30], ecx
0x6BED2C: mov     ecx, [eax+0Ch]
0x6BED2F: fstp    [esp+30h+var_20]
0x6BED33: mov     [esp+30h+var_2C], edx
0x6BED37: fld     [esp+30h+var_1C]
0x6BED3B: mov     edx, [eax+10h]
0x6BED3E: fmul    st, st(1)
0x6BED40: mov     [esp+30h+var_28], ecx
0x6BED44: mov     [esp+30h+var_24], edx
0x6BED48: fstp    [esp+30h+var_1C]
0x6BED4C: fld     [esp+30h+var_18]
0x6BED50: fmul    st, st(1)
0x6BED52: fstp    [esp+30h+var_18]
0x6BED56: fmul    [esp+30h+var_14]
0x6BED5A: fstp    [esp+30h+var_14]
0x6BED5E: fld     [esp+30h+var_30]
0x6BED61: fmul    st, st(1)
0x6BED63: fstp    [esp+30h+var_30]
0x6BED66: mov     eax, [esp+30h+var_30]
0x6BED69: fld     [esp+30h+var_2C]
0x6BED6D: mov     [esp+30h+var_10], eax
0x6BED71: fmul    st, st(1)
0x6BED73: fstp    [esp+30h+var_2C]
0x6BED77: mov     ecx, [esp+30h+var_2C]
0x6BED7B: fld     [esp+30h+var_28]
0x6BED7F: mov     [esp+30h+var_C], ecx
0x6BED83: fmul    st, st(1)
0x6BED85: fstp    [esp+30h+var_28]
0x6BED89: mov     edx, [esp+30h+var_28]
0x6BED8D: mov     [esp+30h+var_8], edx
0x6BED91: fmul    [esp+30h+var_24]
0x6BED95: fstp    [esp+30h+var_24]
0x6BED99: mov     eax, [esp+30h+var_24]
0x6BED9D: fld     [esp+30h+var_30]
0x6BEDA0: mov     [esp+30h+var_4], eax
0x6BEDA4: fadd    [esp+30h+var_20]
0x6BEDA8: mov     eax, [esp+30h+arg_C]
0x6BEDAC: fstp    [esp+30h+var_10]
0x6BEDB0: mov     ecx, [esp+30h+var_10]
0x6BEDB4: fld     [esp+30h+var_C]
0x6BEDB8: mov     [eax], ecx
0x6BEDBA: fadd    [esp+30h+var_1C]
0x6BEDBE: fstp    [esp+30h+var_C]
0x6BEDC2: mov     edx, [esp+30h+var_C]
0x6BEDC6: fld     [esp+30h+var_8]
0x6BEDCA: mov     [eax+4], edx
0x6BEDCD: fadd    [esp+30h+var_18]
0x6BEDD1: fstp    [esp+30h+var_8]
0x6BEDD5: mov     ecx, [esp+30h+var_8]
0x6BEDD9: fld     [esp+30h+var_4]
0x6BEDDD: mov     [eax+8], ecx
0x6BEDE0: fadd    [esp+30h+var_14]
0x6BEDE4: fstp    [esp+30h+var_4]
0x6BEDE8: mov     edx, [esp+30h+var_4]
0x6BEDEC: mov     [eax+0Ch], edx
0x6BEDEF: add     esp, 30h
0x6BEDF2: retn
