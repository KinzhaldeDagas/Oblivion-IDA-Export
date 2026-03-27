0x8DBA50: sub     esp, 41Ch
0x8DBA56: push    ebx
0x8DBA57: push    ebp
0x8DBA58: mov     ebp, [esp+424h+arg_C]
0x8DBA5F: push    esi
0x8DBA60: mov     esi, ecx
0x8DBA62: xor     eax, eax
0x8DBA64: mov     ax, [esi+0Eh]
0x8DBA68: test    ax, ax
0x8DBA6B: push    edi
0x8DBA6C: lea     ecx, [eax-1]
0x8DBA6F: mov     [esi+0Eh], cx
0x8DBA73: jnz     loc_8DBB4B
0x8DBA79: mov     edx, [esp+42Ch+arg_4]
0x8DBA80: mov     ecx, [esp+42Ch+arg_0]
0x8DBA87: mov     eax, [edx+10h]
0x8DBA8A: mov     ebx, [ecx+10h]
0x8DBA8D: add     eax, edx
0x8DBA8F: add     ebx, ecx
0x8DBA91: xor     edi, edi
0x8DBA93: mov     di, [ebx+8Eh]
0x8DBA9A: mov     [esp+42Ch+var_41C], eax
0x8DBA9E: mov     ax, [eax+8Eh]
0x8DBAA5: cmp     di, ax
0x8DBAA8: mov     [esp+42Ch+var_418], ebx
0x8DBAAC: jnb     short loc_8DBAB0
0x8DBAAE: mov     eax, edi
0x8DBAB0: mov     [esi+0Eh], ax
0x8DBAB4: mov     edi, [ebp+0]
0x8DBAB7: lea     eax, [ebp+30h]
0x8DBABA: cmp     eax, edi
0x8DBABC: mov     [esp+42Ch+var_410], edx
0x8DBAC0: mov     [esp+42Ch+var_414], ecx
0x8DBAC4: mov     [esp+42Ch+var_408], ebp
0x8DBAC8: mov     [esp+42Ch+var_4], esi
0x8DBACF: lea     edx, [esp+42Ch+var_404]
0x8DBAD3: jnb     short loc_8DBB06
0x8DBAD5: mov     ebx, [esi+1Ch]
0x8DBAD8: mov     ebp, [esi+48h]
0x8DBADB: jmp     short loc_8DBAE0
0x8DBADD: align 10h
0x8DBAE0: movzx   ecx, word ptr [eax+20h]
0x8DBAE4: movzx   ecx, byte ptr [ecx+ebx]
0x8DBAE8: lea     ecx, [ecx+ecx*4]
0x8DBAEB: lea     ecx, [ebp+ecx*4+0]
0x8DBAEF: mov     [edx], ecx
0x8DBAF1: add     eax, 30h ; '0'
0x8DBAF4: add     edx, 4
0x8DBAF7: cmp     eax, edi
0x8DBAF9: jb      short loc_8DBAE0
0x8DBAFB: mov     ebx, [esp+42Ch+var_418]
0x8DBAFF: mov     ebp, [esp+42Ch+arg_C]
0x8DBB06: mov     eax, [esi+8]
0x8DBB09: lea     edx, [esp+42Ch+var_414]
0x8DBB0D: push    edx
0x8DBB0E: push    eax
0x8DBB0F: call    sub_8DC9B0
0x8DBB14: mov     eax, [ebx+98h]
0x8DBB1A: add     esp, 8
0x8DBB1D: test    eax, eax
0x8DBB1F: jz      short loc_8DBB2F
0x8DBB21: lea     ecx, [esp+42Ch+var_414]
0x8DBB25: push    ecx
0x8DBB26: push    ebx
0x8DBB27: call    sub_8DC130
0x8DBB2C: add     esp, 8
0x8DBB2F: mov     eax, [esp+42Ch+var_41C]
0x8DBB33: mov     ecx, [eax+98h]
0x8DBB39: test    ecx, ecx
0x8DBB3B: jz      short loc_8DBB4B
0x8DBB3D: lea     edx, [esp+42Ch+var_414]
0x8DBB41: push    edx
0x8DBB42: push    eax
0x8DBB43: call    sub_8DC130
0x8DBB48: add     esp, 8
0x8DBB4B: mov     edx, [ebp+0]
0x8DBB4E: lea     ecx, [ebp+30h]
0x8DBB51: cmp     ecx, edx
0x8DBB53: jnb     short loc_8DBB7D
0x8DBB55: movzx   eax, word ptr [ecx+20h]
0x8DBB59: mov     edi, [esi+1Ch]
0x8DBB5C: movzx   eax, byte ptr [eax+edi]
0x8DBB60: mov     ebx, [esi+30h]
0x8DBB63: movaps  xmm0, xmmword ptr [ecx]
0x8DBB66: shl     eax, 5
0x8DBB69: add     eax, ebx
0x8DBB6B: movntps xmmword ptr [eax], xmm0
0x8DBB6E: movaps  xmm0, xmmword ptr [ecx+10h]
0x8DBB72: add     ecx, 30h ; '0'
0x8DBB75: cmp     ecx, edx
0x8DBB77: movntps xmmword ptr [eax+10h], xmm0
0x8DBB7B: jb      short loc_8DBB55
0x8DBB7D: pop     edi
0x8DBB7E: pop     esi
0x8DBB7F: pop     ebp
0x8DBB80: pop     ebx
0x8DBB81: add     esp, 41Ch
0x8DBB87: retn    10h
