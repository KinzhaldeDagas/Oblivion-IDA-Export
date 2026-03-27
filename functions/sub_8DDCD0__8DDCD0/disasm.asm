0x8DDCD0: mov     eax, [esp+arg_4]
0x8DDCD4: fld     dword ptr [eax+8]
0x8DDCD7: push    ebx
0x8DDCD8: push    esi
0x8DDCD9: mov     esi, ecx
0x8DDCDB: fadd    dword ptr [esi+2Ch]
0x8DDCDE: mov     ecx, [esi+1Ch]
0x8DDCE1: push    edi
0x8DDCE2: fstp    dword ptr [esi+2Ch]
0x8DDCE5: fld     dword ptr [esi+30h]
0x8DDCE8: fadd    dword ptr [eax+8]
0x8DDCEB: fstp    [esp+0Ch+arg_4]
0x8DDCEF: mov     eax, [esp+0Ch+arg_4]
0x8DDCF3: fld     dword ptr [esi+2Ch]
0x8DDCF6: mov     [esi+30h], eax
0x8DDCF9: fcomp   dword ptr [ecx+0A8h]
0x8DDCFF: fnstsw  ax
0x8DDD01: test    ah, 41h
0x8DDD04: jnz     short loc_8DDD0A
0x8DDD06: mov     dl, 1
0x8DDD08: jmp     short loc_8DDD0C
0x8DDD0A: xor     dl, dl
0x8DDD0C: fld     [esp+0Ch+arg_4]
0x8DDD10: fcomp   dword ptr [ecx+0ACh]
0x8DDD16: fnstsw  ax
0x8DDD18: test    ah, 41h
0x8DDD1B: jnz     short loc_8DDD21
0x8DDD1D: mov     al, 1
0x8DDD1F: jmp     short loc_8DDD23
0x8DDD21: xor     al, al
0x8DDD23: test    dl, dl
0x8DDD25: jz      short loc_8DDD9F
0x8DDD27: fld     dword ptr [esi+2Ch]
0x8DDD2A: mov     eax, [esi+38h]
0x8DDD2D: fsub    dword ptr [ecx+0A8h]
0x8DDD33: xor     edi, edi
0x8DDD35: test    eax, eax
0x8DDD37: mov     bl, 1
0x8DDD39: fstp    dword ptr [esi+2Ch]
0x8DDD3C: jle     short loc_8DDD6B
0x8DDD3E: mov     edi, edi
0x8DDD40: mov     ecx, [esi+34h]
0x8DDD43: mov     eax, [ecx+edi*4]
0x8DDD46: mov     ecx, [eax+64h]
0x8DDD49: test    ecx, ecx
0x8DDD4B: jz      short loc_8DDD5D
0x8DDD4D: mov     edx, [ecx]
0x8DDD4F: push    eax
0x8DDD50: lea     eax, [esp+10h+arg_4]
0x8DDD54: push    eax
0x8DDD55: call    dword ptr [edx+8]
0x8DDD58: cmp     byte ptr [eax], 0
0x8DDD5B: jnz     short loc_8DDD5F
0x8DDD5D: xor     bl, bl
0x8DDD5F: mov     eax, [esi+38h]
0x8DDD62: inc     edi
0x8DDD63: cmp     edi, eax
0x8DDD65: jl      short loc_8DDD40
0x8DDD67: test    bl, bl
0x8DDD69: jz      short loc_8DDD8E
0x8DDD6B: mov     cl, [esi+24h]
0x8DDD6E: inc     cl
0x8DDD70: mov     al, cl
0x8DDD72: cmp     al, 5
0x8DDD74: mov     [esi+24h], cl
0x8DDD77: jb      loc_8DDE16
0x8DDD7D: mov     eax, [esp+0Ch+arg_0]
0x8DDD81: pop     edi
0x8DDD82: mov     byte ptr [esi+24h], 0
0x8DDD86: pop     esi
0x8DDD87: mov     byte ptr [eax], 1
0x8DDD8A: pop     ebx
0x8DDD8B: retn    8
0x8DDD8E: mov     eax, [esp+0Ch+arg_0]
0x8DDD92: pop     edi
0x8DDD93: mov     byte ptr [esi+24h], 0
0x8DDD97: pop     esi
0x8DDD98: mov     byte ptr [eax], 0
0x8DDD9B: pop     ebx
0x8DDD9C: retn    8
0x8DDD9F: test    al, al
0x8DDDA1: jz      short loc_8DDE16
0x8DDDA3: fld     [esp+0Ch+arg_4]
0x8DDDA7: mov     eax, [esi+38h]
0x8DDDAA: fsub    dword ptr [ecx+0ACh]
0x8DDDB0: xor     edi, edi
0x8DDDB2: test    eax, eax
0x8DDDB4: mov     bl, 1
0x8DDDB6: fstp    dword ptr [esi+30h]
0x8DDDB9: jle     short loc_8DDDF3
0x8DDDBB: jmp     short loc_8DDDC0
0x8DDDBD: align 10h
0x8DDDC0: mov     ecx, [esi+34h]
0x8DDDC3: mov     edx, [ecx+edi*4]
0x8DDDC6: lea     eax, [ecx+edi*4]
0x8DDDC9: mov     ecx, [edx+64h]
0x8DDDCC: test    ecx, ecx
0x8DDDCE: jz      short loc_8DDDE5
0x8DDDD0: mov     eax, edx
0x8DDDD2: mov     ecx, [eax+64h]
0x8DDDD5: mov     edx, [ecx]
0x8DDDD7: push    eax
0x8DDDD8: lea     eax, [esp+10h+arg_4]
0x8DDDDC: push    eax
0x8DDDDD: call    dword ptr [edx+0Ch]
0x8DDDE0: cmp     byte ptr [eax], 0
0x8DDDE3: jnz     short loc_8DDDE7
0x8DDDE5: xor     bl, bl
0x8DDDE7: mov     eax, [esi+38h]
0x8DDDEA: inc     edi
0x8DDDEB: cmp     edi, eax
0x8DDDED: jl      short loc_8DDDC0
0x8DDDEF: test    bl, bl
0x8DDDF1: jz      short loc_8DDE12
0x8DDDF3: mov     cl, [esi+25h]
0x8DDDF6: inc     cl
0x8DDDF8: mov     al, cl
0x8DDDFA: cmp     al, 5
0x8DDDFC: mov     [esi+25h], cl
0x8DDDFF: jb      short loc_8DDE16
0x8DDE01: mov     eax, [esp+0Ch+arg_0]
0x8DDE05: pop     edi
0x8DDE06: mov     byte ptr [esi+25h], 0
0x8DDE0A: pop     esi
0x8DDE0B: mov     byte ptr [eax], 1
0x8DDE0E: pop     ebx
0x8DDE0F: retn    8
0x8DDE12: mov     byte ptr [esi+25h], 0
0x8DDE16: mov     eax, [esp+0Ch+arg_0]
0x8DDE1A: pop     edi
0x8DDE1B: pop     esi
0x8DDE1C: mov     byte ptr [eax], 0
0x8DDE1F: pop     ebx
0x8DDE20: retn    8
