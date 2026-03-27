0x4B7210: mov     eax, [esp+arg_0]
0x4B7214: push    esi
0x4B7215: push    edi
0x4B7216: push    0; int
0x4B7218: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x4B721D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B7222: push    0; int
0x4B7224: push    eax; void *
0x4B7225: mov     edi, ecx
0x4B7227: call    OblivionDynamicCast
0x4B722C: mov     esi, eax
0x4B722E: add     esp, 14h
0x4B7231: test    esi, esi
0x4B7233: jnz     short loc_4B723C
0x4B7235: pop     edi
0x4B7236: mov     al, 1
0x4B7238: pop     esi
0x4B7239: retn    4
0x4B723C: push    esi; a2
0x4B723D: mov     ecx, edi; this
0x4B723F: call    TESForm_CompareAllComponentsTo
0x4B7244: test    al, al
0x4B7246: jnz     short loc_4B7235
0x4B7248: mov     ecx, [edi+58h]
0x4B724B: cmp     ecx, [esi+58h]
0x4B724E: jnz     short loc_4B7235
0x4B7250: mov     edx, [edi+5Ch]
0x4B7253: cmp     edx, [esi+5Ch]
0x4B7256: jnz     short loc_4B7235
0x4B7258: mov     eax, [edi+60h]
0x4B725B: cmp     eax, [esi+60h]
0x4B725E: jnz     short loc_4B7235
0x4B7260: mov     cl, [edi+64h]
0x4B7263: cmp     cl, [esi+64h]
0x4B7266: jnz     short loc_4B7235
0x4B7268: push    ebx
0x4B7269: lea     ebx, [edi+68h]
0x4B726C: mov     ecx, ebx
0x4B726E: add     esi, 68h ; 'h'
0x4B7271: call    BSSimpleList_Count
0x4B7276: mov     ecx, esi
0x4B7278: mov     edi, eax
0x4B727A: call    BSSimpleList_Count
0x4B727F: cmp     edi, eax
0x4B7281: jnz     short loc_4B72AE
0x4B7283: test    esi, esi
0x4B7285: jz      short loc_4B72A6
0x4B7287: mov     edi, [esi+4]
0x4B728A: test    edi, edi
0x4B728C: jnz     short loc_4B7292
0x4B728E: cmp     [esi], edi
0x4B7290: jz      short loc_4B72A6
0x4B7292: mov     edx, [esi]
0x4B7294: push    edx
0x4B7295: mov     ecx, ebx
0x4B7297: call    sub_446C30
0x4B729C: test    al, al
0x4B729E: jz      short loc_4B72AE
0x4B72A0: mov     esi, edi
0x4B72A2: test    esi, esi
0x4B72A4: jnz     short loc_4B7287
0x4B72A6: pop     ebx
0x4B72A7: pop     edi
0x4B72A8: xor     al, al
0x4B72AA: pop     esi
0x4B72AB: retn    4
0x4B72AE: pop     ebx
0x4B72AF: pop     edi
0x4B72B0: mov     al, 1
0x4B72B2: pop     esi
0x4B72B3: retn    4
