0x79A810: sub     esp, 20h
0x79A813: cmp     [esp+20h+arg_C], 0
0x79A818: push    esi
0x79A819: mov     esi, [esp+24h+arg_8]
0x79A81D: push    edi
0x79A81E: mov     ecx, 8
0x79A823: lea     edi, [esp+28h+var_20]
0x79A827: rep movsd
0x79A829: jz      short loc_79A841
0x79A82B: mov     eax, 1
0x79A830: fld     [esp+eax*4+28h+var_20]
0x79A834: add     eax, 2
0x79A837: cmp     eax, 8
0x79A83A: fchs
0x79A83C: fstp    [esp+eax*4+28h+var_28]
0x79A83F: jl      short loc_79A830
0x79A841: mov     esi, [esp+28h+arg_0]
0x79A845: mov     ecx, esi
0x79A847: mov     word ptr [esi+22h], 0
0x79A84D: xor     edi, edi
0x79A84F: call    sub_7877B0
0x79A854: test    ax, ax
0x79A857: jbe     short loc_79A884
0x79A859: push    ebx
0x79A85A: mov     ebx, [esp+2Ch+arg_4]
0x79A85E: mov     edi, edi
0x79A860: lea     eax, [esp+2Ch+var_20]
0x79A864: push    eax; int
0x79A865: push    ebx; float
0x79A866: mov     ecx, esi
0x79A868: call    sub_796630
0x79A86D: add     word ptr [esi+22h], 1
0x79A872: mov     ecx, esi
0x79A874: add     edi, 1
0x79A877: call    sub_7877B0
0x79A87C: movzx   ecx, ax
0x79A87F: cmp     edi, ecx
0x79A881: jl      short loc_79A860
0x79A883: pop     ebx
0x79A884: pop     edi
0x79A885: pop     esi
0x79A886: add     esp, 20h
0x79A889: retn    10h
