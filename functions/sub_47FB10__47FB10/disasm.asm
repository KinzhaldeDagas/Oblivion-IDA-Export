0x47FB10: mov     ecx, [esp+arg_0]
0x47FB14: sub     esp, 8
0x47FB17: test    ecx, ecx
0x47FB19: push    esi
0x47FB1A: jz      short loc_47FB31
0x47FB1C: push    offset dword_BA7B80
0x47FB21: lea     eax, [esp+10h+var_8]
0x47FB25: push    eax
0x47FB26: call    sub_47F990
0x47FB2B: mov     esi, [eax]
0x47FB2D: test    esi, esi
0x47FB2F: jnz     short loc_47FB38
0x47FB31: xor     eax, eax
0x47FB33: pop     esi
0x47FB34: add     esp, 8
0x47FB37: retn
0x47FB38: mov     edx, [esi]
0x47FB3A: mov     eax, [edx+4]
0x47FB3D: mov     ecx, esi
0x47FB3F: call    eax
0x47FB41: test    eax, eax
0x47FB43: jz      short loc_47FB53
0x47FB45: cmp     eax, offset dword_BA7D2C
0x47FB4A: jz      short loc_47FB60
0x47FB4C: mov     eax, [eax+4]
0x47FB4F: test    eax, eax
0x47FB51: jnz     short loc_47FB45
0x47FB53: xor     al, al
0x47FB55: neg     al
0x47FB57: sbb     eax, eax
0x47FB59: and     eax, esi
0x47FB5B: pop     esi
0x47FB5C: add     esp, 8
0x47FB5F: retn
0x47FB60: mov     al, 1
0x47FB62: neg     al
0x47FB64: sbb     eax, eax
0x47FB66: and     eax, esi
0x47FB68: pop     esi
0x47FB69: add     esp, 8
0x47FB6C: retn
