0x6FB600: sub     esp, 10h
0x6FB603: push    ebx
0x6FB604: push    ebp
0x6FB605: push    esi
0x6FB606: mov     esi, [esp+1Ch+arg_0]
0x6FB60A: push    edi
0x6FB60B: mov     ebp, ecx
0x6FB60D: push    esi
0x6FB60E: mov     [esp+24h+var_C], ebp
0x6FB612: call    sub_721730
0x6FB617: mov     eax, ds:0B3F4B4h
0x6FB61C: push    eax; ArgList
0x6FB61D: call    TESOutput_PrintString
0x6FB622: movzx   edi, word ptr [esi+0Ah]
0x6FB626: movzx   ecx, word ptr [esi+8]
0x6FB62A: add     esp, 4
0x6FB62D: cmp     edi, ecx
0x6FB62F: mov     [esp+20h+arg_0], eax
0x6FB633: jb      short loc_6FB643
0x6FB635: movzx   edx, word ptr [esi+0Eh]
0x6FB639: add     edx, edi
0x6FB63B: push    edx
0x6FB63C: mov     ecx, esi
0x6FB63E: call    NiTArray_SetSize
0x6FB643: lea     eax, [esp+20h+arg_0]
0x6FB647: push    eax
0x6FB648: push    edi
0x6FB649: mov     ecx, esi
0x6FB64B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FB650: movzx   ebx, word ptr [ebp+18h]
0x6FB654: push    ebx; int
0x6FB655: push    offset aImarks; "iMarks"
0x6FB65A: mov     [esp+28h+var_4], ebx
0x6FB65E: call    TESOutput_PrintLabeledUnsignedInt
0x6FB663: movzx   edi, word ptr [esi+0Ah]
0x6FB667: movzx   ecx, word ptr [esi+8]
0x6FB66B: add     esp, 8
0x6FB66E: cmp     edi, ecx
0x6FB670: mov     [esp+20h+arg_0], eax
0x6FB674: jb      short loc_6FB684
0x6FB676: movzx   edx, word ptr [esi+0Eh]
0x6FB67A: add     edx, edi
0x6FB67C: push    edx
0x6FB67D: mov     ecx, esi
0x6FB67F: call    NiTArray_SetSize
0x6FB684: lea     eax, [esp+20h+arg_0]
0x6FB688: push    eax
0x6FB689: push    edi
0x6FB68A: mov     ecx, esi
0x6FB68C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FB691: xor     eax, eax
0x6FB693: cmp     ebx, eax
0x6FB695: mov     [esp+20h+arg_0], eax
0x6FB699: jbe     loc_6FB8A1
0x6FB69F: mov     [esp+20h+var_10], eax
0x6FB6A3: jmp     short loc_6FB6A9
0x6FB6A5: mov     ebp, [esp+20h+var_C]
0x6FB6A9: mov     ecx, [esp+20h+arg_0]
0x6FB6AD: push    ecx; int
0x6FB6AE: push    offset aMark; "Mark"
0x6FB6B3: call    TESOutput_PrintLabeledUnsignedInt
0x6FB6B8: movzx   edi, word ptr [esi+0Ah]
0x6FB6BC: movzx   edx, word ptr [esi+8]
0x6FB6C0: add     esp, 8
0x6FB6C3: cmp     edi, edx
0x6FB6C5: mov     ebx, eax
0x6FB6C7: jb      short loc_6FB6D7
0x6FB6C9: movzx   eax, word ptr [esi+0Eh]
0x6FB6CD: add     eax, edi
0x6FB6CF: push    eax
0x6FB6D0: mov     ecx, esi
0x6FB6D2: call    NiTArray_SetSize
0x6FB6D7: movzx   ecx, word ptr [esi+0Ah]
0x6FB6DB: cmp     edi, ecx
0x6FB6DD: jb      short loc_6FB6F1
0x6FB6DF: test    ebx, ebx
0x6FB6E1: lea     edx, [edi+1]
0x6FB6E4: mov     [esi+0Ah], dx
0x6FB6E8: jz      short loc_6FB714
0x6FB6EA: add     word ptr [esi+0Ch], 1
0x6FB6EF: jmp     short loc_6FB714
0x6FB6F1: test    ebx, ebx
0x6FB6F3: jz      short loc_6FB705
0x6FB6F5: mov     eax, [esi+4]
0x6FB6F8: cmp     dword ptr [eax+edi*4], 0
0x6FB6FC: jnz     short loc_6FB714
0x6FB6FE: add     word ptr [esi+0Ch], 1
0x6FB703: jmp     short loc_6FB714
0x6FB705: mov     ecx, [esi+4]
0x6FB708: cmp     dword ptr [ecx+edi*4], 0
0x6FB70C: jz      short loc_6FB714
0x6FB70E: add     word ptr [esi+0Ch], 0FFFFh
0x6FB714: mov     edx, [esi+4]
0x6FB717: mov     [edx+edi*4], ebx
0x6FB71A: mov     ebx, [ebp+10h]
0x6FB71D: add     ebx, [esp+20h+var_10]
0x6FB721: movzx   eax, byte ptr [ebx+0Eh]
0x6FB725: push    eax; int
0x6FB726: push    offset aNumber_0; " Number"
0x6FB72B: call    TESOutput_PrintLabeledUnsignedInt
0x6FB730: movzx   edi, word ptr [esi+0Ah]
0x6FB734: mov     ebp, eax
0x6FB736: movzx   eax, word ptr [esi+8]
0x6FB73A: add     esp, 8
0x6FB73D: cmp     edi, eax
0x6FB73F: jb      short loc_6FB74F
0x6FB741: movzx   ecx, word ptr [esi+0Eh]
0x6FB745: add     ecx, edi
0x6FB747: push    ecx
0x6FB748: mov     ecx, esi
0x6FB74A: call    NiTArray_SetSize
0x6FB74F: movzx   edx, word ptr [esi+0Ah]
0x6FB753: cmp     edi, edx
0x6FB755: jb      short loc_6FB769
0x6FB757: test    ebp, ebp
0x6FB759: lea     eax, [edi+1]
0x6FB75C: mov     [esi+0Ah], ax
0x6FB760: jz      short loc_6FB78C
0x6FB762: add     word ptr [esi+0Ch], 1
0x6FB767: jmp     short loc_6FB78C
0x6FB769: test    ebp, ebp
0x6FB76B: jz      short loc_6FB77D
0x6FB76D: mov     ecx, [esi+4]
0x6FB770: cmp     dword ptr [ecx+edi*4], 0
0x6FB774: jnz     short loc_6FB78C
0x6FB776: add     word ptr [esi+0Ch], 1
0x6FB77B: jmp     short loc_6FB78C
0x6FB77D: mov     edx, [esi+4]
0x6FB780: cmp     dword ptr [edx+edi*4], 0
0x6FB784: jz      short loc_6FB78C
0x6FB786: add     word ptr [esi+0Ch], 0FFFFh
0x6FB78C: mov     eax, [esi+4]
0x6FB78F: push    offset aPos; " Pos"
0x6FB794: mov     ecx, ebx
0x6FB796: mov     [eax+edi*4], ebp
0x6FB799: call    sub_707280
0x6FB79E: movzx   edi, word ptr [esi+0Ah]
0x6FB7A2: movzx   ecx, word ptr [esi+8]
0x6FB7A6: cmp     edi, ecx
0x6FB7A8: mov     ebp, eax
0x6FB7AA: jb      short loc_6FB7BA
0x6FB7AC: movzx   edx, word ptr [esi+0Eh]
0x6FB7B0: add     edx, edi
0x6FB7B2: push    edx
0x6FB7B3: mov     ecx, esi
0x6FB7B5: call    NiTArray_SetSize
0x6FB7BA: movzx   eax, word ptr [esi+0Ah]
0x6FB7BE: cmp     edi, eax
0x6FB7C0: jb      short loc_6FB7D4
0x6FB7C2: test    ebp, ebp
0x6FB7C4: lea     ecx, [edi+1]
0x6FB7C7: mov     [esi+0Ah], cx
0x6FB7CB: jz      short loc_6FB7F7
0x6FB7CD: add     word ptr [esi+0Ch], 1
0x6FB7D2: jmp     short loc_6FB7F7
0x6FB7D4: test    ebp, ebp
0x6FB7D6: jz      short loc_6FB7E8
0x6FB7D8: mov     edx, [esi+4]
0x6FB7DB: cmp     dword ptr [edx+edi*4], 0
0x6FB7DF: jnz     short loc_6FB7F7
0x6FB7E1: add     word ptr [esi+0Ch], 1
0x6FB7E6: jmp     short loc_6FB7F7
0x6FB7E8: mov     eax, [esi+4]
0x6FB7EB: cmp     dword ptr [eax+edi*4], 0
0x6FB7EF: jz      short loc_6FB7F7
0x6FB7F1: add     word ptr [esi+0Ch], 0FFFFh
0x6FB7F7: mov     ecx, [esi+4]
0x6FB7FA: mov     [ecx+edi*4], ebp
0x6FB7FD: movzx   edx, word ptr [ebx+0Ch]
0x6FB801: mov     [esp+20h+var_8], edx
0x6FB805: push    ecx
0x6FB806: fild    [esp+24h+var_8]
0x6FB80A: fdiv    qword ptr ds:0A2FC70h
0x6FB810: fstp    [esp+24h+var_8]
0x6FB814: fld     [esp+24h+var_8]
0x6FB818: fstp    [esp+24h+var_24]; float
0x6FB81B: push    offset aHeading; " Heading"
0x6FB820: call    TESOutput_PrintLabeledFloat
0x6FB825: movzx   edi, word ptr [esi+0Ah]
0x6FB829: mov     ebx, eax
0x6FB82B: movzx   eax, word ptr [esi+8]
0x6FB82F: add     esp, 8
0x6FB832: cmp     edi, eax
0x6FB834: jb      short loc_6FB844
0x6FB836: movzx   ecx, word ptr [esi+0Eh]
0x6FB83A: add     ecx, edi
0x6FB83C: push    ecx
0x6FB83D: mov     ecx, esi
0x6FB83F: call    NiTArray_SetSize
0x6FB844: movzx   edx, word ptr [esi+0Ah]
0x6FB848: cmp     edi, edx
0x6FB84A: jb      short loc_6FB85E
0x6FB84C: test    ebx, ebx
0x6FB84E: lea     eax, [edi+1]
0x6FB851: mov     [esi+0Ah], ax
0x6FB855: jz      short loc_6FB881
0x6FB857: add     word ptr [esi+0Ch], 1
0x6FB85C: jmp     short loc_6FB881
0x6FB85E: test    ebx, ebx
0x6FB860: jz      short loc_6FB872
0x6FB862: mov     ecx, [esi+4]
0x6FB865: cmp     dword ptr [ecx+edi*4], 0
0x6FB869: jnz     short loc_6FB881
0x6FB86B: add     word ptr [esi+0Ch], 1
0x6FB870: jmp     short loc_6FB881
0x6FB872: mov     edx, [esi+4]
0x6FB875: cmp     dword ptr [edx+edi*4], 0
0x6FB879: jz      short loc_6FB881
0x6FB87B: add     word ptr [esi+0Ch], 0FFFFh
0x6FB881: mov     eax, [esi+4]
0x6FB884: add     [esp+20h+var_10], 10h
0x6FB889: mov     [eax+edi*4], ebx
0x6FB88C: mov     eax, [esp+20h+arg_0]
0x6FB890: add     eax, 1
0x6FB893: cmp     eax, [esp+20h+var_4]
0x6FB897: mov     [esp+20h+arg_0], eax
0x6FB89B: jb      loc_6FB6A5
0x6FB8A1: pop     edi
0x6FB8A2: pop     esi
0x6FB8A3: pop     ebp
0x6FB8A4: pop     ebx
0x6FB8A5: add     esp, 10h
0x6FB8A8: retn    4
