0x4DCF10: push    esi
0x4DCF11: mov     esi, ecx
0x4DCF13: cmp     dword ptr [esi+3Ch], 0
0x4DCF17: jz      short loc_4DCF80
0x4DCF19: mov     eax, [esi]
0x4DCF1B: mov     edx, [eax+168h]
0x4DCF21: push    edi
0x4DCF22: call    edx
0x4DCF24: mov     ecx, ds:0B333C4h
0x4DCF2A: cmp     esi, ecx
0x4DCF2C: mov     edi, [esp+8+arg_0]
0x4DCF30: jnz     short loc_4DCF58
0x4DCF32: test    eax, eax
0x4DCF34: jz      short loc_4DCF44
0x4DCF36: push    edi
0x4DCF37: mov     ecx, eax
0x4DCF39: call    sub_478E80
0x4DCF3E: mov     ecx, ds:0B333C4h
0x4DCF44: mov     al, [ecx+588h]
0x4DCF4A: mov     byte ptr [esp+8+arg_0], al
0x4DCF4E: mov     edx, [esp+8+arg_0]
0x4DCF52: push    edx
0x4DCF53: call    sub_6600D0
0x4DCF58: test    eax, eax
0x4DCF5A: jz      short loc_4DCF64
0x4DCF5C: push    edi
0x4DCF5D: mov     ecx, eax
0x4DCF5F: call    sub_478E80
0x4DCF64: mov     eax, [esi]
0x4DCF66: mov     edx, [eax+190h]
0x4DCF6C: mov     ecx, esi
0x4DCF6E: call    edx
0x4DCF70: test    al, al
0x4DCF72: pop     edi
0x4DCF73: jz      short loc_4DCF80
0x4DCF75: mov     eax, [esi+3Ch]
0x4DCF78: push    eax
0x4DCF79: mov     ecx, esi
0x4DCF7B: call    sub_5EA1A0
0x4DCF80: pop     esi
0x4DCF81: retn    4
