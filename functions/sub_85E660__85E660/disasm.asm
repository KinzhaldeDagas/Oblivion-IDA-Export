0x85E660: push    0FFFFFFFFh
0x85E662: push    offset SEH_85E660
0x85E667: mov     eax, large fs:0
0x85E66D: push    eax
0x85E66E: sub     esp, 0Ch
0x85E671: push    ebx
0x85E672: push    ebp
0x85E673: push    esi
0x85E674: push    edi
0x85E675: mov     eax, ds:0B30AACh
0x85E67A: xor     eax, esp
0x85E67C: push    eax
0x85E67D: lea     eax, [esp+2Ch+var_C]
0x85E681: mov     large fs:0, eax
0x85E687: xor     esi, esi
0x85E689: xor     ebx, ebx
0x85E68B: mov     [esp+2Ch+var_18], esi
0x85E68F: mov     [esp+2Ch+var_4], ebx
0x85E693: mov     [esp+2Ch+a3], ebx
0x85E697: mov     eax, ds:0B473D0h
0x85E69C: cmp     eax, ebx
0x85E69E: mov     byte ptr [esp+2Ch+var_4], 1
0x85E6A3: jz      short loc_85E6B3
0x85E6A5: mov     esi, eax
0x85E6A7: cmp     esi, ebx
0x85E6A9: mov     [esp+2Ch+var_18], esi
0x85E6AD: jz      short loc_85E6B3
0x85E6AF: add     dword ptr [esi+60h], 1
0x85E6B3: push    esi
0x85E6B4: call    sub_85E570
0x85E6B9: mov     eax, ds:0B47300h
0x85E6BE: mov     edi, [esi+58h]
0x85E6C1: add     esp, 4
0x85E6C4: cmp     edi, eax
0x85E6C6: mov     ebp, eax
0x85E6C8: jz      short loc_85E6FB
0x85E6CA: cmp     edi, ebx
0x85E6CC: jz      short loc_85E6EA
0x85E6CE: lea     eax, [edi+4]
0x85E6D1: push    eax; lpAddend
0x85E6D2: call    dword ptr ds:0A2807Ch
0x85E6D8: test    eax, eax
0x85E6DA: jnz     short loc_85E6EA
0x85E6DC: cmp     edi, ebx
0x85E6DE: jz      short loc_85E6EA
0x85E6E0: mov     edx, [edi]
0x85E6E2: mov     eax, [edx]
0x85E6E4: push    1
0x85E6E6: mov     ecx, edi
0x85E6E8: call    eax
0x85E6EA: cmp     ebp, ebx
0x85E6EC: mov     [esi+58h], ebp
0x85E6EF: jz      short loc_85E6FB
0x85E6F1: add     ebp, 4
0x85E6F4: push    ebp; lpAddend
0x85E6F5: call    dword ptr ds:0A28078h
0x85E6FB: mov     eax, ds:0B46F6Ch
0x85E700: mov     edi, [esi+44h]
0x85E703: cmp     edi, eax
0x85E705: mov     ebp, eax
0x85E707: jz      short loc_85E73A
0x85E709: cmp     edi, ebx
0x85E70B: jz      short loc_85E729
0x85E70D: lea     ecx, [edi+4]
0x85E710: push    ecx; lpAddend
0x85E711: call    dword ptr ds:0A2807Ch
0x85E717: test    eax, eax
0x85E719: jnz     short loc_85E729
0x85E71B: cmp     edi, ebx
0x85E71D: jz      short loc_85E729
0x85E71F: mov     edx, [edi]
0x85E721: mov     eax, [edx]
0x85E723: push    1
0x85E725: mov     ecx, edi
0x85E727: call    eax
0x85E729: cmp     ebp, ebx
0x85E72B: mov     [esi+44h], ebp
0x85E72E: jz      short loc_85E73A
0x85E730: add     ebp, 4
0x85E733: push    ebp; lpAddend
0x85E734: call    dword ptr ds:0A28078h
0x85E73A: cmp     [esi+30h], ebx
0x85E73D: jnz     short loc_85E747
0x85E73F: call    sub_772DF0
0x85E744: mov     [esi+30h], eax
0x85E747: mov     ecx, [esi+30h]
0x85E74A: push    ebx
0x85E74B: push    1
0x85E74D: push    7
0x85E74F: call    sub_772CD0
0x85E754: cmp     [esi+30h], ebx
0x85E757: jnz     short loc_85E761
0x85E759: call    sub_772DF0
0x85E75E: mov     [esi+30h], eax
0x85E761: mov     ecx, [esi+30h]
0x85E764: push    ebx
0x85E765: push    4
0x85E767: push    17h
0x85E769: call    sub_772CD0
0x85E76E: cmp     [esi+30h], ebx
0x85E771: jnz     short loc_85E77B
0x85E773: call    sub_772DF0
0x85E778: mov     [esi+30h], eax
0x85E77B: mov     ecx, [esi+30h]
0x85E77E: push    ebx
0x85E77F: push    ebx
0x85E780: push    0Eh
0x85E782: call    sub_772CD0
0x85E787: cmp     [esi+30h], ebx
0x85E78A: jnz     short loc_85E794
0x85E78C: call    sub_772DF0
0x85E791: mov     [esi+30h], eax
0x85E794: mov     ecx, [esi+30h]
0x85E797: push    ebx
0x85E798: push    ebx
0x85E799: push    34h ; '4'
0x85E79B: call    sub_772CD0
0x85E7A0: cmp     [esi+30h], ebx
0x85E7A3: jnz     short loc_85E7AD
0x85E7A5: call    sub_772DF0
0x85E7AA: mov     [esi+30h], eax
0x85E7AD: mov     ecx, [esi+30h]
0x85E7B0: push    ebx
0x85E7B1: push    1
0x85E7B3: push    16h
0x85E7B5: call    sub_772CD0
0x85E7BA: cmp     [esi+30h], ebx
0x85E7BD: jnz     short loc_85E7C7
0x85E7BF: call    sub_772DF0
0x85E7C4: mov     [esi+30h], eax
0x85E7C7: mov     ecx, [esi+30h]
0x85E7CA: push    ebx
0x85E7CB: push    ebx
0x85E7CC: push    0A8h ; '¨'
0x85E7D1: call    sub_772CD0
0x85E7D6: cmp     esi, ds:0B473D4h
0x85E7DC: mov     dword ptr ds:0B46988h, 812h
0x85E7E6: mov     ds:0B46A60h, ebx
0x85E7EC: jz      short loc_85E80D
0x85E7EE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85E7F2: jnz     short loc_85E7FB
0x85E7F4: mov     ecx, esi
0x85E7F6: call    sub_7604D0
0x85E7FB: mov     esi, ds:0B473D4h
0x85E801: cmp     esi, ebx
0x85E803: mov     [esp+2Ch+var_18], esi
0x85E807: jz      short loc_85E80D
0x85E809: add     dword ptr [esi+60h], 1
0x85E80D: push    esi
0x85E80E: call    sub_85E570
0x85E813: mov     eax, ds:0B47300h
0x85E818: mov     edi, [esi+58h]
0x85E81B: add     esp, 4
0x85E81E: cmp     edi, eax
0x85E820: mov     ebp, eax
0x85E822: jz      short loc_85E855
0x85E824: cmp     edi, ebx
0x85E826: jz      short loc_85E844
0x85E828: lea     ecx, [edi+4]
0x85E82B: push    ecx; lpAddend
0x85E82C: call    dword ptr ds:0A2807Ch
0x85E832: test    eax, eax
0x85E834: jnz     short loc_85E844
0x85E836: cmp     edi, ebx
0x85E838: jz      short loc_85E844
0x85E83A: mov     edx, [edi]
0x85E83C: mov     eax, [edx]
0x85E83E: push    1
0x85E840: mov     ecx, edi
0x85E842: call    eax
0x85E844: cmp     ebp, ebx
0x85E846: mov     [esi+58h], ebp
0x85E849: jz      short loc_85E855
0x85E84B: add     ebp, 4
0x85E84E: push    ebp; lpAddend
0x85E84F: call    dword ptr ds:0A28078h
0x85E855: mov     eax, ds:0B46F6Ch
0x85E85A: mov     edi, [esi+44h]
0x85E85D: cmp     edi, eax
0x85E85F: mov     ebp, eax
0x85E861: jz      short loc_85E894
0x85E863: cmp     edi, ebx
0x85E865: jz      short loc_85E883
0x85E867: lea     ecx, [edi+4]
0x85E86A: push    ecx; lpAddend
0x85E86B: call    dword ptr ds:0A2807Ch
0x85E871: test    eax, eax
0x85E873: jnz     short loc_85E883
0x85E875: cmp     edi, ebx
0x85E877: jz      short loc_85E883
0x85E879: mov     edx, [edi]
0x85E87B: mov     eax, [edx]
0x85E87D: push    1
0x85E87F: mov     ecx, edi
0x85E881: call    eax
0x85E883: cmp     ebp, ebx
0x85E885: mov     [esi+44h], ebp
0x85E888: jz      short loc_85E894
0x85E88A: add     ebp, 4
0x85E88D: push    ebp; lpAddend
0x85E88E: call    dword ptr ds:0A28078h
0x85E894: cmp     [esi+30h], ebx
0x85E897: jnz     short loc_85E8A1
0x85E899: call    sub_772DF0
0x85E89E: mov     [esi+30h], eax
0x85E8A1: mov     ecx, [esi+30h]
0x85E8A4: push    ebx
0x85E8A5: push    1
0x85E8A7: push    7
0x85E8A9: call    sub_772CD0
0x85E8AE: cmp     [esi+30h], ebx
0x85E8B1: jnz     short loc_85E8BB
0x85E8B3: call    sub_772DF0
0x85E8B8: mov     [esi+30h], eax
0x85E8BB: mov     ecx, [esi+30h]
0x85E8BE: push    ebx
0x85E8BF: push    4
0x85E8C1: push    17h
0x85E8C3: call    sub_772CD0
0x85E8C8: cmp     [esi+30h], ebx
0x85E8CB: jnz     short loc_85E8D5
0x85E8CD: call    sub_772DF0
0x85E8D2: mov     [esi+30h], eax
0x85E8D5: mov     ecx, [esi+30h]
0x85E8D8: push    ebx
0x85E8D9: push    1
0x85E8DB: push    0Eh
0x85E8DD: call    sub_772CD0
0x85E8E2: cmp     [esi+30h], ebx
0x85E8E5: jnz     short loc_85E8EF
0x85E8E7: call    sub_772DF0
0x85E8EC: mov     [esi+30h], eax
0x85E8EF: mov     ecx, [esi+30h]
0x85E8F2: push    ebx
0x85E8F3: push    ebx
0x85E8F4: push    34h ; '4'
0x85E8F6: call    sub_772CD0
0x85E8FB: cmp     esi, ds:0B473D8h
0x85E901: mov     dword ptr ds:0B4698Ch, 2
0x85E90B: mov     ds:0B46A64h, ebx
0x85E911: jz      short loc_85E932
0x85E913: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85E917: jnz     short loc_85E920
0x85E919: mov     ecx, esi
0x85E91B: call    sub_7604D0
0x85E920: mov     esi, ds:0B473D8h
0x85E926: cmp     esi, ebx
0x85E928: mov     [esp+2Ch+var_18], esi
0x85E92C: jz      short loc_85E932
0x85E92E: add     dword ptr [esi+60h], 1
0x85E932: push    esi
0x85E933: call    sub_85E570
0x85E938: mov     eax, ds:0B47304h
0x85E93D: mov     edi, [esi+58h]
0x85E940: add     esp, 4
0x85E943: cmp     edi, eax
0x85E945: mov     ebp, eax
0x85E947: jz      short loc_85E97A
0x85E949: cmp     edi, ebx
0x85E94B: jz      short loc_85E969
0x85E94D: lea     ecx, [edi+4]
0x85E950: push    ecx; lpAddend
0x85E951: call    dword ptr ds:0A2807Ch
0x85E957: test    eax, eax
0x85E959: jnz     short loc_85E969
0x85E95B: cmp     edi, ebx
0x85E95D: jz      short loc_85E969
0x85E95F: mov     edx, [edi]
0x85E961: mov     eax, [edx]
0x85E963: push    1
0x85E965: mov     ecx, edi
0x85E967: call    eax
0x85E969: cmp     ebp, ebx
0x85E96B: mov     [esi+58h], ebp
0x85E96E: jz      short loc_85E97A
0x85E970: add     ebp, 4
0x85E973: push    ebp; lpAddend
0x85E974: call    dword ptr ds:0A28078h
0x85E97A: mov     eax, ds:0B46F70h
0x85E97F: mov     edi, [esi+44h]
0x85E982: cmp     edi, eax
0x85E984: mov     ebp, eax
0x85E986: jz      short loc_85E9B9
0x85E988: cmp     edi, ebx
0x85E98A: jz      short loc_85E9A8
0x85E98C: lea     ecx, [edi+4]
0x85E98F: push    ecx; lpAddend
0x85E990: call    dword ptr ds:0A2807Ch
0x85E996: test    eax, eax
0x85E998: jnz     short loc_85E9A8
0x85E99A: cmp     edi, ebx
0x85E99C: jz      short loc_85E9A8
0x85E99E: mov     edx, [edi]
0x85E9A0: mov     eax, [edx]
0x85E9A2: push    1
0x85E9A4: mov     ecx, edi
0x85E9A6: call    eax
0x85E9A8: cmp     ebp, ebx
0x85E9AA: mov     [esi+44h], ebp
0x85E9AD: jz      short loc_85E9B9
0x85E9AF: add     ebp, 4
0x85E9B2: push    ebp; lpAddend
0x85E9B3: call    dword ptr ds:0A28078h
0x85E9B9: cmp     [esi+30h], ebx
0x85E9BC: jnz     short loc_85E9C6
0x85E9BE: call    sub_772DF0
0x85E9C3: mov     [esi+30h], eax
0x85E9C6: mov     ecx, [esi+30h]
0x85E9C9: push    ebx
0x85E9CA: push    1
0x85E9CC: push    7
0x85E9CE: call    sub_772CD0
0x85E9D3: cmp     [esi+30h], ebx
0x85E9D6: jnz     short loc_85E9E0
0x85E9D8: call    sub_772DF0
0x85E9DD: mov     [esi+30h], eax
0x85E9E0: mov     ecx, [esi+30h]
0x85E9E3: push    ebx
0x85E9E4: push    4
0x85E9E6: push    17h
0x85E9E8: call    sub_772CD0
0x85E9ED: cmp     [esi+30h], ebx
0x85E9F0: jnz     short loc_85E9FA
0x85E9F2: call    sub_772DF0
0x85E9F7: mov     [esi+30h], eax
0x85E9FA: mov     ecx, [esi+30h]
0x85E9FD: push    ebx
0x85E9FE: push    1
0x85EA00: push    0Eh
0x85EA02: call    sub_772CD0
0x85EA07: cmp     [esi+30h], ebx
0x85EA0A: jnz     short loc_85EA14
0x85EA0C: call    sub_772DF0
0x85EA11: mov     [esi+30h], eax
0x85EA14: mov     ecx, [esi+30h]
0x85EA17: push    ebx
0x85EA18: push    ebx
0x85EA19: push    34h ; '4'
0x85EA1B: call    sub_772CD0
0x85EA20: cmp     esi, ds:0B473DCh
0x85EA26: mov     dword ptr ds:0B46990h, 0Ch
0x85EA30: mov     ds:0B46A68h, ebx
0x85EA36: jz      short loc_85EA57
0x85EA38: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85EA3C: jnz     short loc_85EA45
0x85EA3E: mov     ecx, esi
0x85EA40: call    sub_7604D0
0x85EA45: mov     esi, ds:0B473DCh
0x85EA4B: cmp     esi, ebx
0x85EA4D: mov     [esp+2Ch+var_18], esi
0x85EA51: jz      short loc_85EA57
0x85EA53: add     dword ptr [esi+60h], 1
0x85EA57: push    esi
0x85EA58: call    sub_85E570
0x85EA5D: mov     eax, ds:0B47288h
0x85EA62: mov     edi, [esi+58h]
0x85EA65: add     esp, 4
0x85EA68: cmp     edi, eax
0x85EA6A: mov     ebp, eax
0x85EA6C: jz      short loc_85EA9F
0x85EA6E: cmp     edi, ebx
0x85EA70: jz      short loc_85EA8E
0x85EA72: lea     ecx, [edi+4]
0x85EA75: push    ecx; lpAddend
0x85EA76: call    dword ptr ds:0A2807Ch
0x85EA7C: test    eax, eax
0x85EA7E: jnz     short loc_85EA8E
0x85EA80: cmp     edi, ebx
0x85EA82: jz      short loc_85EA8E
0x85EA84: mov     edx, [edi]
0x85EA86: mov     eax, [edx]
0x85EA88: push    1
0x85EA8A: mov     ecx, edi
0x85EA8C: call    eax
0x85EA8E: cmp     ebp, ebx
0x85EA90: mov     [esi+58h], ebp
0x85EA93: jz      short loc_85EA9F
0x85EA95: add     ebp, 4
0x85EA98: push    ebp; lpAddend
0x85EA99: call    dword ptr ds:0A28078h
0x85EA9F: mov     eax, ds:0B46ED8h
0x85EAA4: mov     edi, [esi+44h]
0x85EAA7: cmp     edi, eax
0x85EAA9: mov     ebp, eax
0x85EAAB: jz      short loc_85EADE
0x85EAAD: cmp     edi, ebx
0x85EAAF: jz      short loc_85EACD
0x85EAB1: lea     ecx, [edi+4]
0x85EAB4: push    ecx; lpAddend
0x85EAB5: call    dword ptr ds:0A2807Ch
0x85EABB: test    eax, eax
0x85EABD: jnz     short loc_85EACD
0x85EABF: cmp     edi, ebx
0x85EAC1: jz      short loc_85EACD
0x85EAC3: mov     edx, [edi]
0x85EAC5: mov     eax, [edx]
0x85EAC7: push    1
0x85EAC9: mov     ecx, edi
0x85EACB: call    eax
0x85EACD: cmp     ebp, ebx
0x85EACF: mov     [esi+44h], ebp
0x85EAD2: jz      short loc_85EADE
0x85EAD4: add     ebp, 4
0x85EAD7: push    ebp; lpAddend
0x85EAD8: call    dword ptr ds:0A28078h
0x85EADE: cmp     [esi+30h], ebx
0x85EAE1: jnz     short loc_85EAEB
0x85EAE3: call    sub_772DF0
0x85EAE8: mov     [esi+30h], eax
0x85EAEB: mov     ecx, [esi+30h]
0x85EAEE: push    ebx
0x85EAEF: push    1
0x85EAF1: push    7
0x85EAF3: call    sub_772CD0
0x85EAF8: cmp     [esi+30h], ebx
0x85EAFB: jnz     short loc_85EB05
0x85EAFD: call    sub_772DF0
0x85EB02: mov     [esi+30h], eax
0x85EB05: mov     ecx, [esi+30h]
0x85EB08: push    ebx
0x85EB09: push    4
0x85EB0B: push    17h
0x85EB0D: call    sub_772CD0
0x85EB12: cmp     [esi+30h], ebx
0x85EB15: jnz     short loc_85EB1F
0x85EB17: call    sub_772DF0
0x85EB1C: mov     [esi+30h], eax
0x85EB1F: mov     ecx, [esi+30h]
0x85EB22: push    ebx
0x85EB23: push    1
0x85EB25: push    0Eh
0x85EB27: call    sub_772CD0
0x85EB2C: cmp     [esi+30h], ebx
0x85EB2F: jnz     short loc_85EB39
0x85EB31: call    sub_772DF0
0x85EB36: mov     [esi+30h], eax
0x85EB39: mov     ecx, [esi+30h]
0x85EB3C: push    ebx
0x85EB3D: push    ebx
0x85EB3E: push    34h ; '4'
0x85EB40: call    sub_772CD0
0x85EB45: cmp     esi, ds:0B473E0h
0x85EB4B: mov     dword ptr ds:0B46994h, 30002h
0x85EB55: mov     dword ptr ds:0B46A6Ch, 16h
0x85EB5F: jz      short loc_85EB80
0x85EB61: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85EB65: jnz     short loc_85EB6E
0x85EB67: mov     ecx, esi
0x85EB69: call    sub_7604D0
0x85EB6E: mov     esi, ds:0B473E0h
0x85EB74: cmp     esi, ebx
0x85EB76: mov     [esp+2Ch+var_18], esi
0x85EB7A: jz      short loc_85EB80
0x85EB7C: add     dword ptr [esi+60h], 1
0x85EB80: push    esi
0x85EB81: call    sub_85E570
0x85EB86: mov     eax, ds:0B4728Ch
0x85EB8B: mov     edi, [esi+58h]
0x85EB8E: add     esp, 4
0x85EB91: cmp     edi, eax
0x85EB93: mov     ebp, eax
0x85EB95: jz      short loc_85EBC8
0x85EB97: cmp     edi, ebx
0x85EB99: jz      short loc_85EBB7
0x85EB9B: lea     ecx, [edi+4]
0x85EB9E: push    ecx; lpAddend
0x85EB9F: call    dword ptr ds:0A2807Ch
0x85EBA5: test    eax, eax
0x85EBA7: jnz     short loc_85EBB7
0x85EBA9: cmp     edi, ebx
0x85EBAB: jz      short loc_85EBB7
0x85EBAD: mov     edx, [edi]
0x85EBAF: mov     eax, [edx]
0x85EBB1: push    1
0x85EBB3: mov     ecx, edi
0x85EBB5: call    eax
0x85EBB7: cmp     ebp, ebx
0x85EBB9: mov     [esi+58h], ebp
0x85EBBC: jz      short loc_85EBC8
0x85EBBE: add     ebp, 4
0x85EBC1: push    ebp; lpAddend
0x85EBC2: call    dword ptr ds:0A28078h
0x85EBC8: mov     eax, ds:0B46ED8h
0x85EBCD: mov     edi, [esi+44h]
0x85EBD0: cmp     edi, eax
0x85EBD2: mov     ebp, eax
0x85EBD4: jz      short loc_85EC07
0x85EBD6: cmp     edi, ebx
0x85EBD8: jz      short loc_85EBF6
0x85EBDA: lea     ecx, [edi+4]
0x85EBDD: push    ecx; lpAddend
0x85EBDE: call    dword ptr ds:0A2807Ch
0x85EBE4: test    eax, eax
0x85EBE6: jnz     short loc_85EBF6
0x85EBE8: cmp     edi, ebx
0x85EBEA: jz      short loc_85EBF6
0x85EBEC: mov     edx, [edi]
0x85EBEE: mov     eax, [edx]
0x85EBF0: push    1
0x85EBF2: mov     ecx, edi
0x85EBF4: call    eax
0x85EBF6: cmp     ebp, ebx
0x85EBF8: mov     [esi+44h], ebp
0x85EBFB: jz      short loc_85EC07
0x85EBFD: add     ebp, 4
0x85EC00: push    ebp; lpAddend
0x85EC01: call    dword ptr ds:0A28078h
0x85EC07: cmp     [esi+30h], ebx
0x85EC0A: jnz     short loc_85EC14
0x85EC0C: call    sub_772DF0
0x85EC11: mov     [esi+30h], eax
0x85EC14: mov     ecx, [esi+30h]
0x85EC17: push    ebx
0x85EC18: push    1
0x85EC1A: push    7
0x85EC1C: call    sub_772CD0
0x85EC21: cmp     [esi+30h], ebx
0x85EC24: jnz     short loc_85EC2E
0x85EC26: call    sub_772DF0
0x85EC2B: mov     [esi+30h], eax
0x85EC2E: mov     ecx, [esi+30h]
0x85EC31: push    ebx
0x85EC32: push    4
0x85EC34: push    17h
0x85EC36: call    sub_772CD0
0x85EC3B: cmp     [esi+30h], ebx
0x85EC3E: jnz     short loc_85EC48
0x85EC40: call    sub_772DF0
0x85EC45: mov     [esi+30h], eax
0x85EC48: mov     ecx, [esi+30h]
0x85EC4B: push    ebx
0x85EC4C: push    1
0x85EC4E: push    0Eh
0x85EC50: call    sub_772CD0
0x85EC55: cmp     [esi+30h], ebx
0x85EC58: jnz     short loc_85EC62
0x85EC5A: call    sub_772DF0
0x85EC5F: mov     [esi+30h], eax
0x85EC62: mov     ecx, [esi+30h]
0x85EC65: push    0
0x85EC67: push    0
0x85EC69: push    34h ; '4'
0x85EC6B: call    sub_772CD0
0x85EC70: cmp     esi, ds:0B473E4h
0x85EC76: mov     ebx, 3000Ch
0x85EC7B: mov     ds:0B46998h, ebx
0x85EC81: mov     dword ptr ds:0B46A70h, 16h
0x85EC8B: jz      short loc_85ECAC
0x85EC8D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85EC91: jnz     short loc_85EC9A
0x85EC93: mov     ecx, esi
0x85EC95: call    sub_7604D0
0x85EC9A: mov     esi, ds:0B473E4h
0x85ECA0: test    esi, esi
0x85ECA2: mov     [esp+2Ch+var_18], esi
0x85ECA6: jz      short loc_85ECAC
0x85ECA8: add     dword ptr [esi+60h], 1
0x85ECAC: push    esi
0x85ECAD: call    sub_85E570
0x85ECB2: mov     eax, ds:0B47290h
0x85ECB7: mov     edi, [esi+58h]
0x85ECBA: add     esp, 4
0x85ECBD: cmp     edi, eax
0x85ECBF: mov     ebp, eax
0x85ECC1: jz      short loc_85ECF4
0x85ECC3: test    edi, edi
0x85ECC5: jz      short loc_85ECE3
0x85ECC7: lea     ecx, [edi+4]
0x85ECCA: push    ecx; lpAddend
0x85ECCB: call    dword ptr ds:0A2807Ch
0x85ECD1: test    eax, eax
0x85ECD3: jnz     short loc_85ECE3
0x85ECD5: test    edi, edi
0x85ECD7: jz      short loc_85ECE3
0x85ECD9: mov     edx, [edi]
0x85ECDB: mov     eax, [edx]
0x85ECDD: push    1
0x85ECDF: mov     ecx, edi
0x85ECE1: call    eax
0x85ECE3: test    ebp, ebp
0x85ECE5: mov     [esi+58h], ebp
0x85ECE8: jz      short loc_85ECF4
0x85ECEA: add     ebp, 4
0x85ECED: push    ebp; lpAddend
0x85ECEE: call    dword ptr ds:0A28078h
0x85ECF4: mov     eax, ds:0B46EE0h
0x85ECF9: mov     edi, [esi+44h]
0x85ECFC: cmp     edi, eax
0x85ECFE: mov     ebp, eax
0x85ED00: jz      short loc_85ED33
0x85ED02: test    edi, edi
0x85ED04: jz      short loc_85ED22
0x85ED06: lea     ecx, [edi+4]
0x85ED09: push    ecx; lpAddend
0x85ED0A: call    dword ptr ds:0A2807Ch
0x85ED10: test    eax, eax
0x85ED12: jnz     short loc_85ED22
0x85ED14: test    edi, edi
0x85ED16: jz      short loc_85ED22
0x85ED18: mov     edx, [edi]
0x85ED1A: mov     eax, [edx]
0x85ED1C: push    1
0x85ED1E: mov     ecx, edi
0x85ED20: call    eax
0x85ED22: test    ebp, ebp
0x85ED24: mov     [esi+44h], ebp
0x85ED27: jz      short loc_85ED33
0x85ED29: add     ebp, 4
0x85ED2C: push    ebp; lpAddend
0x85ED2D: call    dword ptr ds:0A28078h
0x85ED33: cmp     dword ptr [esi+30h], 0
0x85ED37: jnz     short loc_85ED41
0x85ED39: call    sub_772DF0
0x85ED3E: mov     [esi+30h], eax
0x85ED41: mov     ecx, [esi+30h]
0x85ED44: push    0
0x85ED46: push    1
0x85ED48: push    7
0x85ED4A: call    sub_772CD0
0x85ED4F: cmp     dword ptr [esi+30h], 0
0x85ED53: jnz     short loc_85ED5D
0x85ED55: call    sub_772DF0
0x85ED5A: mov     [esi+30h], eax
0x85ED5D: mov     ecx, [esi+30h]
0x85ED60: push    0
0x85ED62: push    4
0x85ED64: push    17h
0x85ED66: call    sub_772CD0
0x85ED6B: cmp     dword ptr [esi+30h], 0
0x85ED6F: jnz     short loc_85ED79
0x85ED71: call    sub_772DF0
0x85ED76: mov     [esi+30h], eax
0x85ED79: mov     ecx, [esi+30h]
0x85ED7C: push    0
0x85ED7E: push    1
0x85ED80: push    0Eh
0x85ED82: call    sub_772CD0
0x85ED87: cmp     dword ptr [esi+30h], 0
0x85ED8B: jnz     short loc_85ED95
0x85ED8D: call    sub_772DF0
0x85ED92: mov     [esi+30h], eax
0x85ED95: mov     ecx, [esi+30h]
0x85ED98: push    0
0x85ED9A: push    0
0x85ED9C: push    34h ; '4'
0x85ED9E: call    sub_772CD0
0x85EDA3: cmp     esi, ds:0B473E8h
0x85EDA9: mov     dword ptr ds:0B4699Ch, 30002h
0x85EDB3: mov     dword ptr ds:0B46A74h, 1Eh
0x85EDBD: jz      short loc_85EDDE
0x85EDBF: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85EDC3: jnz     short loc_85EDCC
0x85EDC5: mov     ecx, esi
0x85EDC7: call    sub_7604D0
0x85EDCC: mov     esi, ds:0B473E8h
0x85EDD2: test    esi, esi
0x85EDD4: mov     [esp+2Ch+var_18], esi
0x85EDD8: jz      short loc_85EDDE
0x85EDDA: add     dword ptr [esi+60h], 1
0x85EDDE: push    esi
0x85EDDF: call    sub_85E570
0x85EDE4: mov     eax, ds:0B47288h
0x85EDE9: mov     edi, [esi+58h]
0x85EDEC: add     esp, 4
0x85EDEF: cmp     edi, eax
0x85EDF1: mov     ebp, eax
0x85EDF3: jz      short loc_85EE26
0x85EDF5: test    edi, edi
0x85EDF7: jz      short loc_85EE15
0x85EDF9: lea     ecx, [edi+4]
0x85EDFC: push    ecx; lpAddend
0x85EDFD: call    dword ptr ds:0A2807Ch
0x85EE03: test    eax, eax
0x85EE05: jnz     short loc_85EE15
0x85EE07: test    edi, edi
0x85EE09: jz      short loc_85EE15
0x85EE0B: mov     edx, [edi]
0x85EE0D: mov     eax, [edx]
0x85EE0F: push    1
0x85EE11: mov     ecx, edi
0x85EE13: call    eax
0x85EE15: test    ebp, ebp
0x85EE17: mov     [esi+58h], ebp
0x85EE1A: jz      short loc_85EE26
0x85EE1C: add     ebp, 4
0x85EE1F: push    ebp; lpAddend
0x85EE20: call    dword ptr ds:0A28078h
0x85EE26: mov     eax, ds:0B46EE8h
0x85EE2B: mov     edi, [esi+44h]
0x85EE2E: cmp     edi, eax
0x85EE30: mov     ebp, eax
0x85EE32: jz      short loc_85EE65
0x85EE34: test    edi, edi
0x85EE36: jz      short loc_85EE54
0x85EE38: lea     ecx, [edi+4]
0x85EE3B: push    ecx; lpAddend
0x85EE3C: call    dword ptr ds:0A2807Ch
0x85EE42: test    eax, eax
0x85EE44: jnz     short loc_85EE54
0x85EE46: test    edi, edi
0x85EE48: jz      short loc_85EE54
0x85EE4A: mov     edx, [edi]
0x85EE4C: mov     eax, [edx]
0x85EE4E: push    1
0x85EE50: mov     ecx, edi
0x85EE52: call    eax
0x85EE54: test    ebp, ebp
0x85EE56: mov     [esi+44h], ebp
0x85EE59: jz      short loc_85EE65
0x85EE5B: add     ebp, 4
0x85EE5E: push    ebp; lpAddend
0x85EE5F: call    dword ptr ds:0A28078h
0x85EE65: cmp     dword ptr [esi+30h], 0
0x85EE69: jnz     short loc_85EE73
0x85EE6B: call    sub_772DF0
0x85EE70: mov     [esi+30h], eax
0x85EE73: mov     ecx, [esi+30h]
0x85EE76: push    0
0x85EE78: push    1
0x85EE7A: push    7
0x85EE7C: call    sub_772CD0
0x85EE81: cmp     dword ptr [esi+30h], 0
0x85EE85: jnz     short loc_85EE8F
0x85EE87: call    sub_772DF0
0x85EE8C: mov     [esi+30h], eax
0x85EE8F: mov     ecx, [esi+30h]
0x85EE92: push    0
0x85EE94: push    4
0x85EE96: push    17h
0x85EE98: call    sub_772CD0
0x85EE9D: cmp     dword ptr [esi+30h], 0
0x85EEA1: jnz     short loc_85EEAB
0x85EEA3: call    sub_772DF0
0x85EEA8: mov     [esi+30h], eax
0x85EEAB: mov     ecx, [esi+30h]
0x85EEAE: push    0
0x85EEB0: push    1
0x85EEB2: push    0Eh
0x85EEB4: call    sub_772CD0
0x85EEB9: cmp     dword ptr [esi+30h], 0
0x85EEBD: jnz     short loc_85EEC7
0x85EEBF: call    sub_772DF0
0x85EEC4: mov     [esi+30h], eax
0x85EEC7: mov     ecx, [esi+30h]
0x85EECA: push    0
0x85EECC: push    0
0x85EECE: push    34h ; '4'
0x85EED0: call    sub_772CD0
0x85EED5: cmp     esi, ds:0B473ECh
0x85EEDB: mov     dword ptr ds:0B469A0h, 30002h
0x85EEE5: mov     dword ptr ds:0B46A78h, 16h
0x85EEEF: jz      short loc_85EF10
0x85EEF1: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85EEF5: jnz     short loc_85EEFE
0x85EEF7: mov     ecx, esi
0x85EEF9: call    sub_7604D0
0x85EEFE: mov     esi, ds:0B473ECh
0x85EF04: test    esi, esi
0x85EF06: mov     [esp+2Ch+var_18], esi
0x85EF0A: jz      short loc_85EF10
0x85EF0C: add     dword ptr [esi+60h], 1
0x85EF10: push    esi
0x85EF11: call    sub_85E570
0x85EF16: mov     eax, ds:0B47288h
0x85EF1B: mov     edi, [esi+58h]
0x85EF1E: add     esp, 4
0x85EF21: cmp     edi, eax
0x85EF23: mov     ebp, eax
0x85EF25: jz      short loc_85EF58
0x85EF27: test    edi, edi
0x85EF29: jz      short loc_85EF47
0x85EF2B: lea     ecx, [edi+4]
0x85EF2E: push    ecx; lpAddend
0x85EF2F: call    dword ptr ds:0A2807Ch
0x85EF35: test    eax, eax
0x85EF37: jnz     short loc_85EF47
0x85EF39: test    edi, edi
0x85EF3B: jz      short loc_85EF47
0x85EF3D: mov     edx, [edi]
0x85EF3F: mov     eax, [edx]
0x85EF41: push    1
0x85EF43: mov     ecx, edi
0x85EF45: call    eax
0x85EF47: test    ebp, ebp
0x85EF49: mov     [esi+58h], ebp
0x85EF4C: jz      short loc_85EF58
0x85EF4E: add     ebp, 4
0x85EF51: push    ebp; lpAddend
0x85EF52: call    dword ptr ds:0A28078h
0x85EF58: mov     eax, ds:0B46EF0h
0x85EF5D: mov     edi, [esi+44h]
0x85EF60: cmp     edi, eax
0x85EF62: mov     ebp, eax
0x85EF64: jz      short loc_85EF97
0x85EF66: test    edi, edi
0x85EF68: jz      short loc_85EF86
0x85EF6A: lea     ecx, [edi+4]
0x85EF6D: push    ecx; lpAddend
0x85EF6E: call    dword ptr ds:0A2807Ch
0x85EF74: test    eax, eax
0x85EF76: jnz     short loc_85EF86
0x85EF78: test    edi, edi
0x85EF7A: jz      short loc_85EF86
0x85EF7C: mov     edx, [edi]
0x85EF7E: mov     eax, [edx]
0x85EF80: push    1
0x85EF82: mov     ecx, edi
0x85EF84: call    eax
0x85EF86: test    ebp, ebp
0x85EF88: mov     [esi+44h], ebp
0x85EF8B: jz      short loc_85EF97
0x85EF8D: add     ebp, 4
0x85EF90: push    ebp; lpAddend
0x85EF91: call    dword ptr ds:0A28078h
0x85EF97: cmp     dword ptr [esi+30h], 0
0x85EF9B: jnz     short loc_85EFA5
0x85EF9D: call    sub_772DF0
0x85EFA2: mov     [esi+30h], eax
0x85EFA5: mov     ecx, [esi+30h]
0x85EFA8: push    0
0x85EFAA: push    1
0x85EFAC: push    7
0x85EFAE: call    sub_772CD0
0x85EFB3: cmp     dword ptr [esi+30h], 0
0x85EFB7: jnz     short loc_85EFC1
0x85EFB9: call    sub_772DF0
0x85EFBE: mov     [esi+30h], eax
0x85EFC1: mov     ecx, [esi+30h]
0x85EFC4: push    0
0x85EFC6: push    4
0x85EFC8: push    17h
0x85EFCA: call    sub_772CD0
0x85EFCF: cmp     dword ptr [esi+30h], 0
0x85EFD3: jnz     short loc_85EFDD
0x85EFD5: call    sub_772DF0
0x85EFDA: mov     [esi+30h], eax
0x85EFDD: mov     ecx, [esi+30h]
0x85EFE0: push    0
0x85EFE2: push    1
0x85EFE4: push    0Eh
0x85EFE6: call    sub_772CD0
0x85EFEB: cmp     dword ptr [esi+30h], 0
0x85EFEF: jnz     short loc_85EFF9
0x85EFF1: call    sub_772DF0
0x85EFF6: mov     [esi+30h], eax
0x85EFF9: mov     ecx, [esi+30h]
0x85EFFC: push    0
0x85EFFE: push    0
0x85F000: push    34h ; '4'
0x85F002: call    sub_772CD0
0x85F007: cmp     esi, ds:0B473F0h
0x85F00D: mov     dword ptr ds:0B469A4h, 30002h
0x85F017: mov     dword ptr ds:0B46A7Ch, 16h
0x85F021: jz      short loc_85F042
0x85F023: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85F027: jnz     short loc_85F030
0x85F029: mov     ecx, esi
0x85F02B: call    sub_7604D0
0x85F030: mov     esi, ds:0B473F0h
0x85F036: test    esi, esi
0x85F038: mov     [esp+2Ch+var_18], esi
0x85F03C: jz      short loc_85F042
0x85F03E: add     dword ptr [esi+60h], 1
0x85F042: push    esi
0x85F043: call    sub_85E570
0x85F048: mov     eax, ds:0B4728Ch
0x85F04D: mov     edi, [esi+58h]
0x85F050: add     esp, 4
0x85F053: cmp     edi, eax
0x85F055: mov     ebp, eax
0x85F057: jz      short loc_85F08A
0x85F059: test    edi, edi
0x85F05B: jz      short loc_85F079
0x85F05D: lea     ecx, [edi+4]
0x85F060: push    ecx; lpAddend
0x85F061: call    dword ptr ds:0A2807Ch
0x85F067: test    eax, eax
0x85F069: jnz     short loc_85F079
0x85F06B: test    edi, edi
0x85F06D: jz      short loc_85F079
0x85F06F: mov     edx, [edi]
0x85F071: mov     eax, [edx]
0x85F073: push    1
0x85F075: mov     ecx, edi
0x85F077: call    eax
0x85F079: test    ebp, ebp
0x85F07B: mov     [esi+58h], ebp
0x85F07E: jz      short loc_85F08A
0x85F080: add     ebp, 4
0x85F083: push    ebp; lpAddend
0x85F084: call    dword ptr ds:0A28078h
0x85F08A: mov     eax, ds:0B46EF0h
0x85F08F: mov     edi, [esi+44h]
0x85F092: cmp     edi, eax
0x85F094: mov     ebp, eax
0x85F096: jz      short loc_85F0C9
0x85F098: test    edi, edi
0x85F09A: jz      short loc_85F0B8
0x85F09C: lea     ecx, [edi+4]
0x85F09F: push    ecx; lpAddend
0x85F0A0: call    dword ptr ds:0A2807Ch
0x85F0A6: test    eax, eax
0x85F0A8: jnz     short loc_85F0B8
0x85F0AA: test    edi, edi
0x85F0AC: jz      short loc_85F0B8
0x85F0AE: mov     edx, [edi]
0x85F0B0: mov     eax, [edx]
0x85F0B2: push    1
0x85F0B4: mov     ecx, edi
0x85F0B6: call    eax
0x85F0B8: test    ebp, ebp
0x85F0BA: mov     [esi+44h], ebp
0x85F0BD: jz      short loc_85F0C9
0x85F0BF: add     ebp, 4
0x85F0C2: push    ebp; lpAddend
0x85F0C3: call    dword ptr ds:0A28078h
0x85F0C9: cmp     dword ptr [esi+30h], 0
0x85F0CD: jnz     short loc_85F0D7
0x85F0CF: call    sub_772DF0
0x85F0D4: mov     [esi+30h], eax
0x85F0D7: mov     ecx, [esi+30h]
0x85F0DA: push    0
0x85F0DC: push    1
0x85F0DE: push    7
0x85F0E0: call    sub_772CD0
0x85F0E5: cmp     dword ptr [esi+30h], 0
0x85F0E9: jnz     short loc_85F0F3
0x85F0EB: call    sub_772DF0
0x85F0F0: mov     [esi+30h], eax
0x85F0F3: mov     ecx, [esi+30h]
0x85F0F6: push    0
0x85F0F8: push    4
0x85F0FA: push    17h
0x85F0FC: call    sub_772CD0
0x85F101: cmp     dword ptr [esi+30h], 0
0x85F105: jnz     short loc_85F10F
0x85F107: call    sub_772DF0
0x85F10C: mov     [esi+30h], eax
0x85F10F: mov     ecx, [esi+30h]
0x85F112: push    0
0x85F114: push    1
0x85F116: push    0Eh
0x85F118: call    sub_772CD0
0x85F11D: cmp     dword ptr [esi+30h], 0
0x85F121: jnz     short loc_85F12B
0x85F123: call    sub_772DF0
0x85F128: mov     [esi+30h], eax
0x85F12B: mov     ecx, [esi+30h]
0x85F12E: push    0
0x85F130: push    0
0x85F132: push    34h ; '4'
0x85F134: call    sub_772CD0
0x85F139: cmp     esi, ds:0B473F4h
0x85F13F: mov     ds:0B469A8h, ebx
0x85F145: mov     dword ptr ds:0B46A80h, 16h
0x85F14F: jz      short loc_85F170
0x85F151: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85F155: jnz     short loc_85F15E
0x85F157: mov     ecx, esi
0x85F159: call    sub_7604D0
0x85F15E: mov     esi, ds:0B473F4h
0x85F164: test    esi, esi
0x85F166: mov     [esp+2Ch+var_18], esi
0x85F16A: jz      short loc_85F170
0x85F16C: add     dword ptr [esi+60h], 1
0x85F170: push    esi
0x85F171: call    sub_85E570
0x85F176: mov     eax, ds:0B47288h
0x85F17B: mov     edi, [esi+58h]
0x85F17E: add     esp, 4
0x85F181: cmp     edi, eax
0x85F183: mov     ebp, eax
0x85F185: jz      short loc_85F1B8
0x85F187: test    edi, edi
0x85F189: jz      short loc_85F1A7
0x85F18B: lea     ecx, [edi+4]
0x85F18E: push    ecx; lpAddend
0x85F18F: call    dword ptr ds:0A2807Ch
0x85F195: test    eax, eax
0x85F197: jnz     short loc_85F1A7
0x85F199: test    edi, edi
0x85F19B: jz      short loc_85F1A7
0x85F19D: mov     edx, [edi]
0x85F19F: mov     eax, [edx]
0x85F1A1: push    1
0x85F1A3: mov     ecx, edi
0x85F1A5: call    eax
0x85F1A7: test    ebp, ebp
0x85F1A9: mov     [esi+58h], ebp
0x85F1AC: jz      short loc_85F1B8
0x85F1AE: add     ebp, 4
0x85F1B1: push    ebp; lpAddend
0x85F1B2: call    dword ptr ds:0A28078h
0x85F1B8: mov     eax, ds:0B46EF8h
0x85F1BD: mov     edi, [esi+44h]
0x85F1C0: cmp     edi, eax
0x85F1C2: mov     ebp, eax
0x85F1C4: jz      short loc_85F1F7
0x85F1C6: test    edi, edi
0x85F1C8: jz      short loc_85F1E6
0x85F1CA: lea     ecx, [edi+4]
0x85F1CD: push    ecx; lpAddend
0x85F1CE: call    dword ptr ds:0A2807Ch
0x85F1D4: test    eax, eax
0x85F1D6: jnz     short loc_85F1E6
0x85F1D8: test    edi, edi
0x85F1DA: jz      short loc_85F1E6
0x85F1DC: mov     edx, [edi]
0x85F1DE: mov     eax, [edx]
0x85F1E0: push    1
0x85F1E2: mov     ecx, edi
0x85F1E4: call    eax
0x85F1E6: test    ebp, ebp
0x85F1E8: mov     [esi+44h], ebp
0x85F1EB: jz      short loc_85F1F7
0x85F1ED: add     ebp, 4
0x85F1F0: push    ebp; lpAddend
0x85F1F1: call    dword ptr ds:0A28078h
0x85F1F7: cmp     dword ptr [esi+30h], 0
0x85F1FB: jnz     short loc_85F205
0x85F1FD: call    sub_772DF0
0x85F202: mov     [esi+30h], eax
0x85F205: mov     ecx, [esi+30h]
0x85F208: push    0
0x85F20A: push    1
0x85F20C: push    7
0x85F20E: call    sub_772CD0
0x85F213: cmp     dword ptr [esi+30h], 0
0x85F217: jnz     short loc_85F221
0x85F219: call    sub_772DF0
0x85F21E: mov     [esi+30h], eax
0x85F221: mov     ecx, [esi+30h]
0x85F224: push    0
0x85F226: push    4
0x85F228: push    17h
0x85F22A: call    sub_772CD0
0x85F22F: cmp     dword ptr [esi+30h], 0
0x85F233: jnz     short loc_85F23D
0x85F235: call    sub_772DF0
0x85F23A: mov     [esi+30h], eax
0x85F23D: mov     ecx, [esi+30h]
0x85F240: push    0
0x85F242: push    1
0x85F244: push    0Eh
0x85F246: call    sub_772CD0
0x85F24B: cmp     dword ptr [esi+30h], 0
0x85F24F: jnz     short loc_85F259
0x85F251: call    sub_772DF0
0x85F256: mov     [esi+30h], eax
0x85F259: mov     ecx, [esi+30h]
0x85F25C: push    0
0x85F25E: push    0
0x85F260: push    34h ; '4'
0x85F262: call    sub_772CD0
0x85F267: cmp     esi, ds:0B473F8h
0x85F26D: mov     dword ptr ds:0B469ACh, 30002h
0x85F277: mov     dword ptr ds:0B46A84h, 36h ; '6'
0x85F281: jz      short loc_85F2A2
0x85F283: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85F287: jnz     short loc_85F290
0x85F289: mov     ecx, esi
0x85F28B: call    sub_7604D0
0x85F290: mov     esi, ds:0B473F8h
0x85F296: test    esi, esi
0x85F298: mov     [esp+2Ch+var_18], esi
0x85F29C: jz      short loc_85F2A2
0x85F29E: add     dword ptr [esi+60h], 1
0x85F2A2: push    esi
0x85F2A3: call    sub_85E570
0x85F2A8: mov     eax, ds:0B4728Ch
0x85F2AD: mov     edi, [esi+58h]
0x85F2B0: add     esp, 4
0x85F2B3: cmp     edi, eax
0x85F2B5: mov     ebp, eax
0x85F2B7: jz      short loc_85F2EA
0x85F2B9: test    edi, edi
0x85F2BB: jz      short loc_85F2D9
0x85F2BD: lea     ecx, [edi+4]
0x85F2C0: push    ecx; lpAddend
0x85F2C1: call    dword ptr ds:0A2807Ch
0x85F2C7: test    eax, eax
0x85F2C9: jnz     short loc_85F2D9
0x85F2CB: test    edi, edi
0x85F2CD: jz      short loc_85F2D9
0x85F2CF: mov     edx, [edi]
0x85F2D1: mov     eax, [edx]
0x85F2D3: push    1
0x85F2D5: mov     ecx, edi
0x85F2D7: call    eax
0x85F2D9: test    ebp, ebp
0x85F2DB: mov     [esi+58h], ebp
0x85F2DE: jz      short loc_85F2EA
0x85F2E0: add     ebp, 4
0x85F2E3: push    ebp; lpAddend
0x85F2E4: call    dword ptr ds:0A28078h
0x85F2EA: mov     eax, ds:0B46EF8h
0x85F2EF: mov     edi, [esi+44h]
0x85F2F2: cmp     edi, eax
0x85F2F4: mov     ebp, eax
0x85F2F6: jz      short loc_85F329
0x85F2F8: test    edi, edi
0x85F2FA: jz      short loc_85F318
0x85F2FC: lea     ecx, [edi+4]
0x85F2FF: push    ecx; lpAddend
0x85F300: call    dword ptr ds:0A2807Ch
0x85F306: test    eax, eax
0x85F308: jnz     short loc_85F318
0x85F30A: test    edi, edi
0x85F30C: jz      short loc_85F318
0x85F30E: mov     edx, [edi]
0x85F310: mov     eax, [edx]
0x85F312: push    1
0x85F314: mov     ecx, edi
0x85F316: call    eax
0x85F318: test    ebp, ebp
0x85F31A: mov     [esi+44h], ebp
0x85F31D: jz      short loc_85F329
0x85F31F: add     ebp, 4
0x85F322: push    ebp; lpAddend
0x85F323: call    dword ptr ds:0A28078h
0x85F329: cmp     dword ptr [esi+30h], 0
0x85F32D: jnz     short loc_85F337
0x85F32F: call    sub_772DF0
0x85F334: mov     [esi+30h], eax
0x85F337: mov     ecx, [esi+30h]
0x85F33A: push    0
0x85F33C: push    1
0x85F33E: push    7
0x85F340: call    sub_772CD0
0x85F345: cmp     dword ptr [esi+30h], 0
0x85F349: jnz     short loc_85F353
0x85F34B: call    sub_772DF0
0x85F350: mov     [esi+30h], eax
0x85F353: mov     ecx, [esi+30h]
0x85F356: push    0
0x85F358: push    4
0x85F35A: push    17h
0x85F35C: call    sub_772CD0
0x85F361: cmp     dword ptr [esi+30h], 0
0x85F365: jnz     short loc_85F36F
0x85F367: call    sub_772DF0
0x85F36C: mov     [esi+30h], eax
0x85F36F: mov     ecx, [esi+30h]
0x85F372: push    0
0x85F374: push    1
0x85F376: push    0Eh
0x85F378: call    sub_772CD0
0x85F37D: cmp     dword ptr [esi+30h], 0
0x85F381: jnz     short loc_85F38B
0x85F383: call    sub_772DF0
0x85F388: mov     [esi+30h], eax
0x85F38B: mov     ecx, [esi+30h]
0x85F38E: push    0
0x85F390: push    0
0x85F392: push    34h ; '4'
0x85F394: call    sub_772CD0
0x85F399: cmp     esi, ds:0B473FCh
0x85F39F: mov     ds:0B469B0h, ebx
0x85F3A5: mov     dword ptr ds:0B46A88h, 36h ; '6'
0x85F3AF: jz      short loc_85F3D0
0x85F3B1: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85F3B5: jnz     short loc_85F3BE
0x85F3B7: mov     ecx, esi
0x85F3B9: call    sub_7604D0
0x85F3BE: mov     esi, ds:0B473FCh
0x85F3C4: test    esi, esi
0x85F3C6: mov     [esp+2Ch+var_18], esi
0x85F3CA: jz      short loc_85F3D0
0x85F3CC: add     dword ptr [esi+60h], 1
0x85F3D0: push    esi
0x85F3D1: call    sub_85E570
0x85F3D6: mov     eax, ds:0B47290h
0x85F3DB: mov     edi, [esi+58h]
0x85F3DE: add     esp, 4
0x85F3E1: cmp     edi, eax
0x85F3E3: mov     ebp, eax
0x85F3E5: jz      short loc_85F418
0x85F3E7: test    edi, edi
0x85F3E9: jz      short loc_85F407
0x85F3EB: lea     ecx, [edi+4]
0x85F3EE: push    ecx; lpAddend
0x85F3EF: call    dword ptr ds:0A2807Ch
0x85F3F5: test    eax, eax
0x85F3F7: jnz     short loc_85F407
0x85F3F9: test    edi, edi
0x85F3FB: jz      short loc_85F407
0x85F3FD: mov     edx, [edi]
0x85F3FF: mov     eax, [edx]
0x85F401: push    1
0x85F403: mov     ecx, edi
0x85F405: call    eax
0x85F407: test    ebp, ebp
0x85F409: mov     [esi+58h], ebp
0x85F40C: jz      short loc_85F418
0x85F40E: add     ebp, 4
0x85F411: push    ebp; lpAddend
0x85F412: call    dword ptr ds:0A28078h
0x85F418: mov     eax, ds:0B46ED8h
0x85F41D: mov     edi, [esi+44h]
0x85F420: cmp     edi, eax
0x85F422: mov     ebp, eax
0x85F424: jz      short loc_85F457
0x85F426: test    edi, edi
0x85F428: jz      short loc_85F446
0x85F42A: lea     ecx, [edi+4]
0x85F42D: push    ecx; lpAddend
0x85F42E: call    dword ptr ds:0A2807Ch
0x85F434: test    eax, eax
0x85F436: jnz     short loc_85F446
0x85F438: test    edi, edi
0x85F43A: jz      short loc_85F446
0x85F43C: mov     edx, [edi]
0x85F43E: mov     eax, [edx]
0x85F440: push    1
0x85F442: mov     ecx, edi
0x85F444: call    eax
0x85F446: test    ebp, ebp
0x85F448: mov     [esi+44h], ebp
0x85F44B: jz      short loc_85F457
0x85F44D: add     ebp, 4
0x85F450: push    ebp; lpAddend
0x85F451: call    dword ptr ds:0A28078h
0x85F457: cmp     dword ptr [esi+30h], 0
0x85F45B: jnz     short loc_85F465
0x85F45D: call    sub_772DF0
0x85F462: mov     [esi+30h], eax
0x85F465: mov     ecx, [esi+30h]
0x85F468: push    0
0x85F46A: push    1
0x85F46C: push    7
0x85F46E: call    sub_772CD0
0x85F473: cmp     dword ptr [esi+30h], 0
0x85F477: jnz     short loc_85F481
0x85F479: call    sub_772DF0
0x85F47E: mov     [esi+30h], eax
0x85F481: mov     ecx, [esi+30h]
0x85F484: push    0
0x85F486: push    4
0x85F488: push    17h
0x85F48A: call    sub_772CD0
0x85F48F: cmp     dword ptr [esi+30h], 0
0x85F493: jnz     short loc_85F49D
0x85F495: call    sub_772DF0
0x85F49A: mov     [esi+30h], eax
0x85F49D: mov     ecx, [esi+30h]
0x85F4A0: push    0
0x85F4A2: push    1
0x85F4A4: push    0Eh
0x85F4A6: call    sub_772CD0
0x85F4AB: cmp     dword ptr [esi+30h], 0
0x85F4AF: jnz     short loc_85F4B9
0x85F4B1: call    sub_772DF0
0x85F4B6: mov     [esi+30h], eax
0x85F4B9: mov     ecx, [esi+30h]
0x85F4BC: push    0
0x85F4BE: push    0
0x85F4C0: push    34h ; '4'
0x85F4C2: call    sub_772CD0
0x85F4C7: cmp     esi, ds:0B47400h
0x85F4CD: mov     dword ptr ds:0B469B4h, 30002h
0x85F4D7: mov     dword ptr ds:0B46A8Ch, 16h
0x85F4E1: jz      short loc_85F502
0x85F4E3: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85F4E7: jnz     short loc_85F4F0
0x85F4E9: mov     ecx, esi
0x85F4EB: call    sub_7604D0
0x85F4F0: mov     esi, ds:0B47400h
0x85F4F6: test    esi, esi
0x85F4F8: mov     [esp+2Ch+var_18], esi
0x85F4FC: jz      short loc_85F502
0x85F4FE: add     dword ptr [esi+60h], 1
0x85F502: push    esi
0x85F503: call    sub_85E570
0x85F508: mov     eax, ds:0B47294h
0x85F50D: mov     edi, [esi+58h]
0x85F510: add     esp, 4
0x85F513: cmp     edi, eax
0x85F515: mov     ebp, eax
0x85F517: jz      short loc_85F54A
0x85F519: test    edi, edi
0x85F51B: jz      short loc_85F539
0x85F51D: lea     ecx, [edi+4]
0x85F520: push    ecx; lpAddend
0x85F521: call    dword ptr ds:0A2807Ch
0x85F527: test    eax, eax
0x85F529: jnz     short loc_85F539
0x85F52B: test    edi, edi
0x85F52D: jz      short loc_85F539
0x85F52F: mov     edx, [edi]
0x85F531: mov     eax, [edx]
0x85F533: push    1
0x85F535: mov     ecx, edi
0x85F537: call    eax
0x85F539: test    ebp, ebp
0x85F53B: mov     [esi+58h], ebp
0x85F53E: jz      short loc_85F54A
0x85F540: add     ebp, 4
0x85F543: push    ebp; lpAddend
0x85F544: call    dword ptr ds:0A28078h
0x85F54A: mov     eax, ds:0B46ED8h
0x85F54F: mov     edi, [esi+44h]
0x85F552: cmp     edi, eax
0x85F554: mov     ebp, eax
0x85F556: jz      short loc_85F589
0x85F558: test    edi, edi
0x85F55A: jz      short loc_85F578
0x85F55C: lea     ecx, [edi+4]
0x85F55F: push    ecx; lpAddend
0x85F560: call    dword ptr ds:0A2807Ch
0x85F566: test    eax, eax
0x85F568: jnz     short loc_85F578
0x85F56A: test    edi, edi
0x85F56C: jz      short loc_85F578
0x85F56E: mov     edx, [edi]
0x85F570: mov     eax, [edx]
0x85F572: push    1
0x85F574: mov     ecx, edi
0x85F576: call    eax
0x85F578: test    ebp, ebp
0x85F57A: mov     [esi+44h], ebp
0x85F57D: jz      short loc_85F589
0x85F57F: add     ebp, 4
0x85F582: push    ebp; lpAddend
0x85F583: call    dword ptr ds:0A28078h
0x85F589: cmp     dword ptr [esi+30h], 0
0x85F58D: jnz     short loc_85F597
0x85F58F: call    sub_772DF0
0x85F594: mov     [esi+30h], eax
0x85F597: mov     ecx, [esi+30h]
0x85F59A: push    0
0x85F59C: push    1
0x85F59E: push    7
0x85F5A0: call    sub_772CD0
0x85F5A5: cmp     dword ptr [esi+30h], 0
0x85F5A9: jnz     short loc_85F5B3
0x85F5AB: call    sub_772DF0
0x85F5B0: mov     [esi+30h], eax
0x85F5B3: mov     ecx, [esi+30h]
0x85F5B6: push    0
0x85F5B8: push    4
0x85F5BA: push    17h
0x85F5BC: call    sub_772CD0
0x85F5C1: cmp     dword ptr [esi+30h], 0
0x85F5C5: jnz     short loc_85F5CF
0x85F5C7: call    sub_772DF0
0x85F5CC: mov     [esi+30h], eax
0x85F5CF: mov     ecx, [esi+30h]
0x85F5D2: push    0
0x85F5D4: push    1
0x85F5D6: push    0Eh
0x85F5D8: call    sub_772CD0
0x85F5DD: cmp     dword ptr [esi+30h], 0
0x85F5E1: jnz     short loc_85F5EB
0x85F5E3: call    sub_772DF0
0x85F5E8: mov     [esi+30h], eax
0x85F5EB: mov     ecx, [esi+30h]
0x85F5EE: push    0
0x85F5F0: push    0
0x85F5F2: push    34h ; '4'
0x85F5F4: call    sub_772CD0
0x85F5F9: cmp     esi, ds:0B47404h
0x85F5FF: mov     ds:0B469B8h, ebx
0x85F605: mov     dword ptr ds:0B46A90h, 16h
0x85F60F: jz      short loc_85F630
0x85F611: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85F615: jnz     short loc_85F61E
0x85F617: mov     ecx, esi
0x85F619: call    sub_7604D0
0x85F61E: mov     esi, ds:0B47404h
0x85F624: test    esi, esi
0x85F626: mov     [esp+2Ch+var_18], esi
0x85F62A: jz      short loc_85F630
0x85F62C: add     dword ptr [esi+60h], 1
0x85F630: push    esi
0x85F631: call    sub_85E570
0x85F636: mov     eax, ds:0B47290h
0x85F63B: mov     edi, [esi+58h]
0x85F63E: add     esp, 4
0x85F641: cmp     edi, eax
0x85F643: mov     ebp, eax
0x85F645: jz      short loc_85F678
0x85F647: test    edi, edi
0x85F649: jz      short loc_85F667
0x85F64B: lea     ecx, [edi+4]
0x85F64E: push    ecx; lpAddend
0x85F64F: call    dword ptr ds:0A2807Ch
0x85F655: test    eax, eax
0x85F657: jnz     short loc_85F667
0x85F659: test    edi, edi
0x85F65B: jz      short loc_85F667
0x85F65D: mov     edx, [edi]
0x85F65F: mov     eax, [edx]
0x85F661: push    1
0x85F663: mov     ecx, edi
0x85F665: call    eax
0x85F667: test    ebp, ebp
0x85F669: mov     [esi+58h], ebp
0x85F66C: jz      short loc_85F678
0x85F66E: add     ebp, 4
0x85F671: push    ebp; lpAddend
0x85F672: call    dword ptr ds:0A28078h
0x85F678: mov     eax, ds:0B46EE8h
0x85F67D: mov     edi, [esi+44h]
0x85F680: cmp     edi, eax
0x85F682: mov     ebp, eax
0x85F684: jz      short loc_85F6B7
0x85F686: test    edi, edi
0x85F688: jz      short loc_85F6A6
0x85F68A: lea     ecx, [edi+4]
0x85F68D: push    ecx; lpAddend
0x85F68E: call    dword ptr ds:0A2807Ch
0x85F694: test    eax, eax
0x85F696: jnz     short loc_85F6A6
0x85F698: test    edi, edi
0x85F69A: jz      short loc_85F6A6
0x85F69C: mov     edx, [edi]
0x85F69E: mov     eax, [edx]
0x85F6A0: push    1
0x85F6A2: mov     ecx, edi
0x85F6A4: call    eax
0x85F6A6: test    ebp, ebp
0x85F6A8: mov     [esi+44h], ebp
0x85F6AB: jz      short loc_85F6B7
0x85F6AD: add     ebp, 4
0x85F6B0: push    ebp; lpAddend
0x85F6B1: call    dword ptr ds:0A28078h
0x85F6B7: cmp     dword ptr [esi+30h], 0
0x85F6BB: jnz     short loc_85F6C5
0x85F6BD: call    sub_772DF0
0x85F6C2: mov     [esi+30h], eax
0x85F6C5: mov     ecx, [esi+30h]
0x85F6C8: push    0
0x85F6CA: push    1
0x85F6CC: push    7
0x85F6CE: call    sub_772CD0
0x85F6D3: cmp     dword ptr [esi+30h], 0
0x85F6D7: jnz     short loc_85F6E1
0x85F6D9: call    sub_772DF0
0x85F6DE: mov     [esi+30h], eax
0x85F6E1: mov     ecx, [esi+30h]
0x85F6E4: push    0
0x85F6E6: push    4
0x85F6E8: push    17h
0x85F6EA: call    sub_772CD0
0x85F6EF: cmp     dword ptr [esi+30h], 0
0x85F6F3: jnz     short loc_85F6FD
0x85F6F5: call    sub_772DF0
0x85F6FA: mov     [esi+30h], eax
0x85F6FD: mov     ecx, [esi+30h]
0x85F700: push    0
0x85F702: push    1
0x85F704: push    0Eh
0x85F706: call    sub_772CD0
0x85F70B: cmp     dword ptr [esi+30h], 0
0x85F70F: jnz     short loc_85F719
0x85F711: call    sub_772DF0
0x85F716: mov     [esi+30h], eax
0x85F719: mov     ecx, [esi+30h]
0x85F71C: push    0
0x85F71E: push    0
0x85F720: push    34h ; '4'
0x85F722: call    sub_772CD0
0x85F727: cmp     esi, ds:0B47408h
0x85F72D: mov     dword ptr ds:0B469BCh, 30012h
0x85F737: mov     dword ptr ds:0B46A94h, 16h
0x85F741: jz      short loc_85F762
0x85F743: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85F747: jnz     short loc_85F750
0x85F749: mov     ecx, esi
0x85F74B: call    sub_7604D0
0x85F750: mov     esi, ds:0B47408h
0x85F756: test    esi, esi
0x85F758: mov     [esp+2Ch+var_18], esi
0x85F75C: jz      short loc_85F762
0x85F75E: add     dword ptr [esi+60h], 1
0x85F762: push    esi
0x85F763: call    sub_85E570
0x85F768: mov     eax, ds:0B47290h
0x85F76D: mov     edi, [esi+58h]
0x85F770: add     esp, 4
0x85F773: cmp     edi, eax
0x85F775: mov     ebp, eax
0x85F777: jz      short loc_85F7AA
0x85F779: test    edi, edi
0x85F77B: jz      short loc_85F799
0x85F77D: lea     ecx, [edi+4]
0x85F780: push    ecx; lpAddend
0x85F781: call    dword ptr ds:0A2807Ch
0x85F787: test    eax, eax
0x85F789: jnz     short loc_85F799
0x85F78B: test    edi, edi
0x85F78D: jz      short loc_85F799
0x85F78F: mov     edx, [edi]
0x85F791: mov     eax, [edx]
0x85F793: push    1
0x85F795: mov     ecx, edi
0x85F797: call    eax
0x85F799: test    ebp, ebp
0x85F79B: mov     [esi+58h], ebp
0x85F79E: jz      short loc_85F7AA
0x85F7A0: add     ebp, 4
0x85F7A3: push    ebp; lpAddend
0x85F7A4: call    dword ptr ds:0A28078h
0x85F7AA: mov     eax, ds:0B46EF8h
0x85F7AF: mov     edi, [esi+44h]
0x85F7B2: cmp     edi, eax
0x85F7B4: mov     ebp, eax
0x85F7B6: jz      short loc_85F7E9
0x85F7B8: test    edi, edi
0x85F7BA: jz      short loc_85F7D8
0x85F7BC: lea     ecx, [edi+4]
0x85F7BF: push    ecx; lpAddend
0x85F7C0: call    dword ptr ds:0A2807Ch
0x85F7C6: test    eax, eax
0x85F7C8: jnz     short loc_85F7D8
0x85F7CA: test    edi, edi
0x85F7CC: jz      short loc_85F7D8
0x85F7CE: mov     edx, [edi]
0x85F7D0: mov     eax, [edx]
0x85F7D2: push    1
0x85F7D4: mov     ecx, edi
0x85F7D6: call    eax
0x85F7D8: test    ebp, ebp
0x85F7DA: mov     [esi+44h], ebp
0x85F7DD: jz      short loc_85F7E9
0x85F7DF: add     ebp, 4
0x85F7E2: push    ebp; lpAddend
0x85F7E3: call    dword ptr ds:0A28078h
0x85F7E9: cmp     dword ptr [esi+30h], 0
0x85F7ED: jnz     short loc_85F7F7
0x85F7EF: call    sub_772DF0
0x85F7F4: mov     [esi+30h], eax
0x85F7F7: mov     ecx, [esi+30h]
0x85F7FA: push    0
0x85F7FC: push    1
0x85F7FE: push    7
0x85F800: call    sub_772CD0
0x85F805: cmp     dword ptr [esi+30h], 0
0x85F809: jnz     short loc_85F813
0x85F80B: call    sub_772DF0
0x85F810: mov     [esi+30h], eax
0x85F813: mov     ecx, [esi+30h]
0x85F816: push    0
0x85F818: push    4
0x85F81A: push    17h
0x85F81C: call    sub_772CD0
0x85F821: cmp     dword ptr [esi+30h], 0
0x85F825: jnz     short loc_85F82F
0x85F827: call    sub_772DF0
0x85F82C: mov     [esi+30h], eax
0x85F82F: mov     ecx, [esi+30h]
0x85F832: push    0
0x85F834: push    1
0x85F836: push    0Eh
0x85F838: call    sub_772CD0
0x85F83D: cmp     dword ptr [esi+30h], 0
0x85F841: jnz     short loc_85F84B
0x85F843: call    sub_772DF0
0x85F848: mov     [esi+30h], eax
0x85F84B: mov     ecx, [esi+30h]
0x85F84E: push    0
0x85F850: push    0
0x85F852: push    34h ; '4'
0x85F854: call    sub_772CD0
0x85F859: mov     edi, 36h ; '6'
0x85F85E: or      ebp, 0FFFFFFFFh
0x85F861: cmp     esi, ds:0B4740Ch
0x85F867: mov     dword ptr ds:0B469C0h, 30002h
0x85F871: mov     ds:0B46A98h, edi
0x85F877: jz      short loc_85F897
0x85F879: add     [esi+60h], ebp
0x85F87C: jnz     short loc_85F885
0x85F87E: mov     ecx, esi
0x85F880: call    sub_7604D0
0x85F885: mov     esi, ds:0B4740Ch
0x85F88B: test    esi, esi
0x85F88D: mov     [esp+2Ch+var_18], esi
0x85F891: jz      short loc_85F897
0x85F893: add     dword ptr [esi+60h], 1
0x85F897: push    esi
0x85F898: call    sub_85E570
0x85F89D: mov     ecx, ds:0B47294h
0x85F8A3: add     esp, 4
0x85F8A6: push    ecx; a2
0x85F8A7: mov     ecx, esi; this
0x85F8A9: call    sub_7AECB0
0x85F8AE: mov     edx, ds:0B46EF8h
0x85F8B4: push    edx; a2
0x85F8B5: mov     ecx, esi; this
0x85F8B7: call    sub_7AEC60
0x85F8BC: cmp     dword ptr [esi+30h], 0
0x85F8C0: jnz     short loc_85F8CA
0x85F8C2: call    sub_772DF0
0x85F8C7: mov     [esi+30h], eax
0x85F8CA: mov     ecx, [esi+30h]
0x85F8CD: push    0
0x85F8CF: push    1
0x85F8D1: push    7
0x85F8D3: call    sub_772CD0
0x85F8D8: cmp     dword ptr [esi+30h], 0
0x85F8DC: jnz     short loc_85F8E6
0x85F8DE: call    sub_772DF0
0x85F8E3: mov     [esi+30h], eax
0x85F8E6: mov     ecx, [esi+30h]
0x85F8E9: push    0
0x85F8EB: push    4
0x85F8ED: push    17h
0x85F8EF: call    sub_772CD0
0x85F8F4: cmp     dword ptr [esi+30h], 0
0x85F8F8: jnz     short loc_85F902
0x85F8FA: call    sub_772DF0
0x85F8FF: mov     [esi+30h], eax
0x85F902: mov     ecx, [esi+30h]
0x85F905: push    0
0x85F907: push    1
0x85F909: push    0Eh
0x85F90B: call    sub_772CD0
0x85F910: cmp     dword ptr [esi+30h], 0
0x85F914: jnz     short loc_85F91E
0x85F916: call    sub_772DF0
0x85F91B: mov     [esi+30h], eax
0x85F91E: mov     ecx, [esi+30h]
0x85F921: push    0
0x85F923: push    0
0x85F925: push    34h ; '4'
0x85F927: call    sub_772CD0
0x85F92C: cmp     esi, ds:0B47410h
0x85F932: mov     ds:0B469C4h, ebx
0x85F938: mov     ds:0B46A9Ch, edi
0x85F93E: jz      short loc_85F95E
0x85F940: add     [esi+60h], ebp
0x85F943: jnz     short loc_85F94C
0x85F945: mov     ecx, esi
0x85F947: call    sub_7604D0
0x85F94C: mov     esi, ds:0B47410h
0x85F952: test    esi, esi
0x85F954: mov     [esp+2Ch+var_18], esi
0x85F958: jz      short loc_85F95E
0x85F95A: add     dword ptr [esi+60h], 1
0x85F95E: push    esi
0x85F95F: call    sub_85E570
0x85F964: mov     eax, ds:0B47298h
0x85F969: add     esp, 4
0x85F96C: push    eax; a2
0x85F96D: mov     ecx, esi; this
0x85F96F: call    sub_7AECB0
0x85F974: mov     ecx, ds:0B46F00h
0x85F97A: push    ecx; a2
0x85F97B: mov     ecx, esi; this
0x85F97D: call    sub_7AEC60
0x85F982: cmp     dword ptr [esi+30h], 0
0x85F986: jnz     short loc_85F990
0x85F988: call    sub_772DF0
0x85F98D: mov     [esi+30h], eax
0x85F990: mov     ecx, [esi+30h]
0x85F993: push    0
0x85F995: push    1
0x85F997: push    7
0x85F999: call    sub_772CD0
0x85F99E: cmp     dword ptr [esi+30h], 0
0x85F9A2: jnz     short loc_85F9AC
0x85F9A4: call    sub_772DF0
0x85F9A9: mov     [esi+30h], eax
0x85F9AC: mov     ecx, [esi+30h]
0x85F9AF: push    0
0x85F9B1: push    4
0x85F9B3: push    17h
0x85F9B5: call    sub_772CD0
0x85F9BA: cmp     dword ptr [esi+30h], 0
0x85F9BE: jnz     short loc_85F9C8
0x85F9C0: call    sub_772DF0
0x85F9C5: mov     [esi+30h], eax
0x85F9C8: mov     ecx, [esi+30h]
0x85F9CB: push    0
0x85F9CD: push    1
0x85F9CF: push    0Eh
0x85F9D1: call    sub_772CD0
0x85F9D6: cmp     dword ptr [esi+30h], 0
0x85F9DA: jnz     short loc_85F9E4
0x85F9DC: call    sub_772DF0
0x85F9E1: mov     [esi+30h], eax
0x85F9E4: mov     ecx, [esi+30h]
0x85F9E7: push    0
0x85F9E9: push    0
0x85F9EB: push    34h ; '4'
0x85F9ED: call    sub_772CD0
0x85F9F2: cmp     esi, ds:0B47414h
0x85F9F8: mov     edi, 0C430002h
0x85F9FD: mov     ds:0B469C8h, edi
0x85FA03: mov     dword ptr ds:0B46AA0h, 16h
0x85FA0D: jz      short loc_85FA2D
0x85FA0F: add     [esi+60h], ebp
0x85FA12: jnz     short loc_85FA1B
0x85FA14: mov     ecx, esi
0x85FA16: call    sub_7604D0
0x85FA1B: mov     esi, ds:0B47414h
0x85FA21: test    esi, esi
0x85FA23: mov     [esp+2Ch+var_18], esi
0x85FA27: jz      short loc_85FA2D
0x85FA29: add     dword ptr [esi+60h], 1
0x85FA2D: push    esi
0x85FA2E: call    sub_85E570
0x85FA33: mov     edx, ds:0B4729Ch
0x85FA39: add     esp, 4
0x85FA3C: push    edx; a2
0x85FA3D: mov     ecx, esi; this
0x85FA3F: call    sub_7AECB0
0x85FA44: mov     eax, ds:0B46F00h
0x85FA49: push    eax; a2
0x85FA4A: mov     ecx, esi; this
0x85FA4C: call    sub_7AEC60
0x85FA51: cmp     dword ptr [esi+30h], 0
0x85FA55: jnz     short loc_85FA5F
0x85FA57: call    sub_772DF0
0x85FA5C: mov     [esi+30h], eax
0x85FA5F: mov     ecx, [esi+30h]
0x85FA62: push    0
0x85FA64: push    1
0x85FA66: push    7
0x85FA68: call    sub_772CD0
0x85FA6D: cmp     dword ptr [esi+30h], 0
0x85FA71: jnz     short loc_85FA7B
0x85FA73: call    sub_772DF0
0x85FA78: mov     [esi+30h], eax
0x85FA7B: mov     ecx, [esi+30h]
0x85FA7E: push    0
0x85FA80: push    4
0x85FA82: push    17h
0x85FA84: call    sub_772CD0
0x85FA89: cmp     dword ptr [esi+30h], 0
0x85FA8D: jnz     short loc_85FA97
0x85FA8F: call    sub_772DF0
0x85FA94: mov     [esi+30h], eax
0x85FA97: mov     ecx, [esi+30h]
0x85FA9A: push    0
0x85FA9C: push    1
0x85FA9E: push    0Eh
0x85FAA0: call    sub_772CD0
0x85FAA5: cmp     dword ptr [esi+30h], 0
0x85FAA9: jnz     short loc_85FAB3
0x85FAAB: call    sub_772DF0
0x85FAB0: mov     [esi+30h], eax
0x85FAB3: mov     ecx, [esi+30h]
0x85FAB6: push    0
0x85FAB8: push    0
0x85FABA: push    34h ; '4'
0x85FABC: call    sub_772CD0
0x85FAC1: cmp     esi, ds:0B47418h
0x85FAC7: mov     ebp, 0C43000Ch
0x85FACC: mov     ds:0B469CCh, ebp
0x85FAD2: mov     dword ptr ds:0B46AA4h, 16h
0x85FADC: jz      short loc_85FB03
0x85FADE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85FAE2: jnz     short loc_85FAEB
0x85FAE4: mov     ecx, esi
0x85FAE6: call    sub_7604D0
0x85FAEB: mov     esi, ds:0B47418h
0x85FAF1: test    esi, esi
0x85FAF3: mov     [esp+2Ch+var_18], esi
0x85FAF7: mov     ebx, 1
0x85FAFC: jz      short loc_85FB08
0x85FAFE: add     [esi+60h], ebx
0x85FB01: jmp     short loc_85FB08
0x85FB03: mov     ebx, 1
0x85FB08: push    esi
0x85FB09: call    sub_85E570
0x85FB0E: mov     ecx, ds:0B472A0h
0x85FB14: add     esp, 4
0x85FB17: push    ecx; a2
0x85FB18: mov     ecx, esi; this
0x85FB1A: call    sub_7AECB0
0x85FB1F: mov     edx, ds:0B46F08h
0x85FB25: push    edx; a2
0x85FB26: mov     ecx, esi; this
0x85FB28: call    sub_7AEC60
0x85FB2D: cmp     dword ptr [esi+30h], 0
0x85FB31: jnz     short loc_85FB3B
0x85FB33: call    sub_772DF0
0x85FB38: mov     [esi+30h], eax
0x85FB3B: mov     ecx, [esi+30h]
0x85FB3E: push    0
0x85FB40: push    ebx
0x85FB41: push    7
0x85FB43: call    sub_772CD0
0x85FB48: cmp     dword ptr [esi+30h], 0
0x85FB4C: jnz     short loc_85FB56
0x85FB4E: call    sub_772DF0
0x85FB53: mov     [esi+30h], eax
0x85FB56: mov     ecx, [esi+30h]
0x85FB59: push    0
0x85FB5B: push    4
0x85FB5D: push    17h
0x85FB5F: call    sub_772CD0
0x85FB64: cmp     dword ptr [esi+30h], 0
0x85FB68: jnz     short loc_85FB72
0x85FB6A: call    sub_772DF0
0x85FB6F: mov     [esi+30h], eax
0x85FB72: mov     ecx, [esi+30h]
0x85FB75: push    0
0x85FB77: push    ebx
0x85FB78: push    0Eh
0x85FB7A: call    sub_772CD0
0x85FB7F: cmp     dword ptr [esi+30h], 0
0x85FB83: jnz     short loc_85FB8D
0x85FB85: call    sub_772DF0
0x85FB8A: mov     [esi+30h], eax
0x85FB8D: mov     ecx, [esi+30h]
0x85FB90: push    0
0x85FB92: push    0
0x85FB94: push    34h ; '4'
0x85FB96: call    sub_772CD0
0x85FB9B: cmp     esi, ds:0B4741Ch
0x85FBA1: mov     ds:0B469D0h, edi
0x85FBA7: mov     dword ptr ds:0B46AA8h, 1Eh
0x85FBB1: jz      short loc_85FBD1
0x85FBB3: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85FBB7: jnz     short loc_85FBC0
0x85FBB9: mov     ecx, esi
0x85FBBB: call    sub_7604D0
0x85FBC0: mov     esi, ds:0B4741Ch
0x85FBC6: test    esi, esi
0x85FBC8: mov     [esp+2Ch+var_18], esi
0x85FBCC: jz      short loc_85FBD1
0x85FBCE: add     [esi+60h], ebx
0x85FBD1: push    esi
0x85FBD2: call    sub_85E570
0x85FBD7: mov     eax, ds:0B47298h
0x85FBDC: add     esp, 4
0x85FBDF: push    eax; a2
0x85FBE0: mov     ecx, esi; this
0x85FBE2: call    sub_7AECB0
0x85FBE7: mov     ecx, ds:0B46F10h
0x85FBED: push    ecx; a2
0x85FBEE: mov     ecx, esi; this
0x85FBF0: call    sub_7AEC60
0x85FBF5: cmp     dword ptr [esi+30h], 0
0x85FBF9: jnz     short loc_85FC03
0x85FBFB: call    sub_772DF0
0x85FC00: mov     [esi+30h], eax
0x85FC03: mov     ecx, [esi+30h]
0x85FC06: push    0
0x85FC08: push    ebx
0x85FC09: push    7
0x85FC0B: call    sub_772CD0
0x85FC10: cmp     dword ptr [esi+30h], 0
0x85FC14: jnz     short loc_85FC1E
0x85FC16: call    sub_772DF0
0x85FC1B: mov     [esi+30h], eax
0x85FC1E: mov     ecx, [esi+30h]
0x85FC21: push    0
0x85FC23: push    4
0x85FC25: push    17h
0x85FC27: call    sub_772CD0
0x85FC2C: cmp     dword ptr [esi+30h], 0
0x85FC30: jnz     short loc_85FC3A
0x85FC32: call    sub_772DF0
0x85FC37: mov     [esi+30h], eax
0x85FC3A: mov     ecx, [esi+30h]
0x85FC3D: push    0
0x85FC3F: push    ebx
0x85FC40: push    0Eh
0x85FC42: call    sub_772CD0
0x85FC47: cmp     dword ptr [esi+30h], 0
0x85FC4B: jnz     short loc_85FC55
0x85FC4D: call    sub_772DF0
0x85FC52: mov     [esi+30h], eax
0x85FC55: mov     ecx, [esi+30h]
0x85FC58: push    0
0x85FC5A: push    0
0x85FC5C: push    34h ; '4'
0x85FC5E: call    sub_772CD0
0x85FC63: cmp     esi, ds:0B47420h
0x85FC69: mov     ds:0B469D4h, edi
0x85FC6F: mov     dword ptr ds:0B46AACh, 16h
0x85FC79: jz      short loc_85FC99
0x85FC7B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85FC7F: jnz     short loc_85FC88
0x85FC81: mov     ecx, esi
0x85FC83: call    sub_7604D0
0x85FC88: mov     esi, ds:0B47420h
0x85FC8E: test    esi, esi
0x85FC90: mov     [esp+2Ch+var_18], esi
0x85FC94: jz      short loc_85FC99
0x85FC96: add     [esi+60h], ebx
0x85FC99: push    esi
0x85FC9A: call    sub_85E570
0x85FC9F: mov     edx, ds:0B47298h
0x85FCA5: add     esp, 4
0x85FCA8: push    edx; a2
0x85FCA9: mov     ecx, esi; this
0x85FCAB: call    sub_7AECB0
0x85FCB0: mov     eax, ds:0B46F18h
0x85FCB5: push    eax; a2
0x85FCB6: mov     ecx, esi; this
0x85FCB8: call    sub_7AEC60
0x85FCBD: cmp     dword ptr [esi+30h], 0
0x85FCC1: jnz     short loc_85FCCB
0x85FCC3: call    sub_772DF0
0x85FCC8: mov     [esi+30h], eax
0x85FCCB: mov     ecx, [esi+30h]
0x85FCCE: push    0
0x85FCD0: push    ebx
0x85FCD1: push    7
0x85FCD3: call    sub_772CD0
0x85FCD8: cmp     dword ptr [esi+30h], 0
0x85FCDC: jnz     short loc_85FCE6
0x85FCDE: call    sub_772DF0
0x85FCE3: mov     [esi+30h], eax
0x85FCE6: mov     ecx, [esi+30h]
0x85FCE9: push    0
0x85FCEB: push    4
0x85FCED: push    17h
0x85FCEF: call    sub_772CD0
0x85FCF4: cmp     dword ptr [esi+30h], 0
0x85FCF8: jnz     short loc_85FD02
0x85FCFA: call    sub_772DF0
0x85FCFF: mov     [esi+30h], eax
0x85FD02: mov     ecx, [esi+30h]
0x85FD05: push    0
0x85FD07: push    ebx
0x85FD08: push    0Eh
0x85FD0A: call    sub_772CD0
0x85FD0F: cmp     dword ptr [esi+30h], 0
0x85FD13: jnz     short loc_85FD1D
0x85FD15: call    sub_772DF0
0x85FD1A: mov     [esi+30h], eax
0x85FD1D: mov     ecx, [esi+30h]
0x85FD20: push    0
0x85FD22: push    0
0x85FD24: push    34h ; '4'
0x85FD26: call    sub_772CD0
0x85FD2B: cmp     esi, ds:0B47424h
0x85FD31: mov     ds:0B469D8h, edi
0x85FD37: mov     dword ptr ds:0B46AB0h, 16h
0x85FD41: jz      short loc_85FD61
0x85FD43: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85FD47: jnz     short loc_85FD50
0x85FD49: mov     ecx, esi
0x85FD4B: call    sub_7604D0
0x85FD50: mov     esi, ds:0B47424h
0x85FD56: test    esi, esi
0x85FD58: mov     [esp+2Ch+var_18], esi
0x85FD5C: jz      short loc_85FD61
0x85FD5E: add     [esi+60h], ebx
0x85FD61: push    esi
0x85FD62: call    sub_85E570
0x85FD67: mov     ecx, ds:0B4729Ch
0x85FD6D: add     esp, 4
0x85FD70: push    ecx; a2
0x85FD71: mov     ecx, esi; this
0x85FD73: call    sub_7AECB0
0x85FD78: mov     edx, ds:0B46F18h
0x85FD7E: push    edx; a2
0x85FD7F: mov     ecx, esi; this
0x85FD81: call    sub_7AEC60
0x85FD86: cmp     dword ptr [esi+30h], 0
0x85FD8A: jnz     short loc_85FD94
0x85FD8C: call    sub_772DF0
0x85FD91: mov     [esi+30h], eax
0x85FD94: mov     ecx, [esi+30h]
0x85FD97: push    0
0x85FD99: push    ebx
0x85FD9A: push    7
0x85FD9C: call    sub_772CD0
0x85FDA1: cmp     dword ptr [esi+30h], 0
0x85FDA5: jnz     short loc_85FDAF
0x85FDA7: call    sub_772DF0
0x85FDAC: mov     [esi+30h], eax
0x85FDAF: mov     ecx, [esi+30h]
0x85FDB2: push    0
0x85FDB4: push    4
0x85FDB6: push    17h
0x85FDB8: call    sub_772CD0
0x85FDBD: cmp     dword ptr [esi+30h], 0
0x85FDC1: jnz     short loc_85FDCB
0x85FDC3: call    sub_772DF0
0x85FDC8: mov     [esi+30h], eax
0x85FDCB: mov     ecx, [esi+30h]
0x85FDCE: push    0
0x85FDD0: push    ebx
0x85FDD1: push    0Eh
0x85FDD3: call    sub_772CD0
0x85FDD8: cmp     dword ptr [esi+30h], 0
0x85FDDC: jnz     short loc_85FDE6
0x85FDDE: call    sub_772DF0
0x85FDE3: mov     [esi+30h], eax
0x85FDE6: mov     ecx, [esi+30h]
0x85FDE9: push    0
0x85FDEB: push    0
0x85FDED: push    34h ; '4'
0x85FDEF: call    sub_772CD0
0x85FDF4: cmp     esi, ds:0B47428h
0x85FDFA: mov     ds:0B469DCh, ebp
0x85FE00: mov     dword ptr ds:0B46AB4h, 16h
0x85FE0A: jz      short loc_85FE2A
0x85FE0C: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85FE10: jnz     short loc_85FE19
0x85FE12: mov     ecx, esi
0x85FE14: call    sub_7604D0
0x85FE19: mov     esi, ds:0B47428h
0x85FE1F: test    esi, esi
0x85FE21: mov     [esp+2Ch+var_18], esi
0x85FE25: jz      short loc_85FE2A
0x85FE27: add     [esi+60h], ebx
0x85FE2A: push    esi
0x85FE2B: call    sub_85E570
0x85FE30: mov     eax, ds:0B47298h
0x85FE35: add     esp, 4
0x85FE38: push    eax; a2
0x85FE39: mov     ecx, esi; this
0x85FE3B: call    sub_7AECB0
0x85FE40: mov     ecx, ds:0B46F20h
0x85FE46: push    ecx; a2
0x85FE47: mov     ecx, esi; this
0x85FE49: call    sub_7AEC60
0x85FE4E: cmp     dword ptr [esi+30h], 0
0x85FE52: jnz     short loc_85FE5C
0x85FE54: call    sub_772DF0
0x85FE59: mov     [esi+30h], eax
0x85FE5C: mov     ecx, [esi+30h]
0x85FE5F: push    0
0x85FE61: push    ebx
0x85FE62: push    7
0x85FE64: call    sub_772CD0
0x85FE69: cmp     dword ptr [esi+30h], 0
0x85FE6D: jnz     short loc_85FE77
0x85FE6F: call    sub_772DF0
0x85FE74: mov     [esi+30h], eax
0x85FE77: mov     ecx, [esi+30h]
0x85FE7A: push    0
0x85FE7C: push    4
0x85FE7E: push    17h
0x85FE80: call    sub_772CD0
0x85FE85: cmp     dword ptr [esi+30h], 0
0x85FE89: jnz     short loc_85FE93
0x85FE8B: call    sub_772DF0
0x85FE90: mov     [esi+30h], eax
0x85FE93: mov     ecx, [esi+30h]
0x85FE96: push    0
0x85FE98: push    ebx
0x85FE99: push    0Eh
0x85FE9B: call    sub_772CD0
0x85FEA0: cmp     dword ptr [esi+30h], 0
0x85FEA4: jnz     short loc_85FEAE
0x85FEA6: call    sub_772DF0
0x85FEAB: mov     [esi+30h], eax
0x85FEAE: mov     ecx, [esi+30h]
0x85FEB1: push    0
0x85FEB3: push    0
0x85FEB5: push    34h ; '4'
0x85FEB7: call    sub_772CD0
0x85FEBC: cmp     esi, ds:0B4742Ch
0x85FEC2: mov     ebx, 36h ; '6'
0x85FEC7: mov     ds:0B469E0h, edi
0x85FECD: mov     ds:0B46AB8h, ebx
0x85FED3: jz      short loc_85FEF4
0x85FED5: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85FED9: jnz     short loc_85FEE2
0x85FEDB: mov     ecx, esi
0x85FEDD: call    sub_7604D0
0x85FEE2: mov     esi, ds:0B4742Ch
0x85FEE8: test    esi, esi
0x85FEEA: mov     [esp+2Ch+var_18], esi
0x85FEEE: jz      short loc_85FEF4
0x85FEF0: add     dword ptr [esi+60h], 1
0x85FEF4: push    esi
0x85FEF5: call    sub_85E570
0x85FEFA: mov     edx, ds:0B4729Ch
0x85FF00: add     esp, 4
0x85FF03: push    edx; a2
0x85FF04: mov     ecx, esi; this
0x85FF06: call    sub_7AECB0
0x85FF0B: mov     eax, ds:0B46F20h
0x85FF10: push    eax; a2
0x85FF11: mov     ecx, esi; this
0x85FF13: call    sub_7AEC60
0x85FF18: cmp     dword ptr [esi+30h], 0
0x85FF1C: jnz     short loc_85FF26
0x85FF1E: call    sub_772DF0
0x85FF23: mov     [esi+30h], eax
0x85FF26: mov     ecx, [esi+30h]
0x85FF29: push    0
0x85FF2B: push    1
0x85FF2D: push    7
0x85FF2F: call    sub_772CD0
0x85FF34: cmp     dword ptr [esi+30h], 0
0x85FF38: jnz     short loc_85FF42
0x85FF3A: call    sub_772DF0
0x85FF3F: mov     [esi+30h], eax
0x85FF42: mov     ecx, [esi+30h]
0x85FF45: push    0
0x85FF47: push    4
0x85FF49: push    17h
0x85FF4B: call    sub_772CD0
0x85FF50: cmp     dword ptr [esi+30h], 0
0x85FF54: jnz     short loc_85FF5E
0x85FF56: call    sub_772DF0
0x85FF5B: mov     [esi+30h], eax
0x85FF5E: mov     ecx, [esi+30h]
0x85FF61: push    0
0x85FF63: push    1
0x85FF65: push    0Eh
0x85FF67: call    sub_772CD0
0x85FF6C: cmp     dword ptr [esi+30h], 0
0x85FF70: jnz     short loc_85FF7A
0x85FF72: call    sub_772DF0
0x85FF77: mov     [esi+30h], eax
0x85FF7A: mov     ecx, [esi+30h]
0x85FF7D: push    0
0x85FF7F: push    0
0x85FF81: push    34h ; '4'
0x85FF83: call    sub_772CD0
0x85FF88: cmp     esi, ds:0B47430h
0x85FF8E: mov     ds:0B469E4h, ebp
0x85FF94: mov     ds:0B46ABCh, ebx
0x85FF9A: jz      short loc_85FFBB
0x85FF9C: add     dword ptr [esi+60h], 0FFFFFFFFh
0x85FFA0: jnz     short loc_85FFA9
0x85FFA2: mov     ecx, esi
0x85FFA4: call    sub_7604D0
0x85FFA9: mov     esi, ds:0B47430h
0x85FFAF: test    esi, esi
0x85FFB1: mov     [esp+2Ch+var_18], esi
0x85FFB5: jz      short loc_85FFBB
0x85FFB7: add     dword ptr [esi+60h], 1
0x85FFBB: push    esi
0x85FFBC: call    sub_85E570
0x85FFC1: mov     ecx, ds:0B472A0h
0x85FFC7: add     esp, 4
0x85FFCA: push    ecx; a2
0x85FFCB: mov     ecx, esi; this
0x85FFCD: call    sub_7AECB0
0x85FFD2: mov     edx, ds:0B46F00h
0x85FFD8: push    edx; a2
0x85FFD9: mov     ecx, esi; this
0x85FFDB: call    sub_7AEC60
0x85FFE0: cmp     dword ptr [esi+30h], 0
0x85FFE4: jnz     short loc_85FFEE
0x85FFE6: call    sub_772DF0
0x85FFEB: mov     [esi+30h], eax
0x85FFEE: mov     ecx, [esi+30h]
0x85FFF1: push    0
0x85FFF3: push    1
0x85FFF5: push    7
0x85FFF7: call    sub_772CD0
0x85FFFC: cmp     dword ptr [esi+30h], 0
0x860000: jnz     short loc_86000A
0x860002: call    sub_772DF0
0x860007: mov     [esi+30h], eax
0x86000A: mov     ecx, [esi+30h]
0x86000D: push    0
0x86000F: push    4
0x860011: push    17h
0x860013: call    sub_772CD0
0x860018: cmp     dword ptr [esi+30h], 0
0x86001C: jnz     short loc_860026
0x86001E: call    sub_772DF0
0x860023: mov     [esi+30h], eax
0x860026: mov     ecx, [esi+30h]
0x860029: push    0
0x86002B: push    1
0x86002D: push    0Eh
0x86002F: call    sub_772CD0
0x860034: cmp     dword ptr [esi+30h], 0
0x860038: jnz     short loc_860042
0x86003A: call    sub_772DF0
0x86003F: mov     [esi+30h], eax
0x860042: mov     ecx, [esi+30h]
0x860045: push    0
0x860047: push    0
0x860049: push    34h ; '4'
0x86004B: call    sub_772CD0
0x860050: cmp     esi, ds:0B47434h
0x860056: mov     ds:0B469E8h, edi
0x86005C: mov     dword ptr ds:0B46AC0h, 16h
0x860066: jz      short loc_860087
0x860068: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86006C: jnz     short loc_860075
0x86006E: mov     ecx, esi
0x860070: call    sub_7604D0
0x860075: mov     esi, ds:0B47434h
0x86007B: test    esi, esi
0x86007D: mov     [esp+2Ch+var_18], esi
0x860081: jz      short loc_860087
0x860083: add     dword ptr [esi+60h], 1
0x860087: push    esi
0x860088: call    sub_85E570
0x86008D: mov     eax, ds:0B472A4h
0x860092: add     esp, 4
0x860095: push    eax; a2
0x860096: mov     ecx, esi; this
0x860098: call    sub_7AECB0
0x86009D: mov     ecx, ds:0B46F00h
0x8600A3: push    ecx; a2
0x8600A4: mov     ecx, esi; this
0x8600A6: call    sub_7AEC60
0x8600AB: cmp     dword ptr [esi+30h], 0
0x8600AF: jnz     short loc_8600B9
0x8600B1: call    sub_772DF0
0x8600B6: mov     [esi+30h], eax
0x8600B9: mov     ecx, [esi+30h]
0x8600BC: push    0
0x8600BE: push    1
0x8600C0: push    7
0x8600C2: call    sub_772CD0
0x8600C7: cmp     dword ptr [esi+30h], 0
0x8600CB: jnz     short loc_8600D5
0x8600CD: call    sub_772DF0
0x8600D2: mov     [esi+30h], eax
0x8600D5: mov     ecx, [esi+30h]
0x8600D8: push    0
0x8600DA: push    4
0x8600DC: push    17h
0x8600DE: call    sub_772CD0
0x8600E3: cmp     dword ptr [esi+30h], 0
0x8600E7: jnz     short loc_8600F1
0x8600E9: call    sub_772DF0
0x8600EE: mov     [esi+30h], eax
0x8600F1: mov     ecx, [esi+30h]
0x8600F4: push    0
0x8600F6: push    1
0x8600F8: push    0Eh
0x8600FA: call    sub_772CD0
0x8600FF: cmp     dword ptr [esi+30h], 0
0x860103: jnz     short loc_86010D
0x860105: call    sub_772DF0
0x86010A: mov     [esi+30h], eax
0x86010D: mov     ecx, [esi+30h]
0x860110: push    0
0x860112: push    0
0x860114: push    34h ; '4'
0x860116: call    sub_772CD0
0x86011B: cmp     esi, ds:0B47438h
0x860121: mov     ds:0B469ECh, ebp
0x860127: mov     dword ptr ds:0B46AC4h, 16h
0x860131: jz      short loc_860152
0x860133: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860137: jnz     short loc_860140
0x860139: mov     ecx, esi
0x86013B: call    sub_7604D0
0x860140: mov     esi, ds:0B47438h
0x860146: test    esi, esi
0x860148: mov     [esp+2Ch+var_18], esi
0x86014C: jz      short loc_860152
0x86014E: add     dword ptr [esi+60h], 1
0x860152: push    esi
0x860153: call    sub_85E570
0x860158: mov     edx, ds:0B472A0h
0x86015E: add     esp, 4
0x860161: push    edx; a2
0x860162: mov     ecx, esi; this
0x860164: call    sub_7AECB0
0x860169: mov     eax, ds:0B46F10h
0x86016E: push    eax; a2
0x86016F: mov     ecx, esi; this
0x860171: call    sub_7AEC60
0x860176: cmp     dword ptr [esi+30h], 0
0x86017A: jnz     short loc_860184
0x86017C: call    sub_772DF0
0x860181: mov     [esi+30h], eax
0x860184: mov     ecx, [esi+30h]
0x860187: push    0
0x860189: push    1
0x86018B: push    7
0x86018D: call    sub_772CD0
0x860192: cmp     dword ptr [esi+30h], 0
0x860196: jnz     short loc_8601A0
0x860198: call    sub_772DF0
0x86019D: mov     [esi+30h], eax
0x8601A0: mov     ecx, [esi+30h]
0x8601A3: push    0
0x8601A5: push    4
0x8601A7: push    17h
0x8601A9: call    sub_772CD0
0x8601AE: cmp     dword ptr [esi+30h], 0
0x8601B2: jnz     short loc_8601BC
0x8601B4: call    sub_772DF0
0x8601B9: mov     [esi+30h], eax
0x8601BC: mov     ecx, [esi+30h]
0x8601BF: push    0
0x8601C1: push    1
0x8601C3: push    0Eh
0x8601C5: call    sub_772CD0
0x8601CA: cmp     dword ptr [esi+30h], 0
0x8601CE: jnz     short loc_8601D8
0x8601D0: call    sub_772DF0
0x8601D5: mov     [esi+30h], eax
0x8601D8: mov     ecx, [esi+30h]
0x8601DB: push    0
0x8601DD: push    0
0x8601DF: push    34h ; '4'
0x8601E1: call    sub_772CD0
0x8601E6: cmp     esi, ds:0B4743Ch
0x8601EC: mov     ds:0B469F0h, edi
0x8601F2: mov     dword ptr ds:0B46AC8h, 16h
0x8601FC: jz      short loc_86021D
0x8601FE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860202: jnz     short loc_86020B
0x860204: mov     ecx, esi
0x860206: call    sub_7604D0
0x86020B: mov     esi, ds:0B4743Ch
0x860211: test    esi, esi
0x860213: mov     [esp+2Ch+var_18], esi
0x860217: jz      short loc_86021D
0x860219: add     dword ptr [esi+60h], 1
0x86021D: push    esi
0x86021E: call    sub_85E570
0x860223: mov     ecx, ds:0B472A0h
0x860229: add     esp, 4
0x86022C: push    ecx; a2
0x86022D: mov     ecx, esi; this
0x86022F: call    sub_7AECB0
0x860234: mov     edx, ds:0B46F20h
0x86023A: push    edx; a2
0x86023B: mov     ecx, esi; this
0x86023D: call    sub_7AEC60
0x860242: cmp     dword ptr [esi+30h], 0
0x860246: jnz     short loc_860250
0x860248: call    sub_772DF0
0x86024D: mov     [esi+30h], eax
0x860250: mov     ecx, [esi+30h]
0x860253: push    0
0x860255: push    1
0x860257: push    7
0x860259: call    sub_772CD0
0x86025E: cmp     dword ptr [esi+30h], 0
0x860262: jnz     short loc_86026C
0x860264: call    sub_772DF0
0x860269: mov     [esi+30h], eax
0x86026C: mov     ecx, [esi+30h]
0x86026F: push    0
0x860271: push    4
0x860273: push    17h
0x860275: call    sub_772CD0
0x86027A: cmp     dword ptr [esi+30h], 0
0x86027E: jnz     short loc_860288
0x860280: call    sub_772DF0
0x860285: mov     [esi+30h], eax
0x860288: mov     ecx, [esi+30h]
0x86028B: push    0
0x86028D: push    1
0x86028F: push    0Eh
0x860291: call    sub_772CD0
0x860296: cmp     dword ptr [esi+30h], 0
0x86029A: jnz     short loc_8602A4
0x86029C: call    sub_772DF0
0x8602A1: mov     [esi+30h], eax
0x8602A4: mov     ecx, [esi+30h]
0x8602A7: push    0
0x8602A9: push    0
0x8602AB: push    34h ; '4'
0x8602AD: call    sub_772CD0
0x8602B2: cmp     esi, ds:0B47440h
0x8602B8: mov     ds:0B469F4h, edi
0x8602BE: mov     ds:0B46ACCh, ebx
0x8602C4: jz      short loc_8602E5
0x8602C6: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8602CA: jnz     short loc_8602D3
0x8602CC: mov     ecx, esi
0x8602CE: call    sub_7604D0
0x8602D3: mov     esi, ds:0B47440h
0x8602D9: test    esi, esi
0x8602DB: mov     [esp+2Ch+var_18], esi
0x8602DF: jz      short loc_8602E5
0x8602E1: add     dword ptr [esi+60h], 1
0x8602E5: push    esi
0x8602E6: call    sub_85E570
0x8602EB: mov     eax, ds:0B472A4h
0x8602F0: add     esp, 4
0x8602F3: push    eax; a2
0x8602F4: mov     ecx, esi; this
0x8602F6: call    sub_7AECB0
0x8602FB: mov     ecx, ds:0B46F20h
0x860301: push    ecx; a2
0x860302: mov     ecx, esi; this
0x860304: call    sub_7AEC60
0x860309: cmp     dword ptr [esi+30h], 0
0x86030D: jnz     short loc_860317
0x86030F: call    sub_772DF0
0x860314: mov     [esi+30h], eax
0x860317: mov     ecx, [esi+30h]
0x86031A: push    0
0x86031C: push    1
0x86031E: push    7
0x860320: call    sub_772CD0
0x860325: cmp     dword ptr [esi+30h], 0
0x860329: jnz     short loc_860333
0x86032B: call    sub_772DF0
0x860330: mov     [esi+30h], eax
0x860333: mov     ecx, [esi+30h]
0x860336: push    0
0x860338: push    4
0x86033A: push    17h
0x86033C: call    sub_772CD0
0x860341: cmp     dword ptr [esi+30h], 0
0x860345: jnz     short loc_86034F
0x860347: call    sub_772DF0
0x86034C: mov     [esi+30h], eax
0x86034F: mov     ecx, [esi+30h]
0x860352: push    0
0x860354: push    1
0x860356: push    0Eh
0x860358: call    sub_772CD0
0x86035D: cmp     dword ptr [esi+30h], 0
0x860361: jnz     short loc_86036B
0x860363: call    sub_772DF0
0x860368: mov     [esi+30h], eax
0x86036B: mov     ecx, [esi+30h]
0x86036E: push    0
0x860370: push    0
0x860372: push    34h ; '4'
0x860374: call    sub_772CD0
0x860379: cmp     esi, ds:0B47444h
0x86037F: mov     ds:0B469F8h, ebp
0x860385: mov     ds:0B46AD0h, ebx
0x86038B: jz      short loc_8603AC
0x86038D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860391: jnz     short loc_86039A
0x860393: mov     ecx, esi
0x860395: call    sub_7604D0
0x86039A: mov     esi, ds:0B47444h
0x8603A0: test    esi, esi
0x8603A2: mov     [esp+2Ch+var_18], esi
0x8603A6: jz      short loc_8603AC
0x8603A8: add     dword ptr [esi+60h], 1
0x8603AC: mov     eax, [esi+18h]
0x8603AF: mov     ebx, 2
0x8603B4: cmp     eax, ebx
0x8603B6: jnb     loc_86046F
0x8603BC: lea     edx, [esp+2Ch+var_10]
0x8603C0: push    edx
0x8603C1: call    sub_772630
0x8603C6: add     esp, 4
0x8603C9: push    eax
0x8603CA: lea     ecx, [esp+30h+a3]
0x8603CE: mov     byte ptr [esp+30h+var_4], bl
0x8603D2: call    sub_75FAE0
0x8603D7: mov     eax, [esp+2Ch+var_10]
0x8603DB: test    eax, eax
0x8603DD: mov     byte ptr [esp+2Ch+var_4], 1
0x8603E2: jz      short loc_8603F7
0x8603E4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8603E8: mov     ecx, eax
0x8603EA: add     eax, 5Ch ; '\'
0x8603ED: cmp     dword ptr [eax], 0
0x8603F0: jnz     short loc_8603F7
0x8603F2: call    sub_772560
0x8603F7: mov     edi, [esp+2Ch+a3]
0x8603FB: push    ebx
0x8603FC: push    1
0x8603FE: push    0
0x860400: push    edi
0x860401: call    sub_801110
0x860406: mov     eax, [esi+14h]
0x860409: add     esp, 10h
0x86040C: push    edi; a3
0x86040D: push    eax; a2
0x86040E: mov     ecx, esi; this
0x860410: call    sub_760010
0x860415: lea     ecx, [esp+2Ch+var_10]
0x860419: push    ecx
0x86041A: call    sub_772630
0x86041F: add     esp, 4
0x860422: push    eax
0x860423: lea     ecx, [esp+30h+a3]
0x860427: mov     byte ptr [esp+30h+var_4], 3
0x86042C: call    sub_75FAE0
0x860431: mov     eax, [esp+2Ch+var_10]
0x860435: test    eax, eax
0x860437: mov     byte ptr [esp+2Ch+var_4], 1
0x86043C: jz      short loc_860451
0x86043E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860442: mov     ecx, eax
0x860444: add     eax, 5Ch ; '\'
0x860447: cmp     dword ptr [eax], 0
0x86044A: jnz     short loc_860451
0x86044C: call    sub_772560
0x860451: mov     edi, [esp+2Ch+a3]
0x860455: push    ebx
0x860456: push    1
0x860458: push    0
0x86045A: push    edi
0x86045B: call    sub_801110
0x860460: mov     edx, [esi+14h]
0x860463: add     esp, 10h
0x860466: push    edi; a3
0x860467: push    edx; a2
0x860468: mov     ecx, esi; this
0x86046A: call    sub_760010
0x86046F: mov     eax, ds:0B472A8h
0x860474: push    eax; a2
0x860475: mov     ecx, esi; this
0x860477: call    sub_7AECB0
0x86047C: mov     ecx, ds:0B46F28h
0x860482: push    ecx; a2
0x860483: mov     ecx, esi; this
0x860485: call    sub_7AEC60
0x86048A: cmp     dword ptr [esi+30h], 0
0x86048E: jnz     short loc_860498
0x860490: call    sub_772DF0
0x860495: mov     [esi+30h], eax
0x860498: mov     ecx, [esi+30h]
0x86049B: push    0
0x86049D: push    1
0x86049F: push    7
0x8604A1: call    sub_772CD0
0x8604A6: cmp     dword ptr [esi+30h], 0
0x8604AA: jnz     short loc_8604B4
0x8604AC: call    sub_772DF0
0x8604B1: mov     [esi+30h], eax
0x8604B4: mov     ecx, [esi+30h]
0x8604B7: push    0
0x8604B9: push    4
0x8604BB: push    17h
0x8604BD: call    sub_772CD0
0x8604C2: cmp     dword ptr [esi+30h], 0
0x8604C6: jnz     short loc_8604D0
0x8604C8: call    sub_772DF0
0x8604CD: mov     [esi+30h], eax
0x8604D0: mov     ecx, [esi+30h]
0x8604D3: push    0
0x8604D5: push    0
0x8604D7: push    0Eh
0x8604D9: call    sub_772CD0
0x8604DE: cmp     dword ptr [esi+30h], 0
0x8604E2: jnz     short loc_8604EC
0x8604E4: call    sub_772DF0
0x8604E9: mov     [esi+30h], eax
0x8604EC: mov     ecx, [esi+30h]
0x8604EF: push    0
0x8604F1: push    1
0x8604F3: push    1Bh
0x8604F5: call    sub_772CD0
0x8604FA: cmp     dword ptr [esi+30h], 0
0x8604FE: jnz     short loc_860508
0x860500: call    sub_772DF0
0x860505: mov     [esi+30h], eax
0x860508: mov     ecx, [esi+30h]
0x86050B: push    0
0x86050D: push    ebx
0x86050E: push    13h
0x860510: call    sub_772CD0
0x860515: cmp     dword ptr [esi+30h], 0
0x860519: jnz     short loc_860523
0x86051B: call    sub_772DF0
0x860520: mov     [esi+30h], eax
0x860523: mov     ecx, [esi+30h]
0x860526: push    0
0x860528: push    ebx
0x860529: push    14h
0x86052B: call    sub_772CD0
0x860530: cmp     dword ptr [esi+30h], 0
0x860534: jnz     short loc_86053E
0x860536: call    sub_772DF0
0x86053B: mov     [esi+30h], eax
0x86053E: mov     ecx, [esi+30h]
0x860541: push    0
0x860543: push    0
0x860545: push    34h ; '4'
0x860547: call    sub_772CD0
0x86054C: cmp     esi, ds:0B47448h
0x860552: mov     ebp, 8802h
0x860557: mov     ds:0B469FCh, ebp
0x86055D: mov     dword ptr ds:0B46AD4h, 10h
0x860567: jz      short loc_860588
0x860569: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86056D: jnz     short loc_860576
0x86056F: mov     ecx, esi
0x860571: call    sub_7604D0
0x860576: mov     esi, ds:0B47448h
0x86057C: test    esi, esi
0x86057E: mov     [esp+2Ch+var_18], esi
0x860582: jz      short loc_860588
0x860584: add     dword ptr [esi+60h], 1
0x860588: mov     eax, [esi+18h]
0x86058B: cmp     eax, ebx
0x86058D: jnb     loc_860647
0x860593: lea     edx, [esp+2Ch+var_10]
0x860597: push    edx
0x860598: call    sub_772630
0x86059D: add     esp, 4
0x8605A0: push    eax
0x8605A1: lea     ecx, [esp+30h+a3]
0x8605A5: mov     byte ptr [esp+30h+var_4], 4
0x8605AA: call    sub_75FAE0
0x8605AF: mov     eax, [esp+2Ch+var_10]
0x8605B3: test    eax, eax
0x8605B5: mov     byte ptr [esp+2Ch+var_4], 1
0x8605BA: jz      short loc_8605CF
0x8605BC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8605C0: mov     ecx, eax
0x8605C2: add     eax, 5Ch ; '\'
0x8605C5: cmp     dword ptr [eax], 0
0x8605C8: jnz     short loc_8605CF
0x8605CA: call    sub_772560
0x8605CF: mov     edi, [esp+2Ch+a3]
0x8605D3: push    ebx
0x8605D4: push    1
0x8605D6: push    0
0x8605D8: push    edi
0x8605D9: call    sub_801110
0x8605DE: mov     eax, [esi+14h]
0x8605E1: add     esp, 10h
0x8605E4: push    edi; a3
0x8605E5: push    eax; a2
0x8605E6: mov     ecx, esi; this
0x8605E8: call    sub_760010
0x8605ED: lea     ecx, [esp+2Ch+var_10]
0x8605F1: push    ecx
0x8605F2: call    sub_772630
0x8605F7: add     esp, 4
0x8605FA: push    eax
0x8605FB: lea     ecx, [esp+30h+a3]
0x8605FF: mov     byte ptr [esp+30h+var_4], 5
0x860604: call    sub_75FAE0
0x860609: mov     eax, [esp+2Ch+var_10]
0x86060D: test    eax, eax
0x86060F: mov     byte ptr [esp+2Ch+var_4], 1
0x860614: jz      short loc_860629
0x860616: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86061A: mov     ecx, eax
0x86061C: add     eax, 5Ch ; '\'
0x86061F: cmp     dword ptr [eax], 0
0x860622: jnz     short loc_860629
0x860624: call    sub_772560
0x860629: mov     edi, [esp+2Ch+a3]
0x86062D: push    ebx
0x86062E: push    1
0x860630: push    0
0x860632: push    edi
0x860633: call    sub_801110
0x860638: mov     edx, [esi+14h]
0x86063B: add     esp, 10h
0x86063E: push    edi; a3
0x86063F: push    edx; a2
0x860640: mov     ecx, esi; this
0x860642: call    sub_760010
0x860647: mov     eax, ds:0B472A8h
0x86064C: push    eax; a2
0x86064D: mov     ecx, esi; this
0x86064F: call    sub_7AECB0
0x860654: mov     ecx, ds:0B46F2Ch
0x86065A: push    ecx; a2
0x86065B: mov     ecx, esi; this
0x86065D: call    sub_7AEC60
0x860662: cmp     dword ptr [esi+30h], 0
0x860666: jnz     short loc_860670
0x860668: call    sub_772DF0
0x86066D: mov     [esi+30h], eax
0x860670: mov     ecx, [esi+30h]
0x860673: push    0
0x860675: push    1
0x860677: push    7
0x860679: call    sub_772CD0
0x86067E: cmp     dword ptr [esi+30h], 0
0x860682: jnz     short loc_86068C
0x860684: call    sub_772DF0
0x860689: mov     [esi+30h], eax
0x86068C: mov     ecx, [esi+30h]
0x86068F: push    0
0x860691: push    4
0x860693: push    17h
0x860695: call    sub_772CD0
0x86069A: cmp     dword ptr [esi+30h], 0
0x86069E: jnz     short loc_8606A8
0x8606A0: call    sub_772DF0
0x8606A5: mov     [esi+30h], eax
0x8606A8: mov     ecx, [esi+30h]
0x8606AB: push    0
0x8606AD: push    0
0x8606AF: push    0Eh
0x8606B1: call    sub_772CD0
0x8606B6: cmp     dword ptr [esi+30h], 0
0x8606BA: jnz     short loc_8606C4
0x8606BC: call    sub_772DF0
0x8606C1: mov     [esi+30h], eax
0x8606C4: mov     ecx, [esi+30h]
0x8606C7: push    0
0x8606C9: push    1
0x8606CB: push    1Bh
0x8606CD: call    sub_772CD0
0x8606D2: cmp     dword ptr [esi+30h], 0
0x8606D6: jnz     short loc_8606E0
0x8606D8: call    sub_772DF0
0x8606DD: mov     [esi+30h], eax
0x8606E0: mov     ecx, [esi+30h]
0x8606E3: push    0
0x8606E5: push    ebx
0x8606E6: push    13h
0x8606E8: call    sub_772CD0
0x8606ED: cmp     dword ptr [esi+30h], 0
0x8606F1: jnz     short loc_8606FB
0x8606F3: call    sub_772DF0
0x8606F8: mov     [esi+30h], eax
0x8606FB: mov     ecx, [esi+30h]
0x8606FE: push    0
0x860700: push    ebx
0x860701: push    14h
0x860703: call    sub_772CD0
0x860708: cmp     dword ptr [esi+30h], 0
0x86070C: jnz     short loc_860716
0x86070E: call    sub_772DF0
0x860713: mov     [esi+30h], eax
0x860716: mov     ecx, [esi+30h]
0x860719: push    0
0x86071B: push    0
0x86071D: push    34h ; '4'
0x86071F: call    sub_772CD0
0x860724: cmp     esi, ds:0B4744Ch
0x86072A: mov     ds:0B46A00h, ebp
0x860730: mov     dword ptr ds:0B46AD8h, 10h
0x86073A: jz      short loc_86075B
0x86073C: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860740: jnz     short loc_860749
0x860742: mov     ecx, esi
0x860744: call    sub_7604D0
0x860749: mov     esi, ds:0B4744Ch
0x86074F: test    esi, esi
0x860751: mov     [esp+2Ch+var_18], esi
0x860755: jz      short loc_86075B
0x860757: add     dword ptr [esi+60h], 1
0x86075B: mov     eax, [esi+18h]
0x86075E: cmp     eax, ebx
0x860760: jnb     loc_86081A
0x860766: lea     edx, [esp+2Ch+var_10]
0x86076A: push    edx
0x86076B: call    sub_772630
0x860770: add     esp, 4
0x860773: push    eax
0x860774: lea     ecx, [esp+30h+a3]
0x860778: mov     byte ptr [esp+30h+var_4], 6
0x86077D: call    sub_75FAE0
0x860782: mov     eax, [esp+2Ch+var_10]
0x860786: test    eax, eax
0x860788: mov     byte ptr [esp+2Ch+var_4], 1
0x86078D: jz      short loc_8607A2
0x86078F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860793: mov     ecx, eax
0x860795: add     eax, 5Ch ; '\'
0x860798: cmp     dword ptr [eax], 0
0x86079B: jnz     short loc_8607A2
0x86079D: call    sub_772560
0x8607A2: mov     edi, [esp+2Ch+a3]
0x8607A6: push    ebx
0x8607A7: push    1
0x8607A9: push    0
0x8607AB: push    edi
0x8607AC: call    sub_801110
0x8607B1: mov     eax, [esi+14h]
0x8607B4: add     esp, 10h
0x8607B7: push    edi; a3
0x8607B8: push    eax; a2
0x8607B9: mov     ecx, esi; this
0x8607BB: call    sub_760010
0x8607C0: lea     ecx, [esp+2Ch+var_10]
0x8607C4: push    ecx
0x8607C5: call    sub_772630
0x8607CA: add     esp, 4
0x8607CD: push    eax
0x8607CE: lea     ecx, [esp+30h+a3]
0x8607D2: mov     byte ptr [esp+30h+var_4], 7
0x8607D7: call    sub_75FAE0
0x8607DC: mov     eax, [esp+2Ch+var_10]
0x8607E0: test    eax, eax
0x8607E2: mov     byte ptr [esp+2Ch+var_4], 1
0x8607E7: jz      short loc_8607FC
0x8607E9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8607ED: mov     ecx, eax
0x8607EF: add     eax, 5Ch ; '\'
0x8607F2: cmp     dword ptr [eax], 0
0x8607F5: jnz     short loc_8607FC
0x8607F7: call    sub_772560
0x8607FC: mov     edi, [esp+2Ch+a3]
0x860800: push    ebx
0x860801: push    1
0x860803: push    0
0x860805: push    edi
0x860806: call    sub_801110
0x86080B: mov     edx, [esi+14h]
0x86080E: add     esp, 10h
0x860811: push    edi; a3
0x860812: push    edx; a2
0x860813: mov     ecx, esi; this
0x860815: call    sub_760010
0x86081A: mov     eax, ds:0B472ACh
0x86081F: push    eax; a2
0x860820: mov     ecx, esi; this
0x860822: call    sub_7AECB0
0x860827: mov     ecx, ds:0B46F28h
0x86082D: push    ecx; a2
0x86082E: mov     ecx, esi; this
0x860830: call    sub_7AEC60
0x860835: cmp     dword ptr [esi+30h], 0
0x860839: jnz     short loc_860843
0x86083B: call    sub_772DF0
0x860840: mov     [esi+30h], eax
0x860843: mov     ecx, [esi+30h]
0x860846: push    0
0x860848: push    1
0x86084A: push    7
0x86084C: call    sub_772CD0
0x860851: cmp     dword ptr [esi+30h], 0
0x860855: jnz     short loc_86085F
0x860857: call    sub_772DF0
0x86085C: mov     [esi+30h], eax
0x86085F: mov     ecx, [esi+30h]
0x860862: push    0
0x860864: push    4
0x860866: push    17h
0x860868: call    sub_772CD0
0x86086D: cmp     dword ptr [esi+30h], 0
0x860871: jnz     short loc_86087B
0x860873: call    sub_772DF0
0x860878: mov     [esi+30h], eax
0x86087B: mov     ecx, [esi+30h]
0x86087E: push    0
0x860880: push    0
0x860882: push    0Eh
0x860884: call    sub_772CD0
0x860889: cmp     dword ptr [esi+30h], 0
0x86088D: jnz     short loc_860897
0x86088F: call    sub_772DF0
0x860894: mov     [esi+30h], eax
0x860897: mov     ecx, [esi+30h]
0x86089A: push    0
0x86089C: push    1
0x86089E: push    1Bh
0x8608A0: call    sub_772CD0
0x8608A5: cmp     dword ptr [esi+30h], 0
0x8608A9: jnz     short loc_8608B3
0x8608AB: call    sub_772DF0
0x8608B0: mov     [esi+30h], eax
0x8608B3: mov     ecx, [esi+30h]
0x8608B6: push    0
0x8608B8: push    ebx
0x8608B9: push    13h
0x8608BB: call    sub_772CD0
0x8608C0: cmp     dword ptr [esi+30h], 0
0x8608C4: jnz     short loc_8608CE
0x8608C6: call    sub_772DF0
0x8608CB: mov     [esi+30h], eax
0x8608CE: mov     ecx, [esi+30h]
0x8608D1: push    0
0x8608D3: push    ebx
0x8608D4: push    14h
0x8608D6: call    sub_772CD0
0x8608DB: cmp     dword ptr [esi+30h], 0
0x8608DF: jnz     short loc_8608E9
0x8608E1: call    sub_772DF0
0x8608E6: mov     [esi+30h], eax
0x8608E9: mov     ecx, [esi+30h]
0x8608EC: push    0
0x8608EE: push    0
0x8608F0: push    34h ; '4'
0x8608F2: call    sub_772CD0
0x8608F7: cmp     esi, ds:0B47450h
0x8608FD: mov     ds:0B46A04h, ebp
0x860903: mov     dword ptr ds:0B46ADCh, 10h
0x86090D: jz      short loc_86092E
0x86090F: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860913: jnz     short loc_86091C
0x860915: mov     ecx, esi
0x860917: call    sub_7604D0
0x86091C: mov     esi, ds:0B47450h
0x860922: test    esi, esi
0x860924: mov     [esp+2Ch+var_18], esi
0x860928: jz      short loc_86092E
0x86092A: add     dword ptr [esi+60h], 1
0x86092E: mov     eax, [esi+18h]
0x860931: cmp     eax, ebx
0x860933: jnb     loc_8609ED
0x860939: lea     edx, [esp+2Ch+var_10]
0x86093D: push    edx
0x86093E: call    sub_772630
0x860943: add     esp, 4
0x860946: push    eax
0x860947: lea     ecx, [esp+30h+a3]
0x86094B: mov     byte ptr [esp+30h+var_4], 8
0x860950: call    sub_75FAE0
0x860955: mov     eax, [esp+2Ch+var_10]
0x860959: test    eax, eax
0x86095B: mov     byte ptr [esp+2Ch+var_4], 1
0x860960: jz      short loc_860975
0x860962: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860966: mov     ecx, eax
0x860968: add     eax, 5Ch ; '\'
0x86096B: cmp     dword ptr [eax], 0
0x86096E: jnz     short loc_860975
0x860970: call    sub_772560
0x860975: mov     edi, [esp+2Ch+a3]
0x860979: push    ebx
0x86097A: push    1
0x86097C: push    0
0x86097E: push    edi
0x86097F: call    sub_801110
0x860984: mov     eax, [esi+14h]
0x860987: add     esp, 10h
0x86098A: push    edi; a3
0x86098B: push    eax; a2
0x86098C: mov     ecx, esi; this
0x86098E: call    sub_760010
0x860993: lea     ecx, [esp+2Ch+var_10]
0x860997: push    ecx
0x860998: call    sub_772630
0x86099D: add     esp, 4
0x8609A0: push    eax
0x8609A1: lea     ecx, [esp+30h+a3]
0x8609A5: mov     byte ptr [esp+30h+var_4], 9
0x8609AA: call    sub_75FAE0
0x8609AF: mov     eax, [esp+2Ch+var_10]
0x8609B3: test    eax, eax
0x8609B5: mov     byte ptr [esp+2Ch+var_4], 1
0x8609BA: jz      short loc_8609CF
0x8609BC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8609C0: mov     ecx, eax
0x8609C2: add     eax, 5Ch ; '\'
0x8609C5: cmp     dword ptr [eax], 0
0x8609C8: jnz     short loc_8609CF
0x8609CA: call    sub_772560
0x8609CF: mov     edi, [esp+2Ch+a3]
0x8609D3: push    ebx
0x8609D4: push    1
0x8609D6: push    0
0x8609D8: push    edi
0x8609D9: call    sub_801110
0x8609DE: mov     edx, [esi+14h]
0x8609E1: add     esp, 10h
0x8609E4: push    edi; a3
0x8609E5: push    edx; a2
0x8609E6: mov     ecx, esi; this
0x8609E8: call    sub_760010
0x8609ED: mov     eax, ds:0B472ACh
0x8609F2: push    eax; a2
0x8609F3: mov     ecx, esi; this
0x8609F5: call    sub_7AECB0
0x8609FA: mov     ecx, ds:0B46F2Ch
0x860A00: push    ecx; a2
0x860A01: mov     ecx, esi; this
0x860A03: call    sub_7AEC60
0x860A08: cmp     dword ptr [esi+30h], 0
0x860A0C: jnz     short loc_860A16
0x860A0E: call    sub_772DF0
0x860A13: mov     [esi+30h], eax
0x860A16: mov     ecx, [esi+30h]
0x860A19: push    0
0x860A1B: push    1
0x860A1D: push    7
0x860A1F: call    sub_772CD0
0x860A24: cmp     dword ptr [esi+30h], 0
0x860A28: jnz     short loc_860A32
0x860A2A: call    sub_772DF0
0x860A2F: mov     [esi+30h], eax
0x860A32: mov     ecx, [esi+30h]
0x860A35: push    0
0x860A37: push    4
0x860A39: push    17h
0x860A3B: call    sub_772CD0
0x860A40: cmp     dword ptr [esi+30h], 0
0x860A44: jnz     short loc_860A4E
0x860A46: call    sub_772DF0
0x860A4B: mov     [esi+30h], eax
0x860A4E: mov     ecx, [esi+30h]
0x860A51: push    0
0x860A53: push    0
0x860A55: push    0Eh
0x860A57: call    sub_772CD0
0x860A5C: cmp     dword ptr [esi+30h], 0
0x860A60: jnz     short loc_860A6A
0x860A62: call    sub_772DF0
0x860A67: mov     [esi+30h], eax
0x860A6A: mov     ecx, [esi+30h]
0x860A6D: push    0
0x860A6F: push    1
0x860A71: push    1Bh
0x860A73: call    sub_772CD0
0x860A78: cmp     dword ptr [esi+30h], 0
0x860A7C: jnz     short loc_860A86
0x860A7E: call    sub_772DF0
0x860A83: mov     [esi+30h], eax
0x860A86: mov     ecx, [esi+30h]
0x860A89: push    0
0x860A8B: push    ebx
0x860A8C: push    13h
0x860A8E: call    sub_772CD0
0x860A93: cmp     dword ptr [esi+30h], 0
0x860A97: jnz     short loc_860AA1
0x860A99: call    sub_772DF0
0x860A9E: mov     [esi+30h], eax
0x860AA1: mov     ecx, [esi+30h]
0x860AA4: push    0
0x860AA6: push    ebx
0x860AA7: push    14h
0x860AA9: call    sub_772CD0
0x860AAE: cmp     dword ptr [esi+30h], 0
0x860AB2: jnz     short loc_860ABC
0x860AB4: call    sub_772DF0
0x860AB9: mov     [esi+30h], eax
0x860ABC: mov     ecx, [esi+30h]
0x860ABF: push    0
0x860AC1: push    0
0x860AC3: push    34h ; '4'
0x860AC5: call    sub_772CD0
0x860ACA: cmp     esi, ds:0B47454h
0x860AD0: mov     ds:0B46A08h, ebp
0x860AD6: mov     dword ptr ds:0B46AE0h, 10h
0x860AE0: jz      short loc_860B01
0x860AE2: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860AE6: jnz     short loc_860AEF
0x860AE8: mov     ecx, esi
0x860AEA: call    sub_7604D0
0x860AEF: mov     esi, ds:0B47454h
0x860AF5: test    esi, esi
0x860AF7: mov     [esp+2Ch+var_18], esi
0x860AFB: jz      short loc_860B01
0x860AFD: add     dword ptr [esi+60h], 1
0x860B01: cmp     [esi+18h], ebx
0x860B04: jnb     loc_860BBE
0x860B0A: lea     edx, [esp+2Ch+var_10]
0x860B0E: push    edx
0x860B0F: call    sub_772630
0x860B14: add     esp, 4
0x860B17: push    eax
0x860B18: lea     ecx, [esp+30h+a3]
0x860B1C: mov     byte ptr [esp+30h+var_4], 0Ah
0x860B21: call    sub_75FAE0
0x860B26: mov     eax, [esp+2Ch+var_10]
0x860B2A: test    eax, eax
0x860B2C: mov     byte ptr [esp+2Ch+var_4], 1
0x860B31: jz      short loc_860B46
0x860B33: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860B37: mov     ecx, eax
0x860B39: add     eax, 5Ch ; '\'
0x860B3C: cmp     dword ptr [eax], 0
0x860B3F: jnz     short loc_860B46
0x860B41: call    sub_772560
0x860B46: mov     edi, [esp+2Ch+a3]
0x860B4A: push    ebx
0x860B4B: push    1
0x860B4D: push    0
0x860B4F: push    edi
0x860B50: call    sub_801110
0x860B55: mov     eax, [esi+14h]
0x860B58: add     esp, 10h
0x860B5B: push    edi; a3
0x860B5C: push    eax; a2
0x860B5D: mov     ecx, esi; this
0x860B5F: call    sub_760010
0x860B64: lea     ecx, [esp+2Ch+var_10]
0x860B68: push    ecx
0x860B69: call    sub_772630
0x860B6E: add     esp, 4
0x860B71: push    eax
0x860B72: lea     ecx, [esp+30h+a3]
0x860B76: mov     byte ptr [esp+30h+var_4], 0Bh
0x860B7B: call    sub_75FAE0
0x860B80: mov     eax, [esp+2Ch+var_10]
0x860B84: test    eax, eax
0x860B86: mov     byte ptr [esp+2Ch+var_4], 1
0x860B8B: jz      short loc_860BA0
0x860B8D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860B91: mov     ecx, eax
0x860B93: add     eax, 5Ch ; '\'
0x860B96: cmp     dword ptr [eax], 0
0x860B99: jnz     short loc_860BA0
0x860B9B: call    sub_772560
0x860BA0: mov     edi, [esp+2Ch+a3]
0x860BA4: push    ebx
0x860BA5: push    1
0x860BA7: push    0
0x860BA9: push    edi
0x860BAA: call    sub_801110
0x860BAF: mov     edx, [esi+14h]
0x860BB2: add     esp, 10h
0x860BB5: push    edi; a3
0x860BB6: push    edx; a2
0x860BB7: mov     ecx, esi; this
0x860BB9: call    sub_760010
0x860BBE: mov     eax, ds:0B472B0h
0x860BC3: push    eax; a2
0x860BC4: mov     ecx, esi; this
0x860BC6: call    sub_7AECB0
0x860BCB: mov     ecx, ds:0B46F28h
0x860BD1: push    ecx; a2
0x860BD2: mov     ecx, esi; this
0x860BD4: call    sub_7AEC60
0x860BD9: cmp     dword ptr [esi+30h], 0
0x860BDD: jnz     short loc_860BE7
0x860BDF: call    sub_772DF0
0x860BE4: mov     [esi+30h], eax
0x860BE7: mov     ecx, [esi+30h]
0x860BEA: push    0
0x860BEC: push    1
0x860BEE: push    7
0x860BF0: call    sub_772CD0
0x860BF5: cmp     dword ptr [esi+30h], 0
0x860BF9: jnz     short loc_860C03
0x860BFB: call    sub_772DF0
0x860C00: mov     [esi+30h], eax
0x860C03: mov     ecx, [esi+30h]
0x860C06: push    0
0x860C08: push    4
0x860C0A: push    17h
0x860C0C: call    sub_772CD0
0x860C11: cmp     dword ptr [esi+30h], 0
0x860C15: jnz     short loc_860C1F
0x860C17: call    sub_772DF0
0x860C1C: mov     [esi+30h], eax
0x860C1F: mov     ecx, [esi+30h]
0x860C22: push    0
0x860C24: push    0
0x860C26: push    0Eh
0x860C28: call    sub_772CD0
0x860C2D: cmp     dword ptr [esi+30h], 0
0x860C31: jnz     short loc_860C3B
0x860C33: call    sub_772DF0
0x860C38: mov     [esi+30h], eax
0x860C3B: mov     ecx, [esi+30h]
0x860C3E: push    0
0x860C40: push    1
0x860C42: push    1Bh
0x860C44: call    sub_772CD0
0x860C49: cmp     dword ptr [esi+30h], 0
0x860C4D: jnz     short loc_860C57
0x860C4F: call    sub_772DF0
0x860C54: mov     [esi+30h], eax
0x860C57: mov     ecx, [esi+30h]
0x860C5A: push    0
0x860C5C: push    ebx
0x860C5D: push    13h
0x860C5F: call    sub_772CD0
0x860C64: cmp     dword ptr [esi+30h], 0
0x860C68: jnz     short loc_860C72
0x860C6A: call    sub_772DF0
0x860C6F: mov     [esi+30h], eax
0x860C72: mov     ecx, [esi+30h]
0x860C75: push    0
0x860C77: push    ebx
0x860C78: push    14h
0x860C7A: call    sub_772CD0
0x860C7F: cmp     dword ptr [esi+30h], 0
0x860C83: jnz     short loc_860C8D
0x860C85: call    sub_772DF0
0x860C8A: mov     [esi+30h], eax
0x860C8D: mov     ecx, [esi+30h]
0x860C90: push    0
0x860C92: push    0
0x860C94: push    34h ; '4'
0x860C96: call    sub_772CD0
0x860C9B: cmp     esi, ds:0B47458h
0x860CA1: mov     ebp, 1000800Ch
0x860CA6: mov     ds:0B46A0Ch, ebp
0x860CAC: mov     dword ptr ds:0B46AE4h, 10h
0x860CB6: jz      short loc_860CD7
0x860CB8: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860CBC: jnz     short loc_860CC5
0x860CBE: mov     ecx, esi
0x860CC0: call    sub_7604D0
0x860CC5: mov     esi, ds:0B47458h
0x860CCB: test    esi, esi
0x860CCD: mov     [esp+2Ch+var_18], esi
0x860CD1: jz      short loc_860CD7
0x860CD3: add     dword ptr [esi+60h], 1
0x860CD7: cmp     [esi+18h], ebx
0x860CDA: jnb     loc_860D94
0x860CE0: lea     edx, [esp+2Ch+var_10]
0x860CE4: push    edx
0x860CE5: call    sub_772630
0x860CEA: add     esp, 4
0x860CED: push    eax
0x860CEE: lea     ecx, [esp+30h+a3]
0x860CF2: mov     byte ptr [esp+30h+var_4], 0Ch
0x860CF7: call    sub_75FAE0
0x860CFC: mov     eax, [esp+2Ch+var_10]
0x860D00: test    eax, eax
0x860D02: mov     byte ptr [esp+2Ch+var_4], 1
0x860D07: jz      short loc_860D1C
0x860D09: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860D0D: mov     ecx, eax
0x860D0F: add     eax, 5Ch ; '\'
0x860D12: cmp     dword ptr [eax], 0
0x860D15: jnz     short loc_860D1C
0x860D17: call    sub_772560
0x860D1C: mov     edi, [esp+2Ch+a3]
0x860D20: push    ebx
0x860D21: push    1
0x860D23: push    0
0x860D25: push    edi
0x860D26: call    sub_801110
0x860D2B: mov     eax, [esi+14h]
0x860D2E: add     esp, 10h
0x860D31: push    edi; a3
0x860D32: push    eax; a2
0x860D33: mov     ecx, esi; this
0x860D35: call    sub_760010
0x860D3A: lea     ecx, [esp+2Ch+var_10]
0x860D3E: push    ecx
0x860D3F: call    sub_772630
0x860D44: add     esp, 4
0x860D47: push    eax
0x860D48: lea     ecx, [esp+30h+a3]
0x860D4C: mov     byte ptr [esp+30h+var_4], 0Dh
0x860D51: call    sub_75FAE0
0x860D56: mov     eax, [esp+2Ch+var_10]
0x860D5A: test    eax, eax
0x860D5C: mov     byte ptr [esp+2Ch+var_4], 1
0x860D61: jz      short loc_860D76
0x860D63: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860D67: mov     ecx, eax
0x860D69: add     eax, 5Ch ; '\'
0x860D6C: cmp     dword ptr [eax], 0
0x860D6F: jnz     short loc_860D76
0x860D71: call    sub_772560
0x860D76: mov     edi, [esp+2Ch+a3]
0x860D7A: push    ebx
0x860D7B: push    1
0x860D7D: push    0
0x860D7F: push    edi
0x860D80: call    sub_801110
0x860D85: mov     edx, [esi+14h]
0x860D88: add     esp, 10h
0x860D8B: push    edi; a3
0x860D8C: push    edx; a2
0x860D8D: mov     ecx, esi; this
0x860D8F: call    sub_760010
0x860D94: mov     eax, ds:0B472B4h
0x860D99: push    eax; a2
0x860D9A: mov     ecx, esi; this
0x860D9C: call    sub_7AECB0
0x860DA1: mov     ecx, ds:0B46F28h
0x860DA7: push    ecx; a2
0x860DA8: mov     ecx, esi; this
0x860DAA: call    sub_7AEC60
0x860DAF: cmp     dword ptr [esi+30h], 0
0x860DB3: jnz     short loc_860DBD
0x860DB5: call    sub_772DF0
0x860DBA: mov     [esi+30h], eax
0x860DBD: mov     ecx, [esi+30h]
0x860DC0: push    0
0x860DC2: push    1
0x860DC4: push    7
0x860DC6: call    sub_772CD0
0x860DCB: cmp     dword ptr [esi+30h], 0
0x860DCF: jnz     short loc_860DD9
0x860DD1: call    sub_772DF0
0x860DD6: mov     [esi+30h], eax
0x860DD9: mov     ecx, [esi+30h]
0x860DDC: push    0
0x860DDE: push    4
0x860DE0: push    17h
0x860DE2: call    sub_772CD0
0x860DE7: cmp     dword ptr [esi+30h], 0
0x860DEB: jnz     short loc_860DF5
0x860DED: call    sub_772DF0
0x860DF2: mov     [esi+30h], eax
0x860DF5: mov     ecx, [esi+30h]
0x860DF8: push    0
0x860DFA: push    0
0x860DFC: push    0Eh
0x860DFE: call    sub_772CD0
0x860E03: cmp     dword ptr [esi+30h], 0
0x860E07: jnz     short loc_860E11
0x860E09: call    sub_772DF0
0x860E0E: mov     [esi+30h], eax
0x860E11: mov     ecx, [esi+30h]
0x860E14: push    0
0x860E16: push    1
0x860E18: push    1Bh
0x860E1A: call    sub_772CD0
0x860E1F: cmp     dword ptr [esi+30h], 0
0x860E23: jnz     short loc_860E2D
0x860E25: call    sub_772DF0
0x860E2A: mov     [esi+30h], eax
0x860E2D: mov     ecx, [esi+30h]
0x860E30: push    0
0x860E32: push    ebx
0x860E33: push    13h
0x860E35: call    sub_772CD0
0x860E3A: cmp     dword ptr [esi+30h], 0
0x860E3E: jnz     short loc_860E48
0x860E40: call    sub_772DF0
0x860E45: mov     [esi+30h], eax
0x860E48: mov     ecx, [esi+30h]
0x860E4B: push    0
0x860E4D: push    ebx
0x860E4E: push    14h
0x860E50: call    sub_772CD0
0x860E55: cmp     dword ptr [esi+30h], 0
0x860E59: jnz     short loc_860E63
0x860E5B: call    sub_772DF0
0x860E60: mov     [esi+30h], eax
0x860E63: mov     ecx, [esi+30h]
0x860E66: push    0
0x860E68: push    0
0x860E6A: push    34h ; '4'
0x860E6C: call    sub_772CD0
0x860E71: cmp     esi, ds:0B4745Ch
0x860E77: mov     ds:0B46A10h, ebp
0x860E7D: mov     dword ptr ds:0B46AE8h, 10h
0x860E87: jz      short loc_860EA8
0x860E89: add     dword ptr [esi+60h], 0FFFFFFFFh
0x860E8D: jnz     short loc_860E96
0x860E8F: mov     ecx, esi
0x860E91: call    sub_7604D0
0x860E96: mov     esi, ds:0B4745Ch
0x860E9C: test    esi, esi
0x860E9E: mov     [esp+2Ch+var_18], esi
0x860EA2: jz      short loc_860EA8
0x860EA4: add     dword ptr [esi+60h], 1
0x860EA8: mov     eax, [esi+18h]
0x860EAB: cmp     eax, ebx
0x860EAD: jnb     loc_860F67
0x860EB3: lea     edx, [esp+2Ch+var_10]
0x860EB7: push    edx
0x860EB8: call    sub_772630
0x860EBD: add     esp, 4
0x860EC0: push    eax
0x860EC1: lea     ecx, [esp+30h+a3]
0x860EC5: mov     byte ptr [esp+30h+var_4], 0Eh
0x860ECA: call    sub_75FAE0
0x860ECF: mov     eax, [esp+2Ch+var_10]
0x860ED3: test    eax, eax
0x860ED5: mov     byte ptr [esp+2Ch+var_4], 1
0x860EDA: jz      short loc_860EEF
0x860EDC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860EE0: mov     ecx, eax
0x860EE2: add     eax, 5Ch ; '\'
0x860EE5: cmp     dword ptr [eax], 0
0x860EE8: jnz     short loc_860EEF
0x860EEA: call    sub_772560
0x860EEF: mov     edi, [esp+2Ch+a3]
0x860EF3: push    ebx
0x860EF4: push    1
0x860EF6: push    0
0x860EF8: push    edi
0x860EF9: call    sub_801110
0x860EFE: mov     eax, [esi+14h]
0x860F01: add     esp, 10h
0x860F04: push    edi; a3
0x860F05: push    eax; a2
0x860F06: mov     ecx, esi; this
0x860F08: call    sub_760010
0x860F0D: lea     ecx, [esp+2Ch+var_10]
0x860F11: push    ecx
0x860F12: call    sub_772630
0x860F17: add     esp, 4
0x860F1A: push    eax
0x860F1B: lea     ecx, [esp+30h+a3]
0x860F1F: mov     byte ptr [esp+30h+var_4], 0Fh
0x860F24: call    sub_75FAE0
0x860F29: mov     eax, [esp+2Ch+var_10]
0x860F2D: test    eax, eax
0x860F2F: mov     byte ptr [esp+2Ch+var_4], 1
0x860F34: jz      short loc_860F49
0x860F36: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x860F3A: mov     ecx, eax
0x860F3C: add     eax, 5Ch ; '\'
0x860F3F: cmp     dword ptr [eax], 0
0x860F42: jnz     short loc_860F49
0x860F44: call    sub_772560
0x860F49: mov     edi, [esp+2Ch+a3]
0x860F4D: push    ebx
0x860F4E: push    1
0x860F50: push    0
0x860F52: push    edi
0x860F53: call    sub_801110
0x860F58: mov     edx, [esi+14h]
0x860F5B: add     esp, 10h
0x860F5E: push    edi; a3
0x860F5F: push    edx; a2
0x860F60: mov     ecx, esi; this
0x860F62: call    sub_760010
0x860F67: mov     eax, ds:0B472B8h
0x860F6C: push    eax; a2
0x860F6D: mov     ecx, esi; this
0x860F6F: call    sub_7AECB0
0x860F74: mov     ecx, ds:0B46F30h
0x860F7A: push    ecx; a2
0x860F7B: mov     ecx, esi; this
0x860F7D: call    sub_7AEC60
0x860F82: cmp     dword ptr [esi+30h], 0
0x860F86: jnz     short loc_860F90
0x860F88: call    sub_772DF0
0x860F8D: mov     [esi+30h], eax
0x860F90: mov     ecx, [esi+30h]
0x860F93: push    0
0x860F95: push    1
0x860F97: push    7
0x860F99: call    sub_772CD0
0x860F9E: cmp     dword ptr [esi+30h], 0
0x860FA2: jnz     short loc_860FAC
0x860FA4: call    sub_772DF0
0x860FA9: mov     [esi+30h], eax
0x860FAC: mov     ecx, [esi+30h]
0x860FAF: push    0
0x860FB1: push    4
0x860FB3: push    17h
0x860FB5: call    sub_772CD0
0x860FBA: cmp     dword ptr [esi+30h], 0
0x860FBE: jnz     short loc_860FC8
0x860FC0: call    sub_772DF0
0x860FC5: mov     [esi+30h], eax
0x860FC8: mov     ecx, [esi+30h]
0x860FCB: push    0
0x860FCD: push    0
0x860FCF: push    0Eh
0x860FD1: call    sub_772CD0
0x860FD6: cmp     dword ptr [esi+30h], 0
0x860FDA: jnz     short loc_860FE4
0x860FDC: call    sub_772DF0
0x860FE1: mov     [esi+30h], eax
0x860FE4: mov     ecx, [esi+30h]
0x860FE7: push    0
0x860FE9: push    1
0x860FEB: push    1Bh
0x860FED: call    sub_772CD0
0x860FF2: cmp     dword ptr [esi+30h], 0
0x860FF6: jnz     short loc_861000
0x860FF8: call    sub_772DF0
0x860FFD: mov     [esi+30h], eax
0x861000: mov     ecx, [esi+30h]
0x861003: push    0
0x861005: push    ebx
0x861006: push    13h
0x861008: call    sub_772CD0
0x86100D: cmp     dword ptr [esi+30h], 0
0x861011: jnz     short loc_86101B
0x861013: call    sub_772DF0
0x861018: mov     [esi+30h], eax
0x86101B: mov     ecx, [esi+30h]
0x86101E: push    0
0x861020: push    ebx
0x861021: push    14h
0x861023: call    sub_772CD0
0x861028: cmp     dword ptr [esi+30h], 0
0x86102C: jnz     short loc_861036
0x86102E: call    sub_772DF0
0x861033: mov     [esi+30h], eax
0x861036: mov     ecx, [esi+30h]
0x861039: push    0
0x86103B: push    0
0x86103D: push    34h ; '4'
0x86103F: call    sub_772CD0
0x861044: cmp     esi, ds:0B47460h
0x86104A: mov     dword ptr ds:0B46A14h, 208802h
0x861054: mov     dword ptr ds:0B46AECh, 10h
0x86105E: jz      short loc_86107F
0x861060: add     dword ptr [esi+60h], 0FFFFFFFFh
0x861064: jnz     short loc_86106D
0x861066: mov     ecx, esi
0x861068: call    sub_7604D0
0x86106D: mov     esi, ds:0B47460h
0x861073: test    esi, esi
0x861075: mov     [esp+2Ch+var_18], esi
0x861079: jz      short loc_86107F
0x86107B: add     dword ptr [esi+60h], 1
0x86107F: push    esi
0x861080: call    sub_85E570
0x861085: mov     edx, ds:0B472BCh
0x86108B: add     esp, 4
0x86108E: push    edx; a2
0x86108F: mov     ecx, esi; this
0x861091: call    sub_7AECB0
0x861096: mov     eax, ds:0B46F34h
0x86109B: push    eax; a2
0x86109C: mov     ecx, esi; this
0x86109E: call    sub_7AEC60
0x8610A3: cmp     dword ptr [esi+30h], 0
0x8610A7: jnz     short loc_8610B1
0x8610A9: call    sub_772DF0
0x8610AE: mov     [esi+30h], eax
0x8610B1: mov     ecx, [esi+30h]
0x8610B4: push    0
0x8610B6: push    1
0x8610B8: push    7
0x8610BA: call    sub_772CD0
0x8610BF: cmp     dword ptr [esi+30h], 0
0x8610C3: jnz     short loc_8610CD
0x8610C5: call    sub_772DF0
0x8610CA: mov     [esi+30h], eax
0x8610CD: mov     ecx, [esi+30h]
0x8610D0: push    0
0x8610D2: push    4
0x8610D4: push    17h
0x8610D6: call    sub_772CD0
0x8610DB: cmp     dword ptr [esi+30h], 0
0x8610DF: jnz     short loc_8610E9
0x8610E1: call    sub_772DF0
0x8610E6: mov     [esi+30h], eax
0x8610E9: mov     ecx, [esi+30h]
0x8610EC: push    0
0x8610EE: push    0
0x8610F0: push    0Eh
0x8610F2: call    sub_772CD0
0x8610F7: cmp     dword ptr [esi+30h], 0
0x8610FB: jnz     short loc_861105
0x8610FD: call    sub_772DF0
0x861102: mov     [esi+30h], eax
0x861105: mov     ecx, [esi+30h]
0x861108: push    0
0x86110A: push    1
0x86110C: push    1Bh
0x86110E: call    sub_772CD0
0x861113: cmp     dword ptr [esi+30h], 0
0x861117: jnz     short loc_861121
0x861119: call    sub_772DF0
0x86111E: mov     [esi+30h], eax
0x861121: mov     ecx, [esi+30h]
0x861124: push    0
0x861126: push    9
0x861128: push    13h
0x86112A: call    sub_772CD0
0x86112F: cmp     dword ptr [esi+30h], 0
0x861133: jnz     short loc_86113D
0x861135: call    sub_772DF0
0x86113A: mov     [esi+30h], eax
0x86113D: mov     ecx, [esi+30h]
0x861140: push    0
0x861142: push    1
0x861144: push    14h
0x861146: call    sub_772CD0
0x86114B: cmp     dword ptr [esi+30h], 0
0x86114F: jnz     short loc_861159
0x861151: call    sub_772DF0
0x861156: mov     [esi+30h], eax
0x861159: mov     ecx, [esi+30h]
0x86115C: push    0
0x86115E: push    0
0x861160: push    34h ; '4'
0x861162: call    sub_772CD0
0x861167: cmp     dword ptr [esi+30h], 0
0x86116B: jnz     short loc_861175
0x86116D: call    sub_772DF0
0x861172: mov     [esi+30h], eax
0x861175: mov     ecx, [esi+30h]
0x861178: mov     ebx, 1
0x86117D: push    ebx
0x86117E: push    3Fh ; '?'
0x861180: push    98h ; '˜'
0x861185: call    sub_772CD0
0x86118A: cmp     esi, ds:0B47464h
0x861190: mov     edi, 30802h
0x861195: mov     ebp, 0C10h
0x86119A: mov     ds:0B46A18h, edi
0x8611A0: mov     ds:0B46AF0h, ebp
0x8611A6: jz      short loc_8611C6
0x8611A8: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8611AC: jnz     short loc_8611B5
0x8611AE: mov     ecx, esi
0x8611B0: call    sub_7604D0
0x8611B5: mov     esi, ds:0B47464h
0x8611BB: test    esi, esi
0x8611BD: mov     [esp+2Ch+var_18], esi
0x8611C1: jz      short loc_8611C6
0x8611C3: add     [esi+60h], ebx
0x8611C6: push    esi
0x8611C7: call    sub_85E570
0x8611CC: mov     ecx, ds:0B472C0h
0x8611D2: add     esp, 4
0x8611D5: push    ecx; a2
0x8611D6: mov     ecx, esi; this
0x8611D8: call    sub_7AECB0
0x8611DD: mov     edx, ds:0B46F34h
0x8611E3: push    edx; a2
0x8611E4: mov     ecx, esi; this
0x8611E6: call    sub_7AEC60
0x8611EB: cmp     dword ptr [esi+30h], 0
0x8611EF: jnz     short loc_8611F9
0x8611F1: call    sub_772DF0
0x8611F6: mov     [esi+30h], eax
0x8611F9: mov     ecx, [esi+30h]
0x8611FC: push    0
0x8611FE: push    ebx
0x8611FF: push    7
0x861201: call    sub_772CD0
0x861206: cmp     dword ptr [esi+30h], 0
0x86120A: jnz     short loc_861214
0x86120C: call    sub_772DF0
0x861211: mov     [esi+30h], eax
0x861214: mov     ecx, [esi+30h]
0x861217: push    0
0x861219: push    4
0x86121B: push    17h
0x86121D: call    sub_772CD0
0x861222: cmp     dword ptr [esi+30h], 0
0x861226: jnz     short loc_861230
0x861228: call    sub_772DF0
0x86122D: mov     [esi+30h], eax
0x861230: mov     ecx, [esi+30h]
0x861233: push    0
0x861235: push    0
0x861237: push    0Eh
0x861239: call    sub_772CD0
0x86123E: cmp     dword ptr [esi+30h], 0
0x861242: jnz     short loc_86124C
0x861244: call    sub_772DF0
0x861249: mov     [esi+30h], eax
0x86124C: mov     ecx, [esi+30h]
0x86124F: push    0
0x861251: push    ebx
0x861252: push    1Bh
0x861254: call    sub_772CD0
0x861259: cmp     dword ptr [esi+30h], 0
0x86125D: jnz     short loc_861267
0x86125F: call    sub_772DF0
0x861264: mov     [esi+30h], eax
0x861267: mov     ecx, [esi+30h]
0x86126A: push    0
0x86126C: push    9
0x86126E: push    13h
0x861270: call    sub_772CD0
0x861275: cmp     dword ptr [esi+30h], 0
0x861279: jnz     short loc_861283
0x86127B: call    sub_772DF0
0x861280: mov     [esi+30h], eax
0x861283: mov     ecx, [esi+30h]
0x861286: push    0
0x861288: push    ebx
0x861289: push    14h
0x86128B: call    sub_772CD0
0x861290: cmp     dword ptr [esi+30h], 0
0x861294: jnz     short loc_86129E
0x861296: call    sub_772DF0
0x86129B: mov     [esi+30h], eax
0x86129E: mov     ecx, [esi+30h]
0x8612A1: push    0
0x8612A3: push    0
0x8612A5: push    34h ; '4'
0x8612A7: call    sub_772CD0
0x8612AC: cmp     dword ptr [esi+30h], 0
0x8612B0: jnz     short loc_8612BA
0x8612B2: call    sub_772DF0
0x8612B7: mov     [esi+30h], eax
0x8612BA: mov     ecx, [esi+30h]
0x8612BD: push    ebx
0x8612BE: push    3Fh ; '?'
0x8612C0: push    98h ; '˜'
0x8612C5: call    sub_772CD0
0x8612CA: cmp     esi, ds:0B47468h
0x8612D0: mov     ds:0B46A1Ch, edi
0x8612D6: mov     ds:0B46AF4h, ebp
0x8612DC: jz      short loc_8612FC
0x8612DE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8612E2: jnz     short loc_8612EB
0x8612E4: mov     ecx, esi
0x8612E6: call    sub_7604D0
0x8612EB: mov     esi, ds:0B47468h
0x8612F1: test    esi, esi
0x8612F3: mov     [esp+2Ch+var_18], esi
0x8612F7: jz      short loc_8612FC
0x8612F9: add     [esi+60h], ebx
0x8612FC: push    esi
0x8612FD: call    sub_85E570
0x861302: mov     eax, ds:0B472C4h
0x861307: add     esp, 4
0x86130A: push    eax; a2
0x86130B: mov     ecx, esi; this
0x86130D: call    sub_7AECB0
0x861312: mov     ecx, ds:0B46F34h
0x861318: push    ecx; a2
0x861319: mov     ecx, esi; this
0x86131B: call    sub_7AEC60
0x861320: cmp     dword ptr [esi+30h], 0
0x861324: jnz     short loc_86132E
0x861326: call    sub_772DF0
0x86132B: mov     [esi+30h], eax
0x86132E: mov     ecx, [esi+30h]
0x861331: push    0
0x861333: push    ebx
0x861334: push    7
0x861336: call    sub_772CD0
0x86133B: cmp     dword ptr [esi+30h], 0
0x86133F: jnz     short loc_861349
0x861341: call    sub_772DF0
0x861346: mov     [esi+30h], eax
0x861349: mov     ecx, [esi+30h]
0x86134C: push    0
0x86134E: push    4
0x861350: push    17h
0x861352: call    sub_772CD0
0x861357: cmp     dword ptr [esi+30h], 0
0x86135B: jnz     short loc_861365
0x86135D: call    sub_772DF0
0x861362: mov     [esi+30h], eax
0x861365: mov     ecx, [esi+30h]
0x861368: push    0
0x86136A: push    0
0x86136C: push    0Eh
0x86136E: call    sub_772CD0
0x861373: cmp     dword ptr [esi+30h], 0
0x861377: jnz     short loc_861381
0x861379: call    sub_772DF0
0x86137E: mov     [esi+30h], eax
0x861381: mov     ecx, [esi+30h]
0x861384: push    0
0x861386: push    ebx
0x861387: push    1Bh
0x861389: call    sub_772CD0
0x86138E: cmp     dword ptr [esi+30h], 0
0x861392: jnz     short loc_86139C
0x861394: call    sub_772DF0
0x861399: mov     [esi+30h], eax
0x86139C: mov     ecx, [esi+30h]
0x86139F: push    0
0x8613A1: push    9
0x8613A3: push    13h
0x8613A5: call    sub_772CD0
0x8613AA: cmp     dword ptr [esi+30h], 0
0x8613AE: jnz     short loc_8613B8
0x8613B0: call    sub_772DF0
0x8613B5: mov     [esi+30h], eax
0x8613B8: mov     ecx, [esi+30h]
0x8613BB: push    0
0x8613BD: push    ebx
0x8613BE: push    14h
0x8613C0: call    sub_772CD0
0x8613C5: cmp     dword ptr [esi+30h], 0
0x8613C9: jnz     short loc_8613D3
0x8613CB: call    sub_772DF0
0x8613D0: mov     [esi+30h], eax
0x8613D3: mov     ecx, [esi+30h]
0x8613D6: push    0
0x8613D8: push    0
0x8613DA: push    34h ; '4'
0x8613DC: call    sub_772CD0
0x8613E1: cmp     dword ptr [esi+30h], 0
0x8613E5: jnz     short loc_8613EF
0x8613E7: call    sub_772DF0
0x8613EC: mov     [esi+30h], eax
0x8613EF: mov     ecx, [esi+30h]
0x8613F2: push    ebx
0x8613F3: push    3Fh ; '?'
0x8613F5: push    98h ; '˜'
0x8613FA: call    sub_772CD0
0x8613FF: cmp     esi, ds:0B4746Ch
0x861405: mov     edi, 3080Ch
0x86140A: mov     ds:0B46A20h, edi
0x861410: mov     ds:0B46AF8h, ebp
0x861416: jz      short loc_861436
0x861418: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86141C: jnz     short loc_861425
0x86141E: mov     ecx, esi
0x861420: call    sub_7604D0
0x861425: mov     esi, ds:0B4746Ch
0x86142B: test    esi, esi
0x86142D: mov     [esp+2Ch+var_18], esi
0x861431: jz      short loc_861436
0x861433: add     [esi+60h], ebx
0x861436: push    esi
0x861437: call    sub_85E570
0x86143C: mov     edx, ds:0B472C8h
0x861442: add     esp, 4
0x861445: push    edx; a2
0x861446: mov     ecx, esi; this
0x861448: call    sub_7AECB0
0x86144D: mov     eax, ds:0B46F34h
0x861452: push    eax; a2
0x861453: mov     ecx, esi; this
0x861455: call    sub_7AEC60
0x86145A: cmp     dword ptr [esi+30h], 0
0x86145E: jnz     short loc_861468
0x861460: call    sub_772DF0
0x861465: mov     [esi+30h], eax
0x861468: mov     ecx, [esi+30h]
0x86146B: push    0
0x86146D: push    ebx
0x86146E: push    7
0x861470: call    sub_772CD0
0x861475: cmp     dword ptr [esi+30h], 0
0x861479: jnz     short loc_861483
0x86147B: call    sub_772DF0
0x861480: mov     [esi+30h], eax
0x861483: mov     ecx, [esi+30h]
0x861486: push    0
0x861488: push    4
0x86148A: push    17h
0x86148C: call    sub_772CD0
0x861491: cmp     dword ptr [esi+30h], 0
0x861495: jnz     short loc_86149F
0x861497: call    sub_772DF0
0x86149C: mov     [esi+30h], eax
0x86149F: mov     ecx, [esi+30h]
0x8614A2: push    0
0x8614A4: push    0
0x8614A6: push    0Eh
0x8614A8: call    sub_772CD0
0x8614AD: cmp     dword ptr [esi+30h], 0
0x8614B1: jnz     short loc_8614BB
0x8614B3: call    sub_772DF0
0x8614B8: mov     [esi+30h], eax
0x8614BB: mov     ecx, [esi+30h]
0x8614BE: push    0
0x8614C0: push    ebx
0x8614C1: push    1Bh
0x8614C3: call    sub_772CD0
0x8614C8: cmp     dword ptr [esi+30h], 0
0x8614CC: jnz     short loc_8614D6
0x8614CE: call    sub_772DF0
0x8614D3: mov     [esi+30h], eax
0x8614D6: mov     ecx, [esi+30h]
0x8614D9: push    0
0x8614DB: push    9
0x8614DD: push    13h
0x8614DF: call    sub_772CD0
0x8614E4: cmp     dword ptr [esi+30h], 0
0x8614E8: jnz     short loc_8614F2
0x8614EA: call    sub_772DF0
0x8614EF: mov     [esi+30h], eax
0x8614F2: mov     ecx, [esi+30h]
0x8614F5: push    0
0x8614F7: push    ebx
0x8614F8: push    14h
0x8614FA: call    sub_772CD0
0x8614FF: cmp     dword ptr [esi+30h], 0
0x861503: jnz     short loc_86150D
0x861505: call    sub_772DF0
0x86150A: mov     [esi+30h], eax
0x86150D: mov     ecx, [esi+30h]
0x861510: push    0
0x861512: push    0
0x861514: push    34h ; '4'
0x861516: call    sub_772CD0
0x86151B: cmp     dword ptr [esi+30h], 0
0x86151F: jnz     short loc_861529
0x861521: call    sub_772DF0
0x861526: mov     [esi+30h], eax
0x861529: mov     ecx, [esi+30h]
0x86152C: push    ebx
0x86152D: push    3Fh ; '?'
0x86152F: push    98h ; '˜'
0x861534: call    sub_772CD0
0x861539: push    offset dword_B47470
0x86153E: lea     ecx, [esp+30h+var_18]
0x861542: mov     ds:0B46A24h, edi
0x861548: mov     ds:0B46AFCh, ebp
0x86154E: call    sub_76C890
0x861553: mov     esi, [esp+2Ch+var_18]
0x861557: push    esi
0x861558: call    sub_85E570
0x86155D: mov     ecx, [esi+24h]
0x861560: mov     ecx, [ecx+4]
0x861563: add     esp, 4
0x861566: push    0
0x861568: call    sub_7715E0
0x86156D: mov     edx, ds:0B472CCh
0x861573: push    edx; a2
0x861574: mov     ecx, esi; this
0x861576: call    sub_7AECB0
0x86157B: mov     eax, ds:0B46F38h
0x861580: push    eax; a2
0x861581: mov     ecx, esi; this
0x861583: call    sub_7AEC60
0x861588: cmp     dword ptr [esi+30h], 0
0x86158C: jnz     short loc_861596
0x86158E: call    sub_772DF0
0x861593: mov     [esi+30h], eax
0x861596: mov     ecx, [esi+30h]
0x861599: xor     ebp, ebp
0x86159B: push    ebp
0x86159C: push    ebx
0x86159D: push    7
0x86159F: call    sub_772CD0
0x8615A4: cmp     [esi+30h], ebp
0x8615A7: jnz     short loc_8615B1
0x8615A9: call    sub_772DF0
0x8615AE: mov     [esi+30h], eax
0x8615B1: mov     ecx, [esi+30h]
0x8615B4: push    ebp
0x8615B5: push    4
0x8615B7: push    17h
0x8615B9: call    sub_772CD0
0x8615BE: cmp     [esi+30h], ebp
0x8615C1: jnz     short loc_8615CB
0x8615C3: call    sub_772DF0
0x8615C8: mov     [esi+30h], eax
0x8615CB: mov     ecx, [esi+30h]
0x8615CE: push    ebp
0x8615CF: push    ebp
0x8615D0: push    0Eh
0x8615D2: call    sub_772CD0
0x8615D7: cmp     [esi+30h], ebp
0x8615DA: jnz     short loc_8615E4
0x8615DC: call    sub_772DF0
0x8615E1: mov     [esi+30h], eax
0x8615E4: mov     ecx, [esi+30h]
0x8615E7: push    ebp
0x8615E8: push    ebx
0x8615E9: push    1Bh
0x8615EB: call    sub_772CD0
0x8615F0: cmp     [esi+30h], ebp
0x8615F3: jnz     short loc_8615FD
0x8615F5: call    sub_772DF0
0x8615FA: mov     [esi+30h], eax
0x8615FD: mov     ecx, [esi+30h]
0x861600: push    ebp
0x861601: push    9
0x861603: push    13h
0x861605: call    sub_772CD0
0x86160A: cmp     [esi+30h], ebp
0x86160D: jnz     short loc_861617
0x86160F: call    sub_772DF0
0x861614: mov     [esi+30h], eax
0x861617: mov     ecx, [esi+30h]
0x86161A: push    ebp
0x86161B: push    6
0x86161D: push    14h
0x86161F: call    sub_772CD0
0x861624: cmp     [esi+30h], ebp
0x861627: jnz     short loc_861631
0x861629: call    sub_772DF0
0x86162E: mov     [esi+30h], eax
0x861631: mov     ecx, [esi+30h]
0x861634: push    ebp
0x861635: push    ebx
0x861636: push    0Fh
0x861638: call    sub_772CD0
0x86163D: cmp     [esi+30h], ebp
0x861640: jnz     short loc_86164A
0x861642: call    sub_772DF0
0x861647: mov     [esi+30h], eax
0x86164A: mov     ecx, [esi+30h]
0x86164D: push    ebp
0x86164E: push    5
0x861650: push    19h
0x861652: call    sub_772CD0
0x861657: cmp     [esi+30h], ebp
0x86165A: jnz     short loc_861664
0x86165C: call    sub_772DF0
0x861661: mov     [esi+30h], eax
0x861664: mov     ecx, [esi+30h]
0x861667: push    ebp
0x861668: push    ebp
0x861669: push    18h
0x86166B: call    sub_772CD0
0x861670: cmp     [esi+30h], ebp
0x861673: jnz     short loc_86167D
0x861675: call    sub_772DF0
0x86167A: mov     [esi+30h], eax
0x86167D: mov     ecx, [esi+30h]
0x861680: push    ebp
0x861681: push    ebp
0x861682: push    34h ; '4'
0x861684: call    sub_772CD0
0x861689: mov     edi, 2
0x86168E: push    offset dword_B47474
0x861693: lea     ecx, [esp+30h+var_18]
0x861697: mov     ds:0B46A28h, edi
0x86169D: mov     ds:0B46B00h, ebp
0x8616A3: call    sub_76C890
0x8616A8: mov     esi, [esp+2Ch+var_18]
0x8616AC: push    esi
0x8616AD: call    sub_85E570
0x8616B2: mov     ecx, [esi+24h]
0x8616B5: mov     ecx, [ecx+4]
0x8616B8: add     esp, 4
0x8616BB: push    ebp
0x8616BC: call    sub_7715E0
0x8616C1: mov     edx, ds:0B472CCh
0x8616C7: push    edx; a2
0x8616C8: mov     ecx, esi; this
0x8616CA: call    sub_7AECB0
0x8616CF: mov     eax, ds:0B46F3Ch
0x8616D4: push    eax; a2
0x8616D5: mov     ecx, esi; this
0x8616D7: call    sub_7AEC60
0x8616DC: cmp     [esi+30h], ebp
0x8616DF: jnz     short loc_8616E9
0x8616E1: call    sub_772DF0
0x8616E6: mov     [esi+30h], eax
0x8616E9: mov     ecx, [esi+30h]
0x8616EC: push    ebp
0x8616ED: push    ebx
0x8616EE: push    7
0x8616F0: call    sub_772CD0
0x8616F5: cmp     [esi+30h], ebp
0x8616F8: jnz     short loc_861702
0x8616FA: call    sub_772DF0
0x8616FF: mov     [esi+30h], eax
0x861702: mov     ecx, [esi+30h]
0x861705: push    ebp
0x861706: push    4
0x861708: push    17h
0x86170A: call    sub_772CD0
0x86170F: cmp     [esi+30h], ebp
0x861712: jnz     short loc_86171C
0x861714: call    sub_772DF0
0x861719: mov     [esi+30h], eax
0x86171C: mov     ecx, [esi+30h]
0x86171F: push    ebp
0x861720: push    ebp
0x861721: push    0Eh
0x861723: call    sub_772CD0
0x861728: cmp     [esi+30h], ebp
0x86172B: jnz     short loc_861735
0x86172D: call    sub_772DF0
0x861732: mov     [esi+30h], eax
0x861735: mov     ecx, [esi+30h]
0x861738: push    ebp
0x861739: push    ebx
0x86173A: push    1Bh
0x86173C: call    sub_772CD0
0x861741: cmp     [esi+30h], ebp
0x861744: jnz     short loc_86174E
0x861746: call    sub_772DF0
0x86174B: mov     [esi+30h], eax
0x86174E: mov     ecx, [esi+30h]
0x861751: push    ebp
0x861752: push    9
0x861754: push    13h
0x861756: call    sub_772CD0
0x86175B: cmp     [esi+30h], ebp
0x86175E: jnz     short loc_861768
0x861760: call    sub_772DF0
0x861765: mov     [esi+30h], eax
0x861768: mov     ecx, [esi+30h]
0x86176B: push    ebp
0x86176C: push    6
0x86176E: push    14h
0x861770: call    sub_772CD0
0x861775: cmp     [esi+30h], ebp
0x861778: jnz     short loc_861782
0x86177A: call    sub_772DF0
0x86177F: mov     [esi+30h], eax
0x861782: mov     ecx, [esi+30h]
0x861785: push    ebp
0x861786: push    ebx
0x861787: push    0Fh
0x861789: call    sub_772CD0
0x86178E: cmp     [esi+30h], ebp
0x861791: jnz     short loc_86179B
0x861793: call    sub_772DF0
0x861798: mov     [esi+30h], eax
0x86179B: mov     ecx, [esi+30h]
0x86179E: push    ebp
0x86179F: push    5
0x8617A1: push    19h
0x8617A3: call    sub_772CD0
0x8617A8: cmp     [esi+30h], ebp
0x8617AB: jnz     short loc_8617B5
0x8617AD: call    sub_772DF0
0x8617B2: mov     [esi+30h], eax
0x8617B5: mov     ecx, [esi+30h]
0x8617B8: push    ebp
0x8617B9: push    ebp
0x8617BA: push    18h
0x8617BC: call    sub_772CD0
0x8617C1: cmp     [esi+30h], ebp
0x8617C4: jnz     short loc_8617CE
0x8617C6: call    sub_772DF0
0x8617CB: mov     [esi+30h], eax
0x8617CE: mov     ecx, [esi+30h]
0x8617D1: push    ebp
0x8617D2: push    ebp
0x8617D3: push    34h ; '4'
0x8617D5: call    sub_772CD0
0x8617DA: push    offset dword_B47480
0x8617DF: lea     ecx, [esp+30h+var_18]
0x8617E3: mov     ds:0B46A2Ch, edi
0x8617E9: mov     ds:0B46B04h, ebp
0x8617EF: call    sub_76C890
0x8617F4: mov     esi, [esp+2Ch+var_18]
0x8617F8: cmp     [esi+18h], ebx
0x8617FB: jnb     short loc_861854
0x8617FD: lea     ecx, [esp+2Ch+var_10]
0x861801: push    ecx
0x861802: call    sub_772630
0x861807: add     esp, 4
0x86180A: push    eax
0x86180B: lea     ecx, [esp+30h+a3]
0x86180F: mov     byte ptr [esp+30h+var_4], 10h
0x861814: call    sub_75FAE0
0x861819: mov     eax, [esp+2Ch+var_10]
0x86181D: cmp     eax, ebp
0x86181F: mov     byte ptr [esp+2Ch+var_4], 1
0x861824: jz      short loc_861838
0x861826: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86182A: mov     ecx, eax
0x86182C: add     eax, 5Ch ; '\'
0x86182F: cmp     [eax], ebp
0x861831: jnz     short loc_861838
0x861833: call    sub_772560
0x861838: push    edi
0x861839: mov     edi, [esp+30h+a3]
0x86183D: push    ebx
0x86183E: push    ebp
0x86183F: push    edi
0x861840: call    sub_801110
0x861845: mov     edx, [esi+14h]
0x861848: add     esp, 10h
0x86184B: push    edi; a3
0x86184C: push    edx; a2
0x86184D: mov     ecx, esi; this
0x86184F: call    sub_760010
0x861854: mov     eax, ds:0B472D8h
0x861859: push    eax; a2
0x86185A: mov     ecx, esi; this
0x86185C: call    sub_7AECB0
0x861861: mov     ecx, ds:0B46F48h
0x861867: push    ecx; a2
0x861868: mov     ecx, esi; this
0x86186A: call    sub_7AEC60
0x86186F: cmp     [esi+30h], ebp
0x861872: jnz     short loc_86187C
0x861874: call    sub_772DF0
0x861879: mov     [esi+30h], eax
0x86187C: mov     ecx, [esi+30h]
0x86187F: push    ebp
0x861880: push    ebp
0x861881: push    1Bh
0x861883: call    sub_772CD0
0x861888: cmp     [esi+30h], ebp
0x86188B: jnz     short loc_861895
0x86188D: call    sub_772DF0
0x861892: mov     [esi+30h], eax
0x861895: mov     ecx, [esi+30h]
0x861898: push    ebp
0x861899: push    ebp
0x86189A: push    0Fh
0x86189C: call    sub_772CD0
0x8618A1: cmp     [esi+30h], ebp
0x8618A4: jnz     short loc_8618AE
0x8618A6: call    sub_772DF0
0x8618AB: mov     [esi+30h], eax
0x8618AE: mov     ecx, [esi+30h]
0x8618B1: push    ebp
0x8618B2: push    ebx
0x8618B3: push    7
0x8618B5: call    sub_772CD0
0x8618BA: cmp     [esi+30h], ebp
0x8618BD: jnz     short loc_8618C7
0x8618BF: call    sub_772DF0
0x8618C4: mov     [esi+30h], eax
0x8618C7: mov     ecx, [esi+30h]
0x8618CA: push    ebp
0x8618CB: push    4
0x8618CD: push    17h
0x8618CF: call    sub_772CD0
0x8618D4: cmp     [esi+30h], ebp
0x8618D7: jnz     short loc_8618E1
0x8618D9: call    sub_772DF0
0x8618DE: mov     [esi+30h], eax
0x8618E1: mov     ecx, [esi+30h]
0x8618E4: push    ebp
0x8618E5: push    ebx
0x8618E6: push    0Eh
0x8618E8: call    sub_772CD0
0x8618ED: cmp     [esi+30h], ebp
0x8618F0: jnz     short loc_8618FA
0x8618F2: call    sub_772DF0
0x8618F7: mov     [esi+30h], eax
0x8618FA: mov     ecx, [esi+30h]
0x8618FD: push    0
0x8618FF: push    0
0x861901: push    34h ; '4'
0x861903: call    sub_772CD0
0x861908: mov     ebx, 12h
0x86190D: mov     edi, 200h
0x861912: push    offset dword_B47484
0x861917: lea     ecx, [esp+30h+var_18]
0x86191B: mov     ds:0B46A38h, ebx
0x861921: mov     ds:0B46B10h, edi
0x861927: call    sub_76C890
0x86192C: mov     esi, [esp+2Ch+var_18]
0x861930: cmp     dword ptr [esi+18h], 1
0x861934: jnb     short loc_861991
0x861936: lea     edx, [esp+2Ch+var_10]
0x86193A: push    edx
0x86193B: call    sub_772630
0x861940: add     esp, 4
0x861943: push    eax
0x861944: lea     ecx, [esp+30h+a3]
0x861948: mov     byte ptr [esp+30h+var_4], 11h
0x86194D: call    sub_75FAE0
0x861952: mov     eax, [esp+2Ch+var_10]
0x861956: test    eax, eax
0x861958: mov     byte ptr [esp+2Ch+var_4], 1
0x86195D: jz      short loc_861972
0x86195F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x861963: mov     ecx, eax
0x861965: add     eax, 5Ch ; '\'
0x861968: cmp     dword ptr [eax], 0
0x86196B: jnz     short loc_861972
0x86196D: call    sub_772560
0x861972: mov     ebp, [esp+2Ch+a3]
0x861976: push    2
0x861978: push    1
0x86197A: push    0
0x86197C: push    ebp
0x86197D: call    sub_801110
0x861982: mov     eax, [esi+14h]
0x861985: add     esp, 10h
0x861988: push    ebp; a3
0x861989: push    eax; a2
0x86198A: mov     ecx, esi; this
0x86198C: call    sub_760010
0x861991: mov     ecx, ds:0B472DCh
0x861997: push    ecx; a2
0x861998: mov     ecx, esi; this
0x86199A: call    sub_7AECB0
0x86199F: mov     edx, ds:0B46F4Ch
0x8619A5: push    edx; a2
0x8619A6: mov     ecx, esi; this
0x8619A8: call    sub_7AEC60
0x8619AD: cmp     dword ptr [esi+30h], 0
0x8619B1: jnz     short loc_8619BB
0x8619B3: call    sub_772DF0
0x8619B8: mov     [esi+30h], eax
0x8619BB: mov     ecx, [esi+30h]
0x8619BE: push    0
0x8619C0: push    0
0x8619C2: push    1Bh
0x8619C4: call    sub_772CD0
0x8619C9: cmp     dword ptr [esi+30h], 0
0x8619CD: jnz     short loc_8619D7
0x8619CF: call    sub_772DF0
0x8619D4: mov     [esi+30h], eax
0x8619D7: mov     ecx, [esi+30h]
0x8619DA: push    0
0x8619DC: push    0
0x8619DE: push    0Fh
0x8619E0: call    sub_772CD0
0x8619E5: cmp     dword ptr [esi+30h], 0
0x8619E9: jnz     short loc_8619F3
0x8619EB: call    sub_772DF0
0x8619F0: mov     [esi+30h], eax
0x8619F3: mov     ecx, [esi+30h]
0x8619F6: push    0
0x8619F8: push    1
0x8619FA: push    7
0x8619FC: call    sub_772CD0
0x861A01: cmp     dword ptr [esi+30h], 0
0x861A05: jnz     short loc_861A0F
0x861A07: call    sub_772DF0
0x861A0C: mov     [esi+30h], eax
0x861A0F: mov     ecx, [esi+30h]
0x861A12: push    0
0x861A14: push    4
0x861A16: push    17h
0x861A18: call    sub_772CD0
0x861A1D: cmp     dword ptr [esi+30h], 0
0x861A21: jnz     short loc_861A2B
0x861A23: call    sub_772DF0
0x861A28: mov     [esi+30h], eax
0x861A2B: mov     ecx, [esi+30h]
0x861A2E: push    0
0x861A30: push    1
0x861A32: push    0Eh
0x861A34: call    sub_772CD0
0x861A39: cmp     dword ptr [esi+30h], 0
0x861A3D: jnz     short loc_861A47
0x861A3F: call    sub_772DF0
0x861A44: mov     [esi+30h], eax
0x861A47: mov     ecx, [esi+30h]
0x861A4A: push    0
0x861A4C: push    0
0x861A4E: push    34h ; '4'
0x861A50: call    sub_772CD0
0x861A55: mov     ebp, 2Ch ; ','
0x861A5A: push    offset dword_B47488
0x861A5F: lea     ecx, [esp+30h+var_18]
0x861A63: mov     ds:0B46A3Ch, ebp
0x861A69: mov     ds:0B46B14h, edi
0x861A6F: call    sub_76C890
0x861A74: mov     esi, [esp+2Ch+var_18]
0x861A78: cmp     dword ptr [esi+18h], 1
0x861A7C: jnb     short loc_861ADC
0x861A7E: lea     eax, [esp+2Ch+var_10]
0x861A82: push    eax
0x861A83: call    sub_772630
0x861A88: add     esp, 4
0x861A8B: push    eax
0x861A8C: lea     ecx, [esp+30h+a3]
0x861A90: mov     byte ptr [esp+30h+var_4], bl
0x861A94: call    sub_75FAE0
0x861A99: mov     eax, [esp+2Ch+var_10]
0x861A9D: test    eax, eax
0x861A9F: mov     byte ptr [esp+2Ch+var_4], 1
0x861AA4: jz      short loc_861AB9
0x861AA6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x861AAA: mov     ecx, eax
0x861AAC: add     eax, 5Ch ; '\'
0x861AAF: cmp     dword ptr [eax], 0
0x861AB2: jnz     short loc_861AB9
0x861AB4: call    sub_772560
0x861AB9: mov     ecx, [esp+2Ch+a3]
0x861ABD: push    2
0x861ABF: push    1
0x861AC1: push    0
0x861AC3: push    ecx
0x861AC4: call    sub_801110
0x861AC9: mov     edx, [esp+3Ch+a3]
0x861ACD: mov     eax, [esi+14h]
0x861AD0: add     esp, 10h
0x861AD3: push    edx; a3
0x861AD4: push    eax; a2
0x861AD5: mov     ecx, esi; this
0x861AD7: call    sub_760010
0x861ADC: mov     ecx, ds:0B472E0h
0x861AE2: push    ecx; a2
0x861AE3: mov     ecx, esi; this
0x861AE5: call    sub_7AECB0
0x861AEA: mov     edx, ds:0B46F50h
0x861AF0: push    edx; a2
0x861AF1: mov     ecx, esi; this
0x861AF3: call    sub_7AEC60
0x861AF8: cmp     dword ptr [esi+30h], 0
0x861AFC: jnz     short loc_861B06
0x861AFE: call    sub_772DF0
0x861B03: mov     [esi+30h], eax
0x861B06: mov     ecx, [esi+30h]
0x861B09: push    0
0x861B0B: push    1
0x861B0D: push    1Bh
0x861B0F: call    sub_772CD0
0x861B14: cmp     dword ptr [esi+30h], 0
0x861B18: jnz     short loc_861B22
0x861B1A: call    sub_772DF0
0x861B1F: mov     [esi+30h], eax
0x861B22: mov     ecx, [esi+30h]
0x861B25: push    0
0x861B27: push    5
0x861B29: push    13h
0x861B2B: call    sub_772CD0
0x861B30: cmp     dword ptr [esi+30h], 0
0x861B34: jnz     short loc_861B3E
0x861B36: call    sub_772DF0
0x861B3B: mov     [esi+30h], eax
0x861B3E: mov     ecx, [esi+30h]
0x861B41: push    0
0x861B43: push    6
0x861B45: push    14h
0x861B47: call    sub_772CD0
0x861B4C: cmp     dword ptr [esi+30h], 0
0x861B50: jnz     short loc_861B5A
0x861B52: call    sub_772DF0
0x861B57: mov     [esi+30h], eax
0x861B5A: mov     ecx, [esi+30h]
0x861B5D: push    0
0x861B5F: push    0
0x861B61: push    0Fh
0x861B63: call    sub_772CD0
0x861B68: cmp     dword ptr [esi+30h], 0
0x861B6C: jnz     short loc_861B76
0x861B6E: call    sub_772DF0
0x861B73: mov     [esi+30h], eax
0x861B76: mov     ecx, [esi+30h]
0x861B79: push    0
0x861B7B: push    1
0x861B7D: push    7
0x861B7F: call    sub_772CD0
0x861B84: cmp     dword ptr [esi+30h], 0
0x861B88: jnz     short loc_861B92
0x861B8A: call    sub_772DF0
0x861B8F: mov     [esi+30h], eax
0x861B92: mov     ecx, [esi+30h]
0x861B95: push    0
0x861B97: push    4
0x861B99: push    17h
0x861B9B: call    sub_772CD0
0x861BA0: cmp     dword ptr [esi+30h], 0
0x861BA4: jnz     short loc_861BAE
0x861BA6: call    sub_772DF0
0x861BAB: mov     [esi+30h], eax
0x861BAE: mov     ecx, [esi+30h]
0x861BB1: push    0
0x861BB3: push    0
0x861BB5: push    0Eh
0x861BB7: call    sub_772CD0
0x861BBC: cmp     dword ptr [esi+30h], 0
0x861BC0: jnz     short loc_861BCA
0x861BC2: call    sub_772DF0
0x861BC7: mov     [esi+30h], eax
0x861BCA: mov     ecx, [esi+30h]
0x861BCD: push    0
0x861BCF: push    0
0x861BD1: push    34h ; '4'
0x861BD3: call    sub_772CD0
0x861BD8: push    offset dword_B4748C
0x861BDD: lea     ecx, [esp+30h+var_18]
0x861BE1: mov     dword ptr ds:0B46A40h, 108012h
0x861BEB: mov     ds:0B46B18h, edi
0x861BF1: call    sub_76C890
0x861BF6: mov     eax, ds:0B472E4h
0x861BFB: mov     esi, [esp+2Ch+var_18]
0x861BFF: push    eax; a2
0x861C00: mov     ecx, esi; this
0x861C02: call    sub_7AECB0
0x861C07: mov     ecx, ds:0B46F54h
0x861C0D: push    ecx; a2
0x861C0E: mov     ecx, esi; this
0x861C10: call    sub_7AEC60
0x861C15: cmp     dword ptr [esi+30h], 0
0x861C19: jnz     short loc_861C23
0x861C1B: call    sub_772DF0
0x861C20: mov     [esi+30h], eax
0x861C23: mov     ecx, [esi+30h]
0x861C26: xor     edi, edi
0x861C28: push    edi
0x861C29: push    edi
0x861C2A: push    1Bh
0x861C2C: call    sub_772CD0
0x861C31: cmp     [esi+30h], edi
0x861C34: jnz     short loc_861C3E
0x861C36: call    sub_772DF0
0x861C3B: mov     [esi+30h], eax
0x861C3E: mov     ecx, [esi+30h]
0x861C41: push    edi
0x861C42: push    edi
0x861C43: push    0Fh
0x861C45: call    sub_772CD0
0x861C4A: cmp     [esi+30h], edi
0x861C4D: jnz     short loc_861C57
0x861C4F: call    sub_772DF0
0x861C54: mov     [esi+30h], eax
0x861C57: mov     ecx, [esi+30h]
0x861C5A: push    edi
0x861C5B: push    edi
0x861C5C: push    7
0x861C5E: call    sub_772CD0
0x861C63: cmp     [esi+30h], edi
0x861C66: jnz     short loc_861C70
0x861C68: call    sub_772DF0
0x861C6D: mov     [esi+30h], eax
0x861C70: mov     ecx, [esi+30h]
0x861C73: push    edi
0x861C74: push    edi
0x861C75: push    0Eh
0x861C77: call    sub_772CD0
0x861C7C: cmp     [esi+30h], edi
0x861C7F: jnz     short loc_861C89
0x861C81: call    sub_772DF0
0x861C86: mov     [esi+30h], eax
0x861C89: mov     ecx, [esi+30h]
0x861C8C: push    edi
0x861C8D: push    edi
0x861C8E: push    34h ; '4'
0x861C90: call    sub_772CD0
0x861C95: push    offset dword_B47490
0x861C9A: lea     ecx, [esp+30h+var_18]
0x861C9E: mov     dword ptr ds:0B46A44h, 2
0x861CA8: mov     ds:0B46B1Ch, edi
0x861CAE: call    sub_76C890
0x861CB3: mov     edx, ds:0B472E8h
0x861CB9: mov     esi, [esp+2Ch+var_18]
0x861CBD: push    edx; a2
0x861CBE: mov     ecx, esi; this
0x861CC0: call    sub_7AECB0
0x861CC5: mov     eax, ds:0B46F58h
0x861CCA: push    eax; a2
0x861CCB: mov     ecx, esi; this
0x861CCD: call    sub_7AEC60
0x861CD2: cmp     [esi+30h], edi
0x861CD5: jnz     short loc_861CDF
0x861CD7: call    sub_772DF0
0x861CDC: mov     [esi+30h], eax
0x861CDF: mov     ecx, [esi+30h]
0x861CE2: push    edi
0x861CE3: push    edi
0x861CE4: push    1Bh
0x861CE6: call    sub_772CD0
0x861CEB: cmp     [esi+30h], edi
0x861CEE: jnz     short loc_861CF8
0x861CF0: call    sub_772DF0
0x861CF5: mov     [esi+30h], eax
0x861CF8: mov     ecx, [esi+30h]
0x861CFB: push    edi
0x861CFC: push    edi
0x861CFD: push    0Fh
0x861CFF: call    sub_772CD0
0x861D04: cmp     [esi+30h], edi
0x861D07: jnz     short loc_861D11
0x861D09: call    sub_772DF0
0x861D0E: mov     [esi+30h], eax
0x861D11: mov     ecx, [esi+30h]
0x861D14: push    edi
0x861D15: push    edi
0x861D16: push    7
0x861D18: call    sub_772CD0
0x861D1D: cmp     [esi+30h], edi
0x861D20: jnz     short loc_861D2A
0x861D22: call    sub_772DF0
0x861D27: mov     [esi+30h], eax
0x861D2A: mov     ecx, [esi+30h]
0x861D2D: push    edi
0x861D2E: push    edi
0x861D2F: push    0Eh
0x861D31: call    sub_772CD0
0x861D36: cmp     [esi+30h], edi
0x861D39: jnz     short loc_861D43
0x861D3B: call    sub_772DF0
0x861D40: mov     [esi+30h], eax
0x861D43: mov     ecx, [esi+30h]
0x861D46: push    edi
0x861D47: push    edi
0x861D48: push    34h ; '4'
0x861D4A: call    sub_772CD0
0x861D4F: push    offset dword_B474A0
0x861D54: lea     ecx, [esp+30h+var_18]
0x861D58: mov     dword ptr ds:0B46A48h, 0Ch
0x861D62: mov     ds:0B46B20h, edi
0x861D68: call    sub_76C890
0x861D6D: mov     esi, [esp+2Ch+var_18]
0x861D71: cmp     dword ptr [esi+18h], 2
0x861D75: jnb     loc_861E32
0x861D7B: lea     ecx, [esp+2Ch+var_10]
0x861D7F: push    ecx
0x861D80: call    sub_772630
0x861D85: add     esp, 4
0x861D88: push    eax
0x861D89: lea     ecx, [esp+30h+a3]
0x861D8D: mov     byte ptr [esp+30h+var_4], 13h
0x861D92: call    sub_75FAE0
0x861D97: mov     eax, [esp+2Ch+var_10]
0x861D9B: cmp     eax, edi
0x861D9D: mov     byte ptr [esp+2Ch+var_4], 1
0x861DA2: jz      short loc_861DB6
0x861DA4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x861DA8: mov     ecx, eax
0x861DAA: add     eax, 5Ch ; '\'
0x861DAD: cmp     [eax], edi
0x861DAF: jnz     short loc_861DB6
0x861DB1: call    sub_772560
0x861DB6: mov     edi, [esp+2Ch+a3]
0x861DBA: push    2
0x861DBC: push    1
0x861DBE: push    0
0x861DC0: push    edi
0x861DC1: call    sub_801110
0x861DC6: mov     edx, [esi+14h]
0x861DC9: add     esp, 10h
0x861DCC: push    edi; a3
0x861DCD: push    edx; a2
0x861DCE: mov     ecx, esi; this
0x861DD0: call    sub_760010
0x861DD5: lea     eax, [esp+2Ch+var_10]
0x861DD9: push    eax
0x861DDA: call    sub_772630
0x861DDF: add     esp, 4
0x861DE2: push    eax
0x861DE3: lea     ecx, [esp+30h+a3]
0x861DE7: mov     byte ptr [esp+30h+var_4], 14h
0x861DEC: call    sub_75FAE0
0x861DF1: mov     eax, [esp+2Ch+var_10]
0x861DF5: test    eax, eax
0x861DF7: mov     byte ptr [esp+2Ch+var_4], 1
0x861DFC: jz      short loc_861E11
0x861DFE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x861E02: mov     ecx, eax
0x861E04: add     eax, 5Ch ; '\'
0x861E07: cmp     dword ptr [eax], 0
0x861E0A: jnz     short loc_861E11
0x861E0C: call    sub_772560
0x861E11: mov     edi, [esp+2Ch+a3]
0x861E15: push    2
0x861E17: push    1
0x861E19: push    1
0x861E1B: push    edi
0x861E1C: call    sub_801110
0x861E21: mov     ecx, [esi+14h]
0x861E24: add     esp, 10h
0x861E27: push    edi; a3
0x861E28: push    ecx; a2
0x861E29: mov     ecx, esi; this
0x861E2B: call    sub_760010
0x861E30: xor     edi, edi
0x861E32: mov     edx, ds:0B472F8h
0x861E38: push    edx; a2
0x861E39: mov     ecx, esi; this
0x861E3B: call    sub_7AECB0
0x861E40: mov     eax, ds:0B46F64h
0x861E45: push    eax; a2
0x861E46: mov     ecx, esi; this
0x861E48: call    sub_7AEC60
0x861E4D: cmp     [esi+30h], edi
0x861E50: jnz     short loc_861E5A
0x861E52: call    sub_772DF0
0x861E57: mov     [esi+30h], eax
0x861E5A: mov     ecx, [esi+30h]
0x861E5D: push    edi
0x861E5E: push    1
0x861E60: push    1Bh
0x861E62: call    sub_772CD0
0x861E67: cmp     [esi+30h], edi
0x861E6A: jnz     short loc_861E74
0x861E6C: call    sub_772DF0
0x861E71: mov     [esi+30h], eax
0x861E74: mov     ecx, [esi+30h]
0x861E77: push    edi
0x861E78: push    5
0x861E7A: push    13h
0x861E7C: call    sub_772CD0
0x861E81: cmp     [esi+30h], edi
0x861E84: jnz     short loc_861E8E
0x861E86: call    sub_772DF0
0x861E8B: mov     [esi+30h], eax
0x861E8E: mov     ecx, [esi+30h]
0x861E91: push    edi
0x861E92: push    6
0x861E94: push    14h
0x861E96: call    sub_772CD0
0x861E9B: cmp     [esi+30h], edi
0x861E9E: jnz     short loc_861EA8
0x861EA0: call    sub_772DF0
0x861EA5: mov     [esi+30h], eax
0x861EA8: mov     ecx, [esi+30h]
0x861EAB: push    edi
0x861EAC: push    edi
0x861EAD: push    0Fh
0x861EAF: call    sub_772CD0
0x861EB4: cmp     [esi+30h], edi
0x861EB7: jnz     short loc_861EC1
0x861EB9: call    sub_772DF0
0x861EBE: mov     [esi+30h], eax
0x861EC1: mov     ecx, [esi+30h]
0x861EC4: push    edi
0x861EC5: push    1
0x861EC7: push    7
0x861EC9: call    sub_772CD0
0x861ECE: cmp     [esi+30h], edi
0x861ED1: jnz     short loc_861EDB
0x861ED3: call    sub_772DF0
0x861ED8: mov     [esi+30h], eax
0x861EDB: mov     ecx, [esi+30h]
0x861EDE: push    edi
0x861EDF: push    3
0x861EE1: push    17h
0x861EE3: call    sub_772CD0
0x861EE8: cmp     [esi+30h], edi
0x861EEB: jnz     short loc_861EF5
0x861EED: call    sub_772DF0
0x861EF2: mov     [esi+30h], eax
0x861EF5: mov     ecx, [esi+30h]
0x861EF8: push    edi
0x861EF9: push    edi
0x861EFA: push    0Eh
0x861EFC: call    sub_772CD0
0x861F01: cmp     [esi+30h], edi
0x861F04: jnz     short loc_861F0E
0x861F06: call    sub_772DF0
0x861F0B: mov     [esi+30h], eax
0x861F0E: mov     ecx, [esi+30h]
0x861F11: push    edi
0x861F12: push    edi
0x861F13: push    34h ; '4'
0x861F15: call    sub_772CD0
0x861F1A: push    offset dword_B474A4
0x861F1F: lea     ecx, [esp+30h+var_18]
0x861F23: mov     ds:0B46A58h, edi
0x861F29: mov     ds:0B46B30h, edi
0x861F2F: call    sub_76C890
0x861F34: mov     esi, [esp+2Ch+var_18]
0x861F38: cmp     dword ptr [esi+18h], 2
0x861F3C: jnb     loc_861FF9
0x861F42: lea     ecx, [esp+2Ch+var_10]
0x861F46: push    ecx
0x861F47: call    sub_772630
0x861F4C: add     esp, 4
0x861F4F: push    eax
0x861F50: lea     ecx, [esp+30h+a3]
0x861F54: mov     byte ptr [esp+30h+var_4], 15h
0x861F59: call    sub_75FAE0
0x861F5E: mov     eax, [esp+2Ch+var_10]
0x861F62: cmp     eax, edi
0x861F64: mov     byte ptr [esp+2Ch+var_4], 1
0x861F69: jz      short loc_861F7D
0x861F6B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x861F6F: mov     ecx, eax
0x861F71: add     eax, 5Ch ; '\'
0x861F74: cmp     [eax], edi
0x861F76: jnz     short loc_861F7D
0x861F78: call    sub_772560
0x861F7D: mov     edi, [esp+2Ch+a3]
0x861F81: push    2
0x861F83: push    1
0x861F85: push    0
0x861F87: push    edi
0x861F88: call    sub_801110
0x861F8D: mov     edx, [esi+14h]
0x861F90: add     esp, 10h
0x861F93: push    edi; a3
0x861F94: push    edx; a2
0x861F95: mov     ecx, esi; this
0x861F97: call    sub_760010
0x861F9C: lea     eax, [esp+2Ch+var_10]
0x861FA0: push    eax
0x861FA1: call    sub_772630
0x861FA6: add     esp, 4
0x861FA9: push    eax
0x861FAA: lea     ecx, [esp+30h+a3]
0x861FAE: mov     byte ptr [esp+30h+var_4], 16h
0x861FB3: call    sub_75FAE0
0x861FB8: mov     eax, [esp+2Ch+var_10]
0x861FBC: test    eax, eax
0x861FBE: mov     byte ptr [esp+2Ch+var_4], 1
0x861FC3: jz      short loc_861FD8
0x861FC5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x861FC9: mov     ecx, eax
0x861FCB: add     eax, 5Ch ; '\'
0x861FCE: cmp     dword ptr [eax], 0
0x861FD1: jnz     short loc_861FD8
0x861FD3: call    sub_772560
0x861FD8: mov     edi, [esp+2Ch+a3]
0x861FDC: push    2
0x861FDE: push    1
0x861FE0: push    1
0x861FE2: push    edi
0x861FE3: call    sub_801110
0x861FE8: mov     ecx, [esi+14h]
0x861FEB: add     esp, 10h
0x861FEE: push    edi; a3
0x861FEF: push    ecx; a2
0x861FF0: mov     ecx, esi; this
0x861FF2: call    sub_760010
0x861FF7: xor     edi, edi
0x861FF9: mov     edx, ds:0B472FCh
0x861FFF: push    edx; a2
0x862000: mov     ecx, esi; this
0x862002: call    sub_7AECB0
0x862007: mov     eax, ds:0B46F68h
0x86200C: push    eax; a2
0x86200D: mov     ecx, esi; this
0x86200F: call    sub_7AEC60
0x862014: cmp     [esi+30h], edi
0x862017: jnz     short loc_862021
0x862019: call    sub_772DF0
0x86201E: mov     [esi+30h], eax
0x862021: mov     ecx, [esi+30h]
0x862024: push    edi
0x862025: push    1
0x862027: push    1Bh
0x862029: call    sub_772CD0
0x86202E: cmp     [esi+30h], edi
0x862031: jnz     short loc_86203B
0x862033: call    sub_772DF0
0x862038: mov     [esi+30h], eax
0x86203B: mov     ecx, [esi+30h]
0x86203E: push    edi
0x86203F: push    5
0x862041: push    13h
0x862043: call    sub_772CD0
0x862048: cmp     [esi+30h], edi
0x86204B: jnz     short loc_862055
0x86204D: call    sub_772DF0
0x862052: mov     [esi+30h], eax
0x862055: mov     ecx, [esi+30h]
0x862058: push    edi
0x862059: push    6
0x86205B: push    14h
0x86205D: call    sub_772CD0
0x862062: cmp     [esi+30h], edi
0x862065: jnz     short loc_86206F
0x862067: call    sub_772DF0
0x86206C: mov     [esi+30h], eax
0x86206F: mov     ecx, [esi+30h]
0x862072: push    edi
0x862073: push    edi
0x862074: push    0Fh
0x862076: call    sub_772CD0
0x86207B: cmp     [esi+30h], edi
0x86207E: jnz     short loc_862088
0x862080: call    sub_772DF0
0x862085: mov     [esi+30h], eax
0x862088: mov     ecx, [esi+30h]
0x86208B: push    edi
0x86208C: push    1
0x86208E: push    7
0x862090: call    sub_772CD0
0x862095: cmp     [esi+30h], edi
0x862098: jnz     short loc_8620A2
0x86209A: call    sub_772DF0
0x86209F: mov     [esi+30h], eax
0x8620A2: mov     ecx, [esi+30h]
0x8620A5: push    edi
0x8620A6: push    3
0x8620A8: push    17h
0x8620AA: call    sub_772CD0
0x8620AF: cmp     [esi+30h], edi
0x8620B2: jnz     short loc_8620BC
0x8620B4: call    sub_772DF0
0x8620B9: mov     [esi+30h], eax
0x8620BC: mov     ecx, [esi+30h]
0x8620BF: push    edi
0x8620C0: push    edi
0x8620C1: push    0Eh
0x8620C3: call    sub_772CD0
0x8620C8: cmp     [esi+30h], edi
0x8620CB: jnz     short loc_8620D5
0x8620CD: call    sub_772DF0
0x8620D2: mov     [esi+30h], eax
0x8620D5: mov     ecx, [esi+30h]
0x8620D8: push    edi
0x8620D9: push    edi
0x8620DA: push    34h ; '4'
0x8620DC: call    sub_772CD0
0x8620E1: push    offset dword_B47478
0x8620E6: lea     ecx, [esp+30h+var_18]
0x8620EA: mov     ds:0B46A5Ch, edi
0x8620F0: mov     ds:0B46B34h, edi
0x8620F6: call    sub_76C890
0x8620FB: mov     esi, [esp+2Ch+var_18]
0x8620FF: cmp     dword ptr [esi+18h], 1
0x862103: jnb     short loc_862161
0x862105: lea     ecx, [esp+2Ch+var_10]
0x862109: push    ecx
0x86210A: call    sub_772630
0x86210F: add     esp, 4
0x862112: push    eax
0x862113: lea     ecx, [esp+30h+a3]
0x862117: mov     byte ptr [esp+30h+var_4], 17h
0x86211C: call    sub_75FAE0
0x862121: mov     eax, [esp+2Ch+var_10]
0x862125: cmp     eax, edi
0x862127: mov     byte ptr [esp+2Ch+var_4], 1
0x86212C: jz      short loc_862140
0x86212E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x862132: mov     ecx, eax
0x862134: add     eax, 5Ch ; '\'
0x862137: cmp     [eax], edi
0x862139: jnz     short loc_862140
0x86213B: call    sub_772560
0x862140: mov     edi, [esp+2Ch+a3]
0x862144: push    2
0x862146: push    1
0x862148: push    0
0x86214A: push    edi
0x86214B: call    sub_801110
0x862150: mov     edx, [esi+14h]
0x862153: add     esp, 10h
0x862156: push    edi; a3
0x862157: push    edx; a2
0x862158: mov     ecx, esi; this
0x86215A: call    sub_760010
0x86215F: xor     edi, edi
0x862161: mov     eax, ds:0B472D0h
0x862166: push    eax; a2
0x862167: mov     ecx, esi; this
0x862169: call    sub_7AECB0
0x86216E: mov     ecx, ds:0B46F40h
0x862174: push    ecx; a2
0x862175: mov     ecx, esi; this
0x862177: call    sub_7AEC60
0x86217C: cmp     [esi+30h], edi
0x86217F: jnz     short loc_862189
0x862181: call    sub_772DF0
0x862186: mov     [esi+30h], eax
0x862189: mov     ecx, [esi+30h]
0x86218C: push    edi
0x86218D: push    edi
0x86218E: push    1Bh
0x862190: call    sub_772CD0
0x862195: cmp     [esi+30h], edi
0x862198: jnz     short loc_8621A2
0x86219A: call    sub_772DF0
0x86219F: mov     [esi+30h], eax
0x8621A2: mov     ecx, [esi+30h]
0x8621A5: push    edi
0x8621A6: push    1
0x8621A8: push    7
0x8621AA: call    sub_772CD0
0x8621AF: cmp     [esi+30h], edi
0x8621B2: jnz     short loc_8621BC
0x8621B4: call    sub_772DF0
0x8621B9: mov     [esi+30h], eax
0x8621BC: mov     ecx, [esi+30h]
0x8621BF: push    edi
0x8621C0: push    4
0x8621C2: push    17h
0x8621C4: call    sub_772CD0
0x8621C9: cmp     [esi+30h], edi
0x8621CC: jnz     short loc_8621D6
0x8621CE: call    sub_772DF0
0x8621D3: mov     [esi+30h], eax
0x8621D6: mov     ecx, [esi+30h]
0x8621D9: push    edi
0x8621DA: push    1
0x8621DC: push    0Eh
0x8621DE: call    sub_772CD0
0x8621E3: cmp     [esi+30h], edi
0x8621E6: jnz     short loc_8621F0
0x8621E8: call    sub_772DF0
0x8621ED: mov     [esi+30h], eax
0x8621F0: mov     ecx, [esi+30h]
0x8621F3: push    0
0x8621F5: push    0
0x8621F7: push    34h ; '4'
0x8621F9: call    sub_772CD0
0x8621FE: mov     edi, 400h
0x862203: push    offset dword_B4747C
0x862208: lea     ecx, [esp+30h+var_18]
0x86220C: mov     ds:0B46A30h, ebx
0x862212: mov     ds:0B46B08h, edi
0x862218: call    sub_76C890
0x86221D: mov     esi, [esp+2Ch+var_18]
0x862221: cmp     dword ptr [esi+18h], 1
0x862225: jnb     short loc_862286
0x862227: lea     edx, [esp+2Ch+var_10]
0x86222B: push    edx
0x86222C: call    sub_772630
0x862231: add     esp, 4
0x862234: push    eax
0x862235: lea     ecx, [esp+30h+a3]
0x862239: mov     byte ptr [esp+30h+var_4], 18h
0x86223E: call    sub_75FAE0
0x862243: mov     eax, [esp+2Ch+var_10]
0x862247: test    eax, eax
0x862249: mov     byte ptr [esp+2Ch+var_4], 1
0x86224E: jz      short loc_862263
0x862250: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x862254: mov     ecx, eax
0x862256: add     eax, 5Ch ; '\'
0x862259: cmp     dword ptr [eax], 0
0x86225C: jnz     short loc_862263
0x86225E: call    sub_772560
0x862263: mov     eax, [esp+2Ch+a3]
0x862267: push    2
0x862269: push    1
0x86226B: push    0
0x86226D: push    eax
0x86226E: call    sub_801110
0x862273: mov     ecx, [esp+3Ch+a3]
0x862277: mov     edx, [esi+14h]
0x86227A: add     esp, 10h
0x86227D: push    ecx; a3
0x86227E: push    edx; a2
0x86227F: mov     ecx, esi; this
0x862281: call    sub_760010
0x862286: mov     eax, ds:0B472D4h
0x86228B: push    eax; a2
0x86228C: mov     ecx, esi; this
0x86228E: call    sub_7AECB0
0x862293: mov     ecx, ds:0B46F40h
0x862299: push    ecx; a2
0x86229A: mov     ecx, esi; this
0x86229C: call    sub_7AEC60
0x8622A1: cmp     dword ptr [esi+30h], 0
0x8622A5: jnz     short loc_8622AF
0x8622A7: call    sub_772DF0
0x8622AC: mov     [esi+30h], eax
0x8622AF: mov     ecx, [esi+30h]
0x8622B2: push    0
0x8622B4: push    0
0x8622B6: push    1Bh
0x8622B8: call    sub_772CD0
0x8622BD: cmp     dword ptr [esi+30h], 0
0x8622C1: jnz     short loc_8622CB
0x8622C3: call    sub_772DF0
0x8622C8: mov     [esi+30h], eax
0x8622CB: mov     ecx, [esi+30h]
0x8622CE: push    0
0x8622D0: push    1
0x8622D2: push    7
0x8622D4: call    sub_772CD0
0x8622D9: cmp     dword ptr [esi+30h], 0
0x8622DD: jnz     short loc_8622E7
0x8622DF: call    sub_772DF0
0x8622E4: mov     [esi+30h], eax
0x8622E7: mov     ecx, [esi+30h]
0x8622EA: push    0
0x8622EC: push    4
0x8622EE: push    17h
0x8622F0: call    sub_772CD0
0x8622F5: cmp     dword ptr [esi+30h], 0
0x8622F9: jnz     short loc_862303
0x8622FB: call    sub_772DF0
0x862300: mov     [esi+30h], eax
0x862303: mov     ecx, [esi+30h]
0x862306: push    0
0x862308: push    1
0x86230A: push    0Eh
0x86230C: call    sub_772CD0
0x862311: cmp     dword ptr [esi+30h], 0
0x862315: jnz     short loc_86231F
0x862317: call    sub_772DF0
0x86231C: mov     [esi+30h], eax
0x86231F: mov     ecx, [esi+30h]
0x862322: push    0
0x862324: push    0
0x862326: push    34h ; '4'
0x862328: call    sub_772CD0
0x86232D: push    offset dword_B47494
0x862332: lea     ecx, [esp+30h+var_18]
0x862336: mov     ds:0B46A34h, ebp
0x86233C: mov     ds:0B46B0Ch, edi
0x862342: call    sub_76C890
0x862347: mov     edx, ds:0B472ECh
0x86234D: mov     esi, [esp+2Ch+var_18]
0x862351: push    edx; a2
0x862352: mov     ecx, esi; this
0x862354: call    sub_7AECB0
0x862359: mov     eax, ds:0B46F5Ch
0x86235E: push    eax; a2
0x86235F: mov     ecx, esi; this
0x862361: call    sub_7AEC60
0x862366: cmp     dword ptr [esi+30h], 0
0x86236A: jnz     short loc_862374
0x86236C: call    sub_772DF0
0x862371: mov     [esi+30h], eax
0x862374: mov     ecx, [esi+30h]
0x862377: xor     edi, edi
0x862379: push    edi
0x86237A: push    edi
0x86237B: push    1Bh
0x86237D: call    sub_772CD0
0x862382: cmp     [esi+30h], edi
0x862385: jnz     short loc_86238F
0x862387: call    sub_772DF0
0x86238C: mov     [esi+30h], eax
0x86238F: mov     ecx, [esi+30h]
0x862392: push    edi
0x862393: push    edi
0x862394: push    0Fh
0x862396: call    sub_772CD0
0x86239B: cmp     [esi+30h], edi
0x86239E: jnz     short loc_8623A8
0x8623A0: call    sub_772DF0
0x8623A5: mov     [esi+30h], eax
0x8623A8: mov     ecx, [esi+30h]
0x8623AB: push    edi
0x8623AC: push    1
0x8623AE: push    7
0x8623B0: call    sub_772CD0
0x8623B5: cmp     [esi+30h], edi
0x8623B8: jnz     short loc_8623C2
0x8623BA: call    sub_772DF0
0x8623BF: mov     [esi+30h], eax
0x8623C2: mov     ecx, [esi+30h]
0x8623C5: push    edi
0x8623C6: push    4
0x8623C8: push    17h
0x8623CA: call    sub_772CD0
0x8623CF: cmp     [esi+30h], edi
0x8623D2: jnz     short loc_8623DC
0x8623D4: call    sub_772DF0
0x8623D9: mov     [esi+30h], eax
0x8623DC: mov     ecx, [esi+30h]
0x8623DF: push    edi
0x8623E0: push    1
0x8623E2: push    0Eh
0x8623E4: call    sub_772CD0
0x8623E9: cmp     [esi+30h], edi
0x8623EC: jnz     short loc_8623F6
0x8623EE: call    sub_772DF0
0x8623F3: mov     [esi+30h], eax
0x8623F6: mov     ecx, [esi+30h]
0x8623F9: push    edi
0x8623FA: push    edi
0x8623FB: push    34h ; '4'
0x8623FD: call    sub_772CD0
0x862402: push    offset dword_B47498
0x862407: lea     ecx, [esp+30h+var_18]
0x86240B: mov     ds:0B46A4Ch, ebx
0x862411: mov     ds:0B46B24h, edi
0x862417: call    sub_76C890
0x86241C: mov     ecx, ds:0B472F0h
0x862422: mov     esi, [esp+2Ch+var_18]
0x862426: push    ecx; a2
0x862427: mov     ecx, esi; this
0x862429: call    sub_7AECB0
0x86242E: mov     edx, ds:0B46F5Ch
0x862434: push    edx; a2
0x862435: mov     ecx, esi; this
0x862437: call    sub_7AEC60
0x86243C: cmp     [esi+30h], edi
0x86243F: jnz     short loc_862449
0x862441: call    sub_772DF0
0x862446: mov     [esi+30h], eax
0x862449: mov     ecx, [esi+30h]
0x86244C: push    edi
0x86244D: push    edi
0x86244E: push    1Bh
0x862450: call    sub_772CD0
0x862455: cmp     [esi+30h], edi
0x862458: jnz     short loc_862462
0x86245A: call    sub_772DF0
0x86245F: mov     [esi+30h], eax
0x862462: mov     ecx, [esi+30h]
0x862465: push    edi
0x862466: push    edi
0x862467: push    0Fh
0x862469: call    sub_772CD0
0x86246E: cmp     [esi+30h], edi
0x862471: jnz     short loc_86247B
0x862473: call    sub_772DF0
0x862478: mov     [esi+30h], eax
0x86247B: mov     ecx, [esi+30h]
0x86247E: push    edi
0x86247F: push    1
0x862481: push    7
0x862483: call    sub_772CD0
0x862488: cmp     [esi+30h], edi
0x86248B: jnz     short loc_862495
0x86248D: call    sub_772DF0
0x862492: mov     [esi+30h], eax
0x862495: mov     ecx, [esi+30h]
0x862498: push    edi
0x862499: push    4
0x86249B: push    17h
0x86249D: call    sub_772CD0
0x8624A2: cmp     [esi+30h], edi
0x8624A5: jnz     short loc_8624AF
0x8624A7: call    sub_772DF0
0x8624AC: mov     [esi+30h], eax
0x8624AF: mov     ecx, [esi+30h]
0x8624B2: push    edi
0x8624B3: push    1
0x8624B5: push    0Eh
0x8624B7: call    sub_772CD0
0x8624BC: cmp     [esi+30h], edi
0x8624BF: jnz     short loc_8624C9
0x8624C1: call    sub_772DF0
0x8624C6: mov     [esi+30h], eax
0x8624C9: mov     ecx, [esi+30h]
0x8624CC: push    edi
0x8624CD: push    edi
0x8624CE: push    34h ; '4'
0x8624D0: call    sub_772CD0
0x8624D5: push    offset dword_B4749C
0x8624DA: lea     ecx, [esp+30h+var_18]
0x8624DE: mov     ds:0B46A50h, ebp
0x8624E4: mov     ds:0B46B28h, edi
0x8624EA: call    sub_76C890
0x8624EF: mov     eax, ds:0B472F4h
0x8624F4: mov     esi, [esp+2Ch+var_18]
0x8624F8: push    eax; a2
0x8624F9: mov     ecx, esi; this
0x8624FB: call    sub_7AECB0
0x862500: mov     ecx, ds:0B46F60h
0x862506: push    ecx; a2
0x862507: mov     ecx, esi; this
0x862509: call    sub_7AEC60
0x86250E: cmp     [esi+30h], edi
0x862511: jnz     short loc_86251B
0x862513: call    sub_772DF0
0x862518: mov     [esi+30h], eax
0x86251B: mov     ecx, [esi+30h]
0x86251E: push    edi
0x86251F: push    edi
0x862520: push    1Bh
0x862522: call    sub_772CD0
0x862527: cmp     [esi+30h], edi
0x86252A: jnz     short loc_862534
0x86252C: call    sub_772DF0
0x862531: mov     [esi+30h], eax
0x862534: mov     ecx, [esi+30h]
0x862537: push    edi
0x862538: push    edi
0x862539: push    0Fh
0x86253B: call    sub_772CD0
0x862540: cmp     [esi+30h], edi
0x862543: jnz     short loc_86254D
0x862545: call    sub_772DF0
0x86254A: mov     [esi+30h], eax
0x86254D: mov     ecx, [esi+30h]
0x862550: push    edi
0x862551: push    1
0x862553: push    7
0x862555: call    sub_772CD0
0x86255A: cmp     [esi+30h], edi
0x86255D: jnz     short loc_862567
0x86255F: call    sub_772DF0
0x862564: mov     [esi+30h], eax
0x862567: mov     ecx, [esi+30h]
0x86256A: push    edi
0x86256B: push    8
0x86256D: push    17h
0x86256F: call    sub_772CD0
0x862574: cmp     [esi+30h], edi
0x862577: jnz     short loc_862581
0x862579: call    sub_772DF0
0x86257E: mov     [esi+30h], eax
0x862581: mov     ecx, [esi+30h]
0x862584: push    edi
0x862585: push    1
0x862587: push    0Eh
0x862589: call    sub_772CD0
0x86258E: cmp     [esi+30h], edi
0x862591: jnz     short loc_86259B
0x862593: call    sub_772DF0
0x862598: mov     [esi+30h], eax
0x86259B: mov     ecx, [esi+30h]
0x86259E: push    edi
0x86259F: push    edi
0x8625A0: push    34h ; '4'
0x8625A2: call    sub_772CD0
0x8625A7: mov     ecx, [esp+2Ch+a3]
0x8625AB: cmp     ecx, edi
0x8625AD: mov     dword ptr ds:0B46A54h, 2
0x8625B7: mov     ds:0B46B2Ch, edi
0x8625BD: mov     byte ptr [esp+2Ch+var_4], 0
0x8625C2: jz      short loc_8625D3
0x8625C4: or      edi, 0FFFFFFFFh
0x8625C7: add     [ecx+5Ch], edi
0x8625CA: jnz     short loc_8625D6
0x8625CC: call    sub_772560
0x8625D1: jmp     short loc_8625D6
0x8625D3: or      edi, 0FFFFFFFFh
0x8625D6: add     [esi+60h], edi
0x8625D9: mov     [esp+2Ch+var_4], edi
0x8625DD: jnz     short loc_8625E6
0x8625DF: mov     ecx, esi
0x8625E1: call    sub_7604D0
0x8625E6: mov     ecx, dword ptr [esp+2Ch+var_C]
0x8625EA: mov     large fs:0, ecx
0x8625F1: pop     ecx
0x8625F2: pop     edi
0x8625F3: pop     esi
0x8625F4: pop     ebp
0x8625F5: pop     ebx
0x8625F6: add     esp, 18h
0x8625F9: retn
