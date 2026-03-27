0x4B6650: mov     eax, [esp+arg_0]
0x4B6654: push    esi
0x4B6655: push    edi
0x4B6656: push    0; int
0x4B6658: push    offset ??_R0?AVTESObjectCONT@@@8; struct TypeDescriptor *
0x4B665D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B6662: push    0; int
0x4B6664: push    eax; void *
0x4B6665: mov     edi, ecx
0x4B6667: call    OblivionDynamicCast
0x4B666C: mov     esi, eax
0x4B666E: add     esp, 14h
0x4B6671: test    esi, esi
0x4B6673: jnz     short loc_4B667C
0x4B6675: pop     edi
0x4B6676: mov     al, 1
0x4B6678: pop     esi
0x4B6679: retn    4
0x4B667C: push    esi; a2
0x4B667D: mov     ecx, edi; this
0x4B667F: call    TESForm_CompareAllComponentsTo
0x4B6684: test    al, al
0x4B6686: jnz     short loc_4B6675
0x4B6688: mov     cl, [edi+78h]
0x4B668B: cmp     cl, [esi+78h]
0x4B668E: jnz     short loc_4B6675
0x4B6690: mov     edx, [edi+70h]
0x4B6693: cmp     edx, [esi+70h]
0x4B6696: jnz     short loc_4B6675
0x4B6698: mov     eax, [edi+74h]
0x4B669B: cmp     eax, [esi+74h]
0x4B669E: pop     edi
0x4B669F: setnz   al
0x4B66A2: pop     esi
0x4B66A3: retn    4
