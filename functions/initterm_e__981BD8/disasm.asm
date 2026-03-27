0x981BD8: push    esi
0x981BD9: mov     esi, [esp+4+arg_0]
0x981BDD: xor     eax, eax
0x981BDF: jmp     short loc_981BF0
0x981BE1: test    eax, eax
0x981BE3: jnz     short loc_981BF6
0x981BE5: mov     ecx, [esi]
0x981BE7: test    ecx, ecx
0x981BE9: jz      short loc_981BED
0x981BEB: call    ecx
0x981BED: add     esi, 4
0x981BF0: cmp     esi, [esp+4+arg_4]
0x981BF4: jb      short loc_981BE1
0x981BF6: pop     esi
0x981BF7: retn
