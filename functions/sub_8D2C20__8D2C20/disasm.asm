0x8D2C20: push    ebp
0x8D2C21: mov     ebp, esp
0x8D2C23: and     esp, 0FFFFFFF0h
0x8D2C26: sub     esp, 3Ch
0x8D2C29: mov     eax, [ebp+arg_0]
0x8D2C2C: push    esi
0x8D2C2D: mov     esi, ecx
0x8D2C2F: push    eax
0x8D2C30: push    esi
0x8D2C31: lea     ecx, [esp+48h+var_30]
0x8D2C35: call    sub_8D2AB0
0x8D2C3A: movaps  xmm0, [esp+40h+var_30]
0x8D2C3F: movaps  xmmword ptr [esi], xmm0
0x8D2C42: movaps  xmm0, [esp+40h+var_20]
0x8D2C47: movaps  xmmword ptr [esi+10h], xmm0
0x8D2C4B: movaps  xmm0, [esp+40h+var_10]
0x8D2C50: movaps  xmmword ptr [esi+20h], xmm0
0x8D2C54: pop     esi
0x8D2C55: mov     esp, ebp
0x8D2C57: pop     ebp
0x8D2C58: retn    4
