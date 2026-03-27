0x5E48D0: push    esi
0x5E48D1: mov     esi, [esp+4+arg_0]
0x5E48D5: mov     al, [esi+4]
0x5E48D8: cmp     al, 14h
0x5E48DA: push    edi
0x5E48DB: mov     edi, ecx
0x5E48DD: jz      short loc_5E48E3
0x5E48DF: cmp     al, 16h
0x5E48E1: jnz     short loc_5E491B
0x5E48E3: push    0; int
0x5E48E5: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5E48EA: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5E48EF: push    0; int
0x5E48F1: push    esi; void *
0x5E48F2: call    OblivionDynamicCast
0x5E48F7: add     esp, 14h
0x5E48FA: test    eax, eax
0x5E48FC: jz      short loc_5E4903
0x5E48FE: mov     eax, [eax+4]
0x5E4901: jmp     short loc_5E4905
0x5E4903: xor     eax, eax
0x5E4905: test    eax, eax
0x5E4907: jz      short loc_5E491B
0x5E4909: mov     edx, [edi+5Ch]
0x5E490C: push    0
0x5E490E: lea     ecx, [edi+5Ch]
0x5E4911: add     eax, 18h
0x5E4914: push    esi
0x5E4915: push    eax
0x5E4916: mov     eax, [edx+8]
0x5E4919: call    eax
0x5E491B: pop     edi
0x5E491C: pop     esi
0x5E491D: retn    8
