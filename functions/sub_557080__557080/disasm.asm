0x557080: push    ebp
0x557081: mov     ebp, [esp+4+arg_4]
0x557085: push    edi
0x557086: mov     edi, [esp+8+arg_0]
0x55708A: cmp     edi, ebp
0x55708C: jz      short loc_5570BE
0x55708E: push    ebx
0x55708F: push    esi
0x557090: lea     esi, [edi+28h]
0x557093: xor     ebx, ebx
0x557095: cmp     dword ptr [esi], 10h
0x557098: jb      short loc_5570A6
0x55709A: mov     eax, [esi-14h]
0x55709D: push    eax
0x55709E: call    FormHeapFree
0x5570A3: add     esp, 4
0x5570A6: mov     dword ptr [esi], 0Fh
0x5570AC: mov     [esi-4], ebx
0x5570AF: mov     [esi-14h], bl
0x5570B2: add     edi, 2Ch ; ','
0x5570B5: add     esi, 2Ch ; ','
0x5570B8: cmp     edi, ebp
0x5570BA: jnz     short loc_557095
0x5570BC: pop     esi
0x5570BD: pop     ebx
0x5570BE: pop     edi
0x5570BF: pop     ebp
0x5570C0: retn
