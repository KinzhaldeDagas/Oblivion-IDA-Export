0x84B7F0: push    0FFFFFFFFh
0x84B7F2: push    offset SEH_84D2B0
0x84B7F7: mov     eax, large fs:0
0x84B7FD: push    eax
0x84B7FE: sub     esp, 8
0x84B801: push    ebx
0x84B802: push    ebp
0x84B803: push    esi
0x84B804: push    edi
0x84B805: mov     eax, ds:0B30AACh
0x84B80A: xor     eax, esp
0x84B80C: push    eax
0x84B80D: lea     eax, [esp+28h+var_C]
0x84B811: mov     large fs:0, eax
0x84B817: mov     [esp+28h+var_10], ecx
0x84B81B: mov     eax, [esp+28h+arg_8]
0x84B81F: mov     eax, [eax+10h]
0x84B822: mov     esi, ds:0B45628h
0x84B828: push    eax
0x84B829: mov     [esp+2Ch+var_14], esi
0x84B82D: call    sub_848C40
0x84B832: mov     ecx, [esi+24h]
0x84B835: mov     esi, [esp+28h+arg_C]
0x84B839: mov     edx, [esi]
0x84B83B: mov     ebp, [ecx]
0x84B83D: mov     eax, [edx+88h]
0x84B843: push    0
0x84B845: mov     ecx, esi
0x84B847: call    eax
0x84B849: mov     edi, [ebp+4]
0x84B84C: mov     ebx, eax
0x84B84E: cmp     edi, ebx
0x84B850: jz      short loc_84B883
0x84B852: test    edi, edi
0x84B854: jz      short loc_84B872
0x84B856: lea     ecx, [edi+4]
0x84B859: push    ecx; lpAddend
0x84B85A: call    dword ptr ds:0A2807Ch
0x84B860: test    eax, eax
0x84B862: jnz     short loc_84B872
0x84B864: test    edi, edi
0x84B866: jz      short loc_84B872
0x84B868: mov     edx, [edi]
0x84B86A: mov     eax, [edx]
0x84B86C: push    1
0x84B86E: mov     ecx, edi
0x84B870: call    eax
0x84B872: test    ebx, ebx
0x84B874: mov     [ebp+4], ebx
0x84B877: jz      short loc_84B883
0x84B879: add     ebx, 4
0x84B87C: push    ebx; lpAddend
0x84B87D: call    dword ptr ds:0A28078h
0x84B883: test    ebp, ebp
0x84B885: jz      short loc_84B8A1
0x84B887: cmp     byte ptr ds:0B42CDDh, 0
0x84B88E: jz      short loc_84B8A1
0x84B890: mov     edx, [esi]
0x84B892: mov     eax, [edx+78h]
0x84B895: mov     ecx, esi
0x84B897: call    eax
0x84B899: push    eax
0x84B89A: mov     ecx, ebp
0x84B89C: call    sub_7715E0
0x84B8A1: mov     ecx, [esp+28h+var_14]
0x84B8A5: mov     edx, [ecx+24h]
0x84B8A8: mov     eax, [esi]
0x84B8AA: mov     ebp, [edx+4]
0x84B8AD: mov     edx, [eax+8Ch]
0x84B8B3: push    0
0x84B8B5: mov     ecx, esi
0x84B8B7: call    edx
0x84B8B9: test    eax, eax
0x84B8BB: jz      short loc_84B8CF
0x84B8BD: mov     eax, [esi]
0x84B8BF: mov     edx, [eax+8Ch]
0x84B8C5: push    0
0x84B8C7: mov     ecx, esi
0x84B8C9: call    edx
0x84B8CB: mov     ebx, eax
0x84B8CD: jmp     short loc_84B8E4
0x84B8CF: test    dword ptr [esi+1Ch], 80h
0x84B8D6: mov     ebx, ds:0B430F0h
0x84B8DC: ja      short loc_84B8E4
0x84B8DE: mov     ebx, ds:0B430DCh
0x84B8E4: mov     edi, [ebp+4]
0x84B8E7: cmp     edi, ebx
0x84B8E9: jz      short loc_84B91C
0x84B8EB: test    edi, edi
0x84B8ED: jz      short loc_84B90B
0x84B8EF: lea     eax, [edi+4]
0x84B8F2: push    eax; lpAddend
0x84B8F3: call    dword ptr ds:0A2807Ch
0x84B8F9: test    eax, eax
0x84B8FB: jnz     short loc_84B90B
0x84B8FD: test    edi, edi
0x84B8FF: jz      short loc_84B90B
0x84B901: mov     edx, [edi]
0x84B903: mov     eax, [edx]
0x84B905: push    1
0x84B907: mov     ecx, edi
0x84B909: call    eax
0x84B90B: test    ebx, ebx
0x84B90D: mov     [ebp+4], ebx
0x84B910: jz      short loc_84B91C
0x84B912: add     ebx, 4
0x84B915: push    ebx; lpAddend
0x84B916: call    dword ptr ds:0A28078h
0x84B91C: test    ebp, ebp
0x84B91E: jz      short loc_84B93A
0x84B920: cmp     byte ptr ds:0B42CDDh, 0
0x84B927: jz      short loc_84B93A
0x84B929: mov     edx, [esi]
0x84B92B: mov     eax, [edx+78h]
0x84B92E: mov     ecx, esi
0x84B930: call    eax
0x84B932: push    eax
0x84B933: mov     ecx, ebp
0x84B935: call    sub_7715E0
0x84B93A: mov     ecx, [esp+28h+var_14]
0x84B93E: mov     edx, [ecx+24h]
0x84B941: mov     eax, [esi]
0x84B943: mov     ebx, [edx+8]
0x84B946: mov     edx, [eax+88h]
0x84B94C: push    1
0x84B94E: mov     ecx, esi
0x84B950: call    edx
0x84B952: mov     edi, [ebx+4]
0x84B955: mov     ebp, eax
0x84B957: cmp     edi, ebp
0x84B959: jz      short loc_84B98C
0x84B95B: test    edi, edi
0x84B95D: jz      short loc_84B97B
0x84B95F: lea     eax, [edi+4]
0x84B962: push    eax; lpAddend
0x84B963: call    dword ptr ds:0A2807Ch
0x84B969: test    eax, eax
0x84B96B: jnz     short loc_84B97B
0x84B96D: test    edi, edi
0x84B96F: jz      short loc_84B97B
0x84B971: mov     edx, [edi]
0x84B973: mov     eax, [edx]
0x84B975: push    1
0x84B977: mov     ecx, edi
0x84B979: call    eax
0x84B97B: test    ebp, ebp
0x84B97D: mov     [ebx+4], ebp
0x84B980: jz      short loc_84B98C
0x84B982: add     ebp, 4
0x84B985: push    ebp; lpAddend
0x84B986: call    dword ptr ds:0A28078h
0x84B98C: test    ebx, ebx
0x84B98E: jz      short loc_84B9AA
0x84B990: cmp     byte ptr ds:0B42CDDh, 0
0x84B997: jz      short loc_84B9AA
0x84B999: mov     edx, [esi]
0x84B99B: mov     eax, [edx+78h]
0x84B99E: mov     ecx, esi
0x84B9A0: call    eax
0x84B9A2: push    eax
0x84B9A3: mov     ecx, ebx
0x84B9A5: call    sub_7715E0
0x84B9AA: mov     ebx, [esp+28h+var_14]
0x84B9AE: mov     ecx, [ebx+24h]
0x84B9B1: mov     edi, [ecx+0Ch]
0x84B9B4: mov     edx, [esi]
0x84B9B6: mov     eax, [edx+8Ch]
0x84B9BC: push    1
0x84B9BE: mov     ecx, esi
0x84B9C0: mov     [esp+2Ch+arg_8], edi
0x84B9C4: call    eax
0x84B9C6: test    eax, eax
0x84B9C8: jz      short loc_84B9DC
0x84B9CA: mov     edx, [esi]
0x84B9CC: mov     eax, [edx+8Ch]
0x84B9D2: push    1
0x84B9D4: mov     ecx, esi
0x84B9D6: call    eax
0x84B9D8: mov     ebp, eax
0x84B9DA: jmp     short loc_84B9F1
0x84B9DC: test    dword ptr [esi+1Ch], 80h
0x84B9E3: mov     ebp, ds:0B430F0h
0x84B9E9: ja      short loc_84B9F1
0x84B9EB: mov     ebp, ds:0B430DCh
0x84B9F1: mov     edi, [edi+4]
0x84B9F4: cmp     edi, ebp
0x84B9F6: jz      short loc_84BA2F
0x84B9F8: test    edi, edi
0x84B9FA: jz      short loc_84BA18
0x84B9FC: lea     ecx, [edi+4]
0x84B9FF: push    ecx; lpAddend
0x84BA00: call    dword ptr ds:0A2807Ch
0x84BA06: test    eax, eax
0x84BA08: jnz     short loc_84BA18
0x84BA0A: test    edi, edi
0x84BA0C: jz      short loc_84BA18
0x84BA0E: mov     edx, [edi]
0x84BA10: mov     eax, [edx]
0x84BA12: push    1
0x84BA14: mov     ecx, edi
0x84BA16: call    eax
0x84BA18: test    ebp, ebp
0x84BA1A: mov     edi, [esp+28h+arg_8]
0x84BA1E: mov     [edi+4], ebp
0x84BA21: jz      short loc_84BA33
0x84BA23: add     ebp, 4
0x84BA26: push    ebp; lpAddend
0x84BA27: call    dword ptr ds:0A28078h
0x84BA2D: jmp     short loc_84BA33
0x84BA2F: mov     edi, [esp+28h+arg_8]
0x84BA33: test    edi, edi
0x84BA35: jz      short loc_84BA51
0x84BA37: cmp     byte ptr ds:0B42CDDh, 0
0x84BA3E: jz      short loc_84BA51
0x84BA40: mov     edx, [esi]
0x84BA42: mov     eax, [edx+78h]
0x84BA45: mov     ecx, esi
0x84BA47: call    eax
0x84BA49: push    eax
0x84BA4A: mov     ecx, edi
0x84BA4C: call    sub_7715E0
0x84BA51: mov     edi, 1
0x84BA56: add     [ebx+60h], edi
0x84BA59: mov     [esp+28h+arg_8], ebx
0x84BA5D: mov     esi, [esp+28h+var_10]
0x84BA61: mov     edx, [esi+38h]
0x84BA64: lea     ecx, [esp+28h+arg_8]
0x84BA68: push    ecx
0x84BA69: push    edx
0x84BA6A: lea     ecx, [esi+40h]
0x84BA6D: mov     [esp+30h+var_4], 0
0x84BA75: call    sub_76CE40
0x84BA7A: or      eax, 0FFFFFFFFh
0x84BA7D: add     [ebx+60h], eax
0x84BA80: mov     [esp+28h+var_4], eax
0x84BA84: jnz     short loc_84BA8D
0x84BA86: mov     ecx, ebx
0x84BA88: call    sub_7604D0
0x84BA8D: add     [esi+38h], edi
0x84BA90: mov     ecx, [esp+28h+var_C]
0x84BA94: mov     large fs:0, ecx
0x84BA9B: pop     ecx
0x84BA9C: pop     edi
0x84BA9D: pop     esi
0x84BA9E: pop     ebp
0x84BA9F: pop     ebx
0x84BAA0: add     esp, 14h
0x84BAA3: retn    10h
