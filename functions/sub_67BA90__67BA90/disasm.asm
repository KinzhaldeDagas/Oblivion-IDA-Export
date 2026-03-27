0x67BA90: sub     esp, 1Ch
0x67BA93: push    ebx
0x67BA94: push    ebp
0x67BA95: push    esi
0x67BA96: push    edi
0x67BA97: mov     ebp, ecx
0x67BA99: mov     ecx, ds:0B33B00h
0x67BA9F: xor     edi, edi
0x67BAA1: mov     [esp+2Ch+var_18], edi
0x67BAA5: xor     ebx, ebx
0x67BAA7: call    sub_45A170
0x67BAAC: test    al, al
0x67BAAE: jz      loc_67BB4D
0x67BAB4: mov     ecx, ds:0B33B00h
0x67BABA: push    4; Size
0x67BABC: lea     eax, [esp+30h+Dst]
0x67BAC0: push    eax; Dst
0x67BAC1: call    SaveLoad_LoadData
0x67BAC6: cmp     [esp+2Ch+Dst], 4B4F4C42h
0x67BACE: jz      short loc_67BB38
0x67BAD0: mov     eax, ds:0B33B00h
0x67BAD5: mov     esi, [eax+80h]
0x67BADB: cmp     esi, edi
0x67BADD: jz      short loc_67BB1C
0x67BADF: mov     ecx, [esi]
0x67BAE1: push    ecx; a1
0x67BAE2: call    TESForm_LookupByFormID
0x67BAE7: mov     edx, [esi+5]
0x67BAEA: movzx   ecx, byte ptr [esi+9]
0x67BAEE: add     esp, 4
0x67BAF1: push    edx
0x67BAF2: mov     edx, [eax]
0x67BAF4: push    ecx
0x67BAF5: mov     ecx, eax
0x67BAF7: mov     eax, [edx+0D4h]
0x67BAFD: call    eax
0x67BAFF: mov     ecx, [esi]
0x67BB01: push    eax
0x67BB02: push    ecx
0x67BB03: push    14Dh
0x67BB08: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BB0D: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x67BB12: call    PrintError
0x67BB17: add     esp, 1Ch
0x67BB1A: jmp     short loc_67BB38
0x67BB1C: movzx   edx, byte ptr [eax+7Ch]
0x67BB20: push    edx
0x67BB21: push    14Dh
0x67BB26: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BB2B: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x67BB30: call    PrintError
0x67BB35: add     esp, 10h
0x67BB38: mov     ecx, ds:0B33B00h
0x67BB3E: mov     ebx, [ecx+14h]
0x67BB41: push    2; Size
0x67BB43: lea     eax, [esp+30h+var_18]
0x67BB47: push    eax; Dst
0x67BB48: call    SaveLoad_LoadData
0x67BB4D: push    2; Size
0x67BB4F: lea     ecx, [esp+30h+var_1C]
0x67BB53: push    ecx; Dst
0x67BB54: mov     ecx, ds:0B33B00h
0x67BB5A: call    SaveLoad_LoadData
0x67BB5F: cmp     word ptr [esp+2Ch+var_1C], di
0x67BB64: mov     [esp+2Ch+var_14], edi
0x67BB68: jbe     loc_67BC04
0x67BB6E: mov     edi, edi
0x67BB70: push    0Ch; Size
0x67BB72: call    FormHeapAlloc
0x67BB77: mov     ecx, ds:0B33B00h
0x67BB7D: add     esp, 4
0x67BB80: push    4; Size
0x67BB82: lea     edx, [esp+30h+var_8]
0x67BB86: push    edx; Dst
0x67BB87: mov     esi, eax
0x67BB89: call    SaveLoad_LoadFormID
0x67BB8E: mov     eax, [esp+34h+var_10]
0x67BB92: push    1; Size
0x67BB94: lea     ecx, [esi+4]
0x67BB97: mov     [esi], eax
0x67BB99: push    ecx; Dst
0x67BB9A: mov     ecx, ds:0B33B00h
0x67BBA0: call    SaveLoad_LoadData
0x67BBA5: mov     ecx, ds:0B33B00h
0x67BBAB: cmp     byte ptr [ecx+7Ch], 39h ; '9'
0x67BBAF: jb      short loc_67BBBC
0x67BBB1: push    4; Size
0x67BBB3: lea     edx, [esi+8]
0x67BBB6: push    edx; Dst
0x67BBB7: call    SaveLoad_LoadData
0x67BBBC: mov     edi, [ebp+0]
0x67BBBF: cmp     dword ptr [edi], 0
0x67BBC2: jz      short loc_67BBEA
0x67BBC4: push    8; Size
0x67BBC6: call    FormHeapAlloc
0x67BBCB: add     esp, 4
0x67BBCE: test    eax, eax
0x67BBD0: jz      short loc_67BBDF
0x67BBD2: mov     ecx, [edi]
0x67BBD4: mov     [eax], ecx
0x67BBD6: mov     dword ptr [eax+4], 0
0x67BBDD: jmp     short loc_67BBE1
0x67BBDF: xor     eax, eax
0x67BBE1: mov     edx, [edi+4]
0x67BBE4: mov     [eax+4], edx
0x67BBE7: mov     [edi+4], eax
0x67BBEA: mov     eax, [esp+34h+var_1C]
0x67BBEE: mov     [edi], esi
0x67BBF0: movzx   ecx, [esp+34h+var_24]
0x67BBF5: add     eax, 1
0x67BBF8: cmp     eax, ecx
0x67BBFA: mov     [esp+34h+var_1C], eax
0x67BBFE: jl      loc_67BB70
0x67BC04: mov     ecx, ds:0B33B00h
0x67BC0A: push    4; Size
0x67BC0C: lea     edx, [esp+38h+Dst]
0x67BC10: push    edx; Dst
0x67BC11: call    SaveLoad_LoadFormID
0x67BC16: mov     eax, [esp+3Ch+var_14]
0x67BC1A: push    4; Size
0x67BC1C: lea     ecx, [esp+40h+var_20]
0x67BC20: mov     [ebp+4], eax
0x67BC23: push    ecx; Dst
0x67BC24: mov     ecx, ds:0B33B00h
0x67BC2A: call    SaveLoad_LoadFormID
0x67BC2F: mov     edx, [esp+44h+a2]
0x67BC33: mov     ecx, ds:0B33B00h
0x67BC39: push    edx
0x67BC3A: call    sub_4606D0
0x67BC3F: mov     eax, [esp+44h+a2]
0x67BC43: mov     ecx, [ebp+8]; this
0x67BC46: push    1; a3
0x67BC48: push    eax; a2
0x67BC49: call    TESForm_SetFormID
0x67BC4E: mov     ecx, [ebp+8]
0x67BC51: mov     edx, [ecx]
0x67BC53: mov     eax, [edx+0E4h]
0x67BC59: call    eax
0x67BC5B: push    4; Size
0x67BC5D: lea     ecx, [ebp+0Ch]
0x67BC60: push    ecx; Dst
0x67BC61: mov     ecx, ds:0B33B00h
0x67BC67: call    SaveLoad_LoadData
0x67BC6C: mov     ecx, ds:0B33B00h
0x67BC72: push    4; Size
0x67BC74: lea     edx, [ebp+10h]
0x67BC77: push    edx; Dst
0x67BC78: call    SaveLoad_LoadData
0x67BC7D: mov     ecx, ds:0B33B00h
0x67BC83: push    0Ch; Size
0x67BC85: lea     eax, [ebp+14h]
0x67BC88: push    eax; Dst
0x67BC89: call    SaveLoad_LoadData
0x67BC8E: mov     ecx, ds:0B33B00h
0x67BC94: push    4; Size
0x67BC96: add     ebp, 20h ; ' '
0x67BC99: push    ebp; Dst
0x67BC9A: call    SaveLoad_LoadData
0x67BC9F: mov     ecx, ds:0B33B00h
0x67BCA5: call    sub_45A170
0x67BCAA: test    al, al
0x67BCAC: jz      loc_67BDC0
0x67BCB2: mov     ecx, ds:0B33B00h
0x67BCB8: mov     edi, [ecx+80h]
0x67BCBE: test    edi, edi
0x67BCC0: mov     esi, [ecx+14h]
0x67BCC3: jz      loc_67BD68
0x67BCC9: mov     ecx, [edi]
0x67BCCB: push    ecx; a1
0x67BCCC: call    TESForm_LookupByFormID
0x67BCD1: movzx   edx, word ptr [esp+48h+var_30]
0x67BCD6: mov     ecx, eax
0x67BCD8: lea     eax, [edx+ebx]
0x67BCDB: add     esp, 4
0x67BCDE: cmp     esi, eax
0x67BCE0: jbe     short loc_67BD22
0x67BCE2: mov     eax, [edi+5]
0x67BCE5: movzx   edx, byte ptr [edi+9]
0x67BCE9: push    eax
0x67BCEA: mov     eax, [ecx]
0x67BCEC: push    edx
0x67BCED: mov     edx, [eax+0D4h]
0x67BCF3: call    edx
0x67BCF5: movzx   ecx, word ptr [esp+4Ch+var_30]
0x67BCFA: push    eax
0x67BCFB: mov     eax, [edi]
0x67BCFD: push    eax
0x67BCFE: push    176h
0x67BD03: sub     esi, ecx
0x67BD05: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BD0A: sub     esi, ebx
0x67BD0C: push    esi; ArgList
0x67BD0D: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x67BD12: call    PrintError
0x67BD17: add     esp, 20h
0x67BD1A: pop     edi
0x67BD1B: pop     esi
0x67BD1C: pop     ebp
0x67BD1D: pop     ebx
0x67BD1E: add     esp, 1Ch
0x67BD21: retn
0x67BD22: jnb     loc_67BDC0
0x67BD28: mov     edx, [edi+5]
0x67BD2B: movzx   eax, byte ptr [edi+9]
0x67BD2F: push    edx
0x67BD30: mov     edx, [ecx]
0x67BD32: push    eax
0x67BD33: mov     eax, [edx+0D4h]
0x67BD39: call    eax
0x67BD3B: mov     ecx, [edi]
0x67BD3D: movzx   edx, word ptr [esp+4Ch+var_30]
0x67BD42: push    eax
0x67BD43: push    ecx
0x67BD44: push    176h
0x67BD49: sub     edx, esi
0x67BD4B: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BD50: add     edx, ebx
0x67BD52: push    edx; ArgList
0x67BD53: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x67BD58: call    PrintError
0x67BD5D: add     esp, 20h
0x67BD60: pop     edi
0x67BD61: pop     esi
0x67BD62: pop     ebp
0x67BD63: pop     ebx
0x67BD64: add     esp, 1Ch
0x67BD67: retn
0x67BD68: movzx   eax, word ptr [esp+44h+var_30]
0x67BD6D: lea     edx, [eax+ebx]
0x67BD70: cmp     esi, edx
0x67BD72: jbe     short loc_67BD9D
0x67BD74: movzx   ecx, byte ptr [ecx+7Ch]
0x67BD78: push    ecx
0x67BD79: push    176h
0x67BD7E: sub     esi, eax
0x67BD80: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BD85: sub     esi, ebx
0x67BD87: push    esi; ArgList
0x67BD88: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x67BD8D: call    PrintError
0x67BD92: add     esp, 14h
0x67BD95: pop     edi
0x67BD96: pop     esi
0x67BD97: pop     ebp
0x67BD98: pop     ebx
0x67BD99: add     esp, 1Ch
0x67BD9C: retn
0x67BD9D: jnb     short loc_67BDC0
0x67BD9F: movzx   edx, byte ptr [ecx+7Ch]
0x67BDA3: push    edx
0x67BDA4: push    176h
0x67BDA9: sub     eax, esi
0x67BDAB: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67BDB0: add     eax, ebx
0x67BDB2: push    eax; ArgList
0x67BDB3: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x67BDB8: call    PrintError
0x67BDBD: add     esp, 14h
0x67BDC0: pop     edi
0x67BDC1: pop     esi
0x67BDC2: pop     ebp
0x67BDC3: pop     ebx
0x67BDC4: add     esp, 1Ch
0x67BDC7: retn
