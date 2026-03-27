0x94DE80: sub     esp, 0Ch
0x94DE83: push    ebx
0x94DE84: push    ebp
0x94DE85: push    esi
0x94DE86: push    edi
0x94DE87: lea     eax, [esp+1Ch+var_C]
0x94DE8B: xor     ebp, ebp
0x94DE8D: push    eax
0x94DE8E: mov     edi, ecx
0x94DE90: mov     [esp+20h+var_C], ebp
0x94DE94: mov     [esp+20h+var_8], ebp
0x94DE98: mov     [esp+20h+var_4], 80000000h
0x94DEA0: call    sub_94DB40
0x94DEA5: mov     esi, [esp+1Ch+arg_0]
0x94DEA9: mov     ebx, [edi+80h]
0x94DEAF: mov     eax, [esi+8]
0x94DEB2: shl     ebx, 2
0x94DEB5: and     eax, 3FFFFFFFh
0x94DEBA: cmp     eax, ebx
0x94DEBC: jge     short loc_94DED2
0x94DEBE: add     eax, eax
0x94DEC0: cmp     ebx, eax
0x94DEC2: jl      short loc_94DEC6
0x94DEC4: mov     eax, ebx
0x94DEC6: push    10h
0x94DEC8: push    eax
0x94DEC9: push    esi
0x94DECA: call    sub_8A6E40
0x94DECF: add     esp, 0Ch
0x94DED2: mov     [esi+4], ebx
0x94DED5: mov     eax, [edi+80h]
0x94DEDB: xor     ebx, ebx
0x94DEDD: cmp     eax, ebp
0x94DEDF: jle     short loc_94DF4F
0x94DEE1: xor     ecx, ecx
0x94DEE3: xor     eax, eax
0x94DEE5: jmp     short loc_94DEF0
0x94DEE7: mov     eax, [esp+1Ch+arg_0]
0x94DEEB: jmp     short loc_94DEF0
0x94DEED: align 10h
0x94DEF0: mov     edx, [esi]
0x94DEF2: movaps  xmm0, xmmword ptr [edi+60h]
0x94DEF6: movaps  xmmword ptr [edx+ecx], xmm0
0x94DEFA: mov     ebp, [esp+1Ch+var_C]
0x94DEFE: movaps  xmm0, xmmword ptr [eax+ebp]
0x94DF02: mov     edx, [esi]
0x94DF04: movaps  xmmword ptr [edx+ecx+10h], xmm0
0x94DF09: mov     ebp, [esp+1Ch+var_C]
0x94DF0D: movaps  xmm0, xmmword ptr [eax+ebp]
0x94DF11: mov     edx, [esi]
0x94DF13: add     ecx, 10h
0x94DF16: add     eax, 10h
0x94DF19: movaps  xmmword ptr [edx+ecx+10h], xmm0
0x94DF1E: add     ecx, 10h
0x94DF21: mov     [esp+1Ch+arg_0], eax
0x94DF25: inc     ebx
0x94DF26: mov     eax, ebx
0x94DF28: cdq
0x94DF29: idiv    dword ptr [edi+80h]
0x94DF2F: mov     ebp, [esp+1Ch+var_C]
0x94DF33: mov     eax, [esi]
0x94DF35: add     ecx, 10h
0x94DF38: add     ecx, 10h
0x94DF3B: shl     edx, 4
0x94DF3E: movaps  xmm0, xmmword ptr [edx+ebp]
0x94DF42: movaps  xmmword ptr [eax+ecx-10h], xmm0
0x94DF47: cmp     ebx, [edi+80h]
0x94DF4D: jl      short loc_94DEE7
0x94DF4F: mov     eax, [esp+1Ch+var_4]
0x94DF53: test    eax, eax
0x94DF55: pop     edi
0x94DF56: pop     esi
0x94DF57: pop     ebp
0x94DF58: pop     ebx
0x94DF59: js      short loc_94DF8F
0x94DF5B: mov     ecx, ds:0BA9DE4h
0x94DF61: mov     edx, large fs:2Ch
0x94DF68: mov     ecx, [edx+ecx*4]
0x94DF6B: mov     ecx, [ecx+19Ch]
0x94DF71: test    ecx, ecx
0x94DF73: jnz     short loc_94DF7B
0x94DF75: mov     ecx, ds:0BA7D9Ch
0x94DF7B: mov     edx, [esp+0Ch+var_C]
0x94DF7E: and     eax, 3FFFFFFFh
0x94DF83: push    14h
0x94DF85: shl     eax, 4
0x94DF88: push    eax
0x94DF89: push    edx
0x94DF8A: call    sub_8A75D0
0x94DF8F: add     esp, 0Ch
0x94DF92: retn    4
