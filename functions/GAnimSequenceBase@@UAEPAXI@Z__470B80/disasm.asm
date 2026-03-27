0x470B80: test    byte ptr [esp+arg_0], 1
0x470B85: push    esi
0x470B86: mov     esi, ecx
0x470B88: mov     dword ptr [esi], offset ??_7AnimSequenceBase@@6B@; const AnimSequenceBase::`vftable'
0x470B8E: jz      short loc_470B99
0x470B90: push    esi
0x470B91: call    FormHeapFree
0x470B96: add     esp, 4
0x470B99: mov     eax, esi
0x470B9B: pop     esi
0x470B9C: retn    4
