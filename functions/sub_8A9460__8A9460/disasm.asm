0x8A9460: push    ebp
0x8A9461: mov     ebp, esp
0x8A9463: and     esp, 0FFFFFFF0h
0x8A9466: sub     esp, 10h
0x8A9469: fld     [ebp+arg_0]
0x8A946C: fmul    dword ptr ds:0A45E4Ch
0x8A9472: fstp    [esp+10h+var_4]
0x8A9476: fld     [ebp+arg_0]
0x8A9479: movss   xmm0, [esp+10h+var_4]
0x8A947F: fmul    dword ptr ds:0A3D65Ch
0x8A9485: shufps  xmm0, xmm0, 0
0x8A9489: movaps  xmmword ptr [ecx+30h], xmm0
0x8A948D: fstp    [esp+10h+var_4]
0x8A9491: movss   xmm0, [esp+10h+var_4]
0x8A9497: shufps  xmm0, xmm0, 0
0x8A949B: movaps  xmmword ptr [ecx+40h], xmm0
0x8A949F: mov     esp, ebp
0x8A94A1: pop     ebp
0x8A94A2: retn    4
