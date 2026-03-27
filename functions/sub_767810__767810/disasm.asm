0x767810: push    esi
0x767811: mov     esi, [esp+4+arg_0]
0x767815: test    esi, esi
0x767817: push    edi
0x767818: mov     edi, ecx
0x76781A: jz      short loc_767854
0x76781C: mov     eax, [esi]
0x76781E: mov     edx, [eax+4]
0x767821: mov     ecx, esi
0x767823: call    edx
0x767825: test    eax, eax
0x767827: jz      short loc_76783E
0x767829: lea     esp, [esp+0]
0x767830: cmp     eax, offset dword_B3FD14
0x767835: jz      short loc_767859
0x767837: mov     eax, [eax+4]
0x76783A: test    eax, eax
0x76783C: jnz     short loc_767830
0x76783E: xor     al, al
0x767840: neg     al
0x767842: sbb     eax, eax
0x767844: and     eax, esi
0x767846: jz      short loc_767854
0x767848: mov     ecx, [edi+8BCh]
0x76784E: push    eax
0x76784F: call    sub_776A30
0x767854: pop     edi
0x767855: pop     esi
0x767856: retn    4
0x767859: mov     al, 1
0x76785B: jmp     short loc_767840
