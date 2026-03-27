0x41D260: mov     eax, [esp+arg_0]
0x41D264: push    esi
0x41D265: push    edi
0x41D266: push    0; int
0x41D268: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x41D26D: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x41D272: push    0; int
0x41D274: push    eax; void *
0x41D275: mov     esi, ecx
0x41D277: call    OblivionDynamicCast
0x41D27C: mov     edi, eax
0x41D27E: add     esp, 14h
0x41D281: test    edi, edi
0x41D283: jz      short SpellItem_MagicItem_CompareData___Return_1
0x41D285: mov     edx, [edi+18h]
0x41D288: mov     eax, [edx+18h]
0x41D28B: lea     ecx, [edi+18h]
0x41D28E: push    ebx
0x41D28F: call    eax
0x41D291: mov     edx, [esi]
0x41D293: mov     ebx, eax
0x41D295: mov     eax, [edx+18h]
0x41D298: mov     ecx, esi
0x41D29A: call    eax
0x41D29C: cmp     ebx, eax
0x41D29E: pop     ebx
0x41D29F: jnz     short SpellItem_MagicItem_CompareData___Return_1
0x41D2A1: mov     ecx, [edi+38h]
0x41D2A4: cmp     ecx, [esi+20h]
0x41D2A7: jnz     short SpellItem_MagicItem_CompareData___Return_1
0x41D2A9: mov     edx, [edi+3Ch]
0x41D2AC: cmp     edx, [esi+24h]
0x41D2AF: jnz     short SpellItem_MagicItem_CompareData___Return_1
0x41D2B1: mov     al, [edi+40h]
0x41D2B4: cmp     al, [esi+28h]
0x41D2B7: jnz     short SpellItem_MagicItem_CompareData___Return_1
0x41D2B9: pop     edi
0x41D2BA: xor     al, al
0x41D2BC: pop     esi
0x41D2BD: retn    4
