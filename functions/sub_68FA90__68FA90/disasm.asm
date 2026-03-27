0x68FA90: mov     eax, [esp+arg_0]
0x68FA94: test    eax, eax
0x68FA96: push    esi
0x68FA97: push    edi
0x68FA98: jz      short loc_68FA9F
0x68FA9A: mov     edi, [eax+8]
0x68FA9D: jmp     short loc_68FAA1
0x68FA9F: xor     edi, edi
0x68FAA1: xor     esi, esi
0x68FAA3: cmp     [edi+0A4h], esi
0x68FAA9: jle     short loc_68FAE9
0x68FAAB: jmp     short loc_68FAB0
0x68FAAD: align 10h
0x68FAB0: mov     eax, [edi+0A0h]
0x68FAB6: mov     eax, [eax+esi*4]
0x68FAB9: push    0; int
0x68FABB: push    offset ??_R0?AVbhkTelekinesisListener@@@8; struct TypeDescriptor *
0x68FAC0: push    offset ??_R0?AVhkEntityActivationListener@@@8; struct _s_RTTICompleteObjectLocator *
0x68FAC5: push    0; int
0x68FAC7: push    eax; void *
0x68FAC8: call    OblivionDynamicCast
0x68FACD: add     esp, 14h
0x68FAD0: test    eax, eax
0x68FAD2: jz      short loc_68FADE
0x68FAD4: push    edi
0x68FAD5: mov     ecx, eax
0x68FAD7: call    sub_68FA00
0x68FADC: xor     esi, esi
0x68FADE: add     esi, 1
0x68FAE1: cmp     esi, [edi+0A4h]
0x68FAE7: jl      short loc_68FAB0
0x68FAE9: pop     edi
0x68FAEA: pop     esi
0x68FAEB: retn
