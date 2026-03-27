0x470E9D: cmp     [esp+arg_10], 0; jumptable 00470E4A default case
0x470EA2: jnz     short loc_470F19
0x470EA4: test    ebx, 0F000h
0x470EAA: jz      short loc_470EC7
0x470EAC: mov     edx, ebx
0x470EAE: push    1
0x470EB0: and     edx, 0FFFh
0x470EB6: push    edx
0x470EB7: mov     ecx, esi
0x470EB9: call    sub_470D20
0x470EBE: movzx   eax, ax
0x470EC1: mov     cl, al
0x470EC3: xor     cl, bl
0x470EC5: jz      short loc_470F1C
0x470EC7: test    bl, bl
0x470EC9: jz      short loc_470F19
0x470ECB: and     ebx, 0FF00h
0x470ED1: mov     [esp+arg_10], 0
0x470ED6: mov     [esp+arg_C], ebx
0x470EDA: jmp     loc_470D30
0x470EDF: pop     esi
0x470EE0: mov     ax, bx
0x470EE3: pop     ebx
0x470EE4: pop     ecx
0x470EE5: retn    8
0x470EE8: mov     eax, ebx
0x470EEA: and     eax, 0F0FFh
0x470EEF: pop     esi
0x470EF0: or      eax, 300h
0x470EF5: pop     ebx
0x470EF6: pop     ecx
0x470EF7: retn    8
0x470EFA: mov     eax, ebx
0x470EFC: and     eax, 0F0FFh
0x470F01: pop     esi
0x470F02: or      eax, 200h
0x470F07: pop     ebx
0x470F08: pop     ecx
0x470F09: retn    8
0x470F0C: mov     eax, ebx
0x470F0E: pop     esi
0x470F0F: and     eax, 0F0FFh
0x470F14: pop     ebx
0x470F15: pop     ecx
0x470F16: retn    8
0x470F19: xor     ax, ax
0x470F1C: pop     esi
0x470F1D: pop     ebx
0x470F1E: pop     ecx
0x470F1F: retn    8
