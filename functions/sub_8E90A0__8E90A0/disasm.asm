0x8E90A0: push    ebp
0x8E90A1: mov     ebp, esp
0x8E90A3: and     esp, 0FFFFFFF0h
0x8E90A6: sub     esp, 10h
0x8E90A9: mov     eax, ecx
0x8E90AB: mov     word ptr [eax+6], 1
0x8E90B1: mov     dword ptr [eax], offset off_A9ACF4
0x8E90B7: mov     dword ptr [eax+50h], 0BF800000h
0x8E90BE: mov     ecx, ds:0B2FD20h
0x8E90C4: mov     [eax+54h], ecx
0x8E90C7: mov     edx, ds:0B2FD24h
0x8E90CD: mov     [eax+58h], edx
0x8E90D0: mov     ecx, ds:0B2FD28h
0x8E90D6: mov     [eax+5Ch], ecx
0x8E90D9: mov     edx, ds:0B2FD2Ch
0x8E90DF: mov     [esp+10h+var_4], 7F7FFFFFh
0x8E90E7: movss   xmm0, [esp+10h+var_4]
0x8E90ED: shufps  xmm0, xmm0, 0
0x8E90F1: movaps  xmmword ptr [eax+10h], xmm0
0x8E90F5: movaps  xmmword ptr [eax+30h], xmm0
0x8E90F9: mov     [eax+60h], edx
0x8E90FC: xorps   xmm0, xmm0
0x8E90FF: movaps  xmmword ptr [eax+20h], xmm0
0x8E9103: mov     ecx, 3F800000h
0x8E9108: mov     [eax+2Ch], ecx
0x8E910B: movaps  xmmword ptr [eax+40h], xmm0
0x8E910F: mov     [eax+4Ch], ecx
0x8E9112: mov     esp, ebp
0x8E9114: pop     ebp
0x8E9115: retn
