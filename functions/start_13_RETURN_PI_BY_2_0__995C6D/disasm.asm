0x995C6D: movlpd  xmm2, qword ptr ds:xmmword_AAD9B0
0x995C75: movlpd  xmm0, qword ptr ds:xmmword_AAD9B0+8
0x995C7D: addsd   xmm0, xmm2
0x995C81: sub     esp, 10h
0x995C84: movlpd  [esp+10h+var_C], xmm0
0x995C8A: fld     [esp+10h+var_C]
0x995C8E: add     esp, 10h
0x995C91: retn
