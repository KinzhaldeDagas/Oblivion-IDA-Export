0x948810: push    ebp
0x948811: mov     ebp, esp
0x948813: and     esp, 0FFFFFFF0h
0x948816: sub     esp, 5Ch
0x948819: mov     eax, [ebp+arg_0]
0x94881C: movaps  xmm0, xmmword ptr [eax+30h]
0x948820: movaps  [esp+5Ch+var_50], xmm0
0x948825: movaps  xmm0, xmmword ptr [eax]
0x948828: movaps  [esp+5Ch+var_30], xmm0
0x94882D: movaps  xmm0, xmmword ptr [eax+10h]
0x948831: movaps  [esp+5Ch+var_20], xmm0
0x948836: movaps  xmm0, xmmword ptr [eax+20h]
0x94883A: push    esi
0x94883B: lea     eax, [esp+60h+var_30]
0x94883F: mov     esi, ecx
0x948841: push    eax
0x948842: lea     ecx, [esp+64h+var_40]
0x948846: movaps  [esp+64h+var_10], xmm0
0x94884B: call    sub_8B1B40
0x948850: push    3
0x948852: lea     ecx, [esp+64h+var_50]
0x948856: push    ecx
0x948857: mov     ecx, esi
0x948859: call    sub_918480
0x94885E: push    4
0x948860: lea     edx, [esp+64h+var_40]
0x948864: push    edx
0x948865: mov     ecx, esi
0x948867: call    sub_918480
0x94886C: pop     esi
0x94886D: mov     esp, ebp
0x94886F: pop     ebp
0x948870: retn    4
