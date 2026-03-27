0x90F390: sub     esp, 10h
0x90F393: push    ebx
0x90F394: push    edi
0x90F395: mov     edi, ecx
0x90F397: mov     eax, [edi+8]
0x90F39A: mov     eax, [eax+74h]
0x90F39D: mov     ecx, [eax]
0x90F39F: mov     ebx, [edi+124h]
0x90F3A5: dec     ebx
0x90F3A6: mov     [esp+18h+var_10], ecx
0x90F3AA: mov     edx, [eax+4]
0x90F3AD: mov     [esp+18h+var_C], edx
0x90F3B1: mov     ecx, [eax+8]
0x90F3B4: mov     [esp+18h+var_8], ecx
0x90F3B8: mov     edx, [eax+0Ch]
0x90F3BB: mov     [esp+18h+var_4], edx
0x90F3BF: js      short loc_90F3FB
0x90F3C1: push    esi
0x90F3C2: mov     esi, [esp+1Ch+arg_0]
0x90F3C6: push    ebp
0x90F3C7: jmp     short loc_90F3D0
0x90F3C9: align 10h
0x90F3D0: mov     eax, [edi+120h]
0x90F3D6: mov     ecx, [eax+ebx*8]
0x90F3D9: mov     edx, [ecx]
0x90F3DB: lea     eax, [eax+ebx*8]
0x90F3DE: mov     eax, [eax+4]
0x90F3E1: push    esi
0x90F3E2: lea     ebp, [esp+24h+var_10]
0x90F3E6: push    ebp
0x90F3E7: push    eax
0x90F3E8: lea     eax, [edi+14h]
0x90F3EB: push    eax
0x90F3EC: call    dword ptr [edx+8]
0x90F3EF: mov     al, [esi+4]
0x90F3F2: test    al, al
0x90F3F4: jnz     short loc_90F3F9
0x90F3F6: dec     ebx
0x90F3F7: jns     short loc_90F3D0
0x90F3F9: pop     ebp
0x90F3FA: pop     esi
0x90F3FB: pop     edi
0x90F3FC: pop     ebx
0x90F3FD: add     esp, 10h
0x90F400: retn    4
