0x90B7E0: push    ebp
0x90B7E1: mov     ebp, esp
0x90B7E3: and     esp, 0FFFFFFF0h
0x90B7E6: sub     esp, 98h
0x90B7EC: mov     eax, [ebp+arg_8]
0x90B7EF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x90B7F6: movaps  xmm1, xmmword ptr [eax+10h]
0x90B7FA: mov     edx, ecx
0x90B7FC: push    esi
0x90B7FD: push    edi
0x90B7FE: mov     esi, eax
0x90B800: add     eax, 10h
0x90B803: mov     ecx, 0Ch
0x90B808: lea     edi, [esp+0A0h+var_30]
0x90B80C: rep movsd
0x90B80E: mov     ecx, eax
0x90B810: mov     edi, [ecx]
0x90B812: mov     [esp+0A0h+var_80], edi
0x90B816: mov     edi, [ecx+4]
0x90B819: mov     [esp+0A0h+var_7C], edi
0x90B81D: mov     edi, [ecx+8]
0x90B820: mov     ecx, [ecx+0Ch]
0x90B823: mov     [esp+0A0h+var_74], ecx
0x90B827: mov     ecx, [ebp+arg_C]
0x90B82A: mov     [esp+0A0h+var_70], ecx
0x90B82E: mov     ecx, [ebp+arg_10]
0x90B831: test    ecx, ecx
0x90B833: mov     esi, offset off_A9B4E8
0x90B838: xorps   xmm1, xmm0
0x90B83B: movaps  [esp+0A0h+var_20], xmm1
0x90B843: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x90B84B: mov     [esp+0A0h+var_90], esi
0x90B84F: mov     [esp+0A0h+var_78], edi
0x90B853: jz      short loc_90B887
0x90B855: mov     [esp+0A0h+var_60], esi
0x90B859: mov     esi, [eax]
0x90B85B: mov     [esp+0A0h+var_50], esi
0x90B85F: mov     esi, [eax+4]
0x90B862: mov     [esp+0A0h+var_4C], esi
0x90B866: mov     esi, [eax+8]
0x90B869: mov     eax, [eax+0Ch]
0x90B86C: mov     [esp+0A0h+var_40], ecx
0x90B870: lea     ecx, [esp+0A0h+var_60]
0x90B874: mov     [esp+0A0h+var_5C], 7F7FFFFFh
0x90B87C: mov     [esp+0A0h+var_48], esi
0x90B880: mov     [esp+0A0h+var_44], eax
0x90B884: push    ecx
0x90B885: jmp     short loc_90B889
0x90B887: push    0
0x90B889: lea     eax, [esp+0A4h+var_90]
0x90B88D: push    eax
0x90B88E: mov     eax, [ebp+arg_0]
0x90B891: lea     ecx, [esp+0A8h+var_30]
0x90B895: push    ecx
0x90B896: mov     ecx, [ebp+arg_4]
0x90B899: push    eax
0x90B89A: push    ecx
0x90B89B: mov     ecx, edx
0x90B89D: call    sub_90AB90
0x90B8A2: pop     edi
0x90B8A3: pop     esi
0x90B8A4: mov     esp, ebp
0x90B8A6: pop     ebp
0x90B8A7: retn    14h
