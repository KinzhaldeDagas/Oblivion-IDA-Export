0x903220: push    esi
0x903221: push    edi
0x903222: mov     edi, ecx
0x903224: mov     eax, [edi+10h]
0x903227: xor     esi, esi
0x903229: test    eax, eax
0x90322B: jle     short loc_90325C
0x90322D: push    ebx
0x90322E: mov     ebx, [esp+0Ch+arg_8]
0x903232: push    ebp
0x903233: mov     ebp, [esp+10h+arg_4]
0x903237: jmp     short loc_903240
0x903239: align 10h
0x903240: mov     eax, [edi+0Ch]
0x903243: mov     ecx, [eax+esi*4]
0x903246: mov     eax, [esp+10h+arg_0]
0x90324A: mov     edx, [ecx]
0x90324C: push    ebx
0x90324D: push    ebp
0x90324E: push    eax
0x90324F: call    dword ptr [edx+24h]
0x903252: mov     eax, [edi+10h]
0x903255: inc     esi
0x903256: cmp     esi, eax
0x903258: jl      short loc_903240
0x90325A: pop     ebp
0x90325B: pop     ebx
0x90325C: pop     edi
0x90325D: pop     esi
0x90325E: retn    0Ch
