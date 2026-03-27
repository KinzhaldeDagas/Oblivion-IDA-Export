0x46E650: sub     esp, 8
0x46E653: push    esi
0x46E654: lea     esi, [ecx+4]
0x46E657: test    esi, esi
0x46E659: jz      short loc_46E69C
0x46E65B: jmp     short loc_46E660
0x46E65D: align 10h
0x46E660: mov     eax, [esi]
0x46E662: test    eax, eax
0x46E664: jz      short loc_46E69C
0x46E666: mov     ecx, [eax]
0x46E668: mov     edx, [ecx+8]
0x46E66B: shr     edx, 5
0x46E66E: test    dl, 1
0x46E671: jnz     short loc_46E695
0x46E673: mov     edx, [eax+4]
0x46E676: mov     ecx, [ecx+0Ch]
0x46E679: push    8; Size
0x46E67B: lea     eax, [esp+10h+Src]
0x46E67F: push    eax; Src
0x46E680: push    4D414E58h; int
0x46E685: mov     [esp+18h+Src], ecx
0x46E689: mov     [esp+18h+var_4], edx
0x46E68D: call    TESForm_PutFormRecordChunkData
0x46E692: add     esp, 0Ch
0x46E695: mov     esi, [esi+4]
0x46E698: test    esi, esi
0x46E69A: jnz     short loc_46E660
0x46E69C: pop     esi
0x46E69D: add     esp, 8
0x46E6A0: retn
