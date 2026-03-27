0x5573D0: push    ebp
0x5573D1: mov     ebp, [esp+4+arg_4]
0x5573D5: push    edi
0x5573D6: mov     edi, [esp+8+arg_0]
0x5573DA: cmp     edi, ebp
0x5573DC: jz      short loc_557427
0x5573DE: push    ebx
0x5573DF: push    esi
0x5573E0: lea     esi, [edi+20h]
0x5573E3: xor     ebx, ebx
0x5573E5: mov     eax, [esi]
0x5573E7: cmp     eax, ebx
0x5573E9: jz      short loc_5573F4
0x5573EB: push    eax
0x5573EC: call    FormHeapFree
0x5573F1: add     esp, 4
0x5573F4: mov     [esi], ebx
0x5573F6: mov     [esi+4], ebx
0x5573F9: mov     [esi+8], ebx
0x5573FC: cmp     dword ptr [esi-8], 10h
0x557400: jb      short loc_55740E
0x557402: mov     eax, [esi-1Ch]
0x557405: push    eax
0x557406: call    FormHeapFree
0x55740B: add     esp, 4
0x55740E: mov     dword ptr [esi-8], 0Fh
0x557415: mov     [esi-0Ch], ebx
0x557418: mov     [esi-1Ch], bl
0x55741B: add     edi, 2Ch ; ','
0x55741E: add     esi, 2Ch ; ','
0x557421: cmp     edi, ebp
0x557423: jnz     short loc_5573E5
0x557425: pop     esi
0x557426: pop     ebx
0x557427: pop     edi
0x557428: pop     ebp
0x557429: retn
