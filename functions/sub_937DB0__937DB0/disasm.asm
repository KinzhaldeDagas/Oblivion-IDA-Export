0x937DB0: push    ebp
0x937DB1: mov     ebp, esp
0x937DB3: and     esp, 0FFFFFFF0h
0x937DB6: sub     esp, 20h
0x937DB9: mov     eax, [ebp+arg_4]
0x937DBC: mov     edx, [ebp+arg_0]
0x937DBF: mov     [edx+38h], eax
0x937DC2: fld     dword ptr [ecx+eax*4+20h]
0x937DC6: fstp    dword ptr [esp+20h+var_10]
0x937DCA: mov     dword ptr [esp+20h+var_10+0Ch], 0
0x937DD2: fld     dword ptr [ecx+eax*4+30h]
0x937DD6: fstp    dword ptr [esp+20h+var_10+4]
0x937DDA: fld     dword ptr [ecx+eax*4+40h]
0x937DDE: fstp    dword ptr [esp+20h+var_10+8]
0x937DE2: fld     dword ptr [ecx+eax*4+0C0h]
0x937DE9: fcomp   dword ptr ds:0A2FAA8h
0x937DEF: fnstsw  ax
0x937DF1: test    ah, 5
0x937DF4: jp      short loc_937E07
0x937DF6: mov     dword ptr [edx+30h], 0BF800000h
0x937DFD: movaps  xmm0, xmmword ptr [ecx+70h]
0x937E01: movaps  xmmword ptr [edx+10h], xmm0
0x937E05: jmp     short loc_937E20
0x937E07: mov     dword ptr [edx+30h], 3F800000h
0x937E0E: movaps  xmm0, xmmword ptr ds:0A965C0h
0x937E15: movaps  xmm1, xmmword ptr [ecx+70h]
0x937E19: xorps   xmm1, xmm0
0x937E1C: movaps  xmmword ptr [edx+10h], xmm1
0x937E20: mov     eax, [edx+30h]
0x937E23: mov     [esp+20h+var_14], 0
0x937E2B: movss   xmm0, [esp+20h+var_14]
0x937E31: movaps  xmm1, xmm0
0x937E34: shufps  xmm1, xmm0, 0
0x937E38: movaps  xmm0, xmm1
0x937E3B: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x937E42: cmpltps xmm0, xmm1
0x937E46: mov     [esp+20h+var_14], 3727C5ACh
0x937E4E: movss   xmm2, [esp+20h+var_14]
0x937E54: movaps  xmm4, xmm0
0x937E57: mov     [esp+20h+var_14], eax
0x937E5B: movss   xmm3, [esp+20h+var_14]
0x937E61: mov     [esp+20h+var_14], 0B727C5ACh
0x937E69: movss   xmm1, [esp+20h+var_14]
0x937E6F: shufps  xmm1, xmm1, 0
0x937E73: andnps  xmm4, xmm1
0x937E76: movaps  xmm1, xmm2
0x937E79: shufps  xmm1, xmm2, 0
0x937E7D: andps   xmm0, xmm1
0x937E80: orps    xmm0, xmm4
0x937E83: movaps  xmm1, xmm3
0x937E86: shufps  xmm1, xmm3, 0
0x937E8A: mulps   xmm1, xmm0
0x937E8D: movaps  xmm0, [esp+20h+var_10]
0x937E92: addps   xmm0, xmm1
0x937E95: movaps  xmm1, xmmword ptr ds:0A965C0h
0x937E9C: andps   xmm0, xmm1
0x937E9F: movaps  xmm1, xmmword ptr [edx+10h]
0x937EA3: xorps   xmm1, xmm0
0x937EA6: movaps  xmmword ptr [edx+10h], xmm1
0x937EAA: movaps  xmm0, xmmword ptr [edx+10h]
0x937EAE: movaps  xmm1, xmmword ptr [ecx+50h]
0x937EB2: movaps  xmm3, xmmword ptr [ecx+40h]
0x937EB6: movaps  xmm2, xmm0
0x937EB9: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x937EBD: mulps   xmm3, xmm2
0x937EC0: movaps  xmm2, xmmword ptr [ecx+30h]
0x937EC4: addps   xmm3, xmm1
0x937EC7: movaps  xmm1, xmm0
0x937ECA: shufps  xmm1, xmm0, 55h ; 'U'
0x937ECE: mulps   xmm2, xmm1
0x937ED1: movaps  xmm1, xmm0
0x937ED4: shufps  xmm1, xmm0, 0
0x937ED8: movaps  xmm0, xmmword ptr [ecx+20h]
0x937EDC: mulps   xmm0, xmm1
0x937EDF: addps   xmm0, xmm2
0x937EE2: addps   xmm0, xmm3
0x937EE5: movaps  xmmword ptr [edx], xmm0
0x937EE8: mov     esp, ebp
0x937EEA: pop     ebp
0x937EEB: retn    8
