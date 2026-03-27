0x6B73E0: mov     eax, ds:0B33A98h
0x6B73E5: test    eax, eax
0x6B73E7: jz      short locret_6B740C
0x6B73E9: cmp     byte ptr [eax+0CD4h], 0
0x6B73F0: jnz     short locret_6B740C
0x6B73F2: push    ecx
0x6B73F3: call    sub_57B050
0x6B73F8: add     esp, 4
0x6B73FB: test    al, al
0x6B73FD: jz      short locret_6B740C
0x6B73FF: call    sub_57AF10
0x6B7404: push    0
0x6B7406: call    sub_57B0F0
0x6B740B: pop     ecx
0x6B740C: retn
