0x4E8AF0: mov     edx, [esp+arg_0]
0x4E8AF4: xor     al, al
0x4E8AF6: test    edx, edx
0x4E8AF8: jz      short locret_4E8B13
0x4E8AFA: push    esi
0x4E8AFB: mov     esi, [edx]
0x4E8AFD: cmp     esi, ds:0B05E20h
0x4E8B03: pop     esi
0x4E8B04: jnz     short locret_4E8B13
0x4E8B06: mov     eax, [edx+0Ch]
0x4E8B09: add     eax, 0FFFFFFFCh
0x4E8B0C: cmp     eax, 1
0x4E8B0F: ja      short loc_4E8B16
0x4E8B11: mov     al, 1
0x4E8B13: retn    4
0x4E8B16: mov     ecx, [ecx+2Ch]
0x4E8B19: mov     eax, [ecx]
0x4E8B1B: mov     [esp+arg_0], edx
0x4E8B1F: mov     edx, [eax+30h]
0x4E8B22: jmp     edx
