0x8F05D0: push    ebp
0x8F05D1: mov     ebp, esp
0x8F05D3: and     esp, 0FFFFFFF0h
0x8F05D6: sub     esp, 30h
0x8F05D9: mov     eax, [ebp+arg_0]
0x8F05DC: mov     edx, [eax+0Ch]
0x8F05DF: fld     dword ptr [eax+0Ch]
0x8F05E2: movaps  xmm2, xmmword ptr [eax]
0x8F05E5: fchs
0x8F05E7: mov     eax, [ecx]
0x8F05E9: mov     [esp+30h+var_24], edx
0x8F05ED: movss   xmm0, [esp+30h+var_24]
0x8F05F3: fstp    [esp+30h+var_24]
0x8F05F7: mov     edx, [ebp+arg_4]
0x8F05FA: movss   xmm1, [esp+30h+var_24]
0x8F0600: push    edx
0x8F0601: lea     edx, [esp+34h+var_20]
0x8F0605: shufps  xmm0, xmm0, 0
0x8F0609: shufps  xmm1, xmm1, 0
0x8F060D: addps   xmm0, xmm2
0x8F0610: addps   xmm1, xmm2
0x8F0613: push    edx
0x8F0614: movaps  [esp+38h+var_10], xmm0
0x8F0619: movaps  [esp+38h+var_20], xmm1
0x8F061E: call    dword ptr [eax+24h]
0x8F0621: mov     esp, ebp
0x8F0623: pop     ebp
0x8F0624: retn    8
