0x4FBF00: push    ebx
0x4FBF01: mov     ebx, [esp+4+arg_4]
0x4FBF05: push    esi
0x4FBF06: mov     esi, [esp+8+a3]
0x4FBF0A: push    edi
0x4FBF0B: push    ebx
0x4FBF0C: mov     edi, ecx
0x4FBF0E: mov     ecx, [esp+10h+arg_0]
0x4FBF12: push    esi
0x4FBF13: push    edi
0x4FBF14: call    sub_500280
0x4FBF19: test    al, al
0x4FBF1B: jz      short loc_4FBF4F
0x4FBF1D: cmp     dword ptr [edi+20h], 0
0x4FBF21: jz      short loc_4FBF4F
0x4FBF23: cmp     ebx, 1
0x4FBF26: jnz     short loc_4FBF2E
0x4FBF28: mov     ds:0B361ACh, bl
0x4FBF2E: xor     eax, eax
0x4FBF30: test    esi, esi
0x4FBF32: jz      short loc_4FBF3B
0x4FBF34: mov     ecx, esi; this
0x4FBF36: call    sub_4D7250
0x4FBF3B: push    1; ArgList
0x4FBF3D: push    0; int
0x4FBF3F: push    eax; int
0x4FBF40: push    esi; int
0x4FBF41: mov     ecx, edi; int
0x4FBF43: call    Script_Run
0x4FBF48: mov     byte ptr ds:0B361ACh, 0
0x4FBF4F: pop     edi
0x4FBF50: pop     esi
0x4FBF51: pop     ebx
0x4FBF52: retn    0Ch
