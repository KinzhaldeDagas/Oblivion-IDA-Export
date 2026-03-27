0x6A2A57: mov     eax, [ebp+0]
0x6A2A5A: mov     edx, [eax+34h]
0x6A2A5D: push    edi
0x6A2A5E: mov     ecx, ebp
0x6A2A60: call    edx
0x6A2A62: test    al, al
0x6A2A64: jnz     short MagicTarget_AddEffect___CheckIsWearableEnch
0x6A2A66: cmp     ds:0B3355Ch, al
0x6A2A6C: jz      MagicTarget_AddEffect___Return_0
