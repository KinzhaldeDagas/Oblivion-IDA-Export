0x8EAB30: push    ebp
0x8EAB31: mov     ebp, esp
0x8EAB33: and     esp, 0FFFFFFF0h
0x8EAB36: sub     esp, 10h
0x8EAB39: mov     eax, [ecx+0F8h]
0x8EAB3F: fld     dword ptr [ecx+0F0h]
0x8EAB45: fld     dword ptr [ecx+0F4h]
0x8EAB4B: mov     [esp+10h+var_4], eax
0x8EAB4F: mov     eax, [ebp+arg_0]
0x8EAB52: fxch    st(1)
0x8EAB54: mov     ecx, [esp+10h+var_4]
0x8EAB58: xorps   xmm0, xmm0
0x8EAB5B: movaps  xmmword ptr [eax], xmm0
0x8EAB5E: movaps  xmmword ptr [eax+10h], xmm0
0x8EAB62: movaps  xmmword ptr [eax+20h], xmm0
0x8EAB66: fstp    dword ptr [eax]
0x8EAB68: fstp    dword ptr [eax+14h]
0x8EAB6B: mov     [eax+28h], ecx
0x8EAB6E: mov     esp, ebp
0x8EAB70: pop     ebp
0x8EAB71: retn    4
