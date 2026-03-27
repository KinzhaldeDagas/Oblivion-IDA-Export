0x470BF0: mov     al, [esp+arg_0]
0x470BF4: cmp     al, 0FFh
0x470BF6: push    esi
0x470BF7: mov     esi, ecx
0x470BF9: jz      short loc_470C06
0x470BFB: movsx   edx, al
0x470BFE: mov     eax, [esi+4]
0x470C01: cmp     edx, [eax+0Ch]
0x470C04: jb      short loc_470C1C
0x470C06: mov     ecx, [esi+4]
0x470C09: push    edi
0x470C0A: mov     edi, [ecx+0Ch]
0x470C0D: push    0; Seed
0x470C0F: call    GetRandomLargeInteger?
0x470C14: add     esp, 4
0x470C17: xor     edx, edx
0x470C19: div     edi
0x470C1B: pop     edi
0x470C1C: mov     eax, [esi+4]
0x470C1F: mov     ecx, [eax+4]
0x470C22: test    ecx, ecx
0x470C24: jz      short loc_470C38
0x470C26: mov     eax, [ecx+8]
0x470C29: mov     esi, edx
0x470C2B: sub     edx, 1
0x470C2E: test    esi, esi
0x470C30: jz      short loc_470C3A
0x470C32: mov     ecx, [ecx]
0x470C34: test    ecx, ecx
0x470C36: jnz     short loc_470C26
0x470C38: xor     eax, eax
0x470C3A: pop     esi
0x470C3B: retn    4
