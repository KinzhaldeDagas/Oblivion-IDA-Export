0x8E9500: push    ebp
0x8E9501: mov     ebp, esp
0x8E9503: and     esp, 0FFFFFFF0h
0x8E9506: sub     esp, 20h
0x8E9509: mov     eax, [ebp+arg_0]
0x8E950C: mov     edx, [ebp+arg_4]
0x8E950F: movaps  xmm1, xmmword ptr [edx]
0x8E9512: mov     [esp+20h+var_14], eax
0x8E9516: movss   xmm0, [esp+20h+var_14]
0x8E951C: mov     eax, [ecx]
0x8E951E: movaps  xmm2, xmm0
0x8E9521: lea     edx, [esp+20h+var_10]
0x8E9525: shufps  xmm2, xmm0, 0
0x8E9529: mulps   xmm2, xmm1
0x8E952C: push    edx
0x8E952D: movaps  [esp+24h+var_10], xmm2
0x8E9532: call    dword ptr [eax+64h]
0x8E9535: mov     esp, ebp
0x8E9537: pop     ebp
0x8E9538: retn    8
