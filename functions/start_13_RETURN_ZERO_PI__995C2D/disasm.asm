0x995C2D: pextrw  edx, xmm7, 1
0x995C32: shr     edx, 0Fh
0x995C35: neg     edx
0x995C37: movd    xmm7, edx
0x995C3B: pshufd  xmm7, xmm7, 0
0x995C40: movlpd  xmm2, ds:qword_AAD9D0
0x995C48: movlpd  xmm0, ds:qword_AAD9D8
0x995C50: andpd   xmm2, xmm7
0x995C54: andpd   xmm0, xmm7
0x995C58: addsd   xmm0, xmm2
0x995C5C: sub     esp, 10h
0x995C5F: movlpd  [esp+10h+var_C], xmm0
0x995C65: fld     [esp+10h+var_C]
0x995C69: add     esp, 10h
0x995C6C: retn
