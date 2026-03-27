0x6C9F10: push    0FFFFFFFFh
0x6C9F12: push    offset SEH_6C9F10
0x6C9F17: mov     eax, large fs:0
0x6C9F1D: push    eax
0x6C9F1E: sub     esp, 1Ch
0x6C9F21: push    ebx
0x6C9F22: push    ebp
0x6C9F23: push    esi
0x6C9F24: push    edi
0x6C9F25: mov     eax, ds:0B30AACh
0x6C9F2A: xor     eax, esp
0x6C9F2C: push    eax
0x6C9F2D: lea     eax, [esp+3Ch+var_C]
0x6C9F31: mov     large fs:0, eax
0x6C9F37: mov     ebx, ecx
0x6C9F39: mov     [esp+3Ch+var_28], ebx
0x6C9F3D: mov     ebp, [esp+3Ch+arg_0]
0x6C9F41: mov     eax, [ebp+0Ch]
0x6C9F44: xor     esi, esi
0x6C9F46: test    eax, eax
0x6C9F48: jbe     short loc_6C9F85
0x6C9F4A: push    esi
0x6C9F4B: lea     eax, [esp+40h+var_20]
0x6C9F4F: push    eax
0x6C9F50: mov     ecx, ebp
0x6C9F52: call    sub_6C6610
0x6C9F57: mov     eax, [esp+3Ch+var_20]
0x6C9F5B: test    eax, eax
0x6C9F5D: jz      short loc_6C9F7D
0x6C9F5F: mov     edi, eax
0x6C9F61: add     eax, 4
0x6C9F64: push    eax; lpAddend
0x6C9F65: call    dword ptr ds:0A2807Ch
0x6C9F6B: test    eax, eax
0x6C9F6D: jnz     short loc_6C9F7D
0x6C9F6F: test    edi, edi
0x6C9F71: jz      short loc_6C9F7D
0x6C9F73: mov     edx, [edi]
0x6C9F75: mov     eax, [edx]
0x6C9F77: push    1
0x6C9F79: mov     ecx, edi
0x6C9F7B: call    eax
0x6C9F7D: add     esi, 1
0x6C9F80: cmp     esi, [ebp+0Ch]
0x6C9F83: jb      short loc_6C9F4A
0x6C9F85: mov     eax, [ebx+24h]
0x6C9F88: cmp     eax, 2
0x6C9F8B: jz      short loc_6C9F91
0x6C9F8D: test    eax, eax
0x6C9F8F: jnz     short loc_6C9F94
0x6C9F91: mov     [ebp+24h], eax
0x6C9F94: fld     dword ptr [ebx+28h]
0x6C9F97: xor     edi, edi
0x6C9F99: fstp    [esp+3Ch+arg_0]
0x6C9F9D: fld     [esp+3Ch+arg_0]
0x6C9FA1: fstp    dword ptr [ebp+28h]
0x6C9FA4: fld     dword ptr [ebx+2Ch]
0x6C9FA7: fstp    [esp+3Ch+arg_0]
0x6C9FAB: fld     [esp+3Ch+arg_0]
0x6C9FAF: fstp    dword ptr [ebp+2Ch]
0x6C9FB2: fld     dword ptr [ebx+30h]
0x6C9FB5: fstp    [esp+3Ch+arg_0]
0x6C9FB9: fld     [esp+3Ch+arg_0]
0x6C9FBD: fstp    dword ptr [ebp+30h]
0x6C9FC0: mov     esi, [ebx+64h]
0x6C9FC3: cmp     esi, edi
0x6C9FC5: mov     [esp+3Ch+var_1C], esi
0x6C9FC9: jz      short loc_6C9FD5
0x6C9FCB: lea     ecx, [esi+4]
0x6C9FCE: push    ecx; lpAddend
0x6C9FCF: call    dword ptr ds:0A28078h
0x6C9FD5: mov     eax, 0FFFFh
0x6C9FDA: mov     [esp+3Ch+var_18], ax
0x6C9FDF: mov     [esp+3Ch+var_16], ax
0x6C9FE4: mov     word ptr [esp+3Ch+var_14], ax
0x6C9FE9: mov     word ptr [esp+3Ch+var_14+2], ax
0x6C9FEE: mov     [esp+3Ch+var_10], ax
0x6C9FF3: cmp     [ebx+0Ch], edi
0x6C9FF6: mov     [esp+3Ch+var_4], 1
0x6C9FFE: mov     [esp+3Ch+var_24], edi
0x6CA002: jbe     loc_6CA11E
0x6CA008: mov     [esp+3Ch+arg_0], edi
0x6CA00C: lea     esp, [esp+0]
0x6CA010: mov     edi, [ebx+14h]
0x6CA013: add     edi, [esp+3Ch+arg_0]
0x6CA017: cmp     dword ptr [edi], 0
0x6CA01A: mov     esi, [edi+4]
0x6CA01D: jz      loc_6CA101
0x6CA023: test    esi, esi
0x6CA025: jz      loc_6CA101
0x6CA02B: mov     eax, [esp+3Ch+arg_8]
0x6CA02F: test    eax, eax
0x6CA031: jz      short loc_6CA059
0x6CA033: mov     edx, [eax+0Ch]
0x6CA036: xor     ecx, ecx
0x6CA038: test    edx, edx
0x6CA03A: jbe     loc_6CA101
0x6CA040: mov     eax, [eax+14h]
0x6CA043: add     eax, 4
0x6CA046: cmp     esi, [eax]
0x6CA048: jz      short loc_6CA059
0x6CA04A: add     ecx, 1
0x6CA04D: add     eax, 10h
0x6CA050: cmp     ecx, edx
0x6CA052: jb      short loc_6CA046
0x6CA054: jmp     loc_6CA101
0x6CA059: mov     edx, [esi]
0x6CA05B: mov     eax, [edx+74h]
0x6CA05E: mov     ecx, esi
0x6CA060: xor     ebx, ebx
0x6CA062: call    eax
0x6CA064: test    ax, ax
0x6CA067: jbe     loc_6CA0FD
0x6CA06D: lea     ecx, [ecx+0]
0x6CA070: mov     edx, [esi]
0x6CA072: mov     eax, [edx+80h]
0x6CA078: push    ebx
0x6CA079: mov     ecx, esi
0x6CA07B: call    eax
0x6CA07D: cmp     eax, [edi+8]
0x6CA080: mov     edx, [esi]
0x6CA082: mov     ecx, esi
0x6CA084: jz      short loc_6CA097
0x6CA086: mov     eax, [edx+74h]
0x6CA089: add     ebx, 1
0x6CA08C: call    eax
0x6CA08E: movzx   ecx, ax
0x6CA091: cmp     ebx, ecx
0x6CA093: jb      short loc_6CA070
0x6CA095: jmp     short loc_6CA0FD
0x6CA097: mov     eax, [edx+90h]
0x6CA09D: push    ebx
0x6CA09E: call    eax
0x6CA0A0: lea     ecx, [esp+3Ch+var_1C]
0x6CA0A4: push    ecx
0x6CA0A5: push    eax
0x6CA0A6: mov     ecx, ebp
0x6CA0A8: call    sub_6C94E0
0x6CA0AD: mov     edx, [edi+8]
0x6CA0B0: shl     eax, 4
0x6CA0B3: add     eax, [ebp+14h]
0x6CA0B6: mov     ebx, eax
0x6CA0B8: mov     [ebx+8], edx
0x6CA0BB: mov     esi, [ebx+4]
0x6CA0BE: cmp     esi, [edi+4]
0x6CA0C1: jz      short loc_6CA0F7
0x6CA0C3: test    esi, esi
0x6CA0C5: jz      short loc_6CA0E3
0x6CA0C7: lea     eax, [esi+4]
0x6CA0CA: push    eax; lpAddend
0x6CA0CB: call    dword ptr ds:0A2807Ch
0x6CA0D1: test    eax, eax
0x6CA0D3: jnz     short loc_6CA0E3
0x6CA0D5: test    esi, esi
0x6CA0D7: jz      short loc_6CA0E3
0x6CA0D9: mov     edx, [esi]
0x6CA0DB: mov     eax, [edx]
0x6CA0DD: push    1
0x6CA0DF: mov     ecx, esi
0x6CA0E1: call    eax
0x6CA0E3: mov     eax, [edi+4]
0x6CA0E6: test    eax, eax
0x6CA0E8: mov     [ebx+4], eax
0x6CA0EB: jz      short loc_6CA0F7
0x6CA0ED: add     eax, 4
0x6CA0F0: push    eax; lpAddend
0x6CA0F1: call    dword ptr ds:0A28078h
0x6CA0F7: mov     cl, [edi+0Dh]
0x6CA0FA: mov     [ebx+0Dh], cl
0x6CA0FD: mov     ebx, [esp+3Ch+var_28]
0x6CA101: mov     eax, [esp+3Ch+var_24]
0x6CA105: add     [esp+3Ch+arg_0], 10h
0x6CA10A: add     eax, 1
0x6CA10D: cmp     eax, [ebx+0Ch]
0x6CA110: mov     [esp+3Ch+var_24], eax
0x6CA114: jb      loc_6CA010
0x6CA11A: mov     esi, [esp+3Ch+var_1C]
0x6CA11E: test    esi, esi
0x6CA120: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x6CA128: jz      short loc_6CA142
0x6CA12A: lea     edx, [esi+4]
0x6CA12D: push    edx; lpAddend
0x6CA12E: call    dword ptr ds:0A2807Ch
0x6CA134: test    eax, eax
0x6CA136: jnz     short loc_6CA142
0x6CA138: mov     eax, [esi]
0x6CA13A: mov     edx, [eax]
0x6CA13C: push    1
0x6CA13E: mov     ecx, esi
0x6CA140: call    edx
0x6CA142: mov     ecx, [esp+3Ch+var_C]
0x6CA146: mov     large fs:0, ecx
0x6CA14D: pop     ecx
0x6CA14E: pop     edi
0x6CA14F: pop     esi
0x6CA150: pop     ebp
0x6CA151: pop     ebx
0x6CA152: add     esp, 28h
0x6CA155: retn    0Ch
