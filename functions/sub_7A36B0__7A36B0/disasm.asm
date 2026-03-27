0x7A36B0: push    ebp
0x7A36B1: mov     ebp, [esp+4+arg_4]
0x7A36B5: push    edi
0x7A36B6: mov     edi, [esp+8+arg_0]
0x7A36BA: cmp     edi, ebp
0x7A36BC: jz      short loc_7A36EE
0x7A36BE: push    ebx
0x7A36BF: push    esi
0x7A36C0: lea     esi, [edi+2Ch]
0x7A36C3: xor     ebx, ebx
0x7A36C5: cmp     dword ptr [esi], 10h
0x7A36C8: jb      short loc_7A36D6
0x7A36CA: mov     eax, [esi-14h]
0x7A36CD: push    eax
0x7A36CE: call    FormHeapFree
0x7A36D3: add     esp, 4
0x7A36D6: mov     dword ptr [esi], 0Fh
0x7A36DC: mov     [esi-4], ebx
0x7A36DF: mov     [esi-14h], bl
0x7A36E2: add     edi, 54h ; 'T'
0x7A36E5: add     esi, 54h ; 'T'
0x7A36E8: cmp     edi, ebp
0x7A36EA: jnz     short loc_7A36C5
0x7A36EC: pop     esi
0x7A36ED: pop     ebx
0x7A36EE: pop     edi
0x7A36EF: pop     ebp
0x7A36F0: retn
