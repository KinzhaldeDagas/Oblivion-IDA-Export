0x69E410: push    0FFFFFFFFh
0x69E412: push    offset MagicModelHitEffect_constr_args_SEH
0x69E417: mov     eax, large fs:0
0x69E41D: push    eax
0x69E41E: push    ecx
0x69E41F: push    ebx
0x69E420: push    ebp
0x69E421: push    esi
0x69E422: push    edi
0x69E423: mov     eax, ds:0B30AACh
0x69E428: xor     eax, esp
0x69E42A: push    eax
0x69E42B: lea     eax, [esp+24h+var_C]
0x69E42F: mov     large fs:0, eax
0x69E435: mov     esi, ecx
0x69E437: mov     [esp+24h+var_10], esi
0x69E43B: mov     ebp, [esp+24h+arg_4]
0x69E43F: mov     eax, [esp+24h+arg_0]
0x69E443: push    ebp
0x69E444: push    eax
0x69E445: call    MagicHitEffect_constr_args
0x69E44A: xor     ebx, ebx
0x69E44C: mov     dword ptr [esi], offset ??_7MagicModelHitEffect@@6B@; const MagicModelHitEffect::`vftable'
0x69E452: mov     [esp+24h+var_4], ebx
0x69E456: mov     [esi+30h], ebx
0x69E459: mov     [esi+34h], ebx
0x69E45C: mov     edi, [esi+30h]
0x69E45F: cmp     edi, ebx
0x69E461: mov     byte ptr [esp+24h+var_4], 2
0x69E466: jz      short loc_69E487
0x69E468: lea     ecx, [edi+4]
0x69E46B: push    ecx; lpAddend
0x69E46C: call    dword ptr ds:0A2807Ch
0x69E472: test    eax, eax
0x69E474: jnz     short loc_69E484
0x69E476: cmp     edi, ebx
0x69E478: jz      short loc_69E484
0x69E47A: mov     edx, [edi]
0x69E47C: mov     eax, [edx]
0x69E47E: push    1
0x69E480: mov     ecx, edi
0x69E482: call    eax
0x69E484: mov     [esi+30h], ebx
0x69E487: mov     edi, [esi+34h]
0x69E48A: cmp     edi, ebx
0x69E48C: jz      short loc_69E4AD
0x69E48E: lea     ecx, [edi+4]
0x69E491: push    ecx; lpAddend
0x69E492: call    dword ptr ds:0A2807Ch
0x69E498: test    eax, eax
0x69E49A: jnz     short loc_69E4AA
0x69E49C: cmp     edi, ebx
0x69E49E: jz      short loc_69E4AA
0x69E4A0: mov     edx, [edi]
0x69E4A2: mov     eax, [edx]
0x69E4A4: push    1
0x69E4A6: mov     ecx, edi
0x69E4A8: call    eax
0x69E4AA: mov     [esi+34h], ebx
0x69E4AD: mov     [esi+29h], bl
0x69E4B0: mov     [esi+2Ch], ebx
0x69E4B3: mov     ecx, [ebp+8]
0x69E4B6: push    ebx
0x69E4B7: call    MagicItem_GetFXEffect
0x69E4BC: mov     edx, [eax+18h]
0x69E4BF: lea     ecx, [eax+18h]
0x69E4C2: mov     eax, [edx+14h]
0x69E4C5: call    eax
0x69E4C7: mov     [esi+2Ch], eax
0x69E4CA: mov     [esi+28h], bl
0x69E4CD: mov     eax, esi
0x69E4CF: mov     ecx, dword ptr [esp+24h+var_C]
0x69E4D3: mov     large fs:0, ecx
0x69E4DA: pop     ecx
0x69E4DB: pop     edi
0x69E4DC: pop     esi
0x69E4DD: pop     ebp
0x69E4DE: pop     ebx
0x69E4DF: add     esp, 10h
0x69E4E2: retn    8
