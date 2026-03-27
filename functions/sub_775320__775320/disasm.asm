0x775320: push    ebp
0x775321: push    esi
0x775322: push    edi
0x775323: mov     edi, ecx
0x775325: xor     esi, esi
0x775327: xor     ebp, ebp
0x775329: cmp     [edi+45Ah], si
0x775330: jbe     short loc_775382
0x775332: push    ebx
0x775333: mov     ebx, [esp+10h+arg_C]
0x775337: jmp     short loc_775340
0x775339: align 10h
0x775340: mov     eax, [edi+454h]
0x775346: mov     ecx, [eax+esi*4]
0x775349: test    ecx, ecx
0x77534B: jz      short loc_775373
0x77534D: mov     edx, [esp+10h+arg_0]
0x775351: cmp     [ecx+0Ch], edx
0x775354: jnz     short loc_775373
0x775356: mov     eax, [esp+10h+arg_4]
0x77535A: cmp     [ecx], eax
0x77535C: jnz     short loc_775373
0x77535E: mov     edx, [esp+10h+arg_8]
0x775362: cmp     [ecx+4], edx
0x775365: jnz     short loc_775373
0x775367: mov     eax, [ebx]
0x775369: push    eax
0x77536A: mov     ebp, ecx
0x77536C: call    sub_775090
0x775371: mov     [ebx], eax
0x775373: movzx   ecx, word ptr [edi+45Ah]
0x77537A: add     esi, 1
0x77537D: cmp     esi, ecx
0x77537F: jb      short loc_775340
0x775381: pop     ebx
0x775382: pop     edi
0x775383: pop     esi
0x775384: mov     eax, ebp
0x775386: pop     ebp
0x775387: retn    10h
