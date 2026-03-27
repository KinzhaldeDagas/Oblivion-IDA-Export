0x8F0430: push    ebp
0x8F0431: mov     ebp, esp
0x8F0433: and     esp, 0FFFFFFF0h
0x8F0436: sub     esp, 70h
0x8F0439: mov     eax, [ecx]
0x8F043B: lea     edx, [esp+70h+var_60]
0x8F043F: push    edx
0x8F0440: xorps   xmm0, xmm0
0x8F0443: push    0
0x8F0445: lea     edx, [esp+78h+var_40]
0x8F0449: movaps  [esp+78h+var_40], xmm0
0x8F044E: movaps  [esp+78h+var_30], xmm0
0x8F0453: movaps  [esp+78h+var_20], xmm0
0x8F0458: push    edx
0x8F0459: mov     dword ptr [esp+7Ch+var_40], 3F800000h
0x8F0461: mov     dword ptr [esp+7Ch+var_30+4], 3F800000h
0x8F0469: mov     dword ptr [esp+7Ch+var_20+8], 3F800000h
0x8F0471: movaps  [esp+7Ch+var_10], xmm0
0x8F0476: call    dword ptr [eax+0Ch]
0x8F0479: movaps  xmm3, [esp+70h+var_60]
0x8F047E: movaps  xmm1, [esp+70h+anonymous_0]
0x8F0483: mov     eax, [ebp+arg_0]
0x8F0486: movaps  xmm2, xmmword ptr [eax]
0x8F0489: mov     [esp+70h+var_64], 3F000000h
0x8F0491: movss   xmm0, [esp+70h+var_64]
0x8F0497: movaps  xmm4, xmm1
0x8F049A: subps   xmm1, xmm3
0x8F049D: addps   xmm4, xmm3
0x8F04A0: movaps  xmm5, xmm0
0x8F04A3: shufps  xmm5, xmm0, 0
0x8F04A7: movaps  xmm3, xmm0
0x8F04AA: shufps  xmm3, xmm0, 0
0x8F04AE: movaps  xmm6, xmm2
0x8F04B1: mulps   xmm5, xmm4
0x8F04B4: movaps  xmm4, xmmword ptr ds:0A965C0h
0x8F04BB: mulps   xmm3, xmm1
0x8F04BE: andps   xmm6, xmm4
0x8F04C1: xorps   xmm3, xmm6
0x8F04C4: movaps  xmm0, xmm3
0x8F04C7: addps   xmm0, xmm5
0x8F04CA: mulps   xmm0, xmm2
0x8F04CD: movaps  xmm1, xmm0
0x8F04D0: shufps  xmm1, xmm0, 55h ; 'U'
0x8F04D4: movaps  xmm2, xmm0
0x8F04D7: addss   xmm1, xmm0
0x8F04DB: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F04DF: lea     ecx, [esp+70h+var_64]
0x8F04E3: addss   xmm2, xmm1
0x8F04E7: movss   dword ptr [ecx], xmm2
0x8F04EB: fld     [esp+70h+var_64]
0x8F04EF: mov     esp, ebp
0x8F04F1: pop     ebp
0x8F04F2: retn    4
