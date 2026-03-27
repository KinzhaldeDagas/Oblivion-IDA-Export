0x8DD150: push    ebp
0x8DD151: mov     ebp, esp
0x8DD153: and     esp, 0FFFFFFF0h
0x8DD156: sub     esp, 18h
0x8DD159: fld     [ebp+arg_4]
0x8DD15C: push    esi
0x8DD15D: push    edi
0x8DD15E: mov     edi, [ebp+arg_0]
0x8DD161: fsub    dword ptr [edi+0Ch]
0x8DD164: movaps  xmm3, xmmword ptr [edi+20h]
0x8DD168: movaps  xmm4, xmmword ptr [edi+30h]
0x8DD16C: movaps  xmm1, xmm3
0x8DD16F: addps   xmm1, xmm4
0x8DD172: movaps  xmm2, xmm1
0x8DD175: mulps   xmm2, xmm1
0x8DD178: movaps  xmm0, xmm2
0x8DD17B: shufps  xmm0, xmm2, 4Eh ; 'N'
0x8DD17F: addps   xmm0, xmm2
0x8DD182: movaps  xmm2, xmm0
0x8DD185: shufps  xmm2, xmm0, 0B1h ; '±'
0x8DD189: addps   xmm0, xmm2
0x8DD18C: fmul    dword ptr [edi+1Ch]
0x8DD18F: lea     eax, [esp+20h+var_14]
0x8DD193: movss   dword ptr [eax], xmm0
0x8DD197: fstp    [esp+20h+var_18]
0x8DD19B: fld     [esp+20h+var_14]
0x8DD19F: fmul    dword ptr ds:0A9A480h
0x8DD1A5: fsubr   dword ptr ds:0A41328h
0x8DD1AB: fld     [esp+20h+var_14]
0x8DD1AF: fmul    st, st(1)
0x8DD1B1: fmul    st, st(1)
0x8DD1B3: fmul    dword ptr ds:0A3D65Ch
0x8DD1B9: fsubr   dword ptr ds:0A35AA4h
0x8DD1BF: fmul    st, st(1)
0x8DD1C1: fstp    [esp+20h+var_14]
0x8DD1C5: movss   xmm0, [esp+20h+var_14]
0x8DD1CB: movaps  xmm2, xmm0
0x8DD1CE: fstp    st
0x8DD1D0: shufps  xmm2, xmm0, 0
0x8DD1D4: fld     [esp+20h+var_18]
0x8DD1D8: movaps  xmm0, xmm2
0x8DD1DB: fcomp   dword ptr ds:0A3D65Ch
0x8DD1E1: mulps   xmm0, xmm1
0x8DD1E4: fld     [esp+20h+var_18]
0x8DD1E8: fadd    st, st
0x8DD1EA: fnstsw  ax
0x8DD1EC: test    ah, 5
0x8DD1EF: jp      short loc_8DD217
0x8DD1F1: fstp    [esp+20h+var_14]
0x8DD1F5: movss   xmm1, [esp+20h+var_14]
0x8DD1FB: shufps  xmm1, xmm1, 0
0x8DD1FF: movaps  xmm2, xmm1
0x8DD202: mulps   xmm2, xmm0
0x8DD205: movaps  xmm0, xmmword ptr ds:0A6DFE0h
0x8DD20C: subps   xmm0, xmm1
0x8DD20F: movaps  xmm1, xmm0
0x8DD212: mulps   xmm1, xmm3
0x8DD215: jmp     short loc_8DD241
0x8DD217: fsub    dword ptr ds:0A2F948h
0x8DD21D: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8DD224: fstp    [esp+20h+var_14]
0x8DD228: movss   xmm1, [esp+20h+var_14]
0x8DD22E: shufps  xmm1, xmm1, 0
0x8DD232: movaps  xmm2, xmm1
0x8DD235: subps   xmm3, xmm1
0x8DD238: movaps  xmm1, xmm3
0x8DD23B: mulps   xmm2, xmm4
0x8DD23E: mulps   xmm1, xmm0
0x8DD241: mov     esi, [ebp+arg_8]
0x8DD244: addps   xmm1, xmm2
0x8DD247: movaps  xmm2, xmm1
0x8DD24A: mulps   xmm2, xmm1
0x8DD24D: movaps  xmm0, xmm2
0x8DD250: shufps  xmm0, xmm2, 4Eh ; 'N'
0x8DD254: addps   xmm0, xmm2
0x8DD257: movaps  xmm2, xmm0
0x8DD25A: shufps  xmm2, xmm0, 0B1h ; '±'
0x8DD25E: addps   xmm0, xmm2
0x8DD261: movaps  [esp+20h+var_10], xmm0
0x8DD266: rsqrtss xmm2, xmm0
0x8DD26A: movss   dword ptr [esp+20h+var_10], xmm2
0x8DD270: movaps  xmm2, [esp+20h+var_10]
0x8DD275: mulss   xmm0, xmm2
0x8DD279: mulss   xmm0, xmm2
0x8DD27D: mov     [esp+20h+var_14], 40400000h
0x8DD285: movss   xmm3, [esp+20h+var_14]
0x8DD28B: subss   xmm3, xmm0
0x8DD28F: mov     [esp+20h+var_14], 3F000000h
0x8DD297: movss   xmm0, [esp+20h+var_14]
0x8DD29D: mulss   xmm0, xmm2
0x8DD2A1: mulss   xmm0, xmm3
0x8DD2A5: lea     ecx, [esp+20h+var_10]
0x8DD2A9: movaps  xmm2, xmm0
0x8DD2AC: shufps  xmm2, xmm0, 0
0x8DD2B0: push    ecx
0x8DD2B1: mulps   xmm2, xmm1
0x8DD2B4: mov     ecx, esi
0x8DD2B6: movaps  [esp+24h+var_10], xmm2
0x8DD2BB: call    sub_8B1DD0
0x8DD2C0: mov     edx, [esp+20h+var_18]
0x8DD2C4: movaps  xmm1, xmmword ptr [edi+10h]
0x8DD2C8: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8DD2CF: mov     [esp+20h+var_14], edx
0x8DD2D3: movss   xmm0, [esp+20h+var_14]
0x8DD2D9: shufps  xmm0, xmm0, 0
0x8DD2DD: subps   xmm3, xmm0
0x8DD2E0: movaps  xmm2, xmm0
0x8DD2E3: mulps   xmm2, xmm1
0x8DD2E6: movaps  xmm1, xmmword ptr [edi]
0x8DD2E9: mulps   xmm3, xmm1
0x8DD2EC: addps   xmm3, xmm2
0x8DD2EF: movaps  xmmword ptr [esi+30h], xmm3
0x8DD2F3: movaps  xmm0, xmmword ptr [edi+40h]
0x8DD2F7: movaps  xmm2, xmmword ptr [esi+20h]
0x8DD2FB: movaps  xmm3, xmmword ptr [esi+10h]
0x8DD2FF: movaps  xmm1, xmm0
0x8DD302: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8DD306: mulps   xmm2, xmm1
0x8DD309: movaps  xmm1, xmm0
0x8DD30C: shufps  xmm1, xmm0, 55h ; 'U'
0x8DD310: mulps   xmm3, xmm1
0x8DD313: movaps  xmm1, xmm0
0x8DD316: shufps  xmm1, xmm0, 0
0x8DD31A: movaps  xmm0, xmmword ptr [esi]
0x8DD31D: mulps   xmm0, xmm1
0x8DD320: movaps  xmm1, xmmword ptr [esi+30h]
0x8DD324: addps   xmm0, xmm3
0x8DD327: addps   xmm0, xmm2
0x8DD32A: subps   xmm1, xmm0
0x8DD32D: pop     edi
0x8DD32E: movaps  xmmword ptr [esi+30h], xmm1
0x8DD332: pop     esi
0x8DD333: mov     esp, ebp
0x8DD335: pop     ebp
0x8DD336: retn
