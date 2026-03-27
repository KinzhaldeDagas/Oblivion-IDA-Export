0x8ED4A0: push    ebp
0x8ED4A1: mov     ebp, esp
0x8ED4A3: and     esp, 0FFFFFFF0h
0x8ED4A6: sub     esp, 10h
0x8ED4A9: fld     [ebp+arg_4]
0x8ED4AC: mov     eax, [ebp+arg_0]
0x8ED4AF: fadd    dword ptr [ecx+0Ch]
0x8ED4B2: movaps  xmm1, xmmword ptr [eax+30h]
0x8ED4B6: mov     ecx, [ebp+arg_8]
0x8ED4B9: fstp    [esp+10h+var_4]
0x8ED4BD: movss   xmm0, [esp+10h+var_4]
0x8ED4C3: shufps  xmm0, xmm0, 0
0x8ED4C7: subps   xmm1, xmm0
0x8ED4CA: movaps  xmmword ptr [ecx], xmm1
0x8ED4CD: movaps  xmm1, xmmword ptr [eax+30h]
0x8ED4D1: addps   xmm1, xmm0
0x8ED4D4: movaps  xmmword ptr [ecx+10h], xmm1
0x8ED4D8: mov     esp, ebp
0x8ED4DA: pop     ebp
0x8ED4DB: retn    0Ch
