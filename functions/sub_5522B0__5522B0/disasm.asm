0x5522B0: push    ebp
0x5522B1: mov     ebp, [esp+4+arg_4]
0x5522B5: push    edi
0x5522B6: mov     edi, [esp+8+arg_0]
0x5522BA: cmp     edi, ebp
0x5522BC: jz      short loc_552307
0x5522BE: push    ebx
0x5522BF: push    esi
0x5522C0: lea     esi, [edi+30h]
0x5522C3: xor     ebx, ebx
0x5522C5: cmp     dword ptr [esi], 10h
0x5522C8: jb      short loc_5522D6
0x5522CA: mov     eax, [esi-14h]
0x5522CD: push    eax
0x5522CE: call    FormHeapFree
0x5522D3: add     esp, 4
0x5522D6: mov     dword ptr [esi], 0Fh
0x5522DC: mov     [esi-4], ebx
0x5522DF: mov     [esi-14h], bl
0x5522E2: mov     eax, [esi-24h]
0x5522E5: cmp     eax, ebx
0x5522E7: jz      short loc_5522F2
0x5522E9: push    eax
0x5522EA: call    FormHeapFree
0x5522EF: add     esp, 4
0x5522F2: mov     [esi-24h], ebx
0x5522F5: mov     [esi-20h], ebx
0x5522F8: mov     [esi-1Ch], ebx
0x5522FB: add     edi, 34h ; '4'
0x5522FE: add     esi, 34h ; '4'
0x552301: cmp     edi, ebp
0x552303: jnz     short loc_5522C5
0x552305: pop     esi
0x552306: pop     ebx
0x552307: pop     edi
0x552308: pop     ebp
0x552309: retn
