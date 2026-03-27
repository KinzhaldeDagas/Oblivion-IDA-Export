0x77F370: sub     esp, 10Ch
0x77F376: mov     eax, ds:0B30AACh
0x77F37B: xor     eax, esp
0x77F37D: mov     [esp+10Ch+var_4], eax
0x77F384: mov     eax, [esp+10Ch+Src]
0x77F38B: test    eax, eax
0x77F38D: push    ebx
0x77F38E: mov     ebx, ecx
0x77F390: jz      loc_77F446
0x77F396: push    esi
0x77F397: push    edi; Src
0x77F398: mov     edi, offset EmptyString
0x77F39D: mov     esi, eax
0x77F39F: mov     ecx, 1
0x77F3A4: xor     edx, edx
0x77F3A6: repe cmpsb
0x77F3A8: jz      loc_77F444
0x77F3AE: push    eax; Src
0x77F3AF: lea     eax, [esp+11Ch+Dst]
0x77F3B3: push    104h; SizeInBytes
0x77F3B8: push    eax; Dst
0x77F3B9: call    _strcpy_s
0x77F3BE: lea     eax, [esp+124h+Dst]
0x77F3C2: add     esp, 0Ch
0x77F3C5: xor     edx, edx
0x77F3C7: lea     esi, [eax+1]
0x77F3CA: lea     ebx, [ebx+0]
0x77F3D0: mov     cl, [eax]
0x77F3D2: add     eax, 1
0x77F3D5: test    cl, cl
0x77F3D7: jnz     short loc_77F3D0
0x77F3D9: sub     eax, esi
0x77F3DB: jz      short loc_77F405
0x77F3DD: lea     ecx, [ecx+0]
0x77F3E0: cmp     [esp+edx+118h+Dst], 2Fh ; '/'
0x77F3E5: jnz     short loc_77F3EC
0x77F3E7: mov     [esp+edx+118h+Dst], 5Ch ; '\'
0x77F3EC: lea     eax, [esp+118h+Dst]
0x77F3F0: add     edx, 1
0x77F3F3: lea     esi, [eax+1]
0x77F3F6: mov     cl, [eax]
0x77F3F8: add     eax, 1
0x77F3FB: test    cl, cl
0x77F3FD: jnz     short loc_77F3F6
0x77F3FF: sub     eax, esi
0x77F401: cmp     edx, eax
0x77F403: jb      short loc_77F3E0
0x77F405: mov     esi, [ebx+0Ch]
0x77F408: test    esi, esi
0x77F40A: jz      short loc_77F444
0x77F40C: lea     esp, [esp+0]
0x77F410: lea     eax, [esi+8]
0x77F413: mov     eax, [eax]
0x77F415: test    eax, eax
0x77F417: mov     esi, [esi]
0x77F419: mov     [esp+118h+var_10C], eax
0x77F41D: jz      short loc_77F431
0x77F41F: lea     ecx, [esp+118h+Dst]
0x77F423: push    ecx; Str2
0x77F424: push    eax; Str1
0x77F425: call    __strcmp
0x77F42A: add     esp, 8
0x77F42D: test    eax, eax
0x77F42F: jz      short loc_77F437
0x77F431: test    esi, esi
0x77F433: jnz     short loc_77F410
0x77F435: jmp     short loc_77F444
0x77F437: lea     edx, [esp+118h+var_10C]
0x77F43B: push    edx
0x77F43C: lea     ecx, [ebx+8]
0x77F43F: call    sub_776690
0x77F444: pop     edi
0x77F445: pop     esi
0x77F446: mov     ecx, [esp+110h+var_4]
0x77F44D: pop     ebx
0x77F44E: xor     ecx, esp
0x77F450: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77F455: add     esp, 10Ch
0x77F45B: retn    4
