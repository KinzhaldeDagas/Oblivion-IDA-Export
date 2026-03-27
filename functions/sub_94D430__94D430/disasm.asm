0x94D430: sub     esp, 0Ch
0x94D433: push    ebx
0x94D434: push    ebp
0x94D435: push    esi
0x94D436: push    edi
0x94D437: lea     eax, [esp+1Ch+var_C]
0x94D43B: xor     ebp, ebp
0x94D43D: push    eax
0x94D43E: mov     ebx, ecx
0x94D440: mov     [esp+20h+var_C], ebp
0x94D444: mov     [esp+20h+var_8], ebp
0x94D448: mov     [esp+20h+var_4], 80000000h
0x94D450: call    sub_94D2E0
0x94D455: mov     edi, [esp+1Ch+arg_0]
0x94D459: mov     esi, [ebx+9Ch]
0x94D45F: mov     eax, [edi+8]
0x94D462: shl     esi, 1
0x94D464: and     eax, 3FFFFFFFh
0x94D469: cmp     eax, esi
0x94D46B: jge     short loc_94D481
0x94D46D: add     eax, eax
0x94D46F: cmp     esi, eax
0x94D471: jl      short loc_94D475
0x94D473: mov     eax, esi
0x94D475: push    10h
0x94D477: push    eax
0x94D478: push    edi
0x94D479: call    sub_8A6E40
0x94D47E: add     esp, 0Ch
0x94D481: mov     [edi+4], esi
0x94D484: mov     eax, [ebx+9Ch]
0x94D48A: xor     edx, edx
0x94D48C: cmp     eax, ebp
0x94D48E: jle     short loc_94D4C5
0x94D490: xor     eax, eax
0x94D492: xor     ecx, ecx
0x94D494: mov     ebp, [esp+1Ch+var_C]
0x94D498: movaps  xmm0, xmmword ptr [ecx+ebp]
0x94D49C: mov     esi, [edi]
0x94D49E: movaps  xmmword ptr [esi+eax], xmm0
0x94D4A2: mov     ebp, [esp+1Ch+var_C]
0x94D4A6: mov     esi, [edi]
0x94D4A8: movaps  xmm0, xmmword ptr [ecx+ebp+10h]
0x94D4AD: add     eax, 10h
0x94D4B0: movaps  xmmword ptr [esi+eax], xmm0
0x94D4B4: mov     esi, [ebx+9Ch]
0x94D4BA: add     eax, 10h
0x94D4BD: inc     edx
0x94D4BE: add     ecx, 10h
0x94D4C1: cmp     edx, esi
0x94D4C3: jl      short loc_94D494
0x94D4C5: mov     eax, [esp+1Ch+var_4]
0x94D4C9: test    eax, eax
0x94D4CB: pop     edi
0x94D4CC: pop     esi
0x94D4CD: pop     ebp
0x94D4CE: pop     ebx
0x94D4CF: js      short loc_94D505
0x94D4D1: mov     ecx, ds:0BA9DE4h
0x94D4D7: mov     edx, large fs:2Ch
0x94D4DE: mov     ecx, [edx+ecx*4]
0x94D4E1: mov     ecx, [ecx+19Ch]
0x94D4E7: test    ecx, ecx
0x94D4E9: jnz     short loc_94D4F1
0x94D4EB: mov     ecx, ds:0BA7D9Ch
0x94D4F1: mov     edx, [esp+0Ch+var_C]
0x94D4F4: and     eax, 3FFFFFFFh
0x94D4F9: push    14h
0x94D4FB: shl     eax, 4
0x94D4FE: push    eax
0x94D4FF: push    edx
0x94D500: call    sub_8A75D0
0x94D505: add     esp, 0Ch
0x94D508: retn    4
