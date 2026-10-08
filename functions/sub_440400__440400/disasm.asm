0x440400: mov     eax, ecx
0x440402: mov     dword ptr ds:0B33C28h, 0
0x44040C: mov     ecx, [eax+34h]
0x44040F: test    ecx, ecx
0x440411: jz      short loc_440418
0x440413: jmp     sub_4CCC50
0x440418: mov     ecx, [eax+8]
0x44041B: jmp     loc_482470
0x482470: push    ebx
0x482471: push    edi
0x482472: mov     edi, ecx
0x482474: mov     eax, [edi+0Ch]
0x482477: xor     ebx, ebx
0x482479: test    eax, eax
0x48247B: jbe     short loc_4824B1
0x48247D: push    esi
0x48247E: mov     edi, edi
0x482480: xor     esi, esi
0x482482: test    eax, eax
0x482484: jbe     short loc_4824A6
0x482486: mov     ecx, [edi+10h]
0x482489: imul    eax, ebx
0x48248C: add     eax, esi
0x48248E: lea     eax, [ecx+eax*8]
0x482491: mov     ecx, [eax]
0x482493: test    ecx, ecx
0x482495: jz      short loc_48249C
0x482497: call    sub_4CCC50
0x48249C: mov     eax, [edi+0Ch]
0x48249F: add     esi, 1
0x4824A2: cmp     esi, eax
0x4824A4: jb      short loc_482486
0x4824A6: mov     eax, [edi+0Ch]
0x4824A9: add     ebx, 1
0x4824AC: cmp     ebx, eax
0x4824AE: jb      short loc_482480
0x4824B0: pop     esi
0x4824B1: pop     edi
0x4824B2: pop     ebx
0x4824B3: retn
