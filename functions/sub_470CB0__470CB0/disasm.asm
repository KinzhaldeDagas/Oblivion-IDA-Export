0x470CB0: mov     eax, [ecx+4]
0x470CB3: mov     ecx, [eax+4]
0x470CB6: xor     al, al
0x470CB8: test    ecx, ecx
0x470CBA: jz      short loc_470CCD
0x470CBC: mov     edx, [esp+arg_0]
0x470CC0: cmp     edx, [ecx+8]
0x470CC3: jz      short locret_470CCF
0x470CC5: mov     ecx, [ecx]
0x470CC7: add     al, 1
0x470CC9: test    ecx, ecx
0x470CCB: jnz     short loc_470CC0
0x470CCD: or      al, 0FFh
0x470CCF: retn    4
