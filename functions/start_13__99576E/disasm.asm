0x99576E: movlpd  xmm4, qword ptr ds:xmmword_AADA70
0x995776: movlpd  xmm3, ds:qword_AADA80
0x99577E: xorpd   xmm5, xmm5
0x995782: movlpd  xmm2, qword ptr ds:xmmword_AADA70+8
0x99578A: movsd   xmm1, xmm0
0x99578E: psrlq   xmm0, 2Ch ; ','
0x995793: movd    edx, xmm0
0x995797: movsd   xmm7, xmm1
0x99579B: mov     ecx, 2000h
0x9957A0: pinsrw  xmm5, ecx, 2
0x9957A5: movsd   xmm0, xmm1
0x9957A9: mov     eax, 7FFFFh
0x9957AE: and     eax, edx
0x9957B0: sub     eax, 3FB00h
0x9957B5: cmp     eax, 3BBh
0x9957BA: jnb     start_13___LARGE_SMALL_INPUT_0
0x9957C0: mulsd   xmm1, xmm1
0x9957C4: and     edx, 0FFFFh
0x9957CA: subsd   xmm3, xmm1
0x9957CE: sqrtsd  xmm3, xmm3
0x9957D2: andpd   xmm2, xmm7
0x9957D6: and     edx, 0FFFFFFFCh
0x9957D9: sub     edx, 0FB00h
0x9957DF: movlpd  xmm1, ds:qword_AAD1B0[edx*2]
0x9957E8: orpd    xmm2, xmm5
0x9957EC: movapd  xmm4, ds:xmmword_AAC2B0[edx*4]
0x9957F5: movsd   xmm6, xmm7
0x9957F9: addsd   xmm7, xmm2
0x9957FD: subsd   xmm0, xmm2
0x995801: mulsd   xmm7, xmm0
0x995805: mulsd   xmm6, xmm1
0x995809: mulsd   xmm3, xmm2
0x99580D: movsd   xmm1, xmm6
0x995811: addsd   xmm6, xmm3
0x995815: divsd   xmm7, xmm6
0x995819: movlpd  xmm0, ds:qword_AADA28
0x995821: movlpd  xmm5, ds:qword_AADA18
0x995829: subsd   xmm1, xmm3
0x99582D: psrlq   xmm2, 3Fh ; '?'
0x995832: movsd   xmm3, xmm1
0x995836: psllq   xmm2, 3Fh ; '?'
0x99583B: mulsd   xmm1, xmm1
0x99583F: pshufd  xmm2, xmm2, 44h ; 'D'
0x995844: movlpd  xmm6, ds:qword_AADA20
0x99584C: mulsd   xmm3, xmm1
0x995850: mulsd   xmm0, xmm1
0x995854: sub     esp, 10h
0x995857: xorpd   xmm4, xmm2
0x99585B: mulsd   xmm5, xmm3
0x99585F: subpd   xmm4, ds:xmmword_AAD9B0
0x995867: mulsd   xmm3, xmm1
0x99586B: addsd   xmm0, xmm6
0x99586F: mulsd   xmm0, xmm3
0x995873: subsd   xmm5, xmm4
0x995877: pshufd  xmm4, xmm4, 0EEh ; 'î'
0x99587C: addsd   xmm0, xmm5
0x995880: subsd   xmm0, xmm7
0x995884: subsd   xmm0, xmm4
0x995888: movlpd  [esp+10h+var_C], xmm0
0x99588E: fld     [esp+10h+var_C]
0x995892: add     esp, 10h
0x995895: retn
