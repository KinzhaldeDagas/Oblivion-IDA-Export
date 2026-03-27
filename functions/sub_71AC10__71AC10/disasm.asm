0x71AC10: sub     esp, 8
0x71AC13: mov     eax, ds:0B3F928h
0x71AC18: push    ebx
0x71AC19: push    ebp
0x71AC1A: mov     ebx, ecx
0x71AC1C: mov     ecx, [esp+10h+arg_0]
0x71AC20: push    esi
0x71AC21: mov     esi, [ecx+4]
0x71AC24: xor     ebp, ebp
0x71AC26: test    esi, esi
0x71AC28: mov     [esp+14h+var_4], eax
0x71AC2C: mov     [esp+14h+var_8], esi
0x71AC30: jbe     loc_71ACCD
0x71AC36: push    edi
0x71AC37: mov     edx, [esp+18h+arg_0]
0x71AC3B: mov     eax, [edx]
0x71AC3D: mov     edi, [eax+ebp*4]
0x71AC40: mov     ecx, [edi+0ACh]
0x71AC46: mov     eax, [ecx+8]
0x71AC49: test    byte ptr [eax+18h], 1
0x71AC4D: jz      short loc_71ACB0
0x71AC4F: cmp     byte ptr [ebx+34h], 0
0x71AC53: jz      short loc_71AC62
0x71AC55: mov     dx, [eax+18h]
0x71AC59: shr     dx, 0Dh
0x71AC5D: test    dl, 1
0x71AC60: jnz     short loc_71ACB0
0x71AC62: mov     al, [edi+18h]
0x71AC65: shr     al, 6
0x71AC68: not     al
0x71AC6A: test    al, 1
0x71AC6C: jz      short loc_71ACB0
0x71AC6E: mov     edx, [ebx+0Ch]
0x71AC71: mov     eax, [edx+4]
0x71AC74: lea     esi, [ebx+0Ch]
0x71AC77: mov     ecx, esi
0x71AC79: call    eax
0x71AC7B: mov     [eax+8], edi
0x71AC7E: mov     dword ptr [eax], 0
0x71AC84: mov     ecx, [esi+8]
0x71AC87: mov     [eax+4], ecx
0x71AC8A: mov     ecx, [esi+8]
0x71AC8D: test    ecx, ecx
0x71AC8F: jz      short loc_71ACA0
0x71AC91: mov     [ecx], eax
0x71AC93: add     dword ptr [esi+0Ch], 1
0x71AC97: mov     [esi+8], eax
0x71AC9A: mov     esi, [esp+18h+var_8]
0x71AC9E: jmp     short loc_71ACC1
0x71ACA0: add     dword ptr [esi+0Ch], 1
0x71ACA4: mov     [esi+4], eax
0x71ACA7: mov     [esi+8], eax
0x71ACAA: mov     esi, [esp+18h+var_8]
0x71ACAE: jmp     short loc_71ACC1
0x71ACB0: mov     edx, [edi]
0x71ACB2: mov     eax, [esp+18h+var_4]
0x71ACB6: mov     edx, [edx+84h]
0x71ACBC: push    eax
0x71ACBD: mov     ecx, edi
0x71ACBF: call    edx
0x71ACC1: add     ebp, 1
0x71ACC4: cmp     ebp, esi
0x71ACC6: jb      loc_71AC37
0x71ACCC: pop     edi
0x71ACCD: pop     esi
0x71ACCE: pop     ebp
0x71ACCF: pop     ebx
0x71ACD0: add     esp, 8
0x71ACD3: retn    4
