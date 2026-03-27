0x5570D0: push    ebp
0x5570D1: mov     ebp, [esp+4+arg_4]
0x5570D5: push    edi
0x5570D6: mov     edi, [esp+8+arg_0]
0x5570DA: cmp     edi, ebp
0x5570DC: jz      short loc_557127
0x5570DE: push    ebx
0x5570DF: push    esi
0x5570E0: lea     esi, [edi+24h]
0x5570E3: xor     ebx, ebx
0x5570E5: mov     eax, [esi]
0x5570E7: cmp     eax, ebx
0x5570E9: jz      short loc_5570F4
0x5570EB: push    eax
0x5570EC: call    FormHeapFree
0x5570F1: add     esp, 4
0x5570F4: mov     [esi], ebx
0x5570F6: mov     [esi+4], ebx
0x5570F9: mov     [esi+8], ebx
0x5570FC: cmp     dword ptr [esi-0Ch], 10h
0x557100: jb      short loc_55710E
0x557102: mov     eax, [esi-20h]
0x557105: push    eax
0x557106: call    FormHeapFree
0x55710B: add     esp, 4
0x55710E: mov     dword ptr [esi-0Ch], 0Fh
0x557115: mov     [esi-10h], ebx
0x557118: mov     [esi-20h], bl
0x55711B: add     edi, 30h ; '0'
0x55711E: add     esi, 30h ; '0'
0x557121: cmp     edi, ebp
0x557123: jnz     short loc_5570E5
0x557125: pop     esi
0x557126: pop     ebx
0x557127: pop     edi
0x557128: pop     ebp
0x557129: retn
