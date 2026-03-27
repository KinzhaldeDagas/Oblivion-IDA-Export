0x951C80: push    ebp
0x951C81: mov     ebp, esp
0x951C83: and     esp, 0FFFFFFF0h
0x951C86: sub     esp, 10h
0x951C89: mov     eax, [ebp+arg_8]
0x951C8C: fld     [ebp+arg_C]
0x951C8F: movaps  xmm0, xmmword ptr [eax]
0x951C92: fmul    [ebp+arg_C]
0x951C95: mov     edx, [ebp+arg_4]
0x951C98: movaps  xmmword ptr [ecx], xmm0
0x951C9B: movaps  xmm0, xmmword ptr [eax+10h]
0x951C9F: movaps  xmmword ptr [ecx+10h], xmm0
0x951CA3: movaps  xmm0, xmmword ptr [eax+20h]
0x951CA7: movaps  xmmword ptr [ecx+20h], xmm0
0x951CAB: movaps  xmm0, xmmword ptr [eax+30h]
0x951CAF: fstp    dword ptr [ecx+50h]
0x951CB2: mov     eax, [ebp+arg_0]
0x951CB5: mov     [ecx+54h], eax
0x951CB8: mov     eax, [ebp+arg_C]
0x951CBB: mov     [esp+10h+var_4], eax
0x951CBF: mov     eax, [ebp+arg_14]
0x951CC2: mov     [ecx+58h], edx
0x951CC5: mov     edx, [ebp+arg_10]
0x951CC8: movaps  xmmword ptr [ecx+30h], xmm0
0x951CCC: movss   xmm0, [esp+10h+var_4]
0x951CD2: mov     [ecx+60h], edx
0x951CD5: mov     edx, [ebp+arg_18]
0x951CD8: mov     [ecx+64h], eax
0x951CDB: mov     eax, [ebp+arg_1C]
0x951CDE: shufps  xmm0, xmm0, 0
0x951CE2: movaps  xmmword ptr [ecx+40h], xmm0
0x951CE6: mov     dword ptr [ecx+5Ch], 0
0x951CED: mov     [ecx+68h], edx
0x951CF0: mov     [ecx+6Ch], eax
0x951CF3: mov     esp, ebp
0x951CF5: pop     ebp
0x951CF6: retn    20h ; ' '
