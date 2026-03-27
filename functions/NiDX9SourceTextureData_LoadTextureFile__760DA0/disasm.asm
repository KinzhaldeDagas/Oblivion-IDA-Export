0x760DA0: sub     esp, 594h
0x760DA6: mov     eax, ds:0B30AACh
0x760DAB: xor     eax, esp
0x760DAD: mov     [esp+594h+var_4], eax
0x760DB4: mov     eax, [esp+594h+a5]
0x760DBB: test    eax, eax
0x760DBD: mov     [esp+594h+var_558], ecx
0x760DC1: mov     ecx, [esp+594h+Src]
0x760DC8: jnz     short loc_760DE3
0x760DCA: xor     al, al
0x760DCC: mov     ecx, [esp+594h+var_4]
0x760DD3: xor     ecx, esp
0x760DD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x760DDA: add     esp, 594h
0x760DE0: retn    0Ch
0x760DE3: mov     eax, [eax+280h]
0x760DE9: test    eax, eax
0x760DEB: mov     [esp+594h+var_588], eax
0x760DEF: jz      short loc_760DCA
0x760DF1: push    ecx; Src
0x760DF2: lea     eax, [esp+598h+Dst]
0x760DF9: push    104h; SizeInBytes
0x760DFE: push    eax; Dst
0x760DFF: call    _strcpy_s
0x760E04: lea     ecx, [esp+5A0h+Dst]; void *
0x760E0B: push    ecx
0x760E0C: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x760E11: add     esp, 10h
0x760E14: lea     edx, [esp+594h+Dst]
0x760E1B: push    edx; FullPath
0x760E1C: lea     ecx, [esp+598h+Dir]; Dir
0x760E23: call    sub_748760
0x760E28: lea     eax, [esp+594h+Str1]
0x760E2F: push    offset a_bmp; ".bmp"
0x760E34: push    eax; Str1
0x760E35: call    __strcmp
0x760E3A: add     esp, 8
0x760E3D: test    eax, eax
0x760E3F: jz      short loc_760E77
0x760E41: lea     ecx, [esp+594h+Str1]
0x760E48: push    offset a_tga; ".tga"
0x760E4D: push    ecx; Str1
0x760E4E: call    __strcmp
0x760E53: add     esp, 8
0x760E56: test    eax, eax
0x760E58: jz      short loc_760E77
0x760E5A: lea     edx, [esp+594h+Str1]
0x760E61: push    offset a_dds; ".dds"
0x760E66: push    edx; Str1
0x760E67: call    __strcmp
0x760E6C: add     esp, 8
0x760E6F: test    eax, eax
0x760E71: jnz     loc_760DCA
0x760E77: push    esi
0x760E78: push    8000h
0x760E7D: lea     eax, [esp+59Ch+Dst]
0x760E84: push    0
0x760E86: push    eax
0x760E87: call    NiFile_GetNiFile_Indirect
0x760E8C: mov     esi, eax
0x760E8E: add     esp, 0Ch
0x760E91: test    esi, esi
0x760E93: jz      loc_76122A
0x760E99: mov     edx, [esi]
0x760E9B: mov     eax, [edx+4]
0x760E9E: mov     ecx, esi
0x760EA0: call    eax
0x760EA2: test    al, al
0x760EA4: mov     edx, [esi]
0x760EA6: mov     ecx, esi
0x760EA8: jz      loc_761224
0x760EAE: mov     eax, [edx+10h]
0x760EB1: push    edi
0x760EB2: call    eax
0x760EB4: mov     edi, eax
0x760EB6: test    edi, edi
0x760EB8: mov     [esp+598h+var_58C], edi
0x760EBC: jnz     short loc_760ECF
0x760EBE: mov     edx, [esi]
0x760EC0: mov     eax, [edx]
0x760EC2: push    1
0x760EC4: mov     ecx, esi
0x760EC6: call    eax
0x760EC8: xor     al, al
0x760ECA: jmp     loc_7611D1
0x760ECF: push    ebp
0x760ED0: push    edi; Size
0x760ED1: call    FormHeapAlloc
0x760ED6: add     esp, 4
0x760ED9: mov     ebp, eax
0x760EDB: push    edi
0x760EDC: push    ebp
0x760EDD: mov     ecx, esi
0x760EDF: call    ReadFile??
0x760EE4: mov     edx, [esi]
0x760EE6: mov     eax, [edx]
0x760EE8: push    1
0x760EEA: mov     ecx, esi
0x760EEC: call    eax
0x760EEE: lea     ecx, [esp+5A0h+var_578]
0x760EF2: push    ecx; unsigned int *
0x760EF3: push    edi; int
0x760EF4: push    ebp; int
0x760EF5: call    D3DXGetImageInfoFromFileInMemory_0
0x760EFA: test    eax, eax
0x760EFC: jl      short loc_760F3A
0x760EFE: mov     edx, [esp+5A0h+a6]
0x760F05: mov     ecx, 4
0x760F0A: cmp     [edx], ecx
0x760F0C: jnz     short loc_760F4A
0x760F0E: mov     eax, [esp+5A0h+a1]
0x760F12: cmp     eax, 3Ch ; '<'
0x760F15: jz      short loc_760F4A
0x760F17: cmp     eax, 3Fh ; '?'
0x760F1A: jz      short loc_760F4A
0x760F1C: cmp     eax, 40h ; '@'
0x760F1F: jz      short loc_760F4A
0x760F21: cmp     eax, 6Eh ; 'n'
0x760F24: jz      short loc_760F4A
0x760F26: cmp     eax, 75h ; 'u'
0x760F29: jz      short loc_760F4A
0x760F2B: cmp     eax, 3Dh ; '='
0x760F2E: jz      short loc_760F4A
0x760F30: cmp     eax, 3Eh ; '>'
0x760F33: jz      short loc_760F4A
0x760F35: cmp     eax, 43h ; 'C'
0x760F38: jz      short loc_760F4A
0x760F3A: push    ebp
0x760F3B: call    FormHeapFree
0x760F40: add     esp, 4
0x760F43: xor     al, al
0x760F45: jmp     loc_7611D0
0x760F4A: mov     eax, [esp+5A0h+var_574]
0x760F4E: mov     [esp+5A0h+var_55C], eax
0x760F52: mov     eax, [esp+5A0h+var_564]
0x760F56: push    ebx
0x760F57: mov     ebx, [esp+5A4h+var_578]
0x760F5B: xor     esi, esi
0x760F5D: cmp     eax, 3
0x760F60: mov     [esp+5A4h+var_554], ebx
0x760F64: jnz     loc_7610E0
0x760F6A: cmp     [esp+5A4h+var_560], ecx
0x760F6E: mov     [esp+5A4h+var_580], esi
0x760F72: jnz     loc_7610C7
0x760F78: test    [ebp+50h], cl
0x760F7B: mov     esi, ds:0B4205Ch
0x760F81: mov     edx, ds:0B42060h
0x760F87: jz      loc_7610C7
0x760F8D: mov     eax, [ebp+54h]
0x760F90: cmp     eax, 31545844h
0x760F95: jnz     short loc_760FA1
0x760F97: mov     [esp+5A4h+var_57C], 2
0x760F9F: jmp     short loc_760FC9
0x760FA1: cmp     eax, 32545844h
0x760FA6: jz      short loc_760FC1
0x760FA8: cmp     eax, 33545844h
0x760FAD: jz      short loc_760FC1
0x760FAF: cmp     eax, 34545844h
0x760FB4: jz      short loc_760FC1
0x760FB6: cmp     eax, 35545844h
0x760FBB: jnz     loc_7610C7
0x760FC1: mov     [esp+5A4h+var_57C], 1
0x760FC9: mov     eax, [ebp+1Ch]
0x760FCC: lea     ecx, [ebp+80h]
0x760FD2: mov     [esp+5A4h+var_584], ecx
0x760FD6: mov     ecx, eax
0x760FD8: sub     ecx, esi
0x760FDA: cmp     ecx, edx
0x760FDC: ja      short loc_760FE0
0x760FDE: mov     ecx, edx
0x760FE0: cmp     eax, esi
0x760FE2: ja      short loc_760FEC
0x760FE4: cmp     eax, edx
0x760FE6: mov     ecx, eax
0x760FE8: jb      short loc_760FEC
0x760FEA: mov     ecx, edx
0x760FEC: cmp     ecx, eax
0x760FEE: mov     [esp+5A4h+var_58C], eax
0x760FF2: jnb     short loc_761069
0x760FF4: sub     eax, ecx
0x760FF6: mov     [esp+5A4h+var_594], eax
0x760FFA: lea     ebx, [ebx+0]
0x761000: mov     eax, ebx
0x761002: shr     eax, 2
0x761005: cmp     eax, 1
0x761008: mov     ecx, 1
0x76100D: jb      short loc_761011
0x76100F: mov     ecx, eax
0x761011: mov     esi, [esp+5A4h+var_574]
0x761015: mov     eax, esi
0x761017: shr     eax, 2
0x76101A: cmp     eax, 1
0x76101D: jnb     short loc_761024
0x76101F: mov     eax, 1
0x761024: imul    eax, ecx
0x761027: shl     eax, 4
0x76102A: xor     edx, edx
0x76102C: div     [esp+5A4h+var_57C]
0x761030: mov     ecx, 1
0x761035: add     [esp+5A4h+var_584], eax
0x761039: sub     edi, eax
0x76103B: mov     eax, ebx
0x76103D: shr     eax, 1
0x76103F: cmp     eax, ecx
0x761041: mov     ebx, ecx
0x761043: jb      short loc_761047
0x761045: mov     ebx, eax
0x761047: mov     eax, esi
0x761049: shr     eax, 1
0x76104B: cmp     eax, ecx
0x76104D: mov     [esp+5A4h+var_574], ecx
0x761051: jb      short loc_761057
0x761053: mov     [esp+5A4h+var_574], eax
0x761057: sub     [esp+5A4h+var_58C], ecx
0x76105B: sub     [esp+5A4h+var_594], ecx
0x76105F: jnz     short loc_761000
0x761061: mov     eax, [esp+5A4h+var_58C]
0x761065: mov     [esp+5A4h+var_578], ebx
0x761069: cmp     eax, [ebp+1Ch]
0x76106C: jz      short loc_7610C3
0x76106E: push    edi; Size
0x76106F: call    FormHeapAlloc
0x761074: push    80h ; '€'; Size
0x761079: mov     esi, eax
0x76107B: push    ebp; Src
0x76107C: push    esi; Dst
0x76107D: call    _memcpy
0x761082: mov     edx, [esp+5B4h+var_578]
0x761086: mov     ecx, [esp+5B4h+var_58C]
0x76108A: mov     [esi+10h], edx
0x76108D: mov     eax, [esp+5B4h+var_574]
0x761091: mov     [esi+0Ch], eax
0x761094: mov     eax, [esp+5B4h+var_584]
0x761098: mov     [esi+1Ch], ecx
0x76109B: mov     edx, [esp+5B4h+var_574]
0x76109F: imul    edx, [esp+5B4h+var_578]
0x7610A4: add     edi, 0FFFFFF80h
0x7610A7: push    edi; Size
0x7610A8: push    eax; Src
0x7610A9: lea     ecx, [esi+80h]
0x7610AF: push    ecx; Dst
0x7610B0: mov     [esi+14h], edx
0x7610B3: call    _memcpy
0x7610B8: push    ebp
0x7610B9: call    FormHeapFree
0x7610BE: add     esp, 20h
0x7610C1: mov     ebp, esi
0x7610C3: mov     edi, [esp+5A4h+var_590]
0x7610C7: mov     eax, [esp+5A4h+var_588]
0x7610CB: lea     edx, [esp+5A4h+var_580]
0x7610CF: push    edx
0x7610D0: push    edi
0x7610D1: push    ebp
0x7610D2: push    eax
0x7610D3: call    D3DXCreateTextureFromFileInMemory_0
0x7610D8: mov     esi, [esp+5A4h+var_580]
0x7610DC: mov     edi, eax
0x7610DE: jmp     short loc_761130
0x7610E0: cmp     eax, 5
0x7610E3: jnz     short loc_761106
0x7610E5: mov     edx, [esp+5A4h+var_588]
0x7610E9: lea     ecx, [esp+5A4h+var_590]
0x7610ED: push    ecx
0x7610EE: push    edi
0x7610EF: push    ebp
0x7610F0: push    edx
0x7610F1: mov     [esp+5B4h+var_590], 0
0x7610F9: call    D3DXCreateCubeTextureFromFileInMemory_0
0x7610FE: mov     esi, [esp+5A4h+var_590]
0x761102: mov     edi, eax
0x761104: jmp     short loc_761130
0x761106: cmp     eax, ecx
0x761108: jnz     short loc_76112B
0x76110A: mov     ecx, [esp+5A4h+var_588]
0x76110E: lea     eax, [esp+5A4h+var_594]
0x761112: push    eax
0x761113: push    edi
0x761114: push    ebp
0x761115: push    ecx
0x761116: mov     [esp+5B4h+var_594], 0
0x76111E: call    D3DXCreateVolumeTextureFromFileInMemory_0
0x761123: mov     esi, [esp+5A4h+var_594]
0x761127: mov     edi, eax
0x761129: jmp     short loc_761130
0x76112B: mov     edi, 8876086Ch
0x761130: push    ebp
0x761131: call    FormHeapFree
0x761136: add     esp, 4
0x761139: test    edi, edi
0x76113B: jl      loc_761220
0x761141: test    esi, esi
0x761143: jz      loc_761220
0x761149: mov     edi, [esp+5A4h+var_558]
0x76114D: mov     edx, [edi]
0x76114F: mov     eax, [edx+24h]
0x761152: push    esi
0x761153: mov     ecx, edi
0x761155: call    eax
0x761157: mov     ecx, [esp+5A4h+var_554]
0x76115B: mov     edx, [esp+5A4h+var_55C]
0x76115F: mov     bl, al
0x761161: test    bl, bl
0x761163: mov     [edi+54h], ecx
0x761166: mov     [edi+58h], edx
0x761169: jnz     short loc_761175
0x76116B: mov     eax, [esi]
0x76116D: mov     ecx, [eax+8]
0x761170: push    esi
0x761171: call    ecx
0x761173: jmp     short loc_7611CD
0x761175: mov     eax, [esp+5A4h+a1]
0x761179: cmp     eax, 33545844h
0x76117E: jg      short loc_7611EA
0x761180: jz      short loc_761190
0x761182: cmp     eax, 31545844h
0x761187: jz      short loc_761190
0x761189: cmp     eax, 32545844h
0x76118E: jnz     short loc_7611F8
0x761190: mov     ecx, 1
0x761195: mov     eax, [esp+5A4h+var_570]
0x761199: imul    eax, ecx
0x76119C: imul    eax, [esp+5A4h+var_574]
0x7611A1: imul    eax, [esp+5A4h+var_578]
0x7611A6: add     ds:0B42054h, eax
0x7611AC: mov     ecx, eax
0x7611AE: and     ecx, 0FFFFF000h
0x7611B4: xor     edx, edx
0x7611B6: cmp     ecx, eax
0x7611B8: mov     [edi+60h], eax
0x7611BB: jz      short loc_7611C7
0x7611BD: sub     ecx, eax
0x7611BF: add     ecx, 1000h
0x7611C5: mov     edx, ecx
0x7611C7: add     ds:0B42058h, edx
0x7611CD: mov     al, bl
0x7611CF: pop     ebx
0x7611D0: pop     ebp
0x7611D1: pop     edi
0x7611D2: pop     esi
0x7611D3: mov     ecx, [esp+594h+var_4]
0x7611DA: xor     ecx, esp
0x7611DC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7611E1: add     esp, 594h
0x7611E7: retn    0Ch
0x7611EA: cmp     eax, 34545844h
0x7611EF: jz      short loc_761190
0x7611F1: cmp     eax, 35545844h
0x7611F6: jz      short loc_761190
0x7611F8: lea     ecx, [esp+5A4h+a2]
0x7611FC: call    InitSurfacEData
0x761201: mov     eax, [esp+5A4h+a1]
0x761205: lea     edx, [esp+5A4h+a2]
0x761209: push    edx; a2
0x76120A: push    eax; a1
0x76120B: call    D3DFMTToTextureFormat
0x761210: movzx   ecx, [esp+5ACh+var_54F]
0x761215: add     esp, 8
0x761218: shr     ecx, 3
0x76121B: jmp     loc_761195
0x761220: xor     al, al
0x761222: jmp     short loc_7611CF
0x761224: mov     eax, [edx]
0x761226: push    1
0x761228: call    eax
0x76122A: mov     ecx, [esp+598h+var_4]
0x761231: pop     esi
0x761232: xor     ecx, esp
0x761234: xor     al, al
0x761236: call    @__security_check_cookie@4; __security_check_cookie(x)
0x76123B: add     esp, 594h
0x761241: retn    0Ch
