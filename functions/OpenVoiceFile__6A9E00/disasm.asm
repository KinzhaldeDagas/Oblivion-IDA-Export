0x6A9E00: push    0FFFFFFFFh
0x6A9E02: push    offset OpenSoundFile_SEH
0x6A9E07: mov     eax, large fs:0
0x6A9E0D: push    eax
0x6A9E0E: sub     esp, 158h
0x6A9E14: mov     eax, ds:0B30AACh
0x6A9E19: xor     eax, esp
0x6A9E1B: mov     [esp+164h+var_10], eax
0x6A9E22: push    ebx
0x6A9E23: push    ebp
0x6A9E24: push    esi
0x6A9E25: push    edi
0x6A9E26: mov     eax, ds:0B30AACh
0x6A9E2B: xor     eax, esp
0x6A9E2D: push    eax
0x6A9E2E: lea     eax, [esp+178h+var_C]
0x6A9E35: mov     large fs:0, eax
0x6A9E3B: mov     eax, [esp+178h+arg_0]
0x6A9E42: mov     ebp, [esp+178h+arg_4]
0x6A9E49: lea     edx, [esp+178h+Str]
0x6A9E4D: mov     [esp+178h+var_150], eax
0x6A9E51: mov     esi, ecx
0x6A9E53: mov     dword ptr [esp+178h+ArgList], ebp
0x6A9E57: mov     eax, ebp
0x6A9E59: sub     edx, ebp
0x6A9E5B: jmp     short loc_6A9E60
0x6A9E5D: align 10h
0x6A9E60: mov     cl, [eax]
0x6A9E62: mov     [edx+eax], cl
0x6A9E65: add     eax, 1
0x6A9E68: test    cl, cl
0x6A9E6A: jnz     short loc_6A9E60
0x6A9E6C: xor     edi, edi
0x6A9E6E: lea     ecx, [esp+178h+Str]
0x6A9E72: push    edi
0x6A9E73: push    ecx
0x6A9E74: call    NiFile_CanOpenFileWithMode_Indirect
0x6A9E79: lea     edx, [esp+180h+Str]
0x6A9E7D: push    offset a_wav; ".wav"
0x6A9E82: push    edx; Str
0x6A9E83: mov     bl, al
0x6A9E85: call    _strstr
0x6A9E8A: add     esp, 10h
0x6A9E8D: cmp     eax, edi
0x6A9E8F: jz      short loc_6A9E9D
0x6A9E91: mov     byte ptr [eax+1], 6Dh ; 'm'
0x6A9E95: mov     byte ptr [eax+2], 70h ; 'p'
0x6A9E99: mov     byte ptr [eax+3], 33h ; '3'
0x6A9E9D: lea     eax, [esp+178h+Str]
0x6A9EA1: push    edi
0x6A9EA2: push    eax
0x6A9EA3: call    NiFile_CanOpenFileWithMode_Indirect
0x6A9EA8: add     esp, 8
0x6A9EAB: test    al, al
0x6A9EAD: jnz     short loc_6A9ECE
0x6A9EAF: test    bl, bl
0x6A9EB1: jnz     loc_6AA134
0x6A9EB7: lea     ecx, [esp+178h+Str]
0x6A9EBB: push    ecx; ArgList
0x6A9EBC: push    offset aMp3FileSNotFou; "MP3 file '%s' not found"
0x6A9EC1: call    PrintError
0x6A9EC6: add     esp, 8
0x6A9EC9: jmp     loc_6AA134
0x6A9ECE: push    1Ch; Size
0x6A9ED0: call    FormHeapAlloc
0x6A9ED5: add     esp, 4
0x6A9ED8: mov     [esp+178h+var_15C], eax
0x6A9EDC: cmp     eax, edi
0x6A9EDE: mov     [esp+178h+var_4], edi
0x6A9EE5: jz      short loc_6A9EF7
0x6A9EE7: lea     edx, [esp+178h+Str]
0x6A9EEB: push    edx
0x6A9EEC: mov     ecx, eax
0x6A9EEE: call    sub_6B45C0
0x6A9EF3: mov     ebx, eax
0x6A9EF5: jmp     short loc_6A9EF9
0x6A9EF7: xor     ebx, ebx
0x6A9EF9: cmp     byte ptr [ebx+18h], 0
0x6A9EFD: mov     [esp+178h+var_4], 0FFFFFFFFh
0x6A9F08: jz      loc_6AA116
0x6A9F0E: cmp     [ebx], edi
0x6A9F10: jz      loc_6AA116
0x6A9F16: push    413Ch; Size
0x6A9F1B: call    FormHeapAlloc
0x6A9F20: add     esp, 4
0x6A9F23: mov     [esp+178h+var_15C], eax
0x6A9F27: cmp     eax, edi
0x6A9F29: mov     ecx, 1
0x6A9F2E: mov     [esp+178h+var_4], ecx
0x6A9F35: jz      short loc_6A9F48
0x6A9F37: push    ebx
0x6A9F38: mov     ecx, eax
0x6A9F3A: call    sub_6B1D40
0x6A9F3F: mov     ebp, eax
0x6A9F41: mov     ecx, 1
0x6A9F46: jmp     short loc_6A9F4A
0x6A9F48: xor     ebp, ebp
0x6A9F4A: xor     eax, eax
0x6A9F4C: mov     [esp+178h+var_138], eax
0x6A9F50: mov     [esp+178h+var_134], eax
0x6A9F54: mov     [esp+178h+var_130], eax
0x6A9F58: mov     [esp+178h+var_128], eax
0x6A9F5C: mov     [esp+178h+var_124], eax
0x6A9F60: mov     [esp+178h+var_120], eax
0x6A9F64: mov     [esp+178h+var_11C], eax
0x6A9F68: mov     [esp+178h+var_118], eax
0x6A9F6C: mov     [esp+178h+var_12C], eax
0x6A9F70: mov     [esp+178h+var_138], 24h ; '$'
0x6A9F78: mov     [esp+178h+var_13C], di
0x6A9F7D: mov     eax, [ebx+4]
0x6A9F80: mov     edx, [eax+8]
0x6A9F83: lea     eax, [edx+edx]
0x6A9F86: mov     [esp+178h+var_144], eax
0x6A9F8A: mov     al, [esp+178h+arg_8]
0x6A9F91: and     al, 2
0x6A9F93: neg     al
0x6A9F95: mov     [esp+178h+var_14A], cx
0x6A9F9A: mov     [esp+178h+var_14C], cx
0x6A9F9F: mov     [esp+178h+var_148], edx
0x6A9FA3: mov     [esp+178h+var_13E], 10h
0x6A9FAA: mov     [esp+178h+var_140], 2
0x6A9FB1: mov     [esp+178h+var_4], 0FFFFFFFFh
0x6A9FBC: sbb     eax, eax
0x6A9FBE: and     eax, 20010h
0x6A9FC3: or      eax, 0A0h
0x6A9FC8: mov     [esp+178h+var_134], eax
0x6A9FCC: mov     ecx, [ebp+0]
0x6A9FCF: mov     eax, [ecx]
0x6A9FD1: lea     ecx, [eax+eax*8]
0x6A9FD4: mov     eax, ds:0A78FC4h
0x6A9FD9: mov     [esp+178h+var_124], eax
0x6A9FDD: mov     eax, ds:0A78FC8h
0x6A9FE2: mov     [esp+178h+var_120], eax
0x6A9FE6: mov     eax, ds:0A78FCCh
0x6A9FEB: mov     [esp+178h+var_11C], eax
0x6A9FEF: mov     eax, ds:0A78FD0h
0x6A9FF4: mov     [esp+178h+var_118], eax
0x6A9FF8: lea     eax, [esp+178h+var_14C]
0x6A9FFC: mov     [esp+178h+var_128], eax
0x6AA000: mov     eax, 10624DD3h
0x6AA005: mul     edx
0x6AA007: shl     ecx, 8
0x6AA00A: mov     eax, edx
0x6AA00C: shr     eax, 6
0x6AA00F: mov     [esp+178h+var_130], ecx
0x6AA013: shr     ecx, 1
0x6AA015: mov     [esp+178h+var_164], eax
0x6AA019: mov     eax, ecx
0x6AA01B: mov     ecx, [esp+178h+var_164]
0x6AA01F: xor     edx, edx
0x6AA021: div     ecx
0x6AA023: cmp     [esi+8], edi
0x6AA026: movzx   ecx, ax
0x6AA029: mov     [esp+178h+var_15C], ecx
0x6AA02D: jz      short loc_6AA05B
0x6AA02F: mov     eax, [esi+8]
0x6AA032: mov     esi, [esp+178h+var_150]
0x6AA036: mov     edx, [eax]
0x6AA038: mov     edx, [edx+0Ch]
0x6AA03B: push    edi
0x6AA03C: push    esi
0x6AA03D: lea     ecx, [esp+180h+var_138]
0x6AA041: push    ecx
0x6AA042: push    eax
0x6AA043: call    edx
0x6AA045: test    eax, eax
0x6AA047: jge     short loc_6AA078
0x6AA049: mov     eax, dword ptr [esp+178h+ArgList]
0x6AA04D: push    eax; ArgList
0x6AA04E: push    offset aCreatesoundbuf; "CreateSoundBuffer failed while playing "...
0x6AA053: call    PrintError
0x6AA058: add     esp, 8
0x6AA05B: mov     ecx, ebx
0x6AA05D: call    sub_6B31D0
0x6AA062: push    ebx
0x6AA063: call    FormHeapFree
0x6AA068: add     esp, 4
0x6AA06B: mov     ecx, ebp
0x6AA06D: call    sub_6B3500
0x6AA072: push    ebp
0x6AA073: jmp     loc_6AA12C
0x6AA078: mov     esi, [esi]
0x6AA07A: push    2
0x6AA07C: push    edi
0x6AA07D: push    edi
0x6AA07E: lea     edx, [esp+184h+var_154]
0x6AA082: push    edx
0x6AA083: lea     eax, [esp+188h+var_158]
0x6AA087: push    eax
0x6AA088: push    edi
0x6AA089: mov     [esp+190h+var_158], edi
0x6AA08D: mov     [esp+190h+var_154], edi
0x6AA091: mov     ecx, [esi]
0x6AA093: mov     ecx, [ecx+2Ch]
0x6AA096: push    edi
0x6AA097: push    esi
0x6AA098: mov     dword ptr [esp+198h+ArgList], esi
0x6AA09C: call    ecx
0x6AA09E: test    eax, eax
0x6AA0A0: jl      short loc_6AA05B
0x6AA0A2: mov     edx, [esp+178h+var_158]
0x6AA0A6: mov     ecx, ebp
0x6AA0A8: mov     [esp+178h+var_164], edx
0x6AA0AC: call    sub_6B3AE0
0x6AA0B1: cmp     eax, edi
0x6AA0B3: jz      short loc_6AA0DB
0x6AA0B5: mov     edi, [esp+178h+var_164]
0x6AA0B9: add     [esp+178h+var_164], 900h
0x6AA0C1: mov     esi, eax
0x6AA0C3: mov     ecx, 240h
0x6AA0C8: rep movsd
0x6AA0CA: mov     ecx, ebp
0x6AA0CC: call    sub_6B3AE0
0x6AA0D1: test    eax, eax
0x6AA0D3: jnz     short loc_6AA0B5
0x6AA0D5: mov     esi, dword ptr [esp+178h+ArgList]
0x6AA0D9: xor     edi, edi
0x6AA0DB: mov     ecx, [esp+178h+var_154]
0x6AA0DF: mov     edx, [esp+178h+var_158]
0x6AA0E3: mov     eax, [esi]
0x6AA0E5: mov     eax, [eax+4Ch]
0x6AA0E8: push    edi
0x6AA0E9: push    edi
0x6AA0EA: push    ecx
0x6AA0EB: push    edx
0x6AA0EC: push    esi
0x6AA0ED: call    eax
0x6AA0EF: mov     ecx, ebx
0x6AA0F1: call    sub_6B31D0
0x6AA0F6: push    ebx
0x6AA0F7: call    FormHeapFree
0x6AA0FC: add     esp, 4
0x6AA0FF: mov     ecx, ebp
0x6AA101: call    sub_6B3500
0x6AA106: push    ebp
0x6AA107: call    FormHeapFree
0x6AA10C: mov     ax, word ptr [esp+17Ch+var_15C]
0x6AA111: add     esp, 4
0x6AA114: jmp     short loc_6AA137
0x6AA116: push    ebp; ArgList
0x6AA117: push    offset aMp3FileSIsNotC; "MP3 file '%s' is not compatible with cu"...
0x6AA11C: call    PrintError
0x6AA121: add     esp, 8
0x6AA124: mov     ecx, ebx
0x6AA126: call    sub_6B31D0
0x6AA12B: push    ebx
0x6AA12C: call    FormHeapFree
0x6AA131: add     esp, 4
0x6AA134: xor     ax, ax
0x6AA137: mov     ecx, [esp+178h+var_C]
0x6AA13E: mov     large fs:0, ecx
0x6AA145: pop     ecx
0x6AA146: pop     edi
0x6AA147: pop     esi
0x6AA148: pop     ebp
0x6AA149: pop     ebx
0x6AA14A: mov     ecx, [esp+164h+var_10]
0x6AA151: xor     ecx, esp
0x6AA153: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AA158: add     esp, 164h
0x6AA15E: retn    0Ch
