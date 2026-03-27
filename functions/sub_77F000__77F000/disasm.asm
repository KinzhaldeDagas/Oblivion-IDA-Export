0x77F000: sub     esp, 10Ch
0x77F006: mov     eax, ds:0B30AACh
0x77F00B: xor     eax, esp
0x77F00D: mov     [esp+10Ch+var_4], eax
0x77F014: mov     eax, [esp+10Ch+Src]
0x77F01B: test    eax, eax
0x77F01D: push    ebx
0x77F01E: mov     ebx, ecx
0x77F020: jz      loc_77F121
0x77F026: push    esi
0x77F027: push    edi; Src
0x77F028: mov     edi, offset EmptyString
0x77F02D: mov     esi, eax
0x77F02F: mov     ecx, 1
0x77F034: xor     edx, edx
0x77F036: repe cmpsb
0x77F038: jz      loc_77F11F
0x77F03E: push    eax; Src
0x77F03F: lea     eax, [esp+11Ch+Dst]
0x77F043: push    104h; SizeInBytes
0x77F048: push    eax; Dst
0x77F049: call    _strcpy_s
0x77F04E: lea     eax, [esp+124h+Dst]
0x77F052: add     esp, 0Ch
0x77F055: xor     edx, edx
0x77F057: lea     esi, [eax+1]
0x77F05A: lea     ebx, [ebx+0]
0x77F060: mov     cl, [eax]
0x77F062: add     eax, 1
0x77F065: test    cl, cl
0x77F067: jnz     short loc_77F060
0x77F069: sub     eax, esi
0x77F06B: jz      short loc_77F095
0x77F06D: lea     ecx, [ecx+0]
0x77F070: cmp     [esp+edx+118h+Dst], 2Fh ; '/'
0x77F075: jnz     short loc_77F07C
0x77F077: mov     [esp+edx+118h+Dst], 5Ch ; '\'
0x77F07C: lea     eax, [esp+118h+Dst]
0x77F080: add     edx, 1
0x77F083: lea     esi, [eax+1]
0x77F086: mov     cl, [eax]
0x77F088: add     eax, 1
0x77F08B: test    cl, cl
0x77F08D: jnz     short loc_77F086
0x77F08F: sub     eax, esi
0x77F091: cmp     edx, eax
0x77F093: jb      short loc_77F070
0x77F095: mov     esi, [ebx+0Ch]
0x77F098: test    esi, esi
0x77F09A: jz      short loc_77F0C1
0x77F09C: lea     esp, [esp+0]
0x77F0A0: lea     eax, [esi+8]
0x77F0A3: mov     eax, [eax]
0x77F0A5: test    eax, eax
0x77F0A7: mov     esi, [esi]
0x77F0A9: jz      short loc_77F0BD
0x77F0AB: lea     ecx, [esp+118h+Dst]
0x77F0AF: push    ecx; Str2
0x77F0B0: push    eax; Str1
0x77F0B1: call    __strcmp
0x77F0B6: add     esp, 8
0x77F0B9: test    eax, eax
0x77F0BB: jz      short loc_77F11F
0x77F0BD: test    esi, esi
0x77F0BF: jnz     short loc_77F0A0
0x77F0C1: lea     eax, [esp+118h+Dst]
0x77F0C5: lea     edx, [eax+1]
0x77F0C8: mov     cl, [eax]
0x77F0CA: add     eax, 1
0x77F0CD: test    cl, cl
0x77F0CF: jnz     short loc_77F0C8
0x77F0D1: sub     eax, edx
0x77F0D3: lea     esi, [eax+1]
0x77F0D6: push    esi; Size
0x77F0D7: call    FormHeapAlloc
0x77F0DC: lea     edx, [esp+11Ch+Dst]
0x77F0E0: push    edx; Src
0x77F0E1: mov     edi, eax
0x77F0E3: push    esi; SizeInBytes
0x77F0E4: push    edi; Dst
0x77F0E5: call    _strcpy_s
0x77F0EA: mov     eax, [ebx+8]
0x77F0ED: mov     edx, [eax+4]
0x77F0F0: lea     esi, [ebx+8]
0x77F0F3: add     esp, 10h
0x77F0F6: mov     ecx, esi
0x77F0F8: call    edx
0x77F0FA: mov     [eax+8], edi
0x77F0FD: mov     dword ptr [eax+4], 0
0x77F104: mov     ecx, [esi+4]
0x77F107: mov     [eax], ecx
0x77F109: mov     ecx, [esi+4]
0x77F10C: test    ecx, ecx
0x77F10E: jz      short loc_77F115
0x77F110: mov     [ecx+4], eax
0x77F113: jmp     short loc_77F118
0x77F115: mov     [esi+8], eax
0x77F118: add     dword ptr [esi+0Ch], 1
0x77F11C: mov     [esi+4], eax
0x77F11F: pop     edi
0x77F120: pop     esi
0x77F121: mov     ecx, [esp+110h+var_4]
0x77F128: pop     ebx
0x77F129: xor     ecx, esp
0x77F12B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77F130: add     esp, 10Ch
0x77F136: retn    4
