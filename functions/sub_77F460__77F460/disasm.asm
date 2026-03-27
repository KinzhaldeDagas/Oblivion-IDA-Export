0x77F460: push    ecx
0x77F461: push    ebx
0x77F462: push    ebp
0x77F463: mov     ebp, ecx
0x77F465: mov     ebx, [ebp+0Ch]
0x77F468: test    ebx, ebx
0x77F46A: jz      short loc_77F4B9
0x77F46C: push    esi
0x77F46D: push    edi
0x77F46E: mov     edi, edi
0x77F470: mov     edi, [ebx+8]
0x77F473: test    edi, edi
0x77F475: lea     eax, [ebx+8]
0x77F478: mov     ebx, [ebx]
0x77F47A: jz      short loc_77F4B3
0x77F47C: mov     eax, [ebp+0Ch]
0x77F47F: test    eax, eax
0x77F481: lea     ecx, [ebp+8]
0x77F484: jz      short loc_77F496
0x77F486: cmp     edi, [eax+8]
0x77F489: lea     edx, [eax+8]
0x77F48C: mov     esi, eax
0x77F48E: mov     eax, [eax]
0x77F490: jz      short loc_77F498
0x77F492: test    eax, eax
0x77F494: jnz     short loc_77F486
0x77F496: xor     esi, esi
0x77F498: test    esi, esi
0x77F49A: mov     [esp+14h+var_4], esi
0x77F49E: jz      short loc_77F4AA
0x77F4A0: lea     eax, [esp+14h+var_4]
0x77F4A4: push    eax
0x77F4A5: call    sub_7AA860
0x77F4AA: push    edi
0x77F4AB: call    FormHeapFree
0x77F4B0: add     esp, 4
0x77F4B3: test    ebx, ebx
0x77F4B5: jnz     short loc_77F470
0x77F4B7: pop     edi
0x77F4B8: pop     esi
0x77F4B9: pop     ebp
0x77F4BA: pop     ebx
0x77F4BB: pop     ecx
0x77F4BC: retn
