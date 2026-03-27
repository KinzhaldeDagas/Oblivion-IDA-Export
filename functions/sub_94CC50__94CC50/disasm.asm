0x94CC50: push    ebp
0x94CC51: mov     ebp, esp
0x94CC53: and     esp, 0FFFFFFF0h
0x94CC56: sub     esp, 40h
0x94CC59: mov     eax, [ebp+arg_4]
0x94CC5C: xor     edx, edx
0x94CC5E: mov     [ecx+0Ch], edx
0x94CC61: push    eax
0x94CC62: mov     [eax+4], edx
0x94CC65: mov     edx, [ebp+arg_0]
0x94CC68: xorps   xmm0, xmm0
0x94CC6B: lea     eax, [esp+44h+var_40]
0x94CC6F: push    eax
0x94CC70: movaps  [esp+48h+var_40], xmm0
0x94CC75: movaps  [esp+48h+var_30], xmm0
0x94CC7A: movaps  [esp+48h+var_20], xmm0
0x94CC7F: push    edx
0x94CC80: mov     dword ptr [esp+4Ch+var_40], 3F800000h
0x94CC88: mov     dword ptr [esp+4Ch+var_30+4], 3F800000h
0x94CC90: mov     dword ptr [esp+4Ch+var_20+8], 3F800000h
0x94CC98: movaps  [esp+4Ch+var_10], xmm0
0x94CC9D: call    sub_94BE00
0x94CCA2: mov     esp, ebp
0x94CCA4: pop     ebp
0x94CCA5: retn    8
