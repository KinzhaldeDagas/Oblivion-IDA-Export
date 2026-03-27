0x92A3E0: mov     edx, [esp+arg_14]
0x92A3E4: push    ebp
0x92A3E5: push    esi
0x92A3E6: mov     ebp, ecx
0x92A3E8: mov     ecx, [esp+8+arg_10]
0x92A3EC: mov     eax, [ecx]
0x92A3EE: push    edi
0x92A3EF: push    edx
0x92A3F0: call    dword ptr [eax+2Ch]
0x92A3F3: mov     edi, [esp+0Ch+arg_8]
0x92A3F7: mov     [esp+0Ch+arg_10], eax
0x92A3FB: cmp     dword ptr [edi+4], 0FFFFFFFFh
0x92A3FF: jnz     short loc_92A41E
0x92A401: mov     eax, [edi+0Ch]
0x92A404: test    eax, eax
0x92A406: mov     ecx, edi
0x92A408: jz      short loc_92A419
0x92A40A: lea     ebx, [ebx+0]
0x92A410: mov     ecx, eax
0x92A412: mov     eax, [ecx+0Ch]
0x92A415: test    eax, eax
0x92A417: jnz     short loc_92A410
0x92A419: mov     eax, [ecx+1Ch]
0x92A41C: jmp     short loc_92A45B
0x92A41E: mov     esi, [edi+0Ch]
0x92A421: push    ebx
0x92A422: mov     ebx, [esp+10h+arg_4]
0x92A426: mov     ecx, [esi]
0x92A428: mov     eax, [ecx]
0x92A42A: call    dword ptr [eax+8]
0x92A42D: mov     ecx, [ebx]
0x92A42F: mov     eax, [ecx+eax*4+10Ch]
0x92A436: mov     edx, eax
0x92A438: shr     edx, 2
0x92A43B: test    dl, 1
0x92A43E: jnz     short loc_92A476
0x92A440: mov     ecx, eax
0x92A442: shr     ecx, 3
0x92A445: test    cl, 1
0x92A448: jnz     short loc_92A483
0x92A44A: shr     eax, 0Bh
0x92A44D: test    al, 1
0x92A44F: jnz     short loc_92A493
0x92A451: mov     esi, [esi+0Ch]
0x92A454: test    esi, esi
0x92A456: jnz     short loc_92A426
0x92A458: xor     eax, eax
0x92A45A: pop     ebx
0x92A45B: mov     ecx, [esp+0Ch+arg_10]
0x92A45F: mov     esi, [esp+0Ch+arg_0]
0x92A463: push    ecx
0x92A464: push    eax
0x92A465: push    esi
0x92A466: lea     ecx, [ebp-0Ch]
0x92A469: call    sub_92A2E0
0x92A46E: pop     edi
0x92A46F: mov     eax, esi
0x92A471: pop     esi
0x92A472: pop     ebp
0x92A473: retn    18h
0x92A476: mov     ecx, [esi]
0x92A478: mov     edi, [edi+4]
0x92A47B: mov     edx, [ecx]
0x92A47D: push    edi
0x92A47E: call    dword ptr [edx+2Ch]
0x92A481: jmp     short loc_92A45A
0x92A483: mov     eax, [esi]
0x92A485: mov     ecx, [eax+0Ch]
0x92A488: mov     edi, [edi+4]
0x92A48B: mov     edx, [ecx]
0x92A48D: push    edi
0x92A48E: call    dword ptr [edx+2Ch]
0x92A491: jmp     short loc_92A45A
0x92A493: mov     eax, [edi+0Ch]
0x92A496: test    eax, eax
0x92A498: mov     ecx, edi
0x92A49A: jz      short loc_92A4A9
0x92A49C: lea     esp, [esp+0]
0x92A4A0: mov     ecx, eax
0x92A4A2: mov     eax, [ecx+0Ch]
0x92A4A5: test    eax, eax
0x92A4A7: jnz     short loc_92A4A0
0x92A4A9: mov     eax, [ecx+1Ch]
0x92A4AC: jmp     short loc_92A45A
