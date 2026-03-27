0x473120: push    edi
0x473121: mov     edi, [esp+4+arg_0]
0x473125: test    edi, edi
0x473127: jz      loc_4731EF
0x47312D: push    esi
0x47312E: mov     esi, [edi+0Ch]
0x473131: test    esi, esi
0x473133: jz      short loc_4731A6
0x473135: mov     eax, [esi]
0x473137: mov     edx, [eax+4]
0x47313A: mov     ecx, esi
0x47313C: call    edx
0x47313E: test    eax, eax
0x473140: jz      short loc_473150
0x473142: cmp     eax, offset dword_B3CCB0
0x473147: jz      short loc_47316C
0x473149: mov     eax, [eax+4]
0x47314C: test    eax, eax
0x47314E: jnz     short loc_473142
0x473150: xor     al, al
0x473152: neg     al
0x473154: sbb     eax, eax
0x473156: and     eax, esi
0x473158: jz      short loc_473170
0x47315A: mov     edx, [eax]
0x47315C: push    0
0x47315E: mov     ecx, eax
0x473160: mov     eax, [edx+84h]
0x473166: push    0
0x473168: call    eax
0x47316A: jmp     short loc_47319F
0x47316C: mov     al, 1
0x47316E: jmp     short loc_473152
0x473170: mov     edx, [esi]
0x473172: mov     eax, [edx+4]
0x473175: mov     ecx, esi
0x473177: call    eax
0x473179: test    eax, eax
0x47317B: jz      short loc_47318E
0x47317D: lea     ecx, [ecx+0]
0x473180: cmp     eax, offset dword_B3CD7C
0x473185: jz      short loc_4731CA
0x473187: mov     eax, [eax+4]
0x47318A: test    eax, eax
0x47318C: jnz     short loc_473180
0x47318E: xor     al, al
0x473190: neg     al
0x473192: sbb     eax, eax
0x473194: and     eax, esi
0x473196: jz      short loc_47319F
0x473198: mov     ecx, eax
0x47319A: call    sub_6CFF00
0x47319F: mov     esi, [esi+34h]
0x4731A2: test    esi, esi
0x4731A4: jnz     short loc_473135
0x4731A6: mov     edx, [edi]
0x4731A8: mov     eax, [edx+8]
0x4731AB: mov     ecx, edi
0x4731AD: call    eax
0x4731AF: mov     edi, eax
0x4731B1: test    edi, edi
0x4731B3: jz      short loc_4731EE
0x4731B5: movzx   eax, word ptr [edi+0B6h]
0x4731BC: xor     esi, esi
0x4731BE: test    eax, eax
0x4731C0: jbe     short loc_4731EE
0x4731C2: cmp     eax, esi
0x4731C4: ja      short loc_4731CE
0x4731C6: xor     eax, eax
0x4731C8: jmp     short loc_4731D7
0x4731CA: mov     al, 1
0x4731CC: jmp     short loc_473190
0x4731CE: mov     ecx, [edi+0B0h]
0x4731D4: mov     eax, [ecx+esi*4]
0x4731D7: push    eax
0x4731D8: call    sub_473120
0x4731DD: movzx   eax, word ptr [edi+0B6h]
0x4731E4: add     esi, 1
0x4731E7: add     esp, 4
0x4731EA: cmp     eax, esi
0x4731EC: ja      short loc_4731CE
0x4731EE: pop     esi
0x4731EF: pop     edi
0x4731F0: retn
