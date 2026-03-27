0x8F7330: push    ebx
0x8F7331: push    esi
0x8F7332: mov     esi, ecx
0x8F7334: mov     ebx, [esi+10h]
0x8F7337: push    edi
0x8F7338: xor     edi, edi
0x8F733A: test    ebx, ebx
0x8F733C: jle     short loc_8F735B
0x8F733E: mov     edi, edi
0x8F7340: mov     eax, [esi+0Ch]
0x8F7343: movzx   eax, word ptr [eax+edi*2]
0x8F7347: cmp     ax, 0FFFFh
0x8F734B: jz      short loc_8F7356
0x8F734D: mov     ecx, [esi+8]
0x8F7350: mov     edx, [ecx]
0x8F7352: push    eax
0x8F7353: call    dword ptr [edx+10h]
0x8F7356: inc     edi
0x8F7357: cmp     edi, ebx
0x8F7359: jl      short loc_8F7340
0x8F735B: mov     eax, [esi]
0x8F735D: push    1
0x8F735F: mov     ecx, esi
0x8F7361: call    dword ptr [eax]
0x8F7363: pop     edi
0x8F7364: pop     esi
0x8F7365: pop     ebx
0x8F7366: retn
