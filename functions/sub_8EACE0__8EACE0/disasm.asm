0x8EACE0: push    ebp
0x8EACE1: mov     ebp, esp
0x8EACE3: and     esp, 0FFFFFFF0h
0x8EACE6: sub     esp, 20h
0x8EACE9: mov     edx, [ebp+arg_4]
0x8EACEC: movaps  xmm1, xmmword ptr [edx]
0x8EACEF: mov     eax, [ebp+arg_0]
0x8EACF2: mov     edx, [ebp+arg_8]
0x8EACF5: mov     [esp+20h+var_14], eax
0x8EACF9: movss   xmm0, [esp+20h+var_14]
0x8EACFF: mov     eax, [ecx]
0x8EAD01: push    edx
0x8EAD02: movaps  xmm2, xmm0
0x8EAD05: lea     edx, [esp+24h+var_10]
0x8EAD09: shufps  xmm2, xmm0, 0
0x8EAD0D: mulps   xmm2, xmm1
0x8EAD10: push    edx
0x8EAD11: movaps  [esp+28h+var_10], xmm2
0x8EAD16: call    dword ptr [eax+60h]
0x8EAD19: mov     esp, ebp
0x8EAD1B: pop     ebp
0x8EAD1C: retn    0Ch
