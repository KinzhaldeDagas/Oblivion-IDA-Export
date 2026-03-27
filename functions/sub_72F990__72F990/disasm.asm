0x72F990: mov     eax, [esp+arg_8]
0x72F994: fld     dword ptr [eax+0Ch]
0x72F997: push    esi
0x72F998: fld     [esp+4+arg_4]
0x72F99C: sub     esp, 10h
0x72F99F: fld     st
0x72F9A1: mov     esi, [esp+14h+arg_0]
0x72F9A5: fmulp   st(2), st
0x72F9A7: mov     ecx, esi
0x72F9A9: fxch    st(1)
0x72F9AB: fstp    [esp+14h+arg_8]
0x72F9AF: fld     [esp+14h+arg_8]
0x72F9B3: fstp    [esp+14h+var_8]; float
0x72F9B7: fld     dword ptr [eax+8]
0x72F9BA: fmul    st, st(1)
0x72F9BC: fstp    [esp+14h+arg_8]
0x72F9C0: fld     [esp+14h+arg_8]
0x72F9C4: fstp    [esp+14h+var_C]; float
0x72F9C8: fld     dword ptr [eax+4]
0x72F9CB: fmul    st, st(1)
0x72F9CD: fstp    [esp+14h+arg_8]
0x72F9D1: fld     [esp+14h+arg_8]
0x72F9D5: fstp    [esp+14h+var_10]; float
0x72F9D9: fmul    dword ptr [eax]
0x72F9DB: fstp    [esp+14h+arg_8]
0x72F9DF: fld     [esp+14h+arg_8]
0x72F9E3: fstp    [esp+14h+var_14]; float
0x72F9E6: call    sub_714C40
0x72F9EB: mov     eax, esi
0x72F9ED: pop     esi
0x72F9EE: retn
