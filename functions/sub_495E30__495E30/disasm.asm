0x495E30: push    0FFFFFFFFh
0x495E32: push    offset SEH_495E30
0x495E37: mov     eax, large fs:0
0x495E3D: push    eax
0x495E3E: sub     esp, 90h
0x495E44: mov     eax, ds:0B30AACh
0x495E49: xor     eax, esp
0x495E4B: mov     [esp+9Ch+var_10], eax
0x495E52: push    ebx
0x495E53: push    ebp
0x495E54: push    esi
0x495E55: push    edi
0x495E56: mov     eax, ds:0B30AACh
0x495E5B: xor     eax, esp
0x495E5D: push    eax
0x495E5E: lea     eax, [esp+0B0h+var_C]
0x495E65: mov     large fs:0, eax
0x495E6B: mov     esi, [esp+0B0h+arg_4]
0x495E72: mov     ebp, [esp+0B0h+arg_0]
0x495E79: xor     ebx, ebx
0x495E7B: cmp     esi, ebx
0x495E7D: mov     [esp+0B0h+var_9C], ecx
0x495E81: mov     [esp+0B0h+var_90], ebx
0x495E85: jz      loc_49626A
0x495E8B: push    10h; Size
0x495E8D: call    FormHeapAlloc
0x495E92: mov     edi, eax
0x495E94: add     esp, 4
0x495E97: mov     [esp+0B0h+var_8C], edi
0x495E9B: cmp     edi, ebx
0x495E9D: mov     [esp+0B0h+var_4], ebx
0x495EA4: jz      short loc_495EE3
0x495EA6: mov     eax, 80h ; '€'
0x495EAB: xor     ecx, ecx
0x495EAD: mov     [edi+8], ax
0x495EB1: mov     [edi+0Eh], ax
0x495EB5: mov     edx, 4
0x495EBA: mul     edx
0x495EBC: seto    cl
0x495EBF: mov     dword ptr [edi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x495EC5: mov     [edi+0Ah], bx
0x495EC9: mov     [edi+0Ch], bx
0x495ECD: neg     ecx
0x495ECF: or      ecx, eax
0x495ED1: push    ecx; Size
0x495ED2: call    FormHeapAlloc
0x495ED7: add     esp, 4
0x495EDA: mov     [edi+4], eax
0x495EDD: mov     [esp+0B0h+var_98], edi
0x495EE1: jmp     short loc_495EE7
0x495EE3: mov     [esp+0B0h+var_98], ebx
0x495EE7: mov     eax, [esi]
0x495EE9: mov     edx, [eax+4]
0x495EEC: mov     ecx, esi
0x495EEE: mov     [esp+0B0h+var_4], 0FFFFFFFFh
0x495EF9: mov     [esp+0B0h+var_80], 0FFFF0002h
0x495F01: mov     [esp+0B0h+var_7C], 27h ; '''
0x495F09: mov     [esp+0B0h+var_58], esi
0x495F0D: call    edx
0x495F0F: mov     eax, [eax]
0x495F11: push    3Fh ; '?'; Count
0x495F13: push    eax; Source
0x495F14: lea     eax, [esp+0B8h+Dest]
0x495F18: push    eax; Dest
0x495F19: call    _strncpy
0x495F1E: mov     eax, [esp+0BCh+var_9C]
0x495F22: add     esp, 0Ch
0x495F25: lea     edx, [esp+0B0h+lParam]
0x495F29: push    edx; lParam
0x495F2A: lea     ecx, [esp+0B4h+Dest]
0x495F2E: push    ebx; wParam
0x495F2F: mov     [esp+0B8h+var_6C], ecx
0x495F33: mov     ecx, [eax+0Ch]
0x495F36: push    1100h; Msg
0x495F3B: mov     [esp+0BCh+lParam], ebp
0x495F3F: mov     ebp, ds:0A28290h
0x495F45: push    ecx; hWnd
0x495F46: mov     [esp+0C0h+var_11], 0
0x495F4E: mov     [esp+0C0h+var_64], ebx
0x495F52: mov     [esp+0C0h+var_60], ebx
0x495F56: call    ebp ; SendMessageA
0x495F58: mov     edx, [esi]
0x495F5A: mov     edx, [edx+30h]
0x495F5D: mov     [esp+0B0h+lParam], eax
0x495F61: mov     [esp+0B0h+var_94], eax
0x495F65: mov     eax, [esp+0B0h+var_98]
0x495F69: push    eax
0x495F6A: mov     ecx, esi
0x495F6C: call    edx
0x495F6E: mov     ecx, [esp+0B0h+var_98]
0x495F72: xor     edi, edi
0x495F74: cmp     [ecx+0Ah], bx
0x495F78: jbe     short loc_495FBF
0x495F7A: mov     ebx, 6
0x495F7F: nop
0x495F80: mov     eax, [esp+0B0h+var_98]
0x495F84: mov     ecx, [eax+4]
0x495F87: mov     edx, [ecx+edi*4]
0x495F8A: mov     ecx, [esp+0B0h+var_9C]
0x495F8E: lea     eax, [esp+0B0h+lParam]
0x495F92: push    eax; lParam
0x495F93: push    0; wParam
0x495F95: mov     [esp+0B8h+var_6C], edx
0x495F99: mov     edx, [ecx+0Ch]
0x495F9C: push    1100h; Msg
0x495FA1: push    edx; hWnd
0x495FA2: mov     [esp+0C0h+var_64], ebx
0x495FA6: mov     [esp+0C0h+var_60], ebx
0x495FAA: call    ebp ; SendMessageA
0x495FAC: mov     eax, [esp+0B0h+var_98]
0x495FB0: movzx   ecx, word ptr [eax+0Ah]
0x495FB4: add     edi, 1
0x495FB7: cmp     edi, ecx
0x495FB9: jb      short loc_495F80
0x495FBB: xor     ebx, ebx
0x495FBD: mov     ecx, eax
0x495FBF: xor     eax, eax
0x495FC1: cmp     [ecx+0Ah], bx
0x495FC5: jbe     short loc_495FD9
0x495FC7: mov     edi, [ecx+4]
0x495FCA: movzx   edx, ax
0x495FCD: add     eax, 1
0x495FD0: mov     [edi+edx*4], ebx
0x495FD3: cmp     ax, [ecx+0Ah]
0x495FD7: jb      short loc_495FC7
0x495FD9: mov     [ecx+0Ah], bx
0x495FDD: mov     [ecx+0Ch], bx
0x495FE1: mov     eax, [esi]
0x495FE3: mov     edx, [eax+4]
0x495FE6: mov     ecx, esi
0x495FE8: call    edx
0x495FEA: cmp     eax, ebx
0x495FEC: jz      short loc_495FFE
0x495FEE: mov     edi, edi
0x495FF0: cmp     eax, offset dword_BA7D38
0x495FF5: jz      short loc_496025
0x495FF7: mov     eax, [eax+4]
0x495FFA: cmp     eax, ebx
0x495FFC: jnz     short loc_495FF0
0x495FFE: xor     al, al
0x496000: neg     al
0x496002: sbb     eax, eax
0x496004: and     eax, esi
0x496006: jz      loc_496136
0x49600C: mov     eax, [eax+8]
0x49600F: cmp     eax, ebx
0x496011: jz      short loc_496029
0x496013: add     eax, 14h
0x496016: cmp     eax, ebx
0x496018: jz      short loc_496029
0x49601A: mov     eax, [eax]
0x49601C: cmp     eax, ebx
0x49601E: jz      short loc_496029
0x496020: mov     eax, [eax+8]
0x496023: jmp     short loc_49602B
0x496025: mov     al, 1
0x496027: jmp     short loc_496000
0x496029: xor     eax, eax
0x49602B: mov     ecx, [esp+0B0h+var_9C]
0x49602F: push    eax
0x496030: mov     eax, [esp+0B4h+var_94]
0x496034: push    eax
0x496035: call    sub_495E30
0x49603A: mov     edx, [esi]
0x49603C: mov     eax, [edx+4]
0x49603F: mov     ecx, esi
0x496041: call    eax
0x496043: cmp     eax, ebx
0x496045: jz      short loc_496055
0x496047: cmp     eax, offset dword_BA7D84
0x49604C: jz      short loc_49609D
0x49604E: mov     eax, [eax+4]
0x496051: cmp     eax, ebx
0x496053: jnz     short loc_496047
0x496055: xor     al, al
0x496057: neg     al
0x496059: sbb     eax, eax
0x49605B: and     eax, esi
0x49605D: mov     esi, eax
0x49605F: jz      loc_49625E
0x496065: mov     ecx, esi
0x496067: call    sub_8A4740
0x49606C: test    eax, eax
0x49606E: jz      loc_49625E
0x496074: mov     ebp, ds:0A2807Ch
0x49607A: lea     edi, [esi+10h]
0x49607D: lea     ecx, [ecx+0]
0x496080: cmp     edi, ebx
0x496082: jz      short loc_4960A1
0x496084: lea     ecx, [esp+0B0h+var_88]
0x496088: push    ecx
0x496089: mov     ecx, edi
0x49608B: call    sub_677C70
0x496090: or      [esp+0B0h+var_90], 1
0x496095: cmp     [eax], ebx
0x496097: jz      short loc_4960A1
0x496099: mov     bl, 1
0x49609B: jmp     short loc_4960A3
0x49609D: mov     al, 1
0x49609F: jmp     short loc_496057
0x4960A1: xor     bl, bl
0x4960A3: test    byte ptr [esp+0B0h+var_90], 1
0x4960A8: jz      short loc_4960CF
0x4960AA: mov     esi, [esp+0B0h+var_88]
0x4960AE: and     [esp+0B0h+var_90], 0FFFFFFFEh
0x4960B3: test    esi, esi
0x4960B5: jz      short loc_4960CF
0x4960B7: lea     edx, [esi+4]
0x4960BA: push    edx; lpAddend
0x4960BB: call    ebp ; InterlockedDecrement
0x4960BD: test    eax, eax
0x4960BF: jnz     short loc_4960CF
0x4960C1: test    esi, esi
0x4960C3: jz      short loc_4960CF
0x4960C5: mov     eax, [esi]
0x4960C7: mov     edx, [eax]
0x4960C9: push    1
0x4960CB: mov     ecx, esi
0x4960CD: call    edx
0x4960CF: test    bl, bl
0x4960D1: jz      loc_49625E
0x4960D7: lea     eax, [esp+0B0h+var_8C]
0x4960DB: push    eax
0x4960DC: mov     ecx, edi
0x4960DE: call    sub_677C70
0x4960E3: mov     eax, [eax]
0x4960E5: mov     ecx, [esp+0B0h+var_94]
0x4960E9: push    eax
0x4960EA: push    ecx
0x4960EB: mov     ecx, [esp+0B8h+var_9C]
0x4960EF: mov     [esp+0B8h+var_4], 1
0x4960FA: call    sub_495E30
0x4960FF: mov     eax, [esp+0B0h+var_8C]
0x496103: test    eax, eax
0x496105: mov     [esp+0B0h+var_4], 0FFFFFFFFh
0x496110: jz      short loc_49612C
0x496112: mov     esi, eax
0x496114: add     eax, 4
0x496117: push    eax; lpAddend
0x496118: call    ebp ; InterlockedDecrement
0x49611A: test    eax, eax
0x49611C: jnz     short loc_49612C
0x49611E: test    esi, esi
0x496120: jz      short loc_49612C
0x496122: mov     edx, [esi]
0x496124: mov     eax, [edx]
0x496126: push    1
0x496128: mov     ecx, esi
0x49612A: call    eax
0x49612C: mov     edi, [edi+4]
0x49612F: xor     ebx, ebx
0x496131: jmp     loc_496080
0x496136: mov     edx, [esi]
0x496138: mov     eax, [edx+4]
0x49613B: mov     ecx, esi
0x49613D: call    eax
0x49613F: cmp     eax, ebx
0x496141: jz      short loc_496151
0x496143: cmp     eax, offset dword_BA7D78
0x496148: jz      short loc_496191
0x49614A: mov     eax, [eax+4]
0x49614D: cmp     eax, ebx
0x49614F: jnz     short loc_496143
0x496151: xor     al, al
0x496153: neg     al
0x496155: sbb     eax, eax
0x496157: and     eax, esi
0x496159: mov     edi, eax
0x49615B: jz      loc_496203
0x496161: push    edi
0x496162: push    offset dword_BA7D68
0x496167: call    NiRTTI_Cast
0x49616C: add     esp, 8
0x49616F: cmp     eax, ebx
0x496171: jz      short loc_496195
0x496173: mov     eax, [eax+8]
0x496176: cmp     eax, ebx
0x496178: jz      loc_49624D
0x49617E: mov     eax, [eax+0Ch]
0x496181: cmp     eax, ebx
0x496183: jz      loc_49624D
0x496189: mov     eax, [eax+8]
0x49618C: jmp     loc_49624F
0x496191: mov     al, 1
0x496193: jmp     short loc_496153
0x496195: push    edi
0x496196: push    offset dword_BA7D5C
0x49619B: call    NiRTTI_Cast
0x4961A0: mov     ebp, eax
0x4961A2: add     esp, 8
0x4961A5: cmp     ebp, ebx
0x4961A7: jz      loc_49625E
0x4961AD: mov     ecx, [ebp+8]
0x4961B0: cmp     ecx, ebx
0x4961B2: jz      loc_49625E
0x4961B8: mov     edx, [ecx]
0x4961BA: mov     eax, [edx+1Ch]
0x4961BD: call    eax
0x4961BF: mov     edi, eax
0x4961C1: cmp     edi, ebx
0x4961C3: jz      loc_49625E
0x4961C9: xor     esi, esi
0x4961CB: cmp     edi, ebx
0x4961CD: jbe     loc_49625E
0x4961D3: mov     eax, [ebp+8]
0x4961D6: cmp     eax, ebx
0x4961D8: jz      short loc_4961E9
0x4961DA: mov     ecx, [eax+10h]
0x4961DD: mov     eax, [ecx+esi*8]
0x4961E0: cmp     eax, ebx
0x4961E2: jz      short loc_4961E9
0x4961E4: mov     eax, [eax+8]
0x4961E7: jmp     short loc_4961EB
0x4961E9: xor     eax, eax
0x4961EB: mov     edx, [esp+0B0h+var_94]
0x4961EF: mov     ecx, [esp+0B0h+var_9C]
0x4961F3: push    eax
0x4961F4: push    edx
0x4961F5: call    sub_495E30
0x4961FA: add     esi, 1
0x4961FD: cmp     esi, edi
0x4961FF: jb      short loc_4961D3
0x496201: jmp     short loc_49625E
0x496203: push    esi
0x496204: push    offset dword_BA7D44
0x496209: call    NiRTTI_Cast
0x49620E: add     esp, 8
0x496211: cmp     eax, ebx
0x496213: jz      short loc_496226
0x496215: push    42h ; 'B'
0x496217: mov     ecx, eax
0x496219: call    sub_89FE90
0x49621E: push    eax
0x49621F: mov     eax, [esp+0B4h+var_94]
0x496223: push    eax
0x496224: jmp     short loc_496255
0x496226: push    esi
0x496227: push    offset unk_BA7D50
0x49622C: call    NiRTTI_Cast
0x496231: add     esp, 8
0x496234: cmp     eax, ebx
0x496236: jz      short loc_49625E
0x496238: mov     edx, [eax]
0x49623A: mov     ecx, eax
0x49623C: mov     eax, [edx+8Ch]
0x496242: call    eax
0x496244: cmp     eax, ebx
0x496246: jz      short loc_49624D
0x496248: mov     eax, [eax+0Ch]
0x49624B: jmp     short loc_49624F
0x49624D: xor     eax, eax
0x49624F: mov     ecx, [esp+0B0h+var_94]
0x496253: push    eax
0x496254: push    ecx
0x496255: mov     ecx, [esp+0B8h+var_9C]
0x496259: call    sub_495E30
0x49625E: mov     ecx, [esp+0B0h+var_98]
0x496262: mov     edx, [ecx]
0x496264: mov     eax, [edx]
0x496266: push    1
0x496268: call    eax
0x49626A: mov     ecx, [esp+0B0h+var_C]
0x496271: mov     large fs:0, ecx
0x496278: pop     ecx
0x496279: pop     edi
0x49627A: pop     esi
0x49627B: pop     ebp
0x49627C: pop     ebx
0x49627D: mov     ecx, [esp+9Ch+var_10]
0x496284: xor     ecx, esp
0x496286: call    @__security_check_cookie@4; __security_check_cookie(x)
0x49628B: add     esp, 9Ch
0x496291: retn    8
