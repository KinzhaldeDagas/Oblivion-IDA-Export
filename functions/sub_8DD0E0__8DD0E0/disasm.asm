0x8DD0E0: push    ebp
0x8DD0E1: mov     ebp, esp
0x8DD0E3: and     esp, 0FFFFFFF0h
0x8DD0E6: sub     esp, 2Ch
0x8DD0E9: mov     eax, [ebp+arg_0]
0x8DD0EC: movaps  xmm0, xmmword ptr [eax]
0x8DD0EF: push    esi
0x8DD0F0: mov     esi, [ebp+arg_4]
0x8DD0F3: movaps  xmm1, xmmword ptr [esi+80h]
0x8DD0FA: lea     ecx, [esp+30h+var_20]
0x8DD0FE: push    ecx
0x8DD0FF: movaps  xmm2, xmm0
0x8DD102: subps   xmm2, xmm1
0x8DD105: push    esi
0x8DD106: lea     ecx, [esp+38h+var_10]
0x8DD10A: movaps  [esp+38h+var_20], xmm2
0x8DD10F: movaps  xmmword ptr [esi+80h], xmm0
0x8DD116: call    sub_88FE00
0x8DD11B: movaps  xmm1, xmmword ptr ds:0A9A470h
0x8DD122: movaps  xmm0, [esp+30h+var_10]
0x8DD127: andps   xmm0, xmm1
0x8DD12A: movaps  xmm1, xmmword ptr [esi+40h]
0x8DD12E: addps   xmm1, xmm0
0x8DD131: movaps  xmmword ptr [esi+40h], xmm1
0x8DD135: movaps  xmm1, xmmword ptr [esi+50h]
0x8DD139: addps   xmm1, xmm0
0x8DD13C: movaps  xmmword ptr [esi+50h], xmm1
0x8DD140: pop     esi
0x8DD141: mov     esp, ebp
0x8DD143: pop     ebp
0x8DD144: retn
