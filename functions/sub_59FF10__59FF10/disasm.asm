0x59FF10: push    esi
0x59FF11: mov     esi, ecx
0x59FF13: mov     eax, [esi]
0x59FF15: mov     edx, [eax+34h]
0x59FF18: push    edi
0x59FF19: call    edx
0x59FF1B: mov     edi, eax
0x59FF1D: call    sub_578FE0
0x59FF22: cmp     eax, edi
0x59FF24: jnz     short loc_59FF4E
0x59FF26: cmp     [esp+8+arg_0], 9
0x59FF2B: jnz     short loc_59FF4E
0x59FF2D: push    0; arg1
0x59FF2F: push    0; canCreate
0x59FF31: call    InterfaceManager_GetSingleton
0x59FF36: mov     eax, [eax+88h]
0x59FF3C: add     esp, 8
0x59FF3F: cmp     eax, [esi+3Ch]
0x59FF42: jnz     short loc_59FF4E
0x59FF44: pop     edi
0x59FF45: mov     eax, 1
0x59FF4A: pop     esi
0x59FF4B: retn    8
0x59FF4E: pop     edi
0x59FF4F: xor     eax, eax
0x59FF51: pop     esi
0x59FF52: retn    8
