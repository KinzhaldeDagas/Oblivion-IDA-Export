0x470070: movzx   eax, word ptr [ecx+8]
0x470074: cmp     ax, 0FFFFh
0x470078: push    esi
0x470079: jnz     short loc_47008E
0x47007B: mov     eax, [ecx+4]
0x47007E: lea     esi, [eax+1]
0x470081: mov     dl, [eax]
0x470083: add     eax, 1
0x470086: test    dl, dl
0x470088: jnz     short loc_470081
0x47008A: sub     eax, esi
0x47008C: jmp     short loc_470091
0x47008E: movzx   eax, ax
0x470091: test    eax, eax
0x470093: jz      short loc_4700D3
0x470095: movzx   eax, word ptr [ecx+8]
0x470099: cmp     ax, 0FFFFh
0x47009D: jnz     short loc_4700B2
0x47009F: mov     eax, [ecx+4]
0x4700A2: lea     esi, [eax+1]
0x4700A5: mov     dl, [eax]
0x4700A7: add     eax, 1
0x4700AA: test    dl, dl
0x4700AC: jnz     short loc_4700A5
0x4700AE: sub     eax, esi
0x4700B0: jmp     short loc_4700B5
0x4700B2: movzx   eax, ax
0x4700B5: mov     ecx, [ecx+4]
0x4700B8: test    ecx, ecx
0x4700BA: jnz     short loc_4700C1
0x4700BC: mov     ecx, offset EmptyString
0x4700C1: add     eax, 1
0x4700C4: push    eax
0x4700C5: mov     eax, [esp+8+arg_0]
0x4700C9: push    ecx
0x4700CA: push    eax
0x4700CB: call    j_TESForm_PutCurrentChunkData
0x4700D0: add     esp, 0Ch
0x4700D3: pop     esi
0x4700D4: retn    4
