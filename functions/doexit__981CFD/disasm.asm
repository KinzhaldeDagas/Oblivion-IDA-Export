0x981CFD: push    0Ch
0x981CFF: push    offset stru_AFF900
0x981D04: call    __SEH_prolog4
0x981D09: push    8
0x981D0B: call    __lock
0x981D10: pop     ecx
0x981D11: and     [ebp+ms_exc.registration.TryLevel], 0
0x981D15: xor     esi, esi
0x981D17: inc     esi
0x981D18: cmp     ds:0BA9DD4h, esi
0x981D1E: jz      short loc_981D8B
0x981D20: mov     ds:0BA9DD0h, esi
0x981D26: mov     al, byte ptr [ebp+arg_8]
0x981D29: mov     ds:0BA9DCCh, al
0x981D2E: cmp     [ebp+arg_4], 0
0x981D32: jnz     short loc_981D7B
0x981D34: push    dword ptr ds:0BABC10h
0x981D3A: call    __decode_pointer
0x981D3F: mov     edi, eax
0x981D41: push    dword ptr ds:0BABC0Ch
0x981D47: call    __decode_pointer
0x981D4C: pop     ecx
0x981D4D: pop     ecx
0x981D4E: mov     [ebp+var_1C], eax
0x981D51: test    edi, edi
0x981D53: jz      short loc_981D6B
0x981D55: sub     [ebp+var_1C], 4
0x981D59: cmp     [ebp+var_1C], edi
0x981D5C: jb      short loc_981D6B
0x981D5E: mov     eax, [ebp+var_1C]
0x981D61: mov     eax, [eax]
0x981D63: test    eax, eax
0x981D65: jz      short loc_981D55
0x981D67: call    eax
0x981D69: jmp     short loc_981D55
0x981D6B: push    offset __xt_z_0
0x981D70: mov     eax, offset __xt_a_0
0x981D75: call    __initterm
0x981D7A: pop     ecx
0x981D7B: push    offset __xt_z_1
0x981D80: mov     eax, offset __xt_a_1
0x981D85: call    __initterm
0x981D8A: pop     ecx
0x981D8B: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x981D92: call    _doexit___$LN15_0
