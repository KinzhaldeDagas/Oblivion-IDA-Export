0x898760: push    ecx
0x898761: mov     eax, [edi]
0x898763: push    ebx
0x898764: push    esi
0x898765: lea     ecx, [esp+0Ch+var_4]
0x898769: push    ecx
0x89876A: mov     ecx, edi
0x89876C: call    dword ptr [eax+1Ch]
0x89876F: mov     ecx, [esp+8+arg_0]
0x898773: mov     edx, [ecx+8]
0x898776: push    esi
0x898777: lea     ebx, [edi+14h]
0x89877A: add     ecx, 8
0x89877D: push    ebx
0x89877E: lea     eax, [esp+10h+arg_0]
0x898782: push    eax
0x898783: call    dword ptr [edx]
0x898785: cmp     byte ptr [eax], 0
0x898788: mov     al, byte ptr [esp+8+var_4]
0x89878C: jz      short loc_8987B0
0x89878E: test    al, al
0x898790: jnz     short loc_8987CE
0x898792: mov     edx, [edi]
0x898794: push    esi
0x898795: mov     ecx, edi
0x898797: call    dword ptr [edx+18h]
0x89879A: cmp     byte ptr [esi+18h], 2
0x89879E: jnz     short loc_8987CE
0x8987A0: mov     eax, [esi+10h]
0x8987A3: mov     edx, [eax+esi]
0x8987A6: lea     ecx, [eax+esi]
0x8987A9: push    ebx
0x8987AA: call    dword ptr [edx+18h]
0x8987AD: pop     ebx
0x8987AE: pop     ecx
0x8987AF: retn
0x8987B0: test    al, al
0x8987B2: jz      short loc_8987CE
0x8987B4: mov     eax, [edi]
0x8987B6: push    esi
0x8987B7: mov     ecx, edi
0x8987B9: call    dword ptr [eax+20h]
0x8987BC: cmp     byte ptr [esi+18h], 2
0x8987C0: jnz     short loc_8987CE
0x8987C2: mov     ecx, [esi+10h]
0x8987C5: mov     edx, [ecx+esi]
0x8987C8: add     ecx, esi
0x8987CA: push    ebx
0x8987CB: call    dword ptr [edx+20h]
0x8987CE: pop     ebx
0x8987CF: pop     ecx
0x8987D0: retn
