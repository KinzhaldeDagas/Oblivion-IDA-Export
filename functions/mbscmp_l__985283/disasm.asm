0x985283: push    ebp
0x985284: mov     ebp, esp
0x985286: sub     esp, 14h
0x985289: push    ebx
0x98528A: push    [ebp+arg_8]; struct localeinfo_struct *
0x98528D: lea     ecx, [ebp+var_14]; this
0x985290: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x985295: xor     ebx, ebx
0x985297: cmp     [ebp+Str1], ebx
0x98529A: jnz     short loc_9852CA
0x98529C: call    __errno
0x9852A1: push    ebx
0x9852A2: push    ebx
0x9852A3: push    ebx
0x9852A4: push    ebx
0x9852A5: push    ebx
0x9852A6: mov     dword ptr [eax], 16h
0x9852AC: call    __invalid_parameter
0x9852B1: add     esp, 14h
0x9852B4: cmp     [ebp+var_8], bl
0x9852B7: jz      short loc_9852C0
0x9852B9: mov     eax, [ebp+var_C]
0x9852BC: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9852C0: mov     eax, 7FFFFFFFh
0x9852C5: jmp     loc_985388
0x9852CA: push    esi
0x9852CB: mov     esi, [ebp+Str2]
0x9852CE: cmp     esi, ebx
0x9852D0: jnz     short loc_985300
0x9852D2: call    __errno
0x9852D7: push    ebx
0x9852D8: push    ebx
0x9852D9: push    ebx
0x9852DA: push    ebx
0x9852DB: push    ebx
0x9852DC: mov     dword ptr [eax], 16h
0x9852E2: call    __invalid_parameter
0x9852E7: add     esp, 14h
0x9852EA: cmp     [ebp+var_8], bl
0x9852ED: jz      short loc_9852F6
0x9852EF: mov     eax, [ebp+var_C]
0x9852F2: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9852F6: mov     eax, 7FFFFFFFh
0x9852FB: jmp     loc_985387
0x985300: push    edi
0x985301: mov     edi, [ebp+var_10]
0x985304: cmp     [edi+8], ebx
0x985307: jnz     short loc_985316
0x985309: push    esi; Str2
0x98530A: push    [ebp+Str1]; Str1
0x98530D: call    _strcmp
0x985312: pop     ecx
0x985313: pop     ecx
0x985314: jmp     short loc_985391
0x985316: mov     eax, [ebp+Str1]
0x985319: movzx   cx, byte ptr [eax]
0x98531D: movzx   ecx, cx
0x985320: movzx   edx, cl
0x985323: inc     eax
0x985324: test    byte ptr [edx+edi+1Dh], 4
0x985329: mov     [ebp+Str1], eax
0x98532C: jz      short loc_985344
0x98532E: mov     al, [eax]
0x985330: cmp     al, bl
0x985332: jnz     short loc_985338
0x985334: xor     ecx, ecx
0x985336: jmp     short loc_985344
0x985338: xor     edx, edx
0x98533A: inc     [ebp+Str1]
0x98533D: mov     dh, cl
0x98533F: mov     dl, al
0x985341: movzx   ecx, dx
0x985344: movzx   ax, byte ptr [esi]
0x985348: movzx   eax, ax
0x98534B: movzx   edx, al
0x98534E: inc     esi
0x98534F: test    byte ptr [edx+edi+1Dh], 4
0x985354: jz      short loc_98536E
0x985356: mov     dl, [esi]
0x985358: cmp     dl, bl
0x98535A: mov     [ebp+var_1], dl
0x98535D: jnz     short loc_985363
0x98535F: xor     eax, eax
0x985361: jmp     short loc_98536E
0x985363: xor     edx, edx
0x985365: mov     dh, al
0x985367: inc     esi
0x985368: mov     dl, [ebp+var_1]
0x98536B: movzx   eax, dx
0x98536E: cmp     ax, cx
0x985371: jnz     short loc_98538B
0x985373: cmp     cx, bx
0x985376: jnz     short loc_985316
0x985378: cmp     [ebp+var_8], bl
0x98537B: jz      short loc_985384
0x98537D: mov     eax, [ebp+var_C]
0x985380: and     dword ptr [eax+70h], 0FFFFFFFDh
0x985384: xor     eax, eax
0x985386: pop     edi
0x985387: pop     esi
0x985388: pop     ebx
0x985389: leave
0x98538A: retn
0x98538B: sbb     eax, eax
0x98538D: and     eax, 2
0x985390: dec     eax
0x985391: cmp     [ebp+var_8], bl
0x985394: jz      short loc_985386
0x985396: mov     ecx, [ebp+var_C]
0x985399: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x98539D: jmp     short loc_985386
