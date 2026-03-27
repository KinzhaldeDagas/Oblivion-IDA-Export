0x75E100: push    ebp
0x75E101: push    esi
0x75E102: mov     esi, [esp+8+arg_0]
0x75E106: push    edi
0x75E107: xor     edi, edi
0x75E109: cmp     esi, edi
0x75E10B: mov     ebp, ecx
0x75E10D: mov     [ebp+4], esi
0x75E110: mov     [ebp+8], edi
0x75E113: jbe     short loc_75E153
0x75E115: xor     ecx, ecx
0x75E117: mov     eax, esi
0x75E119: mov     edx, 14h
0x75E11E: mul     edx
0x75E120: seto    cl
0x75E123: neg     ecx
0x75E125: or      ecx, eax
0x75E127: xor     eax, eax
0x75E129: add     ecx, 4
0x75E12C: setb    al
0x75E12F: neg     eax
0x75E131: or      eax, ecx
0x75E133: push    eax; Size
0x75E134: call    FormHeapAlloc
0x75E139: add     esp, 4
0x75E13C: cmp     eax, edi
0x75E13E: jz      short loc_75E153
0x75E140: push    offset sub_75DF50
0x75E145: push    esi
0x75E146: lea     edi, [eax+4]
0x75E149: push    14h
0x75E14B: push    edi
0x75E14C: mov     [eax], esi
0x75E14E: call    sub_401080
0x75E153: mov     [ebp+0], edi
0x75E156: pop     edi
0x75E157: pop     esi
0x75E158: mov     eax, ebp
0x75E15A: pop     ebp
0x75E15B: retn    4
