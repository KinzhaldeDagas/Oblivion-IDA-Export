0x7165B0: push    esi
0x7165B1: mov     esi, [esp+4+arg_0]
0x7165B5: test    esi, esi
0x7165B7: jz      short loc_71661C
0x7165B9: push    ebx
0x7165BA: mov     ebx, [esp+8+arg_4]
0x7165BE: test    ebx, ebx
0x7165C0: jz      short loc_71661B
0x7165C2: mov     eax, [esi+8]
0x7165C5: test    eax, eax
0x7165C7: jz      short loc_7165D4
0x7165C9: mov     edx, [ebx]
0x7165CB: push    esi
0x7165CC: push    eax
0x7165CD: mov     eax, [edx+50h]
0x7165D0: mov     ecx, ebx
0x7165D2: call    eax
0x7165D4: mov     edx, [esi]
0x7165D6: mov     eax, [edx+8]
0x7165D9: push    edi
0x7165DA: mov     ecx, esi
0x7165DC: call    eax
0x7165DE: mov     edi, eax
0x7165E0: test    edi, edi
0x7165E2: jz      short loc_71661A
0x7165E4: movzx   eax, word ptr [edi+0B6h]
0x7165EB: xor     esi, esi
0x7165ED: test    eax, eax
0x7165EF: jbe     short loc_71661A
0x7165F1: cmp     eax, esi
0x7165F3: ja      short loc_7165F9
0x7165F5: xor     eax, eax
0x7165F7: jmp     short loc_716602
0x7165F9: mov     ecx, [edi+0B0h]
0x7165FF: mov     eax, [ecx+esi*4]
0x716602: push    ebx
0x716603: push    eax
0x716604: call    sub_7165B0
0x716609: movzx   eax, word ptr [edi+0B6h]
0x716610: add     esi, 1
0x716613: add     esp, 8
0x716616: cmp     eax, esi
0x716618: ja      short loc_7165F9
0x71661A: pop     edi
0x71661B: pop     ebx
0x71661C: pop     esi
0x71661D: retn
