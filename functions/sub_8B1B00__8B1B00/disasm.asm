0x8B1B00: push    ebp
0x8B1B01: mov     ebp, esp
0x8B1B03: and     esp, 0FFFFFFF0h
0x8B1B06: sub     esp, 10h
0x8B1B09: fld     [ebp+arg_4]
0x8B1B0C: mov     eax, [ebp+arg_0]
0x8B1B0F: fmul    dword ptr ds:0A3D65Ch
0x8B1B15: movaps  xmm1, xmmword ptr [eax]
0x8B1B18: fld     st
0x8B1B1A: fsin
0x8B1B1C: fstp    [esp+10h+var_4]
0x8B1B20: movss   xmm0, [esp+10h+var_4]
0x8B1B26: fcos
0x8B1B28: movaps  xmm2, xmm0
0x8B1B2B: shufps  xmm2, xmm0, 0
0x8B1B2F: mulps   xmm2, xmm1
0x8B1B32: movaps  xmmword ptr [ecx], xmm2
0x8B1B35: fstp    dword ptr [ecx+0Ch]
0x8B1B38: mov     esp, ebp
0x8B1B3A: pop     ebp
0x8B1B3B: retn    8
