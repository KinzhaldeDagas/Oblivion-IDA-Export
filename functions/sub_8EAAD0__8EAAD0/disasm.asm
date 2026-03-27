0x8EAAD0: push    ebp
0x8EAAD1: mov     ebp, esp
0x8EAAD3: and     esp, 0FFFFFFF0h
0x8EAAD6: sub     esp, 10h
0x8EAAD9: fld     dword ptr ds:0A2F948h
0x8EAADF: mov     eax, [ebp+arg_0]
0x8EAAE2: fdiv    dword ptr [ecx+0F0h]
0x8EAAE8: xorps   xmm0, xmm0
0x8EAAEB: fld     dword ptr ds:0A2F948h
0x8EAAF1: fdiv    dword ptr [ecx+0F4h]
0x8EAAF7: fld     dword ptr ds:0A2F948h
0x8EAAFD: fdiv    dword ptr [ecx+0F8h]
0x8EAB03: movaps  xmmword ptr [eax], xmm0
0x8EAB06: movaps  xmmword ptr [eax+10h], xmm0
0x8EAB0A: movaps  xmmword ptr [eax+20h], xmm0
0x8EAB0E: fstp    [esp+10h+var_4]
0x8EAB12: fxch    st(1)
0x8EAB14: fstp    dword ptr [eax]
0x8EAB16: mov     ecx, [esp+10h+var_4]
0x8EAB1A: fstp    dword ptr [eax+14h]
0x8EAB1D: mov     [eax+28h], ecx
0x8EAB20: mov     esp, ebp
0x8EAB22: pop     ebp
0x8EAB23: retn    4
