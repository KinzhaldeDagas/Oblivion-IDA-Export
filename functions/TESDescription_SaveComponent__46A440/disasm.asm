0x46A440: mov     ecx, [esp+arg_0]
0x46A444: test    ecx, ecx
0x46A446: jz      locret_46A4D4
0x46A44C: mov     eax, ds:0B33C08h
0x46A451: push    esi
0x46A452: push    edi
0x46A453: mov     di, ds:0B33C0Ch
0x46A45A: cmp     di, 0FFFFh
0x46A45F: jnz     short loc_46A475
0x46A461: mov     edx, eax
0x46A463: lea     esi, [edx+1]
0x46A466: push    ebx
0x46A467: mov     bl, [edx]
0x46A469: add     edx, 1
0x46A46C: test    bl, bl
0x46A46E: jnz     short loc_46A467
0x46A470: sub     edx, esi
0x46A472: pop     ebx
0x46A473: jmp     short loc_46A478
0x46A475: movzx   edx, di
0x46A478: test    edx, edx
0x46A47A: jz      short loc_46A4B9
0x46A47C: cmp     di, 0FFFFh
0x46A481: jnz     short loc_46A493
0x46A483: lea     esi, [eax+1]
0x46A486: mov     dl, [eax]
0x46A488: add     eax, 1
0x46A48B: test    dl, dl
0x46A48D: jnz     short loc_46A486
0x46A48F: sub     eax, esi
0x46A491: jmp     short loc_46A496
0x46A493: movzx   eax, di
0x46A496: add     eax, 1
0x46A499: push    eax
0x46A49A: mov     eax, [ecx]
0x46A49C: mov     edx, [eax+10h]
0x46A49F: push    43534544h
0x46A4A4: push    0
0x46A4A6: call    edx
0x46A4A8: push    eax
0x46A4A9: mov     eax, [esp+10h+arg_4]
0x46A4AD: push    eax
0x46A4AE: call    j_TESForm_PutCurrentChunkData
0x46A4B3: add     esp, 0Ch
0x46A4B6: pop     edi
0x46A4B7: pop     esi
0x46A4B8: retn
0x46A4B9: mov     edx, [esp+8+arg_4]
0x46A4BD: push    1
0x46A4BF: lea     ecx, [esp+0Ch+arg_0]
0x46A4C3: push    ecx
0x46A4C4: push    edx
0x46A4C5: mov     byte ptr [esp+14h+arg_0], 0
0x46A4CA: call    j_TESForm_PutCurrentChunkData
0x46A4CF: add     esp, 0Ch
0x46A4D2: pop     edi
0x46A4D3: pop     esi
0x46A4D4: retn
