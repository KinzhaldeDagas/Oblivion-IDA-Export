0x76F3B0: sub     esp, 0Ch
0x76F3B3: push    ebx
0x76F3B4: push    ebp
0x76F3B5: push    esi
0x76F3B6: push    edi
0x76F3B7: mov     edi, [esp+1Ch+arg_0]
0x76F3BB: mov     ebp, [edi+10h]
0x76F3BE: mov     esi, [edi+24h]
0x76F3C1: xor     ebx, ebx
0x76F3C3: cmp     ebp, ebx
0x76F3C5: mov     [esp+1Ch+var_8], ebx
0x76F3C9: mov     [esp+1Ch+var_C], ebp
0x76F3CD: jnz     short loc_76F40A
0x76F3CF: xor     ebp, ebp
0x76F3D1: cmp     [edi+8], bx
0x76F3D5: jbe     loc_76F4AD
0x76F3DB: mov     eax, [edi+1Ch]
0x76F3DE: mov     edi, edi
0x76F3E0: push    eax
0x76F3E1: push    0FFh
0x76F3E6: push    esi
0x76F3E7: call    __memset
0x76F3EC: mov     eax, [edi+1Ch]
0x76F3EF: add     esi, [edi+20h]
0x76F3F2: add     ebp, 1
0x76F3F5: add     esp, 0Ch
0x76F3F8: add     ebx, eax
0x76F3FA: cmp     bp, [edi+8]
0x76F3FE: jb      short loc_76F3E0
0x76F400: pop     edi
0x76F401: pop     esi
0x76F402: pop     ebp
0x76F403: mov     eax, ebx
0x76F405: pop     ebx
0x76F406: add     esp, 0Ch
0x76F409: retn
0x76F40A: mov     ax, [edi+4]
0x76F40E: sub     ax, 18h
0x76F412: movzx   eax, ax
0x76F415: lea     ecx, [eax-4]
0x76F418: test    cx, cx
0x76F41B: jle     short loc_76F428
0x76F41D: mov     ecx, 4
0x76F422: mov     [esp+1Ch+arg_0], ecx
0x76F426: jmp     short loc_76F431
0x76F428: movzx   edx, ax
0x76F42B: mov     [esp+1Ch+arg_0], edx
0x76F42F: mov     ecx, edx
0x76F431: cmp     [edi+8], bx
0x76F435: mov     [esp+1Ch+var_4], ebx
0x76F439: jbe     short loc_76F4AD
0x76F43B: jmp     short loc_76F444
0x76F43D: align 10h
0x76F440: mov     ecx, [esp+1Ch+arg_0]
0x76F444: xor     edx, edx
0x76F446: test    cx, cx
0x76F449: jbe     short loc_76F470
0x76F44B: movzx   ecx, cx
0x76F44E: mov     eax, esi
0x76F450: sub     ebp, esi
0x76F452: movzx   edx, cx
0x76F455: mov     bl, [eax+ebp]
0x76F458: mov     [eax], bl
0x76F45A: add     eax, 1
0x76F45D: sub     ecx, 1
0x76F460: jnz     short loc_76F455
0x76F462: cmp     dx, 4
0x76F466: mov     ebp, [esp+1Ch+var_C]
0x76F46A: mov     ebx, [esp+1Ch+var_8]
0x76F46E: jnb     short loc_76F48B
0x76F470: mov     ecx, 4
0x76F475: movzx   eax, dx
0x76F478: sub     ecx, edx
0x76F47A: movzx   edx, cx
0x76F47D: push    edx
0x76F47E: add     eax, esi
0x76F480: push    0
0x76F482: push    eax
0x76F483: call    __memset
0x76F488: add     esp, 0Ch
0x76F48B: mov     eax, [esp+1Ch+var_4]
0x76F48F: add     ebp, [edi+18h]
0x76F492: add     ebx, [edi+1Ch]
0x76F495: add     esi, [edi+20h]
0x76F498: add     eax, 1
0x76F49B: cmp     ax, [edi+8]
0x76F49F: mov     [esp+1Ch+var_C], ebp
0x76F4A3: mov     [esp+1Ch+var_8], ebx
0x76F4A7: mov     [esp+1Ch+var_4], eax
0x76F4AB: jb      short loc_76F440
0x76F4AD: pop     edi
0x76F4AE: pop     esi
0x76F4AF: pop     ebp
0x76F4B0: mov     eax, ebx
0x76F4B2: pop     ebx
0x76F4B3: add     esp, 0Ch
0x76F4B6: retn
