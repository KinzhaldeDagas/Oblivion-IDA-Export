0x90FAC0: push    ebp
0x90FAC1: mov     ebp, esp
0x90FAC3: and     esp, 0FFFFFFF0h
0x90FAC6: sub     esp, 24h
0x90FAC9: mov     eax, [ebp+arg_0]
0x90FACC: movaps  xmm0, xmmword ptr [eax]
0x90FACF: push    ebx
0x90FAD0: mov     ebx, [ebp+arg_4]
0x90FAD3: push    esi
0x90FAD4: mov     esi, ecx
0x90FAD6: push    edi
0x90FAD7: mov     edi, [esi+1Ch]
0x90FADA: movaps  xmmword ptr [esi+30h], xmm0
0x90FADE: movaps  xmm0, xmmword ptr [ebx]
0x90FAE1: push    eax
0x90FAE2: mov     eax, [esi+18h]
0x90FAE5: movaps  xmmword ptr [esi+40h], xmm0
0x90FAE9: mov     ecx, [eax+50h]
0x90FAEC: add     ecx, 10h
0x90FAEF: push    ecx
0x90FAF0: lea     ecx, [esp+38h+var_10]
0x90FAF4: call    sub_88FCC0
0x90FAF9: mov     edx, [edi+50h]
0x90FAFC: push    ebx
0x90FAFD: add     edx, 10h
0x90FB00: push    edx
0x90FB01: lea     ecx, [esp+38h+var_20]
0x90FB05: call    sub_88FCC0
0x90FB0A: movaps  xmm1, [esp+30h+var_20]
0x90FB0F: movaps  xmm0, [esp+30h+var_10]
0x90FB14: subps   xmm0, xmm1
0x90FB17: mulps   xmm0, xmm0
0x90FB1A: movaps  xmm1, xmm0
0x90FB1D: shufps  xmm1, xmm0, 55h ; 'U'
0x90FB21: movaps  xmm2, xmm0
0x90FB24: addss   xmm1, xmm0
0x90FB28: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x90FB2C: movaps  xmm0, xmm2
0x90FB2F: addss   xmm0, xmm1
0x90FB33: movaps  [esp+30h+var_20], xmm0
0x90FB38: sqrtss  xmm0, xmm0
0x90FB3C: movss   dword ptr [esp+30h+var_20], xmm0
0x90FB42: movaps  xmm0, [esp+30h+var_20]
0x90FB47: lea     eax, [esp+30h+var_24]
0x90FB4B: movss   dword ptr [eax], xmm0
0x90FB4F: mov     ecx, [esp+30h+var_24]
0x90FB53: pop     edi
0x90FB54: mov     [esi+50h], ecx
0x90FB57: pop     esi
0x90FB58: pop     ebx
0x90FB59: mov     esp, ebp
0x90FB5B: pop     ebp
0x90FB5C: retn    8
