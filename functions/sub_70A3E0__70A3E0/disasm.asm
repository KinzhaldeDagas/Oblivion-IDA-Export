0x70A3E0: push    0FFFFFFFFh
0x70A3E2: push    offset SEH_70A3E0
0x70A3E7: mov     eax, large fs:0
0x70A3ED: push    eax
0x70A3EE: sub     esp, 0Ch
0x70A3F1: push    ebx
0x70A3F2: push    ebp
0x70A3F3: push    esi
0x70A3F4: push    edi
0x70A3F5: mov     eax, ds:0B30AACh
0x70A3FA: xor     eax, esp
0x70A3FC: push    eax
0x70A3FD: lea     eax, [esp+2Ch+var_C]
0x70A401: mov     large fs:0, eax
0x70A407: mov     ebp, ecx
0x70A409: xor     esi, esi
0x70A40B: mov     [esp+2Ch+var_10], 0
0x70A413: mov     [esp+2Ch+var_18], esi
0x70A417: mov     ecx, [ebp+1Ch]
0x70A41A: test    ecx, ecx
0x70A41C: mov     ebx, 1
0x70A421: mov     [esp+2Ch+var_4], ebx
0x70A425: jz      loc_70A4BA
0x70A42B: lea     eax, [esp+2Ch+var_14]
0x70A42F: push    eax
0x70A430: call    sub_70A3E0
0x70A435: push    eax
0x70A436: lea     ecx, [esp+30h+var_18]
0x70A43A: mov     byte ptr [esp+30h+var_4], 2
0x70A43F: call    sub_55E2A0
0x70A444: mov     esi, [esp+2Ch+var_14]
0x70A448: test    esi, esi
0x70A44A: mov     byte ptr [esp+2Ch+var_4], bl
0x70A44E: jz      short loc_70A46B
0x70A450: lea     ecx, [esi+4]
0x70A453: push    ecx; lpAddend
0x70A454: call    dword ptr ds:0A2807Ch
0x70A45A: test    eax, eax
0x70A45C: jnz     short loc_70A46B
0x70A45E: test    esi, esi
0x70A460: jz      short loc_70A46B
0x70A462: mov     edx, [esi]
0x70A464: mov     eax, [edx]
0x70A466: push    ebx
0x70A467: mov     ecx, esi
0x70A469: call    eax
0x70A46B: mov     esi, [esp+2Ch+var_18]
0x70A46F: mov     edi, [esp+2Ch+arg_0]
0x70A473: push    0
0x70A475: push    esi
0x70A476: push    edi
0x70A477: mov     ecx, ebp
0x70A479: call    sub_7077D0
0x70A47E: test    esi, esi
0x70A480: mov     [esp+2Ch+var_10], ebx
0x70A484: mov     byte ptr [esp+2Ch+var_4], 0
0x70A489: jz      short loc_70A4A2
0x70A48B: lea     ecx, [esi+4]
0x70A48E: push    ecx; lpAddend
0x70A48F: call    dword ptr ds:0A2807Ch
0x70A495: test    eax, eax
0x70A497: jnz     short loc_70A4A2
0x70A499: mov     edx, [esi]
0x70A49B: mov     eax, [edx]
0x70A49D: push    ebx
0x70A49E: mov     ecx, esi
0x70A4A0: call    eax
0x70A4A2: mov     eax, edi
0x70A4A4: mov     ecx, dword ptr [esp+2Ch+var_C]
0x70A4A8: mov     large fs:0, ecx
0x70A4AF: pop     ecx
0x70A4B0: pop     edi
0x70A4B1: pop     esi
0x70A4B2: pop     ebp
0x70A4B3: pop     ebx
0x70A4B4: add     esp, 18h
0x70A4B7: retn    4
0x70A4BA: push    30h ; '0'; Size
0x70A4BC: call    FormHeapAlloc
0x70A4C1: add     esp, 4
0x70A4C4: mov     [esp+2Ch+var_14], eax
0x70A4C8: test    eax, eax
0x70A4CA: mov     byte ptr [esp+2Ch+var_4], 3
0x70A4CF: jz      short loc_70A4DA
0x70A4D1: mov     ecx, eax
0x70A4D3: call    sub_7319E0
0x70A4D8: jmp     short loc_70A4DC
0x70A4DA: xor     eax, eax
0x70A4DC: test    eax, eax
0x70A4DE: mov     byte ptr [esp+2Ch+var_4], bl
0x70A4E2: jz      short loc_70A46F
0x70A4E4: mov     esi, eax
0x70A4E6: add     eax, 4
0x70A4E9: push    eax; lpAddend
0x70A4EA: mov     [esp+30h+var_18], esi
0x70A4EE: call    dword ptr ds:0A28078h
0x70A4F4: jmp     loc_70A46F
