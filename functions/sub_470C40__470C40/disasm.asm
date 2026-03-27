0x470C40: mov     eax, [ecx+4]
0x470C43: mov     ecx, [esp+arg_0]
0x470C47: push    ebx
0x470C48: push    esi
0x470C49: mov     esi, [eax+4]
0x470C4C: mov     eax, [ecx+8]
0x470C4F: push    5Ch ; '\'; Ch
0x470C51: push    eax; Str
0x470C52: call    _strrchr
0x470C57: mov     ebx, eax
0x470C59: add     esp, 8
0x470C5C: test    ebx, ebx
0x470C5E: jnz     short loc_470C65
0x470C60: pop     esi
0x470C61: pop     ebx
0x470C62: retn    4
0x470C65: test    esi, esi
0x470C67: push    edi
0x470C68: jz      short loc_470C99
0x470C6A: lea     ebx, [ebx+0]
0x470C70: mov     edi, [esi+8]
0x470C73: mov     eax, [edi+8]
0x470C76: push    5Ch ; '\'; Ch
0x470C78: push    eax; Str
0x470C79: call    _strrchr
0x470C7E: add     esp, 8
0x470C81: test    eax, eax
0x470C83: jz      short loc_470C93
0x470C85: push    ebx; Str2
0x470C86: push    eax; Str1
0x470C87: call    __strcmp
0x470C8C: add     esp, 8
0x470C8F: test    eax, eax
0x470C91: jz      short loc_470CA1
0x470C93: mov     esi, [esi]
0x470C95: test    esi, esi
0x470C97: jnz     short loc_470C70
0x470C99: pop     edi
0x470C9A: pop     esi
0x470C9B: xor     eax, eax
0x470C9D: pop     ebx
0x470C9E: retn    4
0x470CA1: mov     eax, edi
0x470CA3: pop     edi
0x470CA4: pop     esi
0x470CA5: pop     ebx
0x470CA6: retn    4
