0x980AA4: push    0; char *
0x980AA6: push    0; int
0x980AA8: call    _setlocale
0x980AAD: test    eax, eax
0x980AAF: pop     ecx
0x980AB0: pop     ecx
0x980AB1: jnz     short loc_980AB8
0x980AB3: mov     eax, offset EmptyString
0x980AB8: push    esi
0x980AB9: mov     esi, [esp+4+arg_0]
0x980ABD: push    eax; Src
0x980ABE: lea     ecx, [esi+3Ch]
0x980AC1: call    sub_4146B0
0x980AC6: cmp     [esp+4+arg_4], 0
0x980ACB: jz      short loc_980ADE
0x980ACD: push    [esp+4+arg_4]; char *
0x980AD1: push    0; int
0x980AD3: call    _setlocale
0x980AD8: test    eax, eax
0x980ADA: pop     ecx
0x980ADB: pop     ecx
0x980ADC: jnz     short loc_980AE3
0x980ADE: mov     eax, offset asc_A3642C
0x980AE3: push    eax; Src
0x980AE4: lea     ecx, [esi+58h]
0x980AE7: call    sub_4146B0
0x980AEC: pop     esi
0x980AED: retn
