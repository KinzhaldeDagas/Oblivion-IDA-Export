0x83E7C0: push    0FFFFFFFFh
0x83E7C2: push    offset SEH_882120
0x83E7C7: mov     eax, large fs:0
0x83E7CD: push    eax
0x83E7CE: push    ebx
0x83E7CF: push    ebp
0x83E7D0: push    esi
0x83E7D1: push    edi
0x83E7D2: mov     eax, ds:0B30AACh
0x83E7D7: xor     eax, esp
0x83E7D9: push    eax
0x83E7DA: lea     eax, [esp+20h+var_C]
0x83E7DE: mov     large fs:0, eax
0x83E7E4: mov     esi, ecx
0x83E7E6: mov     ebx, [esp+20h+arg_8]
0x83E7EA: mov     eax, [ebx+10h]
0x83E7ED: mov     edi, ds:0B45854h
0x83E7F3: push    eax
0x83E7F4: call    sub_848DA0
0x83E7F9: mov     ebp, [ebx+0Ch]
0x83E7FC: push    ebp
0x83E7FD: mov     ecx, esi
0x83E7FF: call    sub_848E50
0x83E804: mov     ebx, [ebx+10h]
0x83E807: mov     ecx, [esp+20h+arg_0]
0x83E80B: mov     eax, [esi]
0x83E80D: mov     edx, [eax+0BCh]
0x83E813: push    ebx
0x83E814: push    ebp
0x83E815: push    ecx
0x83E816: mov     ecx, esi
0x83E818: call    edx
0x83E81A: mov     eax, [edi+24h]
0x83E81D: mov     ebx, [esp+20h+arg_C]
0x83E821: mov     ebp, [eax]
0x83E823: mov     edx, [ebx]
0x83E825: mov     eax, [edx+88h]
0x83E82B: push    0
0x83E82D: mov     ecx, ebx
0x83E82F: mov     [esp+24h+arg_8], ebp
0x83E833: call    eax
0x83E835: mov     ebp, [ebp+4]
0x83E838: cmp     ebp, eax
0x83E83A: mov     [esp+20h+arg_0], eax
0x83E83E: jz      short loc_83E87A
0x83E840: test    ebp, ebp
0x83E842: jz      short loc_83E865
0x83E844: lea     ecx, [ebp+4]
0x83E847: push    ecx; lpAddend
0x83E848: call    dword ptr ds:0A2807Ch
0x83E84E: test    eax, eax
0x83E850: jnz     short loc_83E861
0x83E852: test    ebp, ebp
0x83E854: jz      short loc_83E861
0x83E856: mov     edx, [ebp+0]
0x83E859: mov     eax, [edx]
0x83E85B: push    1
0x83E85D: mov     ecx, ebp
0x83E85F: call    eax
0x83E861: mov     eax, [esp+20h+arg_0]
0x83E865: test    eax, eax
0x83E867: mov     ecx, [esp+20h+arg_8]
0x83E86B: mov     [ecx+4], eax
0x83E86E: jz      short loc_83E87A
0x83E870: add     eax, 4
0x83E873: push    eax; lpAddend
0x83E874: call    dword ptr ds:0A28078h
0x83E87A: mov     edx, [esp+20h+arg_8]
0x83E87E: push    ebx
0x83E87F: push    edx
0x83E880: mov     ecx, esi
0x83E882: call    sub_848FA0
0x83E887: mov     eax, [edi+24h]
0x83E88A: mov     ebp, [eax+4]
0x83E88D: push    0
0x83E88F: push    ebx
0x83E890: mov     ecx, esi
0x83E892: mov     [esp+28h+arg_8], ebp
0x83E896: call    sub_848FD0
0x83E89B: mov     ebp, [ebp+4]
0x83E89E: cmp     ebp, eax
0x83E8A0: mov     [esp+20h+arg_0], eax
0x83E8A4: jz      short loc_83E8E0
0x83E8A6: test    ebp, ebp
0x83E8A8: jz      short loc_83E8CB
0x83E8AA: lea     ecx, [ebp+4]
0x83E8AD: push    ecx; lpAddend
0x83E8AE: call    dword ptr ds:0A2807Ch
0x83E8B4: test    eax, eax
0x83E8B6: jnz     short loc_83E8C7
0x83E8B8: test    ebp, ebp
0x83E8BA: jz      short loc_83E8C7
0x83E8BC: mov     edx, [ebp+0]
0x83E8BF: mov     eax, [edx]
0x83E8C1: push    1
0x83E8C3: mov     ecx, ebp
0x83E8C5: call    eax
0x83E8C7: mov     eax, [esp+20h+arg_0]
0x83E8CB: test    eax, eax
0x83E8CD: mov     ecx, [esp+20h+arg_8]
0x83E8D1: mov     [ecx+4], eax
0x83E8D4: jz      short loc_83E8E0
0x83E8D6: add     eax, 4
0x83E8D9: push    eax; lpAddend
0x83E8DA: call    dword ptr ds:0A28078h
0x83E8E0: mov     edx, [esp+20h+arg_8]
0x83E8E4: push    ebx
0x83E8E5: push    edx
0x83E8E6: mov     ecx, esi
0x83E8E8: call    sub_848FA0
0x83E8ED: mov     eax, [edi+24h]
0x83E8F0: mov     ebp, [eax+10h]
0x83E8F3: mov     edx, [ebx]
0x83E8F5: mov     eax, [edx+90h]
0x83E8FB: push    0
0x83E8FD: mov     ecx, ebx
0x83E8FF: mov     [esp+24h+arg_8], ebp
0x83E903: call    eax
0x83E905: mov     ebp, [ebp+4]
0x83E908: cmp     ebp, eax
0x83E90A: mov     [esp+20h+arg_0], eax
0x83E90E: jz      short loc_83E94A
0x83E910: test    ebp, ebp
0x83E912: jz      short loc_83E935
0x83E914: lea     ecx, [ebp+4]
0x83E917: push    ecx; lpAddend
0x83E918: call    dword ptr ds:0A2807Ch
0x83E91E: test    eax, eax
0x83E920: jnz     short loc_83E931
0x83E922: test    ebp, ebp
0x83E924: jz      short loc_83E931
0x83E926: mov     edx, [ebp+0]
0x83E929: mov     eax, [edx]
0x83E92B: push    1
0x83E92D: mov     ecx, ebp
0x83E92F: call    eax
0x83E931: mov     eax, [esp+20h+arg_0]
0x83E935: test    eax, eax
0x83E937: mov     ecx, [esp+20h+arg_8]
0x83E93B: mov     [ecx+4], eax
0x83E93E: jz      short loc_83E94A
0x83E940: add     eax, 4
0x83E943: push    eax; lpAddend
0x83E944: call    dword ptr ds:0A28078h
0x83E94A: mov     edx, [esp+20h+arg_8]
0x83E94E: push    ebx
0x83E94F: push    edx
0x83E950: mov     ecx, esi
0x83E952: call    sub_848FA0
0x83E957: mov     ebx, 1
0x83E95C: add     [edi+60h], ebx
0x83E95F: mov     [esp+20h+arg_8], edi
0x83E963: mov     ecx, [esi+38h]
0x83E966: lea     eax, [esp+20h+arg_8]
0x83E96A: push    eax
0x83E96B: push    ecx
0x83E96C: lea     ecx, [esi+40h]
0x83E96F: mov     [esp+28h+var_4], 0
0x83E977: call    sub_76CE40
0x83E97C: or      eax, 0FFFFFFFFh
0x83E97F: add     [edi+60h], eax
0x83E982: mov     [esp+20h+var_4], eax
0x83E986: jnz     short loc_83E98F
0x83E988: mov     ecx, edi
0x83E98A: call    sub_7604D0
0x83E98F: add     [esi+38h], ebx
0x83E992: mov     ecx, [esp+20h+var_C]
0x83E996: mov     large fs:0, ecx
0x83E99D: pop     ecx
0x83E99E: pop     edi
0x83E99F: pop     esi
0x83E9A0: pop     ebp
0x83E9A1: pop     ebx
0x83E9A2: add     esp, 0Ch
0x83E9A5: retn    10h
