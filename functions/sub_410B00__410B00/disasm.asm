0x410B00: push    ebx
0x410B01: push    esi
0x410B02: mov     esi, ObjectPtr
0x410B08: xor     ebx, ebx
0x410B0A: cmp     esi, ebx
0x410B0C: jz      short loc_410B5B
0x410B0E: mov     eax, [esi]
0x410B10: cmp     eax, ebx
0x410B12: jz      short loc_410B1B
0x410B14: push    eax
0x410B15: call    ds:_BinkClose@4; BinkClose(x)
0x410B1B: mov     eax, [esi+8]
0x410B1E: cmp     eax, ebx
0x410B20: jz      short loc_410B2B
0x410B22: push    eax
0x410B23: call    sub_410110
0x410B28: add     esp, 4
0x410B2B: fld1
0x410B2D: push    esi
0x410B2E: fstp    dword ptr [esi+14h]
0x410B31: mov     [esi], ebx
0x410B33: fldz
0x410B35: mov     [esi+4], ebx
0x410B38: fst     dword ptr [esi+18h]
0x410B3B: mov     [esi+8], ebx
0x410B3E: fstp    dword ptr [esi+1Ch]
0x410B41: mov     [esi+0Ch], ebx
0x410B44: mov     [esi+10h], ebx
0x410B47: mov     [esi+20h], ebx
0x410B4A: mov     [esi+24h], bl
0x410B4D: call    FormHeapFree
0x410B52: add     esp, 4
0x410B55: mov     ObjectPtr, ebx
0x410B5B: mov     eax, dword_B3342C
0x410B60: cmp     eax, ebx
0x410B62: jz      short loc_410B79
0x410B64: mov     ObjectPtr, eax
0x410B69: mov     dword_B3342C, ebx
0x410B6F: mov     eax, [eax]
0x410B71: push    ebx
0x410B72: push    eax
0x410B73: call    ds:_BinkPause@8; BinkPause(x,x)
0x410B79: pop     esi
0x410B7A: pop     ebx
0x410B7B: retn
