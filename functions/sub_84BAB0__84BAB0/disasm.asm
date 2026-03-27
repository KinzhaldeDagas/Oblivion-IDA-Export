0x84BAB0: push    0FFFFFFFFh
0x84BAB2: push    offset SEH_84D2B0
0x84BAB7: mov     eax, large fs:0
0x84BABD: push    eax
0x84BABE: sub     esp, 8
0x84BAC1: push    ebx
0x84BAC2: push    ebp
0x84BAC3: push    esi
0x84BAC4: push    edi
0x84BAC5: mov     eax, ds:0B30AACh
0x84BACA: xor     eax, esp
0x84BACC: push    eax
0x84BACD: lea     eax, [esp+28h+var_C]
0x84BAD1: mov     large fs:0, eax
0x84BAD7: mov     esi, ecx
0x84BAD9: mov     [esp+28h+var_10], esi
0x84BADD: mov     edi, [esp+28h+arg_8]
0x84BAE1: mov     eax, [edi+10h]
0x84BAE4: mov     ebx, ds:0B45628h
0x84BAEA: push    eax
0x84BAEB: mov     [esp+2Ch+var_14], ebx
0x84BAEF: call    sub_848C40
0x84BAF4: mov     edi, [edi+0Ch]
0x84BAF7: push    edi
0x84BAF8: mov     ecx, esi
0x84BAFA: call    sub_848E50
0x84BAFF: mov     eax, [ebx+24h]
0x84BB02: mov     esi, [esp+28h+arg_C]
0x84BB06: mov     edx, [esi]
0x84BB08: mov     ebp, [eax]
0x84BB0A: mov     eax, [edx+88h]
0x84BB10: push    0
0x84BB12: mov     ecx, esi
0x84BB14: call    eax
0x84BB16: mov     edi, [ebp+4]
0x84BB19: mov     ebx, eax
0x84BB1B: cmp     edi, ebx
0x84BB1D: jz      short loc_84BB50
0x84BB1F: test    edi, edi
0x84BB21: jz      short loc_84BB3F
0x84BB23: lea     ecx, [edi+4]
0x84BB26: push    ecx; lpAddend
0x84BB27: call    dword ptr ds:0A2807Ch
0x84BB2D: test    eax, eax
0x84BB2F: jnz     short loc_84BB3F
0x84BB31: test    edi, edi
0x84BB33: jz      short loc_84BB3F
0x84BB35: mov     edx, [edi]
0x84BB37: mov     eax, [edx]
0x84BB39: push    1
0x84BB3B: mov     ecx, edi
0x84BB3D: call    eax
0x84BB3F: test    ebx, ebx
0x84BB41: mov     [ebp+4], ebx
0x84BB44: jz      short loc_84BB50
0x84BB46: add     ebx, 4
0x84BB49: push    ebx; lpAddend
0x84BB4A: call    dword ptr ds:0A28078h
0x84BB50: test    ebp, ebp
0x84BB52: jz      short loc_84BB6E
0x84BB54: cmp     byte ptr ds:0B42CDDh, 0
0x84BB5B: jz      short loc_84BB6E
0x84BB5D: mov     edx, [esi]
0x84BB5F: mov     eax, [edx+78h]
0x84BB62: mov     ecx, esi
0x84BB64: call    eax
0x84BB66: push    eax
0x84BB67: mov     ecx, ebp
0x84BB69: call    sub_7715E0
0x84BB6E: mov     ecx, [esp+28h+var_14]
0x84BB72: mov     edx, [ecx+24h]
0x84BB75: mov     eax, [esi]
0x84BB77: mov     ebp, [edx+4]
0x84BB7A: mov     edx, [eax+8Ch]
0x84BB80: push    0
0x84BB82: mov     ecx, esi
0x84BB84: call    edx
0x84BB86: test    eax, eax
0x84BB88: jz      short loc_84BB9C
0x84BB8A: mov     eax, [esi]
0x84BB8C: mov     edx, [eax+8Ch]
0x84BB92: push    0
0x84BB94: mov     ecx, esi
0x84BB96: call    edx
0x84BB98: mov     ebx, eax
0x84BB9A: jmp     short loc_84BBB1
0x84BB9C: test    dword ptr [esi+1Ch], 80h
0x84BBA3: mov     ebx, ds:0B430F0h
0x84BBA9: ja      short loc_84BBB1
0x84BBAB: mov     ebx, ds:0B430DCh
0x84BBB1: mov     edi, [ebp+4]
0x84BBB4: cmp     edi, ebx
0x84BBB6: jz      short loc_84BBE9
0x84BBB8: test    edi, edi
0x84BBBA: jz      short loc_84BBD8
0x84BBBC: lea     eax, [edi+4]
0x84BBBF: push    eax; lpAddend
0x84BBC0: call    dword ptr ds:0A2807Ch
0x84BBC6: test    eax, eax
0x84BBC8: jnz     short loc_84BBD8
0x84BBCA: test    edi, edi
0x84BBCC: jz      short loc_84BBD8
0x84BBCE: mov     edx, [edi]
0x84BBD0: mov     eax, [edx]
0x84BBD2: push    1
0x84BBD4: mov     ecx, edi
0x84BBD6: call    eax
0x84BBD8: test    ebx, ebx
0x84BBDA: mov     [ebp+4], ebx
0x84BBDD: jz      short loc_84BBE9
0x84BBDF: add     ebx, 4
0x84BBE2: push    ebx; lpAddend
0x84BBE3: call    dword ptr ds:0A28078h
0x84BBE9: test    ebp, ebp
0x84BBEB: jz      short loc_84BC07
0x84BBED: cmp     byte ptr ds:0B42CDDh, 0
0x84BBF4: jz      short loc_84BC07
0x84BBF6: mov     edx, [esi]
0x84BBF8: mov     eax, [edx+78h]
0x84BBFB: mov     ecx, esi
0x84BBFD: call    eax
0x84BBFF: push    eax
0x84BC00: mov     ecx, ebp
0x84BC02: call    sub_7715E0
0x84BC07: mov     ecx, [esp+28h+var_14]
0x84BC0B: mov     edx, [ecx+24h]
0x84BC0E: mov     eax, [esi]
0x84BC10: mov     ebx, [edx+8]
0x84BC13: mov     edx, [eax+88h]
0x84BC19: push    1
0x84BC1B: mov     ecx, esi
0x84BC1D: call    edx
0x84BC1F: mov     edi, [ebx+4]
0x84BC22: mov     ebp, eax
0x84BC24: cmp     edi, ebp
0x84BC26: jz      short loc_84BC59
0x84BC28: test    edi, edi
0x84BC2A: jz      short loc_84BC48
0x84BC2C: lea     eax, [edi+4]
0x84BC2F: push    eax; lpAddend
0x84BC30: call    dword ptr ds:0A2807Ch
0x84BC36: test    eax, eax
0x84BC38: jnz     short loc_84BC48
0x84BC3A: test    edi, edi
0x84BC3C: jz      short loc_84BC48
0x84BC3E: mov     edx, [edi]
0x84BC40: mov     eax, [edx]
0x84BC42: push    1
0x84BC44: mov     ecx, edi
0x84BC46: call    eax
0x84BC48: test    ebp, ebp
0x84BC4A: mov     [ebx+4], ebp
0x84BC4D: jz      short loc_84BC59
0x84BC4F: add     ebp, 4
0x84BC52: push    ebp; lpAddend
0x84BC53: call    dword ptr ds:0A28078h
0x84BC59: test    ebx, ebx
0x84BC5B: jz      short loc_84BC77
0x84BC5D: cmp     byte ptr ds:0B42CDDh, 0
0x84BC64: jz      short loc_84BC77
0x84BC66: mov     edx, [esi]
0x84BC68: mov     eax, [edx+78h]
0x84BC6B: mov     ecx, esi
0x84BC6D: call    eax
0x84BC6F: push    eax
0x84BC70: mov     ecx, ebx
0x84BC72: call    sub_7715E0
0x84BC77: mov     ebx, [esp+28h+var_14]
0x84BC7B: mov     ecx, [ebx+24h]
0x84BC7E: mov     edi, [ecx+0Ch]
0x84BC81: mov     edx, [esi]
0x84BC83: mov     eax, [edx+8Ch]
0x84BC89: push    1
0x84BC8B: mov     ecx, esi
0x84BC8D: mov     [esp+2Ch+arg_8], edi
0x84BC91: call    eax
0x84BC93: test    eax, eax
0x84BC95: jz      short loc_84BCA9
0x84BC97: mov     edx, [esi]
0x84BC99: mov     eax, [edx+8Ch]
0x84BC9F: push    1
0x84BCA1: mov     ecx, esi
0x84BCA3: call    eax
0x84BCA5: mov     ebp, eax
0x84BCA7: jmp     short loc_84BCBE
0x84BCA9: test    dword ptr [esi+1Ch], 80h
0x84BCB0: mov     ebp, ds:0B430F0h
0x84BCB6: ja      short loc_84BCBE
0x84BCB8: mov     ebp, ds:0B430DCh
0x84BCBE: mov     edi, [edi+4]
0x84BCC1: cmp     edi, ebp
0x84BCC3: jz      short loc_84BCFC
0x84BCC5: test    edi, edi
0x84BCC7: jz      short loc_84BCE5
0x84BCC9: lea     ecx, [edi+4]
0x84BCCC: push    ecx; lpAddend
0x84BCCD: call    dword ptr ds:0A2807Ch
0x84BCD3: test    eax, eax
0x84BCD5: jnz     short loc_84BCE5
0x84BCD7: test    edi, edi
0x84BCD9: jz      short loc_84BCE5
0x84BCDB: mov     edx, [edi]
0x84BCDD: mov     eax, [edx]
0x84BCDF: push    1
0x84BCE1: mov     ecx, edi
0x84BCE3: call    eax
0x84BCE5: test    ebp, ebp
0x84BCE7: mov     edi, [esp+28h+arg_8]
0x84BCEB: mov     [edi+4], ebp
0x84BCEE: jz      short loc_84BD00
0x84BCF0: add     ebp, 4
0x84BCF3: push    ebp; lpAddend
0x84BCF4: call    dword ptr ds:0A28078h
0x84BCFA: jmp     short loc_84BD00
0x84BCFC: mov     edi, [esp+28h+arg_8]
0x84BD00: test    edi, edi
0x84BD02: jz      short loc_84BD1E
0x84BD04: cmp     byte ptr ds:0B42CDDh, 0
0x84BD0B: jz      short loc_84BD1E
0x84BD0D: mov     edx, [esi]
0x84BD0F: mov     eax, [edx+78h]
0x84BD12: mov     ecx, esi
0x84BD14: call    eax
0x84BD16: push    eax
0x84BD17: mov     ecx, edi
0x84BD19: call    sub_7715E0
0x84BD1E: mov     edi, 1
0x84BD23: add     [ebx+60h], edi
0x84BD26: mov     [esp+28h+arg_8], ebx
0x84BD2A: mov     esi, [esp+28h+var_10]
0x84BD2E: mov     edx, [esi+38h]
0x84BD31: lea     ecx, [esp+28h+arg_8]
0x84BD35: push    ecx
0x84BD36: push    edx
0x84BD37: lea     ecx, [esi+40h]
0x84BD3A: mov     [esp+30h+var_4], 0
0x84BD42: call    sub_76CE40
0x84BD47: or      eax, 0FFFFFFFFh
0x84BD4A: add     [ebx+60h], eax
0x84BD4D: mov     [esp+28h+var_4], eax
0x84BD51: jnz     short loc_84BD5A
0x84BD53: mov     ecx, ebx
0x84BD55: call    sub_7604D0
0x84BD5A: add     [esi+38h], edi
0x84BD5D: mov     ecx, [esp+28h+var_C]
0x84BD61: mov     large fs:0, ecx
0x84BD68: pop     ecx
0x84BD69: pop     edi
0x84BD6A: pop     esi
0x84BD6B: pop     ebp
0x84BD6C: pop     ebx
0x84BD6D: add     esp, 14h
0x84BD70: retn    10h
