0x552D60: push    esi
0x552D61: mov     esi, [esp+4+arg_0]
0x552D65: push    edi
0x552D66: mov     edi, [esp+8+arg_4]
0x552D6A: cmp     esi, edi
0x552D6C: jz      short loc_552D89
0x552D6E: mov     edi, edi
0x552D70: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x552D75: push    4; int
0x552D77: push    18h; unsigned int
0x552D79: lea     eax, [esi+8]
0x552D7C: push    eax; void *
0x552D7D: call    $LN21
0x552D82: add     esi, 68h ; 'h'
0x552D85: cmp     esi, edi
0x552D87: jnz     short loc_552D70
0x552D89: pop     edi
0x552D8A: pop     esi
0x552D8B: retn    8
