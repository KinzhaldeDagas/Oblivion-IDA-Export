0x993A62: movlpd  xmm1, ds:qword_AA8000
0x993A6A: movlpd  xmm2, qword ptr ds:xmmword_AA7F70
0x993A72: movlpd  xmm0, qword ptr ds:xmmword_AA7F70+8
0x993A7A: addsd   xmm0, xmm2
0x993A7E: andnpd  xmm1, xmm7
0x993A82: orpd    xmm0, xmm1
0x993A86: sub     esp, 10h
0x993A89: movlpd  [esp+10h+var_C], xmm0
0x993A8F: fld     [esp+10h+var_C]
0x993A93: add     esp, 10h
0x993A96: retn
