0x8CD9D0: mov     edx, [esp+arg_0]
0x8CD9D4: movaps  xmm0, xmmword ptr [edx]
0x8CD9D7: lea     eax, [ecx+70h]
0x8CD9DA: movaps  xmmword ptr [eax], xmm0
0x8CD9DD: movaps  xmm0, xmmword ptr [edx+10h]
0x8CD9E1: movaps  xmmword ptr [eax+10h], xmm0
0x8CD9E5: mov     [esp+arg_0], eax
0x8CD9E9: jmp     sub_8DE950
