0x92A730: push    ebp
0x92A731: mov     ebp, esp
0x92A733: and     esp, 0FFFFFFF0h
0x92A736: sub     esp, 8
0x92A739: push    esi
0x92A73A: push    edi
0x92A73B: mov     edi, [ebp+arg_0]
0x92A73E: mov     esi, ecx
0x92A740: mov     ecx, [esi+10h]
0x92A743: mov     eax, [ecx]
0x92A745: push    edi
0x92A746: call    dword ptr [eax+10h]
0x92A749: movaps  xmm1, xmmword ptr [esi+20h]
0x92A74D: movaps  xmm0, xmmword ptr [edi]
0x92A750: mulps   xmm0, xmm1
0x92A753: movaps  xmm1, xmm0
0x92A756: shufps  xmm1, xmm0, 55h ; 'U'
0x92A75A: movaps  xmm2, xmm0
0x92A75D: addss   xmm1, xmm0
0x92A761: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92A765: lea     ecx, [esp+10h+var_4]
0x92A769: addss   xmm2, xmm1
0x92A76D: pop     edi
0x92A76E: movss   dword ptr [ecx], xmm2
0x92A772: fadd    [esp+0Ch+var_4]
0x92A776: pop     esi
0x92A777: mov     esp, ebp
0x92A779: pop     ebp
0x92A77A: retn    4
