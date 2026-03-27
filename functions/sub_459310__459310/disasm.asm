0x459310: mov     eax, [esp+arg_0]
0x459314: push    ebx
0x459315: push    ebp
0x459316: mov     ebp, [eax+0Ch]
0x459319: push    esi
0x45931A: push    edi
0x45931B: movzx   edi, [esp+10h+arg_4]
0x459320: mov     esi, ecx
0x459322: mov     ecx, [esi+60h]
0x459325: push    1
0x459327: lea     edx, [edi+2]
0x45932A: mov     [esp+14h+arg_0], ecx
0x45932E: push    edx
0x45932F: mov     ecx, offset FormHeap
0x459334: call    j_MemoryHeap_Alloc
0x459339: mov     ebx, eax
0x45933B: mov     ax, [esp+10h+arg_4]
0x459340: mov     [ebx], ax
0x459343: mov     ecx, [esi+14h]
0x459346: push    edi; Size
0x459347: push    ecx; Src
0x459348: lea     edx, [ebx+2]
0x45934B: push    edx; Dst
0x45934C: call    _memcpy
0x459351: mov     ecx, [esp+1Ch+arg_0]; this
0x459355: add     [esi+14h], edi
0x459358: add     esp, 0Ch
0x45935B: push    ebx; a3
0x45935C: push    ebp; a2
0x45935D: call    NiTMap_SetAt
0x459362: pop     edi
0x459363: pop     esi
0x459364: pop     ebp
0x459365: pop     ebx
0x459366: retn    8
