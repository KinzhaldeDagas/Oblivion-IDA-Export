0x763D12: test    esi, esi; jumptable 00763803 default case
0x763D14: jz      short loc_763D6A
0x763D16: mov     ecx, [ebp+ebx*4+0]
0x763D1A: push    ecx
0x763D1B: call    FormHeapFree
0x763D20: mov     eax, [esi+0Ch]
0x763D23: mov     ecx, ds:0B42154h
0x763D29: mov     edx, [ecx]
0x763D2B: add     esp, 4
0x763D2E: push    eax
0x763D2F: mov     eax, [esp+4+arg_1C]
0x763D33: push    eax
0x763D34: mov     eax, [esp+8+arg_C]
0x763D38: push    0
0x763D3A: push    eax
0x763D3B: mov     eax, [esp+10h+arg_8]
0x763D3F: mov     eax, [eax+5C0h]
0x763D45: push    eax
0x763D46: mov     eax, [esp+14h+arg_8]
0x763D4A: mov     eax, [eax+5BCh]
0x763D50: push    eax
0x763D51: push    ecx
0x763D52: mov     ecx, [edx+28h]
0x763D55: call    ecx
0x763D57: test    eax, eax
0x763D59: jz      short loc_763D66
0x763D5B: push    esi
0x763D5C: call    FormHeapFree
0x763D61: add     esp, 4
0x763D64: xor     esi, esi
0x763D66: mov     [ebp+ebx*4+0], esi
0x763D6A: add     ebx, 1
0x763D6D: cmp     ebx, 16h
0x763D70: jb      loc_763803
0x763D76: pop     esi
0x763D77: pop     ebp
0x763D78: pop     ebx
0x763D79: add     esp, 8
0x763D7C: retn    0Ch
