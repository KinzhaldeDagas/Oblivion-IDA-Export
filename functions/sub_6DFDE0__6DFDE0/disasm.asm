0x6DFDE0: push    ebx
0x6DFDE1: mov     ebx, [esp+4+arg_0]
0x6DFDE5: push    ebp
0x6DFDE6: push    esi
0x6DFDE7: push    edi
0x6DFDE8: push    ebx
0x6DFDE9: mov     esi, ecx
0x6DFDEB: call    sub_6EBA80
0x6DFDF0: mov     eax, [ebx+21Ch]
0x6DFDF6: push    1
0x6DFDF8: lea     ecx, [esp+14h+arg_0]
0x6DFDFC: push    ecx
0x6DFDFD: push    2
0x6DFDFF: lea     edx, [esi+0Ch]
0x6DFE02: push    edx
0x6DFE03: push    eax
0x6DFE04: mov     eax, [eax+4]
0x6DFE07: mov     [esp+24h+arg_0], 2
0x6DFE0F: call    eax
0x6DFE11: add     esp, 14h
0x6DFE14: mov     ecx, ebx
0x6DFE16: call    sub_712A90
0x6DFE1B: lea     ecx, [esi+14h]
0x6DFE1E: push    ecx
0x6DFE1F: mov     ecx, ebx
0x6DFE21: mov     [esi+10h], eax
0x6DFE24: call    sub_713620
0x6DFE29: push    ebx
0x6DFE2A: lea     ecx, [esi+18h]
0x6DFE2D: call    sub_6CB990
0x6DFE32: lea     ebp, [esi+38h]
0x6DFE35: mov     [esp+10h+arg_0], 3
0x6DFE3D: lea     ecx, [ecx+0]
0x6DFE40: mov     ecx, ebx
0x6DFE42: call    sub_712A90
0x6DFE47: mov     esi, [ebp+0]
0x6DFE4A: mov     edi, eax
0x6DFE4C: cmp     esi, edi
0x6DFE4E: jz      short loc_6DFE81
0x6DFE50: test    esi, esi
0x6DFE52: jz      short loc_6DFE70
0x6DFE54: lea     edx, [esi+4]
0x6DFE57: push    edx; lpAddend
0x6DFE58: call    dword ptr ds:0A2807Ch
0x6DFE5E: test    eax, eax
0x6DFE60: jnz     short loc_6DFE70
0x6DFE62: test    esi, esi
0x6DFE64: jz      short loc_6DFE70
0x6DFE66: mov     eax, [esi]
0x6DFE68: mov     edx, [eax]
0x6DFE6A: push    1
0x6DFE6C: mov     ecx, esi
0x6DFE6E: call    edx
0x6DFE70: test    edi, edi
0x6DFE72: mov     [ebp+0], edi
0x6DFE75: jz      short loc_6DFE81
0x6DFE77: add     edi, 4
0x6DFE7A: push    edi; lpAddend
0x6DFE7B: call    dword ptr ds:0A28078h
0x6DFE81: add     ebp, 4
0x6DFE84: sub     [esp+10h+arg_0], 1
0x6DFE89: jnz     short loc_6DFE40
0x6DFE8B: pop     edi
0x6DFE8C: pop     esi
0x6DFE8D: pop     ebp
0x6DFE8E: pop     ebx
0x6DFE8F: retn    4
