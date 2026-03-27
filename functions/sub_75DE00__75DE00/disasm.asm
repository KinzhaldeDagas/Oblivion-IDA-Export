0x75DE00: sub     esp, 8
0x75DE03: push    ebx
0x75DE04: push    ebp
0x75DE05: push    esi
0x75DE06: push    edi
0x75DE07: mov     edi, [esp+18h+arg_0]
0x75DE0B: push    edi
0x75DE0C: mov     esi, ecx
0x75DE0E: call    sub_759FF0
0x75DE13: mov     eax, [edi+220h]
0x75DE19: push    1
0x75DE1B: lea     ecx, [esp+1Ch+arg_0]
0x75DE1F: push    ecx
0x75DE20: mov     ebp, 4
0x75DE25: push    ebp
0x75DE26: lea     edx, [esi+70h]
0x75DE29: push    edx
0x75DE2A: push    eax
0x75DE2B: mov     eax, [eax+8]
0x75DE2E: mov     [esp+2Ch+arg_0], ebp
0x75DE32: call    eax
0x75DE34: mov     cl, [esi+6Ch]
0x75DE37: mov     eax, [edi+220h]
0x75DE3D: push    1
0x75DE3F: lea     edx, [esp+30h+var_8]
0x75DE43: push    edx
0x75DE44: mov     byte ptr [esp+34h+arg_0], cl
0x75DE48: mov     edx, [eax+8]
0x75DE4B: push    1
0x75DE4D: lea     ecx, [esp+38h+arg_0]
0x75DE51: push    ecx
0x75DE52: push    eax
0x75DE53: mov     [esp+40h+var_8], 1
0x75DE5B: call    edx
0x75DE5D: movzx   eax, word ptr [esi+7Eh]
0x75DE61: push    1
0x75DE63: lea     ecx, [esp+44h+arg_0]
0x75DE67: push    ecx
0x75DE68: mov     [esp+48h+var_8], eax
0x75DE6C: mov     eax, [edi+220h]
0x75DE72: push    ebp
0x75DE73: lea     edx, [esp+4Ch+var_8]
0x75DE77: push    edx
0x75DE78: push    eax
0x75DE79: mov     eax, [eax+8]
0x75DE7C: mov     [esp+54h+arg_0], ebp
0x75DE80: call    eax
0x75DE82: xor     ebx, ebx
0x75DE84: add     esp, 3Ch
0x75DE87: cmp     [esi+7Eh], bx
0x75DE8B: jbe     short loc_75DEDF
0x75DE8D: lea     ecx, [ecx+0]
0x75DE90: mov     ecx, [esi+78h]
0x75DE93: cmp     dword ptr [ecx+ebx*4], 0
0x75DE97: lea     eax, [ecx+ebx*4]
0x75DE9A: push    1
0x75DE9C: lea     ecx, [esp+1Ch+arg_0]
0x75DEA0: push    ecx
0x75DEA1: mov     [esp+20h+arg_0], ebp
0x75DEA5: push    ebp
0x75DEA6: jz      short loc_75DEB8
0x75DEA8: mov     edx, [eax]
0x75DEAA: movzx   eax, word ptr [edx+8]
0x75DEAE: mov     [esp+24h+var_8], eax
0x75DEB2: lea     edx, [esp+24h+var_8]
0x75DEB6: jmp     short loc_75DEC4
0x75DEB8: mov     [esp+24h+var_4], 0
0x75DEC0: lea     edx, [esp+24h+var_4]
0x75DEC4: mov     eax, [edi+220h]
0x75DECA: push    edx
0x75DECB: push    eax
0x75DECC: mov     eax, [eax+8]
0x75DECF: call    eax
0x75DED1: movzx   ecx, word ptr [esi+7Eh]
0x75DED5: add     ebx, 1
0x75DED8: add     esp, 14h
0x75DEDB: cmp     ebx, ecx
0x75DEDD: jb      short loc_75DE90
0x75DEDF: mov     edx, [edi]
0x75DEE1: mov     eax, [esi+68h]
0x75DEE4: mov     edx, [edx+2Ch]
0x75DEE7: push    eax
0x75DEE8: mov     ecx, edi
0x75DEEA: call    edx
0x75DEEC: pop     edi
0x75DEED: pop     esi
0x75DEEE: pop     ebp
0x75DEEF: pop     ebx
0x75DEF0: add     esp, 8
0x75DEF3: retn    4
