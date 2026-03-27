0x470F40: sub     esp, 8
0x470F43: cmp     dword ptr [ecx+0A0h], 0
0x470F4A: push    esi
0x470F4B: lea     esi, [ecx+0A0h]
0x470F51: mov     [esp+0Ch+var_4], esi
0x470F55: jz      short loc_470FB8
0x470F57: mov     eax, [ecx+24h]
0x470F5A: test    eax, eax
0x470F5C: jz      short loc_470FB8
0x470F5E: movzx   ecx, word ptr [ecx+3Ch]
0x470F62: mov     eax, [eax+8]
0x470F65: push    ecx
0x470F66: mov     [esp+10h+var_8], eax
0x470F6A: call    sub_51AA00
0x470F6F: add     eax, 0FFFFFFFDh
0x470F72: add     esp, 4
0x470F75: cmp     eax, 0Bh
0x470F78: ja      short loc_470FB8
0x470F7A: push    ebx
0x470F7B: push    ebp
0x470F7C: push    edi
0x470F7D: xor     edi, edi
0x470F7F: xor     bl, bl
0x470F81: mov     ebp, 5
0x470F86: mov     ecx, [esi]
0x470F88: test    ecx, ecx
0x470F8A: jz      short loc_470F9E
0x470F8C: mov     edx, [esp+18h+var_8]
0x470F90: push    edx
0x470F91: call    sub_49FD20
0x470F96: cmp     al, bl
0x470F98: jbe     short loc_470F9E
0x470F9A: mov     edi, [esi]
0x470F9C: mov     bl, al
0x470F9E: add     esi, 4
0x470FA1: sub     ebp, 1
0x470FA4: jnz     short loc_470F86
0x470FA6: mov     eax, [esp+18h+var_4]
0x470FAA: cmp     edi, [eax]
0x470FAC: pop     edi
0x470FAD: pop     ebp
0x470FAE: pop     ebx
0x470FAF: jnz     short loc_470FB8
0x470FB1: mov     al, 1
0x470FB3: pop     esi
0x470FB4: add     esp, 8
0x470FB7: retn
0x470FB8: xor     al, al
0x470FBA: pop     esi
0x470FBB: add     esp, 8
0x470FBE: retn
