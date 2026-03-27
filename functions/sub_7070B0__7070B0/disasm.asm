0x7070B0: push    ecx
0x7070B1: fldz
0x7070B3: fld     st
0x7070B5: fld     [esp+4+arg_4]
0x7070B9: fucom   st(1)
0x7070BB: fnstsw  ax
0x7070BD: fstp    st(1)
0x7070BF: test    ah, 44h
0x7070C2: fld     [esp+4+arg_0]
0x7070C6: jp      short loc_7070D9
0x7070C8: fld     st(2)
0x7070CA: fucomp  st(1)
0x7070CC: fnstsw  ax
0x7070CE: test    ah, 44h
0x7070D1: jp      short loc_7070D9
0x7070D3: fstp    st
0x7070D5: fstp    st
0x7070D7: pop     ecx
0x7070D8: retn
0x7070D9: fxch    st(2)
0x7070DB: fst     [esp+4+var_4]
0x7070DE: fld     st(2)
0x7070E0: fabs
0x7070E2: fstp    [esp+4+arg_4]
0x7070E6: fld     [esp+4+arg_4]
0x7070EA: fld     st(2)
0x7070EC: fabs
0x7070EE: fstp    [esp+4+arg_4]
0x7070F2: fld     [esp+4+arg_4]
0x7070F6: fcompp
0x7070F8: fnstsw  ax
0x7070FA: test    ah, 5
0x7070FD: jp      loc_7071E8
0x707103: fld     st(1)
0x707105: fdiv    st, st(3)
0x707107: fstp    [esp+4+arg_4]
0x70710B: fld     [esp+4+arg_4]
0x70710F: fcom    st(1)
0x707111: fnstsw  ax
0x707113: test    ah, 41h
0x707116: jnz     loc_7071B3
0x70711C: fld     dword ptr ds:0B3F99Ch
0x707122: fstp    [esp+4+var_4]
0x707125: fld     st
0x707127: fmul    st, st
0x707129: fstp    [esp+4+arg_4]
0x70712D: fld     [esp+4+arg_4]
0x707131: fld     qword ptr ds:0A7DED8h
0x707137: fmul    st, st(1)
0x707139: fstp    [esp+4+arg_4]
0x70713D: fld     [esp+4+arg_4]
0x707141: fsub    qword ptr ds:0A7DED0h
0x707147: fstp    [esp+4+arg_4]
0x70714B: fld     [esp+4+arg_4]
0x70714F: fmul    st, st(1)
0x707151: fstp    [esp+4+arg_4]
0x707155: fld     [esp+4+arg_4]
0x707159: fadd    qword ptr ds:0A7DEC8h
0x70715F: fstp    [esp+4+arg_4]
0x707163: fld     [esp+4+arg_4]
0x707167: fmul    st, st(1)
0x707169: fstp    [esp+4+arg_4]
0x70716D: fld     [esp+4+arg_4]
0x707171: fsub    qword ptr ds:0A7DEC0h
0x707177: fstp    [esp+4+arg_4]
0x70717B: fmul    [esp+4+arg_4]
0x70717F: fstp    [esp+4+arg_4]
0x707183: fld     [esp+4+arg_4]
0x707187: fadd    qword ptr ds:0A7DEB8h
0x70718D: fstp    [esp+4+arg_4]
0x707191: fmul    [esp+4+arg_4]
0x707195: fstp    [esp+4+arg_4]
0x707199: fld     st
0x70719B: fld     [esp+4+var_4]
0x70719E: fucom   st(1)
0x7071A0: fnstsw  ax
0x7071A2: fstp    st(1)
0x7071A4: test    ah, 44h
0x7071A7: jnp     short loc_707224
0x7071A9: fsub    [esp+4+arg_4]
0x7071AD: fstp    [esp+4+arg_4]
0x7071B1: jmp     short loc_707226
0x7071B3: fcom    st(1)
0x7071B5: fnstsw  ax
0x7071B7: test    ah, 5
0x7071BA: jp      short loc_7071C9
0x7071BC: fld     dword ptr ds:0B3F99Ch
0x7071C2: fchs
0x7071C4: jmp     loc_707122
0x7071C9: fstp    st
0x7071CB: fstp    st(1)
0x7071CD: fcompp
0x7071CF: fnstsw  ax
0x7071D1: fld     dword ptr ds:0B3F99Ch
0x7071D7: test    ah, 5
0x7071DA: jnp     short loc_7071DE
0x7071DC: fchs
0x7071DE: fstp    [esp+4+arg_4]
0x7071E2: fld     [esp+4+arg_4]
0x7071E6: pop     ecx
0x7071E7: retn
0x7071E8: fld     st(2)
0x7071EA: fdiv    st, st(2)
0x7071EC: fstp    [esp+4+arg_4]
0x7071F0: fld     st
0x7071F2: fld     [esp+4+arg_4]
0x7071F6: fucom   st(1)
0x7071F8: fnstsw  ax
0x7071FA: fstp    st(1)
0x7071FC: test    ah, 44h
0x7071FF: jp      loc_707125
0x707205: fstp    st
0x707207: fstp    st(2)
0x707209: fcomp   st(1)
0x70720B: fnstsw  ax
0x70720D: test    ah, 41h
0x707210: jz      short loc_70721A
0x707212: fstp    st
0x707214: fld     dword ptr ds:0B3F9A4h
0x70721A: fstp    [esp+4+arg_4]
0x70721E: fld     [esp+4+arg_4]
0x707222: pop     ecx
0x707223: retn
0x707224: fstp    st
0x707226: fcom    st(2)
0x707228: fnstsw  ax
0x70722A: fld     dword ptr ds:0B3F9A4h
0x707230: test    ah, 41h
0x707233: jnz     short loc_70724C
0x707235: fxch    st(2)
0x707237: fcom    st(1)
0x707239: fnstsw  ax
0x70723B: test    ah, 5
0x70723E: jp      short loc_70724A
0x707240: fld     [esp+4+arg_4]
0x707244: fsub    st, st(3)
0x707246: fstp    [esp+4+arg_4]
0x70724A: fxch    st(2)
0x70724C: fxch    st(3)
0x70724E: fcomp   st(1)
0x707250: fnstsw  ax
0x707252: test    ah, 41h
0x707255: jnz     short loc_70726E
0x707257: fcompp
0x707259: fnstsw  ax
0x70725B: test    ah, 41h
0x70725E: jnz     short loc_707272
0x707260: fadd    [esp+4+arg_4]
0x707264: fstp    [esp+4+arg_4]
0x707268: fld     [esp+4+arg_4]
0x70726C: pop     ecx
0x70726D: retn
0x70726E: fstp    st(2)
0x707270: fstp    st(1)
0x707272: fstp    st
0x707274: fld     [esp+4+arg_4]
0x707278: pop     ecx
0x707279: retn
