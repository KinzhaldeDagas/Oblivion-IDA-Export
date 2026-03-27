0x8DEC30: mov     eax, [ecx+8]
0x8DEC33: push    ebx
0x8DEC34: mov     ebx, [esp+4+arg_4]
0x8DEC38: fld     dword ptr [ebx+4]
0x8DEC3B: push    ebp
0x8DEC3C: fsub    dword ptr [ebx]
0x8DEC3E: push    esi
0x8DEC3F: mov     esi, [esp+0Ch+arg_0]
0x8DEC43: mov     [esi+160h], eax
0x8DEC49: fld     st
0x8DEC4B: push    edi
0x8DEC4C: fadd    dword ptr [ecx+8]
0x8DEC4F: lea     edi, [esi+160h]
0x8DEC55: xor     ebp, ebp
0x8DEC57: fstp    dword ptr [edi+4]
0x8DEC5A: fst     dword ptr [edi+8]
0x8DEC5D: fld     dword ptr ds:0A2F948h
0x8DEC63: fdiv    st, st(1)
0x8DEC65: fstp    dword ptr [edi+0Ch]
0x8DEC68: mov     eax, [esi+3Ch]
0x8DEC6B: test    eax, eax
0x8DEC6D: fstp    st
0x8DEC6F: fld     dword ptr [edi]
0x8DEC71: fsub    dword ptr [ebx]
0x8DEC73: fst     [esp+10h+arg_4]
0x8DEC77: fadd    dword ptr [esi+0Ch]
0x8DEC7A: fstp    dword ptr [esi+0Ch]
0x8DEC7D: fld     [esp+10h+arg_4]
0x8DEC81: fadd    dword ptr [esi+10h]
0x8DEC84: fstp    dword ptr [esi+10h]
0x8DEC87: mov     ecx, [edi]
0x8DEC89: mov     [esi+14h], ecx
0x8DEC8C: mov     edx, [edi+4]
0x8DEC8F: mov     [esi+18h], edx
0x8DEC92: jle     short loc_8DECC6
0x8DEC94: mov     eax, [esi+38h]
0x8DEC97: mov     ecx, [eax+ebp*4]
0x8DEC9A: mov     edx, [ecx+38h]
0x8DEC9D: xor     eax, eax
0x8DEC9F: test    edx, edx
0x8DECA1: jle     short loc_8DECBE
0x8DECA3: mov     edx, [ecx+34h]
0x8DECA6: fld     [esp+10h+arg_4]
0x8DECAA: mov     edx, [edx+eax*4]
0x8DECAD: mov     edx, [edx+50h]
0x8DECB0: fadd    dword ptr [edx+5Ch]
0x8DECB3: inc     eax
0x8DECB4: fstp    dword ptr [edx+5Ch]
0x8DECB7: mov     edx, [ecx+38h]
0x8DECBA: cmp     eax, edx
0x8DECBC: jl      short loc_8DECA3
0x8DECBE: mov     eax, [esi+3Ch]
0x8DECC1: inc     ebp
0x8DECC2: cmp     ebp, eax
0x8DECC4: jl      short loc_8DEC94
0x8DECC6: mov     eax, [esi+3Ch]
0x8DECC9: xor     ebp, ebp
0x8DECCB: test    eax, eax
0x8DECCD: jle     short loc_8DECF3
0x8DECCF: nop
0x8DECD0: mov     eax, [esi+74h]
0x8DECD3: mov     ecx, [edi+4]
0x8DECD6: mov     edx, [ebx+4]
0x8DECD9: push    eax
0x8DECDA: mov     eax, [esi+38h]
0x8DECDD: push    ecx
0x8DECDE: mov     ecx, [eax+ebp*4]
0x8DECE1: push    edx
0x8DECE2: push    ecx
0x8DECE3: call    sub_8E77F0
0x8DECE8: mov     eax, [esi+3Ch]
0x8DECEB: add     esp, 10h
0x8DECEE: inc     ebp
0x8DECEF: cmp     ebp, eax
0x8DECF1: jl      short loc_8DECD0
0x8DECF3: mov     eax, [esp+10h+arg_4]
0x8DECF7: mov     ecx, [esi+8]
0x8DECFA: mov     edx, [ecx]
0x8DECFC: push    eax
0x8DECFD: push    esi
0x8DECFE: call    dword ptr [edx+20h]
0x8DED01: mov     ecx, edi
0x8DED03: mov     edx, [ecx]
0x8DED05: mov     [ebx], edx
0x8DED07: mov     eax, [ecx+4]
0x8DED0A: mov     [ebx+4], eax
0x8DED0D: mov     edx, [ecx+8]
0x8DED10: mov     [ebx+8], edx
0x8DED13: mov     eax, [ecx+0Ch]
0x8DED16: mov     [ebx+0Ch], eax
0x8DED19: mov     ecx, [esi+74h]
0x8DED1C: mov     edx, [edi]
0x8DED1E: add     ecx, 10h
0x8DED21: mov     [ecx], edx
0x8DED23: mov     eax, [edi+4]
0x8DED26: mov     [ecx+4], eax
0x8DED29: mov     edx, [edi+8]
0x8DED2C: mov     [ecx+8], edx
0x8DED2F: mov     eax, [edi+0Ch]
0x8DED32: pop     edi
0x8DED33: pop     esi
0x8DED34: pop     ebp
0x8DED35: mov     [ecx+0Ch], eax
0x8DED38: pop     ebx
0x8DED39: retn    8
